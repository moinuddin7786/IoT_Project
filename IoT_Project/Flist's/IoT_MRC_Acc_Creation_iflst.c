=======================================
#IoT MRC Account creation input flist #
=======================================

0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 540297 0
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_US"
0 PIN_FLD_CODE            STR [0] "3b2c1c5e-fed7-4ccc-a876-dcf402cf1f01"
0 PIN_FLD_PAYINFO       ARRAY [1] allocated 20, used 4
1     PIN_FLD_NAME            STR [0] "Invoice"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2         PIN_FLD_INV_INFO      ARRAY [0] allocated 20, used 10
3             PIN_FLD_DELIVERY_PREFER   ENUM [0] 0
3             PIN_FLD_NAME            STR [0] "Customer Account Structure"
3             PIN_FLD_INV_TERMS      ENUM [0] 0
3             PIN_FLD_DELIVERY_DESCR    STR [0] "ed@oracle.com"
3             PIN_FLD_EMAIL_ADDR      STR [0] "ed@oracle.com"
3             PIN_FLD_COUNTRY         STR [0] "USA"
3             PIN_FLD_ZIP             STR [0] "12345"
3             PIN_FLD_STATE           STR [0] "NC"
3             PIN_FLD_CITY            STR [0] "Raleigh"
3             PIN_FLD_ADDRESS         STR [0] "123 Main"
1     PIN_FLD_PAY_TYPE       ENUM [0] 10001
0 PIN_FLD_WRITE_ACCESS    STR [0] "S"
0 PIN_FLD_READ_ACCESS     STR [0] "B"
0 PIN_FLD_NAME            STR [0] "Wireless Basic Package"
0 PIN_FLD_FLAGS           INT [0] 0
0 PIN_FLD_NAMEINFO      ARRAY [1] allocated 20, used 10
0 PIN_FLD_NAMEINFO      ARRAY [1] allocated 20, used 10
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_MIDDLE_NAME     STR [0] "test"
1     PIN_FLD_FIRST_NAME      STR [0] "Customer"
1     PIN_FLD_EMAIL_ADDR      STR [0] "ed@oracle.com"
1     PIN_FLD_COUNTRY         STR [0] "USA"
1     PIN_FLD_ZIP             STR [0] "12345"
1     PIN_FLD_STATE           STR [0] "NC"
1     PIN_FLD_CITY            STR [0] "Raleigh"
1     PIN_FLD_ADDRESS         STR [0] "123 Main"
1     PIN_FLD_COMPANY         STR [0] "Oracle"
0 PIN_FLD_MOD_T        TSTAMP [0] (1388722147) Thu Jan  2 20:09:07 2014
0 PIN_FLD_BAL_INFO      ARRAY [0] allocated 20, used 7
1     PIN_FLD_NAME            STR [0] "Balance Group<Account>"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /balance_group -1 0
1     PIN_FLD_LIMIT         ARRAY [840] allocated 20, used 4
2         PIN_FLD_CREDIT_LIMIT DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS_FIXED    STR [0] ""
2         PIN_FLD_CREDIT_FLOOR DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS    INT [0] 0
1     PIN_FLD_LIMIT         ARRAY [900007] allocated 20, used 4
2         PIN_FLD_CREDIT_LIMIT DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS_FIXED    STR [0] ""
2         PIN_FLD_CREDIT_FLOOR DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS    INT [0] 0
1     PIN_FLD_LIMIT         ARRAY [1000001] allocated 20, used 4
2         PIN_FLD_CREDIT_LIMIT DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS_FIXED    STR [0] ""
2         PIN_FLD_CREDIT_FLOOR DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS    INT [0] 0
1     PIN_FLD_LIMIT         ARRAY [1000011] allocated 20, used 4
2         PIN_FLD_CREDIT_LIMIT DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS_FIXED    STR [0] ""
2         PIN_FLD_CREDIT_FLOOR DECIMAL [0] NULL pin_decimal_t ptr
2         PIN_FLD_CREDIT_THRESHOLDS    INT [0] 0
1     PIN_FLD_BILLINFO      ARRAY [0]     NULL array ptr
0 PIN_FLD_CREATED_T    TSTAMP [0] (1388722147) Thu Jan  2 20:09:07 2014
0 PIN_FLD_DESCR           STR [0] "Wireless Basic Package"
0 PIN_FLD_ACCTINFO      ARRAY [0] allocated 20, used 7
1     PIN_FLD_ACCOUNT_NO      STR [0] "Cust_MRC_20"
1     PIN_FLD_ACCESS_CODE2    STR [0] ""
1     PIN_FLD_ACCESS_CODE1    STR [0] "access_code1"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 532587 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 5
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PAY_TYPE       ENUM [0] 10001
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iot -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_FLD_ACCOUNT_TYPE   STR [0] "Customer Account"