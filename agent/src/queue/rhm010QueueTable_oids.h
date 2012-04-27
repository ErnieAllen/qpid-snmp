/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef RHM010QUEUETABLE_OIDS_H
#define RHM010QUEUETABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table rhm010QueueTable 
     */
#define RHM010QUEUETABLE_OID              1,3,6,1,4,1,2312,5672,1,1,6,1


#define COLUMN_RHM010QUEUEVHOSTREF         1
#define COLUMN_RHM010QUEUEVHOSTREF_FLAG    (0x1 << 0)

#define COLUMN_RHM010QUEUENAME         2
#define COLUMN_RHM010QUEUENAME_FLAG    (0x1 << 1)

#define COLUMN_RHM010QUEUEDURABLE         3
#define COLUMN_RHM010QUEUEDURABLE_FLAG    (0x1 << 2)

#define COLUMN_RHM010QUEUEAUTODELETE         4
#define COLUMN_RHM010QUEUEAUTODELETE_FLAG    (0x1 << 3)

#define COLUMN_RHM010QUEUEEXCLUSIVE         5
#define COLUMN_RHM010QUEUEEXCLUSIVE_FLAG    (0x1 << 4)

#define COLUMN_RHM010QUEUEARGUMENTS         6

#define COLUMN_RHM010QUEUEALTEXCHANGE         7

#define COLUMN_RHM010QUEUEMSGTOTALENQUEUES         8

#define COLUMN_RHM010QUEUEMSGTOTALDEQUEUES         9

#define COLUMN_RHM010QUEUEMSGTXNENQUEUES         10

#define COLUMN_RHM010QUEUEMSGTXNDEQUEUES         11

#define COLUMN_RHM010QUEUEMSGPERSISTENQUEUES         12

#define COLUMN_RHM010QUEUEMSGPERSISTDEQUEUES         13

#define COLUMN_RHM010QUEUEMSGDEPTH         14

#define COLUMN_RHM010QUEUEBYTEDEPTH         15

#define COLUMN_RHM010QUEUEBYTETOTALENQUEUES         16

#define COLUMN_RHM010QUEUEBYTETOTALDEQUEUES         17

#define COLUMN_RHM010QUEUEBYTETXNENQUEUES         18

#define COLUMN_RHM010QUEUEBYTETXNDEQUEUES         19

#define COLUMN_RHM010QUEUEBYTEPERSISTENQUEUES         20

#define COLUMN_RHM010QUEUEBYTEPERSISTDEQUEUES         21

#define COLUMN_RHM010QUEUEMSGFTDENQUEUES         22

#define COLUMN_RHM010QUEUEMSGFTDDEQUEUES         23

#define COLUMN_RHM010QUEUEBYTEFTDENQUEUES         24

#define COLUMN_RHM010QUEUEBYTEFTDDEQUEUES         25

#define COLUMN_RHM010QUEUEMSGFTDDEPTH         26

#define COLUMN_RHM010QUEUEBYTEFTDDEPTH         27

#define COLUMN_RHM010QUEUERELEASES         28

#define COLUMN_RHM010QUEUEACQUIRES         29

#define COLUMN_RHM010QUEUEDISCARDSTTL         30

#define COLUMN_RHM010QUEUEDISCARDSRING         31

#define COLUMN_RHM010QUEUEDISCARDSLVQ         32

#define COLUMN_RHM010QUEUEDISCARDSOVERFLOW         33

#define COLUMN_RHM010QUEUEDISCARDSSUBSCRIBER         34

#define COLUMN_RHM010QUEUEDISCARDSPURGE         35

#define COLUMN_RHM010QUEUEREROUTES         36

#define COLUMN_RHM010QUEUECONSUMERCOUNT         37

#define COLUMN_RHM010QUEUECONSUMERCOUNTHI         38

#define COLUMN_RHM010QUEUECONSUMERCOUNTLOW         39

#define COLUMN_RHM010QUEUEBINDINGCOUNT         40

#define COLUMN_RHM010QUEUEBINDINGCOUNTHI         41

#define COLUMN_RHM010QUEUEBINDINGCOUNTLOW         42

#define COLUMN_RHM010QUEUEUNACKEDMESSAGES         43

#define COLUMN_RHM010QUEUEUNACKEDMESSAGESHI         44

#define COLUMN_RHM010QUEUEUNACKEDMESSAGESLOW         45

#define COLUMN_RHM010QUEUEMESSAGELATENCY         46

#define COLUMN_RHM010QUEUEFLOWSTOPPED         47

#define COLUMN_RHM010QUEUEFLOWSTOPPEDCOUNT         48

#define COLUMN_RHM010QUEUEINTERNALINDEX         49


#define RHM010QUEUETABLE_MIN_COL   COLUMN_RHM010QUEUEVHOSTREF
#define RHM010QUEUETABLE_MAX_COL   COLUMN_RHM010QUEUEFLOWSTOPPEDCOUNT


    /*
     * TODO:405:r: Review RHM010QUEUETABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define RHM010QUEUETABLE_SETTABLE_COLS (COLUMN_RHM010QUEUEVHOSTREF_FLAG | COLUMN_RHM010QUEUENAME_FLAG | COLUMN_RHM010QUEUEDURABLE_FLAG | COLUMN_RHM010QUEUEAUTODELETE_FLAG | COLUMN_RHM010QUEUEEXCLUSIVE_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* RHM010QUEUETABLE_OIDS_H */
