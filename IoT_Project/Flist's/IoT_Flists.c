================ Customer Acc as Parent ==============

0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 1612636 0
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_US"
0 PIN_FLD_CODE            STR [0] "3b2c1c5e-fed7-4ccc-a876-dcf402cf1f01"
0 PIN_FLD_PAYINFO       ARRAY [1] allocated 20, used 4
1     PIN_FLD_NAME            STR [0] "Invoice"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2         PIN_FLD_INV_INFO      ARRAY [0] allocated 20, used 10
3             PIN_FLD_DELIVERY_PREFER   ENUM [0] 0
3             PIN_FLD_NAME            STR [0] "Customer_Account Structure"
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
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_MIDDLE_NAME     STR [0] "test"
1     PIN_FLD_FIRST_NAME      STR [0] "Sub_Customer_Acc"
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
1     PIN_FLD_ACCOUNT_NO      STR [0] "Customer_Account_02"
1     PIN_FLD_ACCESS_CODE2    STR [0] ""
1     PIN_FLD_ACCESS_CODE1    STR [0] "access_code1"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 1628759 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 5
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PAY_TYPE       ENUM [0] 10001
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iotsubs -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_ACCOUNT_TYPE_FLD   STR [0]"Customer Account"


================ Reseller Acc INV paytype ==========

0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 1612636 0
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_US"
0 PIN_FLD_CODE            STR [0] "3b2c1c5e-fed7-4ccc-a876-dcf402cf1f01"
0 PIN_FLD_PAYINFO       ARRAY [1] allocated 20, used 4
1     PIN_FLD_NAME            STR [0] "Invoice"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2         PIN_FLD_INV_INFO      ARRAY [0] allocated 20, used 10
3             PIN_FLD_DELIVERY_PREFER   ENUM [0] 0
3             PIN_FLD_NAME            STR [0] "Reseller_Account Structure"
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
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_MIDDLE_NAME     STR [0] "test"
1     PIN_FLD_FIRST_NAME      STR [0] "Reseller_Acc"
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
1     PIN_FLD_ACCOUNT_NO      STR [0] "Reseller_Account_01"
1     PIN_FLD_ACCESS_CODE2    STR [0] ""
1     PIN_FLD_ACCESS_CODE1    STR [0] "access_code1"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 1628759 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 5
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PAY_TYPE       ENUM [0] 10001
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iotsubs -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_ACCOUNT_TYPE_FLD   STR [0]"Reseller Account"



================ Customer Acc as Child of Reseller ==============

0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 540297 0
0 PIN_FLD_CODE            STR [0] "3b2c1c5e-fed7-4ccc-a876-dcf402cf1f01"
0 PIN_FLD_WRITE_ACCESS    STR [0] "S"
0 PIN_FLD_NAMEINFO      ARRAY [1] allocated 20, used 11
1     PIN_FLD_LAST_NAME       STR [0] "acc"
1     PIN_FLD_FIRST_NAME      STR [0] "Cus"
1     PIN_FLD_SALUTATION      STR [0] "MS"
1     PIN_FLD_CONTACT_TYPE    STR [0] "Account holder"
1     PIN_FLD_PHONES        ARRAY [1] allocated 20, used 2
2         PIN_FLD_PHONE           STR [0] "7857857144"
2         PIN_FLD_TYPE           ENUM [0] 1
1     PIN_FLD_EMAIL_ADDR      STR [0] "af@gmail.com"
1     PIN_FLD_COUNTRY         STR [0] "india"
1     PIN_FLD_ZIP             STR [0] "WC1H 9LG"
1     PIN_FLD_STATE           STR [0] "ts"
1     PIN_FLD_CITY            STR [0] "hyd"
1     PIN_FLD_ADDRESS         STR [0] "hyd"
0 PIN_FLD_ACCTINFO      ARRAY [0] allocated 20, used 4
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_ACCOUNT_NO      STR [0] "Account_structure_ch_02"
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 532587 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
1     PIN_FLD_BUSINESS_TYPE   ENUM [0] 1
0 PIN_FLD_FLAGS           INT [0] 0
0 PIN_FLD_PAYINFO       ARRAY [0] allocated 20, used 2
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo/subord -1 0
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
0 PIN_FLD_BAL_INFO      ARRAY [0] allocated 20, used 3
1     PIN_FLD_NAME            STR [0] "Balance Group<Account>"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /balance_group -1 0
1     PIN_FLD_BILLINFO      ARRAY [0]     NULL array ptr
0 PIN_FLD_GROUP_INFO   SUBSTRUCT [0] allocated 20, used 1
1     PIN_FLD_PARENT         POID [0] 0.0.0.1 /account 662859 7
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 7
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_PAYINFO       ARRAY [0]     NULL array ptr
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PARENT_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 663371 4
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
1     PIN_FLD_AR_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 663371 3
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_AU"
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iot -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_FLD_ACCOUNT_TYPE   STR [0] "Customer Account"



============== SIM (TARIFF) ACC Using IMSI (AR_BILLINFO = Reseller, PARENT_BILLINFO = Customer Acc) ============
0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 519396 0
0 PIN_FLD_CODE            STR [0] "5b7f46b4-9fd6-4772-8572-7c5f8c4a846d"
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_AU"
0 PIN_FLD_WRITE_ACCESS    STR [0] "S"
0 PIN_FLD_NAMEINFO      ARRAY [1] allocated 20, used 11
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_FIRST_NAME      STR [0] "Tariff"
1     PIN_FLD_SALUTATION      STR [0] "MR"
1     PIN_FLD_CONTACT_TYPE    STR [0] "Account holder"
1     PIN_FLD_EMAIL_ADDR      STR [0] "mo@gmail.com"
1     PIN_FLD_COUNTRY         STR [0] "india"
1     PIN_FLD_ZIP             STR [0] "WC1H 9LG"
1     PIN_FLD_STATE           STR [0] "ts"
1     PIN_FLD_CITY            STR [0] "hyd"
1     PIN_FLD_ADDRESS         STR [0] "hyd"
0 PIN_FLD_SERVICES                 ARRAY [0] allocated 10, used 10
1     PIN_FLD_PASSWD_CLEAR           STR [0] "XXXX"
1     PIN_FLD_DEAL_OBJ              POID [0] 0.0.0.0  0 0
1     PIN_FLD_LOGIN                  STR [0] "030002000000074"
1     PIN_FLD_SERVICE_ID             STR [0] "/service/iot/subscription"
1     PIN_FLD_SUBSCRIPTION_INDEX     INT [0] 0
1     PIN_FLD_BAL_INFO_INDEX         INT [0] 0
1     PIN_FLD_DEALS                ARRAY [0] allocated 2, used 2
2         PIN_FLD_DEAL_OBJ          POID [0] 0.0.0.1 /deal 564060 0
2         PIN_FLD_TYPE              ENUM [0] 1
1     PIN_FLD_BAL_INFO             ARRAY [0] NULL
1     PIN_FLD_SERVICE_OBJ           POID [0] 0.0.0.1 /service/iot/subscription -1 0
1     PIN_FLD_ALIAS_LIST       ARRAY [1] allocated 20, used 2
2       PIN_FLD_NAME       STR   [0]  "030002000000074"
0 PIN_FLD_ACCTINFO      ARRAY [0] allocated 20, used 4
1     PIN_FLD_ACCOUNT_NO      STR [0] "Account_structure_ch_01"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
1     PIN_FLD_BUSINESS_TYPE   ENUM [0] 1
0 PIN_FLD_FLAGS           INT [0] 0
0 PIN_FLD_PAYINFO       ARRAY [0] allocated 20, used 2
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo/subord -1 0
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
0 PIN_FLD_BAL_INFO      ARRAY [0] allocated 20, used 3
1     PIN_FLD_NAME            STR [0] "Balance Group<Account>"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /balance_group -1 0
1     PIN_FLD_BILLINFO      ARRAY [0]     NULL array ptr
0 PIN_FLD_GROUP_INFO   SUBSTRUCT [0] allocated 20, used 1
1     PIN_FLD_PARENT         POID [0] 0.0.0.1 /account 670842 7
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 7
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_PAYINFO       ARRAY [0]     NULL array ptr
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PARENT_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 671354 4
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
1     PIN_FLD_AR_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 671354 3
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iot -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_FLD_ACCOUNT_TYPE   STR [0] "Tariff Account"



================ Customer Group ==============

0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 1612636 0
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_US"
0 PIN_FLD_CODE            STR [0] "3b2c1c5e-fed7-4ccc-a876-dcf402cf1f01"
0 PIN_FLD_PAYINFO       ARRAY [1] allocated 20, used 4
1     PIN_FLD_NAME            STR [0] "Invoice"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2         PIN_FLD_INV_INFO      ARRAY [0] allocated 20, used 10
3             PIN_FLD_DELIVERY_PREFER   ENUM [0] 0
3             PIN_FLD_NAME            STR [0] "Customer_Account Structure"
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
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_MIDDLE_NAME     STR [0] "test"
1     PIN_FLD_FIRST_NAME      STR [0] "Customer_Grp"
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
1     PIN_FLD_ACCOUNT_NO      STR [0] "Customer_Grp_01"
1     PIN_FLD_ACCESS_CODE2    STR [0] ""
1     PIN_FLD_ACCESS_CODE1    STR [0] "access_code1"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 1628759 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 5
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PAY_TYPE       ENUM [0] 10001
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iotsubs -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_ACCOUNT_TYPE_FLD   STR [0]"Customer Group Account"


============= sub-cx paying with 10007 =========

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
3             PIN_FLD_NAME            STR [0] "TEST Structure"
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
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_MIDDLE_NAME     STR [0] "test"
1     PIN_FLD_FIRST_NAME      STR [0] "Sub-Customer"
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
1     PIN_FLD_ACCOUNT_NO      STR [0] "Account_structure_03_ch_03"
1     PIN_FLD_ACCESS_CODE2    STR [0] ""
1     PIN_FLD_ACCESS_CODE1    STR [0] "access_code1"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 532587 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
0 PIN_FLD_GROUP_INFO   SUBSTRUCT [0] allocated 20, used 1
1     PIN_FLD_PARENT         POID [0] 0.0.0.1 /account 668392 7
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
3         ST_FLD_ACCOUNT_TYPE   STR [0] "Sub-Customer Account"


============== sub-cx non paying  =========
0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 540297 0
0 PIN_FLD_CODE            STR [0] "3b2c1c5e-fed7-4ccc-a876-dcf402cf1f01"
0 PIN_FLD_WRITE_ACCESS    STR [0] "S"
0 PIN_FLD_NAMEINFO      ARRAY [1] allocated 20, used 11
1     PIN_FLD_LAST_NAME       STR [0] "acc"
1     PIN_FLD_FIRST_NAME      STR [0] "Sub-Cus"
1     PIN_FLD_SALUTATION      STR [0] "MS"
1     PIN_FLD_CONTACT_TYPE    STR [0] "Account holder"
1     PIN_FLD_PHONES        ARRAY [1] allocated 20, used 2
2         PIN_FLD_PHONE           STR [0] "7857857144"
2         PIN_FLD_TYPE           ENUM [0] 1
1     PIN_FLD_EMAIL_ADDR      STR [0] "mo@gmail.com"
1     PIN_FLD_COUNTRY         STR [0] "india"
1     PIN_FLD_ZIP             STR [0] "WC1H 9LG"
1     PIN_FLD_STATE           STR [0] "ts"
1     PIN_FLD_CITY            STR [0] "hyd"
1     PIN_FLD_ADDRESS         STR [0] "hyd"
0 PIN_FLD_ACCTINFO      ARRAY [0] allocated 20, used 4
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_ACCOUNT_NO      STR [0] "Account_structure_3_ch_01"
1     PIN_FLD_DEAL_OBJ       POID [0] 0.0.0.1 /deal 532587 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
1     PIN_FLD_BUSINESS_TYPE   ENUM [0] 1
0 PIN_FLD_FLAGS           INT [0] 0
0 PIN_FLD_PAYINFO       ARRAY [0] allocated 20, used 2
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo/subord -1 0
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
0 PIN_FLD_BAL_INFO      ARRAY [0] allocated 20, used 3
1     PIN_FLD_NAME            STR [0] "Balance Group<Account>"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /balance_group -1 0
1     PIN_FLD_BILLINFO      ARRAY [0]     NULL array ptr
0 PIN_FLD_GROUP_INFO   SUBSTRUCT [0] allocated 20, used 1
1     PIN_FLD_PARENT         POID [0] 0.0.0.1 /account 668392 7
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 7
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_PAYINFO       ARRAY [0]     NULL array ptr
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PARENT_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 668136 4
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
1     PIN_FLD_AR_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 668136 3
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_AU"
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iot -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_FLD_ACCOUNT_TYPE   STR [0] "Sub-Customer Account"


======================================================================================
# Tariff child of sub-cx non paying (AR_BILLINFO = Cus_Grp, PARENT_BILLINFO = Sub-Cust) #
======================================================================================


0 PIN_FLD_POID           POID [0] 0.0.0.1 /plan 519396 0
0 PIN_FLD_CODE            STR [0] "5b7f46b4-9fd6-4772-8572-7c5f8c4a846d"
0 PIN_FLD_LOCALES       ARRAY [1] allocated 20, used 1
1     PIN_FLD_LOCALE          STR [0] "en_AU"
0 PIN_FLD_WRITE_ACCESS    STR [0] "S"
0 PIN_FLD_NAMEINFO      ARRAY [1] allocated 20, used 11
1     PIN_FLD_LAST_NAME       STR [0] "Account"
1     PIN_FLD_FIRST_NAME      STR [0] "Tariff"
1     PIN_FLD_SALUTATION      STR [0] "MS"
1     PIN_FLD_CONTACT_TYPE    STR [0] "Account holder"
1     PIN_FLD_EMAIL_ADDR      STR [0] "af@gmail.com"
1     PIN_FLD_COUNTRY         STR [0] "india"
1     PIN_FLD_ZIP             STR [0] "WC1H 9LG"
1     PIN_FLD_STATE           STR [0] "ts"
1     PIN_FLD_CITY            STR [0] "hyd"
1     PIN_FLD_ADDRESS         STR [0] "hyd"
0 PIN_FLD_SERVICES                 ARRAY [0] allocated 10, used 10
1     PIN_FLD_PASSWD_CLEAR           STR [0] "XXXX"
1     PIN_FLD_DEAL_OBJ              POID [0] 0.0.0.0  0 0
1     PIN_FLD_LOGIN                  STR [0] "030002000000077"
1     PIN_FLD_SERVICE_ID             STR [0] "/service/iot/subscription"
1     PIN_FLD_SUBSCRIPTION_INDEX     INT [0] 0
1     PIN_FLD_BAL_INFO_INDEX         INT [0] 0
1     PIN_FLD_DEALS                ARRAY [0] allocated 2, used 2
2         PIN_FLD_DEAL_OBJ          POID [0] 0.0.0.1 /deal 564060 0
2         PIN_FLD_TYPE              ENUM [0] 1
1     PIN_FLD_BAL_INFO             ARRAY [0] NULL
1     PIN_FLD_SERVICE_OBJ           POID [0] 0.0.0.1 /service/iot/subscription -1 0
1     PIN_FLD_ALIAS_LIST       ARRAY [1] allocated 20, used 2
2       PIN_FLD_NAME       STR   [0]  "030002000000077"
0 PIN_FLD_ACCTINFO      ARRAY [0] allocated 20, used 4
1     PIN_FLD_ACCOUNT_NO      STR [0] "Tariff_07"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /account -1 0
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_CURRENCY        INT [0] 840
1     PIN_FLD_BUSINESS_TYPE   ENUM [0] 1
0 PIN_FLD_FLAGS           INT [0] 0
0 PIN_FLD_PAYINFO       ARRAY [0] allocated 20, used 2
1     PIN_FLD_POID           POID [0] 0.0.0.1 /payinfo/subord -1 0
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
0 PIN_FLD_BAL_INFO      ARRAY [0] allocated 20, used 3
1     PIN_FLD_NAME            STR [0] "Balance Group<Account>"
1     PIN_FLD_POID           POID [0] 0.0.0.1 /balance_group -1 0
1     PIN_FLD_BILLINFO      ARRAY [0]     NULL array ptr
0 PIN_FLD_GROUP_INFO   SUBSTRUCT [0] allocated 20, used 1
1     PIN_FLD_PARENT         POID [0] 0.0.0.1 /account 668857 7
0 PIN_FLD_BILLINFO      ARRAY [0] allocated 20, used 7
1     PIN_FLD_POID           POID [0] 0.0.0.1 /billinfo -1 0
1     PIN_FLD_BILLINFO_ID     STR [0] "Bill Unit(1)"
1     PIN_FLD_PAYINFO       ARRAY [0]     NULL array ptr
1     PIN_FLD_BAL_INFO      ARRAY [0]     NULL array ptr
1     PIN_FLD_PARENT_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 669369 4
1     PIN_FLD_PAY_TYPE       ENUM [0] 10007
1     PIN_FLD_AR_BILLINFO_OBJ   POID [0] 0.0.0.1 /billinfo 668136 3
0 PIN_FLD_PROFILES              ARRAY [0] allocated 20, used 4
1     PIN_FLD_PROFILE_OBJ           POID [0] 0.0.0.1 /profile/iot -1 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 PIN_FLD_PROFILE_INFO          SUBSTRUCT [0] allocated 20, used 4
3         ST_FLD_ACCOUNT_TYPE   STR [0] "Tariff Account"



=========================

ACT_USAGE

0 PIN_FLD_POID           POID [0] 0.0.0.1 /account 537129 0
0 PIN_FLD_EVENT        SUBSTRUCT [0] allocated 20, used 9
1     PIN_FLD_POID           POID [0] 0.0.0.1 /event/session/iot -1 0
1     PIN_FLD_ACCOUNT_OBJ    POID [0] 0.0.0.1 /account 537129 0
1     PIN_FLD_PROGRAM_NAME    STR [0] "Session event"
1     PIN_FLD_DESCR           STR [0] "Any Description"
1     PIN_FLD_START_T      TSTAMP [0] (1677744002)
1     PIN_FLD_END_T        TSTAMP [0] (1677744002)
1     PIN_FLD_NAME            STR [0] "Custom session"
1     PIN_FLD_SERVICE_OBJ    POID [0] 0.0.0.1 /service/iot/subscription 539817 0
1     PIN_FLD_INHERITED_INFO SUBSTRUCT [0] allocated 20, used 1
2 	  PIN_FLD_IMSI       	STR [0] "030002000000048"
2	  PIN_FLD_MSISDN	 	STR [0] ""
2	  PIN_FLD_BYTES_IN		INT [0] 1024
2	  PIN_FLD_BYTES_OUT		INT [0] 1024
0 PIN_FLD_PRODUCTS      ARRAY [0] allocated 20, used 4
1     PIN_FLD_ACCOUNT_OBJ    POID [0] 0.0.0.1 /account 537129 0
1     PIN_FLD_PURCHASE_START_T TSTAMP [0] (1677744002)
1     PIN_FLD_PRODUCT_OBJ    POID [0] 0.0.0.1 /product 559679 0
1     PIN_FLD_QUANTITY     DECIMAL [0] 1024
0 PIN_FLD_CANDIDATE_RUMS  ARRAY [0] allocated 20, used 3
1     PIN_FLD_RUM_NAME        STR [0] "2"
1     PIN_FLD_UNIT           ENUM [0] 0
1     PIN_FLD_QUANTITY     DECIMAL [0] 1024