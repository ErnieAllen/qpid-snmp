/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef brokerBINDINGTABLE_OIDS_H
#define brokerBINDINGTABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table brokerBindingTable 
     */
#define brokerBINDINGTABLE_OID              1,3,6,1,4,1,18060,5672,1,8,1


#define COLUMN_brokerBINDINGEXCHANGEREF         1
#define COLUMN_brokerBINDINGEXCHANGEREF_FLAG    (0x1 << 0)

#define COLUMN_brokerBINDINGQUEUEREF         2
#define COLUMN_brokerBINDINGQUEUEREF_FLAG    (0x1 << 1)

#define COLUMN_brokerBINDINGBINDINGKEY         3
#define COLUMN_brokerBINDINGBINDINGKEY_FLAG    (0x1 << 2)

#define COLUMN_brokerBINDINGARGUMENTS         4
#define COLUMN_brokerBINDINGARGUMENTS_FLAG    (0x1 << 3)

#define COLUMN_brokerBINDINGORIGIN         5

#define COLUMN_brokerBINDINGMSGMATCHED         6

#define COLUMN_brokerBINDINGINTERNALINDEX         7


#define brokerBINDINGTABLE_MIN_COL   COLUMN_brokerBINDINGEXCHANGEREF
#define brokerBINDINGTABLE_MAX_COL   COLUMN_brokerBINDINGMSGMATCHED


    /*
     * TODO:405:r: Review brokerBINDINGTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define brokerBINDINGTABLE_SETTABLE_COLS (COLUMN_brokerBINDINGEXCHANGEREF_FLAG | COLUMN_brokerBINDINGQUEUEREF_FLAG | COLUMN_brokerBINDINGBINDINGKEY_FLAG | COLUMN_brokerBINDINGARGUMENTS_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* brokerBINDINGTABLE_OIDS_H */
