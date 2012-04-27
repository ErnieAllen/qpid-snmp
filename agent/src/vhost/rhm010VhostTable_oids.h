/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef RHM010VHOSTTABLE_OIDS_H
#define RHM010VHOSTTABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table rhm010VhostTable 
     */
#define RHM010VHOSTTABLE_OID              1,3,6,1,4,1,2312,5672,1,1,5,1


#define COLUMN_RHM010VHOSTBROKERREF         1
#define COLUMN_RHM010VHOSTBROKERREF_FLAG    (0x1 << 0)

#define COLUMN_RHM010VHOSTNAME         2
#define COLUMN_RHM010VHOSTNAME_FLAG    (0x1 << 1)

#define COLUMN_RHM010VHOSTFEDERATIONTAG         3

#define COLUMN_RHM010VHOSTINTERNALINDEX         4


#define RHM010VHOSTTABLE_MIN_COL   COLUMN_RHM010VHOSTBROKERREF
#define RHM010VHOSTTABLE_MAX_COL   COLUMN_RHM010VHOSTFEDERATIONTAG


    /*
     * TODO:405:r: Review RHM010VHOSTTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define RHM010VHOSTTABLE_SETTABLE_COLS (COLUMN_RHM010VHOSTBROKERREF_FLAG | COLUMN_RHM010VHOSTNAME_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* RHM010VHOSTTABLE_OIDS_H */
