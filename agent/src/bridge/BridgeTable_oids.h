/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef qpid010BRIDGETABLE_OIDS_H
#define qpid010BRIDGETABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table qpid010BridgeTable 
     */
#define qpid010BRIDGETABLE_OID              1,3,6,1,4,1,18060,15,1,1,12,1


#define COLUMN_qpid010BRIDGELINKREF         1
#define COLUMN_qpid010BRIDGELINKREF_FLAG    (0x1 << 0)

#define COLUMN_qpid010BRIDGECHANNELID         2
#define COLUMN_qpid010BRIDGECHANNELID_FLAG    (0x1 << 1)

#define COLUMN_qpid010BRIDGEDURABLE         3
#define COLUMN_qpid010BRIDGEDURABLE_FLAG    (0x1 << 2)

#define COLUMN_qpid010BRIDGESRC         4
#define COLUMN_qpid010BRIDGESRC_FLAG    (0x1 << 3)

#define COLUMN_qpid010BRIDGEDEST         5
#define COLUMN_qpid010BRIDGEDEST_FLAG    (0x1 << 4)

#define COLUMN_qpid010BRIDGEKEY         6
#define COLUMN_qpid010BRIDGEKEY_FLAG    (0x1 << 5)

#define COLUMN_qpid010BRIDGESRCISQUEUE         7
#define COLUMN_qpid010BRIDGESRCISQUEUE_FLAG    (0x1 << 6)

#define COLUMN_qpid010BRIDGESRCISLOCAL         8
#define COLUMN_qpid010BRIDGESRCISLOCAL_FLAG    (0x1 << 7)

#define COLUMN_qpid010BRIDGETAG         9
#define COLUMN_qpid010BRIDGETAG_FLAG    (0x1 << 8)

#define COLUMN_qpid010BRIDGEEXCLUDES         10
#define COLUMN_qpid010BRIDGEEXCLUDES_FLAG    (0x1 << 9)

#define COLUMN_qpid010BRIDGEDYNAMIC         11
#define COLUMN_qpid010BRIDGEDYNAMIC_FLAG    (0x1 << 10)

#define COLUMN_qpid010BRIDGESYNC         12
#define COLUMN_qpid010BRIDGESYNC_FLAG    (0x1 << 11)

#define COLUMN_qpid010BRIDGEINTERNALINDEX         13


#define qpid010BRIDGETABLE_MIN_COL   COLUMN_qpid010BRIDGELINKREF
#define qpid010BRIDGETABLE_MAX_COL   COLUMN_qpid010BRIDGESYNC


    /*
     * TODO:405:r: Review qpid010BRIDGETABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define qpid010BRIDGETABLE_SETTABLE_COLS (COLUMN_qpid010BRIDGELINKREF_FLAG | COLUMN_qpid010BRIDGECHANNELID_FLAG | COLUMN_qpid010BRIDGEDURABLE_FLAG | COLUMN_qpid010BRIDGESRC_FLAG | COLUMN_qpid010BRIDGEDEST_FLAG | COLUMN_qpid010BRIDGEKEY_FLAG | COLUMN_qpid010BRIDGESRCISQUEUE_FLAG | COLUMN_qpid010BRIDGESRCISLOCAL_FLAG | COLUMN_qpid010BRIDGETAG_FLAG | COLUMN_qpid010BRIDGEEXCLUDES_FLAG | COLUMN_qpid010BRIDGEDYNAMIC_FLAG | COLUMN_qpid010BRIDGESYNC_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* qpid010BRIDGETABLE_OIDS_H */