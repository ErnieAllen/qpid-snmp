/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef brokerBRIDGETABLE_OIDS_H
#define brokerBRIDGETABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table brokerBridgeTable 
     */
#define brokerBRIDGETABLE_OID              1,3,6,1,4,1,18060,5672,1,12,1


#define COLUMN_brokerBRIDGELINKREF         1
#define COLUMN_brokerBRIDGELINKREF_FLAG    (0x1 << 0)

#define COLUMN_brokerBRIDGECHANNELID         2
#define COLUMN_brokerBRIDGECHANNELID_FLAG    (0x1 << 1)

#define COLUMN_brokerBRIDGEDURABLE         3
#define COLUMN_brokerBRIDGEDURABLE_FLAG    (0x1 << 2)

#define COLUMN_brokerBRIDGESRC         4
#define COLUMN_brokerBRIDGESRC_FLAG    (0x1 << 3)

#define COLUMN_brokerBRIDGEDEST         5
#define COLUMN_brokerBRIDGEDEST_FLAG    (0x1 << 4)

#define COLUMN_brokerBRIDGEKEY         6
#define COLUMN_brokerBRIDGEKEY_FLAG    (0x1 << 5)

#define COLUMN_brokerBRIDGESRCISQUEUE         7
#define COLUMN_brokerBRIDGESRCISQUEUE_FLAG    (0x1 << 6)

#define COLUMN_brokerBRIDGESRCISLOCAL         8
#define COLUMN_brokerBRIDGESRCISLOCAL_FLAG    (0x1 << 7)

#define COLUMN_brokerBRIDGETAG         9
#define COLUMN_brokerBRIDGETAG_FLAG    (0x1 << 8)

#define COLUMN_brokerBRIDGEEXCLUDES         10
#define COLUMN_brokerBRIDGEEXCLUDES_FLAG    (0x1 << 9)

#define COLUMN_brokerBRIDGEDYNAMIC         11
#define COLUMN_brokerBRIDGEDYNAMIC_FLAG    (0x1 << 10)

#define COLUMN_brokerBRIDGESYNC         12
#define COLUMN_brokerBRIDGESYNC_FLAG    (0x1 << 11)

#define COLUMN_brokerBRIDGEINTERNALINDEX         13


#define brokerBRIDGETABLE_MIN_COL   COLUMN_brokerBRIDGELINKREF
#define brokerBRIDGETABLE_MAX_COL   COLUMN_brokerBRIDGESYNC


    /*
     * TODO:405:r: Review brokerBRIDGETABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define brokerBRIDGETABLE_SETTABLE_COLS (COLUMN_brokerBRIDGELINKREF_FLAG | COLUMN_brokerBRIDGECHANNELID_FLAG | COLUMN_brokerBRIDGEDURABLE_FLAG | COLUMN_brokerBRIDGESRC_FLAG | COLUMN_brokerBRIDGEDEST_FLAG | COLUMN_brokerBRIDGEKEY_FLAG | COLUMN_brokerBRIDGESRCISQUEUE_FLAG | COLUMN_brokerBRIDGESRCISLOCAL_FLAG | COLUMN_brokerBRIDGETAG_FLAG | COLUMN_brokerBRIDGEEXCLUDES_FLAG | COLUMN_brokerBRIDGEDYNAMIC_FLAG | COLUMN_brokerBRIDGESYNC_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* brokerBRIDGETABLE_OIDS_H */
