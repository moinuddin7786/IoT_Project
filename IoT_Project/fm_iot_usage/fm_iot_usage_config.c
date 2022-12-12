/* continuus file information --- %full_filespec: fm_iot_usage_config.c~7.1.3:csrc:1 % */
/*******************************************************************
 *
 *  @(#) %full_filespec: fm_iot_usage_config.c~7.1.3:csrc:1 %
 *
 *      Copyright (c) 1999 - 2006 Oracle. All rights reserved.
 *
 *      This material is the confidential property of Oracle Corporation
 *      or its subsidiaries or licensors and may be used, reproduced, stored
 *      or transmitted only in accordance with a valid Oracle license or
 *      sublicense agreement.
 *
 *******************************************************************/

#ifndef lint
static  char    Sccs_id[] = "@(#)%Portal Version: fm_iot_usage_config.c:ServerIDCVelocityInt:2:2006-Sep-06 16:41:23 %";
#endif

#include <stdio.h>	/* for FILE * in pcm.h */
#include "ops/rate.h"
#include "pcm.h"
#include "cm_fm.h"
#include "custom_fields.h"

#ifdef MSDOS
__declspec(dllexport) void * fm_iot_usage_config_func();
#endif

/*******************************************************************
 *******************************************************************/
struct cm_fm_config fm_iot_usage_config[] = {
	/* opcode as a u_int, function name (as a string) */
	{ ST_OP_IOT_USAGE,		"op_iot_usage" },
	{ 0,	(char *)0 }
};

#ifdef MSDOS
void *
fm_iot_usage_config_func()
{
  return ((void *) (fm_iot_usage_config));
}
#endif

