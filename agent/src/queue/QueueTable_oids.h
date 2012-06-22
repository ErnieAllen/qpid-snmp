/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef qpid010QUEUETABLE_OIDS_H
#define qpid010QUEUETABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table qpid010QueueTable 
     */
#define qpid010QUEUETABLE_OID              1,3,6,1,4,1,18060,15,1,1,6,1


#define COLUMN_qpid010QUEUEVHOSTREF         1
#define COLUMN_qpid010QUEUEVHOSTREF_FLAG    (0x1 << 0)

#define COLUMN_qpid010QUEUENAME         2
#define COLUMN_qpid010QUEUENAME_FLAG    (0x1 << 1)

#define COLUMN_qpid010QUEUEDURABLE         3
#define COLUMN_qpid010QUEUEDURABLE_FLAG    (0x1 << 2)

#define COLUMN_qpid010QUEUEAUTODELETE         4
#define COLUMN_qpid010QUEUEAUTODELETE_FLAG    (0x1 << 3)

#define COLUMN_qpid010QUEUEEXCLUSIVE         5
#define COLUMN_qpid010QUEUEEXCLUSIVE_FLAG    (0x1 << 4)

#define COLUMN_qpid010QUEUEARGUMENTS         6

#define COLUMN_qpid010QUEUEALTEXCHANGE         7

#define COLUMN_qpid010QUEUEMSGTOTALENQUEUES         8

#define COLUMN_qpid010QUEUEMSGTOTALDEQUEUES         9

#define COLUMN_qpid010QUEUEMSGTXNENQUEUES         10

#define COLUMN_qpid010QUEUEMSGTXNDEQUEUES         11

#define COLUMN_qpid010QUEUEMSGPERSISTENQUEUES         12

#define COLUMN_qpid010QUEUEMSGPERSISTDEQUEUES         13

#define COLUMN_qpid010QUEUEMSGDEPTH         14

#define COLUMN_qpid010QUEUEBYTEDEPTH         15

#define COLUMN_qpid010QUEUEBYTETOTALENQUEUES         16

#define COLUMN_qpid010QUEUEBYTETOTALDEQUEUES         17

#define COLUMN_qpid010QUEUEBYTETXNENQUEUES         18

#define COLUMN_qpid010QUEUEBYTETXNDEQUEUES         19

#define COLUMN_qpid010QUEUEBYTEPERSISTENQUEUES         20

#define COLUMN_qpid010QUEUEBYTEPERSISTDEQUEUES         21

#define COLUMN_qpid010QUEUEMSGFTDENQUEUES         22

#define COLUMN_qpid010QUEUEMSGFTDDEQUEUES         23

#define COLUMN_qpid010QUEUEBYTEFTDENQUEUES         24

#define COLUMN_qpid010QUEUEBYTEFTDDEQUEUES         25

#define COLUMN_qpid010QUEUEMSGFTDDEPTH         26

#define COLUMN_qpid010QUEUEBYTEFTDDEPTH         27

#define COLUMN_qpid010QUEUERELEASES         28

#define COLUMN_qpid010QUEUEACQUIRES         29

#define COLUMN_qpid010QUEUEDISCARDSTTL         30

#define COLUMN_qpid010QUEUEDISCARDSRING         31

#define COLUMN_qpid010QUEUEDISCARDSLVQ         32

#define COLUMN_qpid010QUEUEDISCARDSOVERFLOW         33

#define COLUMN_qpid010QUEUEDISCARDSSUBSCRIBER         34

#define COLUMN_qpid010QUEUEDISCARDSPURGE         35

#define COLUMN_qpid010QUEUEREROUTES         36

#define COLUMN_qpid010QUEUECONSUMERCOUNT         37

#define COLUMN_qpid010QUEUECONSUMERCOUNTHI         38

#define COLUMN_qpid010QUEUECONSUMERCOUNTLOW         39

#define COLUMN_qpid010QUEUEBINDINGCOUNT         40

#define COLUMN_qpid010QUEUEBINDINGCOUNTHI         41

#define COLUMN_qpid010QUEUEBINDINGCOUNTLOW         42

#define COLUMN_qpid010QUEUEUNACKEDMESSAGES         43

#define COLUMN_qpid010QUEUEUNACKEDMESSAGESHI         44

#define COLUMN_qpid010QUEUEUNACKEDMESSAGESLOW         45

#define COLUMN_qpid010QUEUEMESSAGELATENCY         46

#define COLUMN_qpid010QUEUEFLOWSTOPPED         47

#define COLUMN_qpid010QUEUEFLOWSTOPPEDCOUNT         48

#define COLUMN_qpid010QUEUEINTERNALINDEX         49


#define qpid010QUEUETABLE_MIN_COL   COLUMN_qpid010QUEUEVHOSTREF
#define qpid010QUEUETABLE_MAX_COL   COLUMN_qpid010QUEUEFLOWSTOPPEDCOUNT


    /*
     * TODO:405:r: Review qpid010QUEUETABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define qpid010QUEUETABLE_SETTABLE_COLS (COLUMN_qpid010QUEUEVHOSTREF_FLAG | COLUMN_qpid010QUEUENAME_FLAG | COLUMN_qpid010QUEUEDURABLE_FLAG | COLUMN_qpid010QUEUEAUTODELETE_FLAG | COLUMN_qpid010QUEUEEXCLUSIVE_FLAG)

#ifdef __cplusplus
}
#endif
#endif                          /* qpid010QUEUETABLE_OIDS_H */
