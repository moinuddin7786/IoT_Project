/*******************************************************************
 *
 *      Copyright (c) 2004 - 2007 Oracle. All rights reserved.
 *
 *      This material is the confidential property of Oracle Corporation
 *      or its subsidiaries or licensors and may be used, reproduced, stored
 *      or transmitted only in accordance with a valid Oracle license or
 *      sublicense agreement.
 *
 *******************************************************************/

#ifndef lint
static  char    Sccs_id[] = "@(#)%Portal Version: fm_rate_pol_event_zonemap.c:IDCmod7.3.1Int:1:2007-Dec-11 11:42:45 %";
#endif

/*******************************************************************
 * Contains the PCM_OP_RATE_POL_EVENT_ZONEMAP operation. 
 * Used for common zoning 
 * From the input flist which is a combination of event flist and zonemap name,
 * this opcode extracts the service type, calling number, called number , 
 * zonemap name. Sends the flist with these parameters to the realtime pipeline and 
 * recieve the pipe line impact category.
 *******************************************************************/

#include <stdio.h> 
#include <string.h> 
 
#include "pcm.h"
#include "ops/rate.h"
#include "cm_fm.h"
#include "pin_errs.h"
#include "pinlog.h"
#include "custom_fields.h"

#define FILE_SOURCE_ID  "fm_iot_usage.c"

/*******************************************************************
 * Routines contained within.
 *******************************************************************/
EXPORT_OP void
op_iot_usage(
        cm_nap_connection_t     *connp,
        u_int32                 opcode,
        u_int32                 flags,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp);

static void
fm_iot_usage(
        pcm_context_t           *ctxp,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp);

static void
fm_st_search_service(
        pcm_context_t           *ctxp,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp);

static void
fm_st_search_product_poid(
        pcm_context_t           *ctxp,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp);

/*******************************************************************
 * Main routine for the ST_OP_ACT_USAGE operation.
 *******************************************************************/
void
op_iot_usage(
        cm_nap_connection_t     *connp,
        u_int32                 opcode,
        u_int32                 flags,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp)
{
        pcm_context_t           *ctxp = connp->dm_ctx;
        
	/*check errors in the error buffer before proceeding*/
        if (PIN_ERR_IS_ERR(ebufp))
        {
                return;
                PIN_ERR_CLEAR_ERR(ebufp);
        }

        /***********************************************************
         * Insanity check.
         ***********************************************************/
        if (opcode != ST_OP_IOT_USAGE) {
                pin_set_err(ebufp, PIN_ERRLOC_FM,
                        PIN_ERRCLASS_SYSTEM_DETERMINATE,
                        PIN_ERR_BAD_OPCODE, 0, 0, opcode);
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                        "op_iot_usage opcode error", ebufp);
                return;
        }

        /***********************************************************
         * Debug: What we got.

	***********************************************************/
        PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                "op_iot_usage input flist", i_flistp);

        /***********************************************************
         * Do the actual op in a sub.
         ***********************************************************/
        fm_iot_usage(ctxp, i_flistp, o_flistpp, ebufp);

        /***********************************************************
         * Error?
         ***********************************************************/
        if (PIN_ERR_IS_ERR(ebufp)) {
         PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                        "op_iot_usage error in the Main Function itself", ebufp);
        }
        else{
                /***************************************************
                 * Debug: What we're sending back.
                 ***************************************************/
                PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                        "op_iot_usage return flist", *o_flistpp);
   }

        return;
}

static void
fm_iot_usage(
        pcm_context_t           *ctxp,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp)
{

        poid_t 		*a_pdp = NULL;
	poid_t          *a1_pdp = NULL;
        int64           db = cm_fm_get_current_db_no(ctxp);
	char            *temp = "select X from /service where F1 = V1 ";
	pin_flist_t     *args_flistp =  NULL;
	pin_flist_t     *results_flistp =  NULL;   
	poid_t		*serviceip_pdp	= NULL;
	poid_t		*event_pdp = NULL;
	poid_t		*prod_pdp = NULL;
	pin_flist_t	*candidate_flistp = NULL;	
	pin_flist_t	*return_flistp = NULL;
	pin_flist_t 	*event_flistp = NULL;
	pin_flist_t 	*product_flistp = NULL;
	pin_flist_t	*usage_iflistp = NULL;
	pin_flist_t	*usage_rflistp = NULL;
	pin_flist_t	*return_prod_flistp = NULL;
	pin_decimal_t   *quantity_val = (pin_decimal_t *)NULL;
	pin_decimal_t   *bytes_out = (pin_decimal_t *)NULL;
	pin_decimal_t   *bytes_in = (pin_decimal_t *)NULL;
	int32		unit_val = 0;
	time_t		now_t = pin_virtual_time(NULL);
	pin_flist_t	*temp_service_flistp = NULL;
	pin_flist_t	*temp_prod_flistp = NULL;		
	pin_flist_t	*read_outflistp = NULL;
	pin_flist_t	*temp_flistp = NULL;
	pin_flist_t     *inherited_info_flistp = NULL;	
	pin_flist_t	*read_inflistp = NULL;
	pin_flist_t 	*usage_flistp = NULL;
	char		*event_type = NULL;
	char		*rum_name = NULL;
	int32           elemid = 0;
	pin_cookie_t    cookie = NULL;
	char		*imsi_no = NULL;
	
	if (PIN_ERR_IS_ERR(ebufp))
			return;
        PIN_ERR_CLEAR_ERR(ebufp);
		
	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
      		"fm_iot_usage Input Flist", i_flistp);

	usage_iflistp = PIN_FLIST_CREATE(ebufp);
			
	a_pdp = PIN_FLIST_FLD_GET(i_flistp, PIN_FLD_ACCOUNT_OBJ, 1, ebufp);
	bytes_in = PIN_FLIST_FLD_GET(i_flistp, PIN_FLD_BYTES_IN, 1, ebufp);
        bytes_out = PIN_FLIST_FLD_GET(i_flistp, PIN_FLD_BYTES_OUT, 1, ebufp);
	imsi_no = PIN_FLIST_FLD_GET(i_flistp, PIN_FLD_IMSI, 1, ebufp);
	quantity_val = PIN_FLIST_FLD_GET(i_flistp, PIN_FLD_QUANTITY, 1, ebufp);
																
	/***    SEARCH SERVICE_IP FUNC  ***/
	fm_st_search_service(ctxp, i_flistp, &return_flistp, ebufp);
		
	if (PIN_ERR_IS_ERR(ebufp)) {
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                         "fm_iot_usage: Error while calling the opcode", ebufp);
       	goto cleanup;
        }

	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                  "fm_iot_usage service return flist", return_flistp);
	
	temp_service_flistp = PIN_FLIST_ELEM_GET(return_flistp, PIN_FLD_RESULTS, 0, 0, ebufp);
	serviceip_pdp =  PIN_FLIST_FLD_GET(temp_service_flistp, PIN_FLD_POID, 1, ebufp);
	
	/***	SEARCH PRODUCT FUNC  ***/
	fm_st_search_product_poid(ctxp, i_flistp, &return_prod_flistp, ebufp);
				
	if (PIN_ERR_IS_ERR(ebufp)) {
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                         "fm_iot_usage: Error while calling the opcode", ebufp);
        goto cleanup;
        }
	
	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                "fm_iot_usage product return flist", return_prod_flistp);

	cookie = NULL;
	elemid = 0;
	while ((temp_flistp = PIN_FLIST_ELEM_GET_NEXT(return_prod_flistp, 
			PIN_FLD_RESULTS, &elemid, 1, &cookie, ebufp)) != (pin_flist_t *)NULL)
	{
	
		prod_pdp = PIN_FLIST_FLD_GET (temp_flistp, PIN_FLD_PRODUCT_OBJ,1,ebufp);
		read_inflistp = PIN_FLIST_CREATE(ebufp);
		PIN_FLIST_FLD_SET(read_inflistp, PIN_FLD_POID, (void *)prod_pdp, ebufp);
														
		PCM_OP(ctxp, PCM_OP_READ_OBJ, 0, read_inflistp, &read_outflistp, ebufp);
			
		if (PIN_ERR_IS_ERR(ebufp)) {
			PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
				"fm_iot_usage: Error while preparing input Flist", ebufp);
		goto cleanup;
		}
						
		PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
			"fm_iot_usage output flist after assign to temp_flistp", read_outflistp);
		usage_flistp = PIN_FLIST_ELEM_GET(read_outflistp, PIN_FLD_USAGE_MAP, 0, 1, ebufp);
		event_type = PIN_FLIST_FLD_GET(usage_flistp, PIN_FLD_EVENT_TYPE, 0, ebufp);
														
		if(event_type != NULL && strcmp(event_type, "/event/session/iot") == 0) 
		{
			rum_name = PIN_FLIST_FLD_GET(usage_flistp, PIN_FLD_RUM_NAME, 0, ebufp);		
			break;
		}					
	}

	event_pdp = PIN_POID_CREATE(db, event_type, -1, ebufp);

	PIN_FLIST_FLD_PUT(usage_iflistp, PIN_FLD_POID, (void *)a_pdp, ebufp);
	event_flistp = PIN_FLIST_SUBSTR_ADD(usage_iflistp, PIN_FLD_EVENT, ebufp); 
	PIN_FLIST_FLD_PUT(event_flistp, PIN_FLD_POID, (void *) event_pdp, ebufp);	

	PIN_FLIST_FLD_PUT(event_flistp, PIN_FLD_ACCOUNT_OBJ, (void *)a_pdp, ebufp);
	PIN_FLIST_FLD_SET(event_flistp, PIN_FLD_PROGRAM_NAME, "Session event", ebufp);
	PIN_FLIST_FLD_SET(event_flistp, PIN_FLD_DESCR, "Any Description", ebufp);
	PIN_FLIST_FLD_SET(event_flistp, PIN_FLD_START_T, (void *)&now_t, ebufp);
	PIN_FLIST_FLD_SET(event_flistp, PIN_FLD_END_T, (void *) &now_t, ebufp);
	PIN_FLIST_FLD_SET(event_flistp, PIN_FLD_NAME, "Custom session", ebufp);
	
	PIN_FLIST_FLD_SET(event_flistp, PIN_FLD_SERVICE_OBJ, (void *)serviceip_pdp, ebufp);
	
        inherited_info_flistp = PIN_FLIST_SUBSTR_ADD(event_flistp, PIN_FLD_INHERITED_INFO, ebufp);
        PIN_FLIST_FLD_SET(inherited_info_flistp, PIN_FLD_MSISDN, (void *)"", ebufp);
        PIN_FLIST_FLD_SET(inherited_info_flistp, PIN_FLD_IMSI, imsi_no, ebufp);
        PIN_FLIST_FLD_SET(inherited_info_flistp, PIN_FLD_BYTES_IN, bytes_in, ebufp);
        PIN_FLIST_FLD_SET(inherited_info_flistp, PIN_FLD_BYTES_OUT, bytes_out, ebufp);

	product_flistp = PIN_FLIST_ELEM_ADD(usage_iflistp, PIN_FLD_PRODUCTS, 0, ebufp);
	PIN_FLIST_FLD_PUT(product_flistp, PIN_FLD_ACCOUNT_OBJ, (void *)a_pdp, ebufp);
	PIN_FLIST_FLD_SET(product_flistp, PIN_FLD_PURCHASE_START_T, (void *)&now_t, ebufp);

	PIN_FLIST_FLD_SET(product_flistp, PIN_FLD_PRODUCT_OBJ, (void *)prod_pdp, ebufp);	 
	
	PIN_FLIST_FLD_SET(product_flistp, PIN_FLD_QUANTITY, (void *) quantity_val, ebufp);
	
	candidate_flistp = PIN_FLIST_ELEM_ADD(usage_iflistp, PIN_FLD_CANDIDATE_RUMS, 1, ebufp);  
	PIN_FLIST_FLD_SET(candidate_flistp, PIN_FLD_RUM_NAME, rum_name, ebufp);
	PIN_FLIST_FLD_SET(candidate_flistp, PIN_FLD_UNIT, &unit_val, ebufp);
	
	PIN_FLIST_FLD_SET(candidate_flistp, PIN_FLD_QUANTITY, (void *) quantity_val, ebufp);

	if (PIN_ERR_IS_ERR(ebufp)) {
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                         "fm_iot_usage: Error while preparing Flist", ebufp);
        goto cleanup;
        }

        PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                "fm_iot_usage input flist", usage_iflistp);
				
	PCM_OP(ctxp, PCM_OP_ACT_USAGE, 0, usage_iflistp, &usage_rflistp, ebufp);

        if (PIN_ERR_IS_ERR(ebufp)) {
                PIN_ERR_LOG_EBUF(PIN_ERR_LEVEL_ERROR,
                         "fm_iot_usage: Error while calling the opcode", ebufp);
        goto cleanup;
        }
		
        PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
                        "usage_iflistp return temp flist", usage_rflistp);

        *o_flistpp = usage_rflistp;

        cleanup:
        /** PIN_FLIST_DESTROY_EX(&usage_iflistp, NULL); **/

        return;
}

static void
fm_st_search_service(
        pcm_context_t           *ctxp,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp)
{

	poid_t 		*a_pdp = NULL;
	poid_t          *s_pdp = NULL;
	pin_flist_t	*s_rflistp = NULL;
	pin_flist_t     *search_iflistp = NULL;
	int64           db = cm_fm_get_current_db_no(ctxp);
	char            *temp = "select X from /service where F1 = V1 ";
	pin_flist_t     *args_flistp =  NULL;
	pin_flist_t     *results_flistp =  NULL;   
	int32           flag = 256;
	poid_t		*service_ip_pdp	= NULL;						
							

	if (PIN_ERR_IS_ERR(ebufp)) {
		return;
	}
	
         PIN_ERR_CLEAR_ERR(ebufp);
										
	search_iflistp = PIN_FLIST_CREATE(ebufp);

	s_pdp = PIN_POID_CREATE(db, "/search", -1, ebufp);
	a_pdp = PIN_FLIST_FLD_GET (i_flistp, PIN_FLD_ACCOUNT_OBJ, 1, ebufp);
	service_ip_pdp = PIN_POID_CREATE(db, "/service/iot/subscription", -1, ebufp);

	PIN_FLIST_FLD_PUT(search_iflistp, PIN_FLD_POID, (void *)s_pdp, ebufp);

	PIN_FLIST_FLD_SET(search_iflistp, PIN_FLD_FLAGS, &flag, ebufp);
						
	PIN_FLIST_FLD_SET(search_iflistp, PIN_FLD_TEMPLATE, temp, ebufp);
											
	args_flistp = PIN_FLIST_ELEM_ADD(search_iflistp, PIN_FLD_ARGS, 1, ebufp);
	PIN_FLIST_FLD_SET(args_flistp, PIN_FLD_ACCOUNT_OBJ, (void *)a_pdp, ebufp);
       									
	results_flistp = PIN_FLIST_ELEM_ADD(search_iflistp, PIN_FLD_RESULTS, PIN_ELEMID_ANY, ebufp);
	PIN_FLIST_FLD_PUT(results_flistp, PIN_FLD_POID, (void *)service_ip_pdp, ebufp);
												
	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
		"fm_st_search_service input flist", search_iflistp);

	PCM_OP(ctxp, PCM_OP_SEARCH, 0, search_iflistp, &s_rflistp, ebufp);
								
	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
		"fm_st_search_service return flist", s_rflistp);
       						
	*o_flistpp = s_rflistp;
			
	PIN_FLIST_DESTROY_EX(&search_iflistp, NULL);
         
      	return;

}

static void
fm_st_search_product_poid(
        pcm_context_t           *ctxp,
        pin_flist_t             *i_flistp,
        pin_flist_t             **o_flistpp,
        pin_errbuf_t            *ebufp)
{	
	poid_t          *s_pdp = NULL;
	pin_flist_t	*s_rflistp = NULL;
	pin_flist_t     *search_iflistp = NULL;
	int64           db = cm_fm_get_current_db_no(ctxp);
	char            *temp = "select X from /purchased_product where F1 = V1 ";
	pin_flist_t     *args_flistp =  NULL;
	pin_flist_t     *result_flistp =  NULL;   
	int32           flag = 256;
	poid_t		*purchased_prod_pdp	= NULL;						
	poid_t		*a_pdp = NULL;	
	pin_flist_t	*temp_flistp = NULL;	
	pin_flist_t  	*usage_flistp = NULL;
	char		*usage = NULL;
	char		*event_session = NULL;

	if (PIN_ERR_IS_ERR(ebufp)) {
		return;
	}
								
    	PIN_ERR_CLEAR_ERR(ebufp);
										
	search_iflistp = PIN_FLIST_CREATE(ebufp);
	s_pdp = PIN_POID_CREATE(db, "/search", -1, ebufp);
	a_pdp = PIN_FLIST_FLD_GET (i_flistp, PIN_FLD_ACCOUNT_OBJ, 1, ebufp);
	purchased_prod_pdp = PIN_POID_CREATE(db, "/product", -1, ebufp);
	
	PIN_FLIST_FLD_PUT(search_iflistp, PIN_FLD_POID, (void *)s_pdp, ebufp);																																					
	PIN_FLIST_FLD_SET(search_iflistp, PIN_FLD_FLAGS, &flag, ebufp);
						
	PIN_FLIST_FLD_SET(search_iflistp, PIN_FLD_TEMPLATE, temp, ebufp);
											
	args_flistp = PIN_FLIST_ELEM_ADD(search_iflistp, PIN_FLD_ARGS, 1, ebufp);
	PIN_FLIST_FLD_SET(args_flistp, PIN_FLD_ACCOUNT_OBJ, (void *)a_pdp, ebufp);
																						
	result_flistp = PIN_FLIST_ELEM_ADD(search_iflistp, PIN_FLD_RESULTS, PIN_ELEMID_ANY, ebufp);
	PIN_FLIST_FLD_PUT(result_flistp, PIN_FLD_PRODUCT_OBJ, (void *)purchased_prod_pdp, ebufp);
												
	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
		"purchased product poid input flist", search_iflistp);

	PCM_OP(ctxp, PCM_OP_SEARCH, 0, search_iflistp, &s_rflistp, ebufp);
								
	PIN_ERR_LOG_FLIST(PIN_ERR_LEVEL_DEBUG,
		"purchased product poid return flist", s_rflistp);
       
	*o_flistpp = s_rflistp;
			
	/* Free memory */
       PIN_FLIST_DESTROY_EX(&search_iflistp, NULL);
         
      	return;
}
