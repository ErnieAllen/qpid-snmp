/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef qpid010QUEUETABLE_H
#define qpid010QUEUETABLE_H

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
config_require(MRG-MESSAGING-MIB/qpid010QueueTable/qpid010QueueTable_interface)
config_require(MRG-MESSAGING-MIB/qpid010QueueTable/qpid010QueueTable_data_access)
config_require(MRG-MESSAGING-MIB/qpid010QueueTable/qpid010QueueTable_data_get)
config_require(MRG-MESSAGING-MIB/qpid010QueueTable/qpid010QueueTable_data_set)
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for qpid010QueueTable 
     */
#include "QueueTable_oids.h"

    /*
     * enum definions 
     */
#include "../enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_QueueTable(void);
    void            shutdown_qpid010QueueTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table qpid010QueueTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010QueueTable is subid 1 of qpid010Queues.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.6.1, length: 12
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
     * TODO:101:o: |-> Review qpid010QueueTable registration context.
     */
    typedef netsnmp_data_list qpid010QueueTable_registration;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review qpid010QueueTable data context structure.
     * This structure is used to represent the data for qpid010QueueTable.
     */
    /*
     * This structure contains storage for all the columns defined in the
     * qpid010QueueTable.
     */
    typedef struct qpid010QueueTable_data_s {

        /*
         * qpid010QueueVhostRef(1)/ObjId/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            qpid010QueueVhostRef[255];
        size_t          qpid010QueueVhostRef_len;        /* # of char elements, not bytes */

        /*
         * qpid010QueueName(2)/Sstr/ASN_OCTET_STR/char(char)//L/A/W/e/R/d/H
         */
        char            qpid010QueueName[255];
        size_t          qpid010QueueName_len;    /* # of char elements, not bytes */

        /*
         * qpid010QueueDurable(3)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          qpid010QueueDurable;

        /*
         * qpid010QueueAutoDelete(4)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          qpid010QueueAutoDelete;

        /*
         * qpid010QueueExclusive(5)/TruthValue/ASN_INTEGER/long(u_long)//l/A/W/E/r/d/h
         */
        u_long          qpid010QueueExclusive;

        /*
         * qpid010QueueArguments(6)/Map/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            qpid010QueueArguments[65535];
        size_t          qpid010QueueArguments_len;       /* # of char elements, not bytes */

        /*
         * qpid010QueueAltExchange(7)/ObjId/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        char            qpid010QueueAltExchange[255];
        size_t          qpid010QueueAltExchange_len;     /* # of char elements, not bytes */

        /*
         * qpid010QueueMsgTotalEnqueues(8)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgTotalEnqueues;

        /*
         * qpid010QueueMsgTotalDequeues(9)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgTotalDequeues;

        /*
         * qpid010QueueMsgTxnEnqueues(10)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgTxnEnqueues;

        /*
         * qpid010QueueMsgTxnDequeues(11)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgTxnDequeues;

        /*
         * qpid010QueueMsgPersistEnqueues(12)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgPersistEnqueues;

        /*
         * qpid010QueueMsgPersistDequeues(13)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgPersistDequeues;

        /*
         * qpid010QueueMsgDepth(14)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgDepth;

        /*
         * qpid010QueueByteDepth(15)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteDepth;

        /*
         * qpid010QueueByteTotalEnqueues(16)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteTotalEnqueues;

        /*
         * qpid010QueueByteTotalDequeues(17)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteTotalDequeues;

        /*
         * qpid010QueueByteTxnEnqueues(18)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteTxnEnqueues;

        /*
         * qpid010QueueByteTxnDequeues(19)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteTxnDequeues;

        /*
         * qpid010QueueBytePersistEnqueues(20)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueBytePersistEnqueues;

        /*
         * qpid010QueueBytePersistDequeues(21)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueBytePersistDequeues;

        /*
         * qpid010QueueMsgFtdEnqueues(22)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgFtdEnqueues;

        /*
         * qpid010QueueMsgFtdDequeues(23)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgFtdDequeues;

        /*
         * qpid010QueueByteFtdEnqueues(24)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteFtdEnqueues;

        /*
         * qpid010QueueByteFtdDequeues(25)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteFtdDequeues;

        /*
         * qpid010QueueMsgFtdDepth(26)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueMsgFtdDepth;

        /*
         * qpid010QueueByteFtdDepth(27)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueByteFtdDepth;

        /*
         * qpid010QueueReleases(28)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueReleases;

        /*
         * qpid010QueueAcquires(29)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueAcquires;

        /*
         * qpid010QueueDiscardsTtl(30)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueDiscardsTtl;

        /*
         * qpid010QueueDiscardsRing(31)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueDiscardsRing;

        /*
         * qpid010QueueDiscardsLvq(32)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueDiscardsLvq;

        /*
         * qpid010QueueDiscardsOverflow(33)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueDiscardsOverflow;

        /*
         * qpid010QueueDiscardsSubscriber(34)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueDiscardsSubscriber;

        /*
         * qpid010QueueDiscardsPurge(35)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueDiscardsPurge;

        /*
         * qpid010QueueReroutes(36)/COUNTER64/ASN_COUNTER64/U64(U64)//l/A/w/e/r/d/h
         */
        U64             qpid010QueueReroutes;

        /*
         * qpid010QueueConsumerCount(37)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueConsumerCount;

        /*
         * qpid010QueueConsumerCountHi(38)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueConsumerCountHi;

        /*
         * qpid010QueueConsumerCountLow(39)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueConsumerCountLow;

        /*
         * qpid010QueueBindingCount(40)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueBindingCount;

        /*
         * qpid010QueueBindingCountHi(41)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueBindingCountHi;

        /*
         * qpid010QueueBindingCountLow(42)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueBindingCountLow;

        /*
         * qpid010QueueUnackedMessages(43)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueUnackedMessages;

        /*
         * qpid010QueueUnackedMessagesHi(44)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueUnackedMessagesHi;

        /*
         * qpid010QueueUnackedMessagesLow(45)/Hilo32/ASN_INTEGER/long(long)//l/A/w/e/r/d/H
         */
        long            qpid010QueueUnackedMessagesLow;

        /*
         * qpid010QueueMessageLatency(46)/TICKS/ASN_TIMETICKS/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          qpid010QueueMessageLatency;

        /*
         * qpid010QueueFlowStopped(47)/TruthValue/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
        u_long          qpid010QueueFlowStopped;

        /*
         * qpid010QueueFlowStoppedCount(48)/COUNTER/ASN_COUNTER/u_long(u_long)//l/A/w/e/r/d/h
         */
        u_long          qpid010QueueFlowStoppedCount;

    } qpid010QueueTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review qpid010QueueTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef qpid010QueueTable_data qpid010QueueTable_undo_data;

    /*
     * TODO:120:r: |-> Review qpid010QueueTable mib index.
     * This structure is used to represent the index for qpid010QueueTable.
     */
    typedef struct qpid010QueueTable_mib_index_s {

        /*
         * qpid010QueueInternalIndex(49)/UNSIGNED32/ASN_UNSIGNED/u_long(u_long)//l/a/w/e/r/d/h
         */
        u_long          qpid010QueueInternalIndex;


    } qpid010QueueTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review qpid010QueueTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     */
#define MAX_qpid010QueueTable_IDX_LEN     1


    /*
     *********************************************************************
     * TODO:130:o: |-> Review qpid010QueueTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * qpid010QueueTable_rowreq_ctx pointer.
     */
    typedef struct qpid010QueueTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_qpid010QueueTable_IDX_LEN];

        qpid010QueueTable_mib_index tbl_idx;

        qpid010QueueTable_data data;
        qpid010QueueTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first (lower) 8 bits are reserved
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * TODO:131:o: |   |-> Add useful data to qpid010QueueTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *qpid010QueueTable_data_list;

    } qpid010QueueTable_rowreq_ctx;

    typedef struct qpid010QueueTable_ref_rowreq_ctx_s {
        qpid010QueueTable_rowreq_ctx *rowreq_ctx;
    } qpid010QueueTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int            
        qpid010QueueTable_pre_request(qpid010QueueTable_registration *
                                     user_context);
    int            
        qpid010QueueTable_post_request(qpid010QueueTable_registration *
                                      user_context, int rc);

    int            
        qpid010QueueTable_rowreq_ctx_init(qpid010QueueTable_rowreq_ctx *
                                         rowreq_ctx, void *user_init_ctx);
    void           
        qpid010QueueTable_rowreq_ctx_cleanup(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx);

    int            
        qpid010QueueTable_check_dependencies(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx);
    int             qpid010QueueTable_commit(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx);

    qpid010QueueTable_rowreq_ctx
        *qpid010QueueTable_row_find_by_mib_index(qpid010QueueTable_mib_index
                                                * mib_idx);

    extern const oid qpid010QueueTable_oid[];
    extern const int qpid010QueueTable_oid_size;


#include "QueueTable_interface.h"
#include "QueueTable_data_access.h"
#include "QueueTable_data_get.h"
#include "QueueTable_data_set.h"

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
#endif                          /* qpid010QUEUETABLE_H */
/** @} */
