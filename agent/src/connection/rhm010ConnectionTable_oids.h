/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef RHM010CONNECTIONTABLE_OIDS_H
#define RHM010CONNECTIONTABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table rhm010ConnectionTable 
     */
#define RHM010CONNECTIONTABLE_OID              1,3,6,1,4,1,2312,5672,1,1,10,1


#define COLUMN_RHM010CONNECTIONVHOSTREF         1
#define COLUMN_RHM010CONNECTIONVHOSTREF_FLAG    (0x1 << 0)

#define COLUMN_RHM010CONNECTIONADDRESS         2
#define COLUMN_RHM010CONNECTIONADDRESS_FLAG    (0x1 << 1)

#define COLUMN_RHM010CONNECTIONINCOMING         3
#define COLUMN_RHM010CONNECTIONINCOMING_FLAG    (0x1 << 2)

#define COLUMN_RHM010CONNECTIONSYSTEMCONNECTION         4
#define COLUMN_RHM010CONNECTIONSYSTEMCONNECTION_FLAG    (0x1 << 3)

#define COLUMN_RHM010CONNECTIONUSERPROXYAUTH         5

#define COLUMN_RHM010CONNECTIONFEDERATIONLINK         6

#define COLUMN_RHM010CONNECTIONAUTHIDENTITY         7

#define COLUMN_RHM010CONNECTIONREMOTEPROCESSNAME         8

#define COLUMN_RHM010CONNECTIONREMOTEPID         9

#define COLUMN_RHM010CONNECTIONREMOTEPARENTPID         10

#define COLUMN_RHM010CONNECTIONSHADOW         11

#define COLUMN_RHM010CONNECTIONSASLMECHANISM         12

#define COLUMN_RHM010CONNECTIONSASLSSF         13

#define COLUMN_RHM010CONNECTIONCLOSING         14

#define COLUMN_RHM010CONNECTIONFRAMESFROMCLIENT         15

#define COLUMN_RHM010CONNECTIONFRAMESTOCLIENT         16

#define COLUMN_RHM010CONNECTIONBYTESFROMCLIENT         17

#define COLUMN_RHM010CONNECTIONBYTESTOCLIENT         18

#define COLUMN_RHM010CONNECTIONMSGSFROMCLIENT         19

#define COLUMN_RHM010CONNECTIONMSGSTOCLIENT         20

#define COLUMN_RHM010CONNECTIONINTERNALINDEX         21


#define RHM010CONNECTIONTABLE_MIN_COL   COLUMN_RHM010CONNECTIONVHOSTREF
#define RHM010CONNECTIONTABLE_MAX_COL   COLUMN_RHM010CONNECTIONMSGSTOCLIENT


    /*
     * TODO:405:r: Review RHM010CONNECTIONTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define RHM010CONNECTIONTABLE_SETTABLE_COLS (COLUMN_RHM010CONNECTIONVHOSTREF_FLAG | COLUMN_RHM010CONNECTIONADDRESS_FLAG | COLUMN_RHM010CONNECTIONINCOMING_FLAG | COLUMN_RHM010CONNECTIONSYSTEMCONNECTION_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* RHM010CONNECTIONTABLE_OIDS_H */