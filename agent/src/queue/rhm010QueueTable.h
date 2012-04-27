/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef RHM010QUEUETABLE_H
#define RHM010QUEUETABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @addtogroup misc misc: Miscellaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_add_mib(MRG-MESSAGING-MIB)
config_require(MRG-MESSAGING-MIB/rhm010QueueTable/rhm010QueueTable_interface)
config_require(MRG-MESSAGING-MIB/rhm010QueueTable/rhm010QueueTable_data_access)
config_require(MRG-MESSAGING-MIB/rhm010QueueTable/rhm010QueueTable_data_get)
config_require(MRG-MESSAGING-MIB/rhm010QueueTable/rhm010QueueTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for rhm010QueueTable 
     */
#include "rhm010QueueTable_oids.h"

    /*
     * enum definions 
     */
#include "../enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_rhm010QueueTable(void);
    void            shutdown_rhm010QueueTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table rhm010QueueTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010QueueTable is subid 1 of rhm010Queues.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.6.1, length: 12
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review rhm010QueueTable registration context.
     */
    typedef netsnmp_data_list rhm010QueueTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review rhm010QueueTable data context structure.
     * This structure is used to represent the data for rhm010QueueTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * rhm010QueueTable.
     */
    typedef struct rhm010QueueTable_data_s {

        /*
         * rhm010QueueVhostRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010QueueVhostRef[255];
        size_t          rhm010QueueVhostRef_len;        /* # of char elements, not bytes */

        /*
         * rhm010QueueName(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            rhm010QueueName[255];
        size_t          rhm010QueueName_len;    /* # of char elements, not bytes */

        /*
         * rhm010QueueDurable(3)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          rhm010QueueDurable;

        /*
         * rhm010QueueAutoDelete(4)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          rhm010QueueAutoDelete;

        /*
         * rhm010QueueExclusive(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          rhm010QueueExclusive;

        /*
         * rhm010QueueArguments(6)/Map/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            rhm010QueueArguments[65535];
        size_t          rhm010QueueArguments_len;       /* # of char elements, not bytes */

        /*
         * rhm010QueueAltExchange(7)/ObjId/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            rhm010QueueAltExchange[255];
        size_t          rhm010QueueAltExchange_len;     /* # of char elements, not bytes */

        /*
         * rhm010QueueMsgTotalEnqueues(8)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgTotalEnqueues;

        /*
         * rhm010QueueMsgTotalDequeues(9)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgTotalDequeues;

        /*
         * rhm010QueueMsgTxnEnqueues(10)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgTxnEnqueues;

        /*
         * rhm010QueueMsgTxnDequeues(11)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgTxnDequeues;

        /*
         * rhm010QueueMsgPersistEnqueues(12)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgPersistEnqueues;

        /*
         * rhm010QueueMsgPersistDequeues(13)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgPersistDequeues;

        /*
         * rhm010QueueMsgDepth(14)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgDepth;

        /*
         * rhm010QueueByteDepth(15)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteDepth;

        /*
         * rhm010QueueByteTotalEnqueues(16)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteTotalEnqueues;

        /*
         * rhm010QueueByteTotalDequeues(17)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteTotalDequeues;

        /*
         * rhm010QueueByteTxnEnqueues(18)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteTxnEnqueues;

        /*
         * rhm010QueueByteTxnDequeues(19)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteTxnDequeues;

        /*
         * rhm010QueueBytePersistEnqueues(20)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueBytePersistEnqueues;

        /*
         * rhm010QueueBytePersistDequeues(21)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueBytePersistDequeues;

        /*
         * rhm010QueueMsgFtdEnqueues(22)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgFtdEnqueues;

        /*
         * rhm010QueueMsgFtdDequeues(23)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgFtdDequeues;

        /*
         * rhm010QueueByteFtdEnqueues(24)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteFtdEnqueues;

        /*
         * rhm010QueueByteFtdDequeues(25)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteFtdDequeues;

        /*
         * rhm010QueueMsgFtdDepth(26)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueMsgFtdDepth;

        /*
         * rhm010QueueByteFtdDepth(27)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueByteFtdDepth;

        /*
         * rhm010QueueReleases(28)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueReleases;

        /*
         * rhm010QueueAcquires(29)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueAcquires;

        /*
         * rhm010QueueDiscardsTtl(30)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueDiscardsTtl;

        /*
         * rhm010QueueDiscardsRing(31)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueDiscardsRing;

        /*
         * rhm010QueueDiscardsLvq(32)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueDiscardsLvq;

        /*
         * rhm010QueueDiscardsOverflow(33)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueDiscardsOverflow;

        /*
         * rhm010QueueDiscardsSubscriber(34)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueDiscardsSubscriber;

        /*
         * rhm010QueueDiscardsPurge(35)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueDiscardsPurge;

        /*
         * rhm010QueueReroutes(36)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             rhm010QueueReroutes;

        /*
         * rhm010QueueConsumerCount(37)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueConsumerCount;

        /*
         * rhm010QueueConsumerCountHi(38)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueConsumerCountHi;

        /*
         * rhm010QueueConsumerCountLow(39)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueConsumerCountLow;

        /*
         * rhm010QueueBindingCount(40)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueBindingCount;

        /*
         * rhm010QueueBindingCountHi(41)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueBindingCountHi;

        /*
         * rhm010QueueBindingCountLow(42)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueBindingCountLow;

        /*
         * rhm010QueueUnackedMessages(43)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueUnackedMessages;

        /*
         * rhm010QueueUnackedMessagesHi(44)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueUnackedMessagesHi;

        /*
         * rhm010QueueUnackedMessagesLow(45)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            rhm010QueueUnackedMessagesLow;

        /*
         * rhm010QueueMessageLatency(46)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          rhm010QueueMessageLatency;

        /*
         * rhm010QueueFlowStopped(47)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
        u_long          rhm010QueueFlowStopped;

        /*
         * rhm010QueueFlowStoppedCount(48)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          rhm010QueueFlowStoppedCount;

    } rhm010QueueTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review rhm010QueueTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef rhm010QueueTable_data rhm010QueueTable_undo_data;

    /*
     * TODO:120:r: |-> Review rhm010QueueTable mib index.
     * This structure is used to represent the index for rhm010QueueTable.
     */
    typedef struct rhm010QueueTable_mib_index_s {

        /*
         * rhm010QueueInternalIndex(49)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          rhm010QueueInternalIndex;


    } rhm010QueueTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review rhm010QueueTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_rhm010QueueTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review rhm010QueueTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * rhm010QueueTable_rowreq_ctx pointer.
     */
    typedef struct rhm010QueueTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_rhm010QueueTable_IDX_LEN];

        rhm010QueueTable_mib_index tbl_idx;

        rhm010QueueTable_data data;
        rhm010QueueTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to rhm010QueueTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *rhm010QueueTable_data_list;

    } rhm010QueueTable_rowreq_ctx;

    typedef struct rhm010QueueTable_ref_rowreq_ctx_s {
        rhm010QueueTable_rowreq_ctx *rowreq_ctx;
    } rhm010QueueTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        rhm010QueueTable_pre_request(rhm010QueueTable_registration *
                                     user_context);
    int            
        rhm010QueueTable_post_request(rhm010QueueTable_registration *
                                      user_context, int rc);

    int            
        rhm010QueueTable_rowreq_ctx_init(rhm010QueueTable_rowreq_ctx *
                                         rowreq_ctx, void *user_init_ctx);
    void           
        rhm010QueueTable_rowreq_ctx_cleanup(rhm010QueueTable_rowreq_ctx *
                                            rowreq_ctx);

    int            
        rhm010QueueTable_check_dependencies(rhm010QueueTable_rowreq_ctx *
                                            rowreq_ctx);
    int             rhm010QueueTable_commit(rhm010QueueTable_rowreq_ctx *
                                            rowreq_ctx);

    rhm010QueueTable_rowreq_ctx
        *rhm010QueueTable_row_find_by_mib_index(rhm010QueueTable_mib_index
                                                * mib_idx);

    extern const oid rhm010QueueTable_oid[];
    extern const int rhm010QueueTable_oid_size;


#include "rhm010QueueTable_interface.h"
#include "rhm010QueueTable_data_access.h"
#include "rhm010QueueTable_data_get.h"
#include "rhm010QueueTable_data_set.h"

    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* RHM010QUEUETABLE_H */
/** @} */
