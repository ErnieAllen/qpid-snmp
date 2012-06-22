/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file qpid010QueueTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef qpid010QUEUETABLE_DATA_GET_H
#define qpid010QUEUETABLE_DATA_GET_H

#ifdef __cplusplus
extern          "C" {
#endif

    /*
     *********************************************************************
     * GET function declarations
     */

    /*
     *********************************************************************
     * GET Table declarations
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
     * OID: .1.3.6.1.4.1.18060,15.1.1.6.1, length: 12
     */
    /*
     * indexes
     */

    int             qpid010QueueVhostRef_get(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            **qpid010QueueVhostRef_val_ptr_ptr,
                                            size_t
                                            *qpid010QueueVhostRef_val_ptr_len_ptr);
    int             qpid010QueueName_get(qpid010QueueTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char **qpid010QueueName_val_ptr_ptr,
                                        size_t
                                        *qpid010QueueName_val_ptr_len_ptr);
    int             qpid010QueueDurable_get(qpid010QueueTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           qpid010QueueDurable_val_ptr);
    int             qpid010QueueAutoDelete_get(qpid010QueueTable_rowreq_ctx *
                                              rowreq_ctx,
                                              u_long *
                                              qpid010QueueAutoDelete_val_ptr);
    int             qpid010QueueExclusive_get(qpid010QueueTable_rowreq_ctx *
                                             rowreq_ctx,
                                             u_long *
                                             qpid010QueueExclusive_val_ptr);
    int             qpid010QueueArguments_get(qpid010QueueTable_rowreq_ctx *
                                             rowreq_ctx,
                                             char
                                             **qpid010QueueArguments_val_ptr_ptr,
                                             size_t
                                             *qpid010QueueArguments_val_ptr_len_ptr);
    int             qpid010QueueAltExchange_get(qpid010QueueTable_rowreq_ctx
                                               * rowreq_ctx,
                                               char
                                               **qpid010QueueAltExchange_val_ptr_ptr,
                                               size_t
                                               *qpid010QueueAltExchange_val_ptr_len_ptr);
    int            
        qpid010QueueMsgTotalEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                        rowreq_ctx,
                                        U64 *
                                        qpid010QueueMsgTotalEnqueues_val_ptr);
    int            
        qpid010QueueMsgTotalDequeues_get(qpid010QueueTable_rowreq_ctx *
                                        rowreq_ctx,
                                        U64 *
                                        qpid010QueueMsgTotalDequeues_val_ptr);
    int            
        qpid010QueueMsgTxnEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 *
                                      qpid010QueueMsgTxnEnqueues_val_ptr);
    int            
        qpid010QueueMsgTxnDequeues_get(qpid010QueueTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 *
                                      qpid010QueueMsgTxnDequeues_val_ptr);
    int            
        qpid010QueueMsgPersistEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                          rowreq_ctx,
                                          U64 *
                                          qpid010QueueMsgPersistEnqueues_val_ptr);
    int            
        qpid010QueueMsgPersistDequeues_get(qpid010QueueTable_rowreq_ctx *
                                          rowreq_ctx,
                                          U64 *
                                          qpid010QueueMsgPersistDequeues_val_ptr);
    int             qpid010QueueMsgDepth_get(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx,
                                            U64 *
                                            qpid010QueueMsgDepth_val_ptr);
    int             qpid010QueueByteDepth_get(qpid010QueueTable_rowreq_ctx *
                                             rowreq_ctx,
                                             U64 *
                                             qpid010QueueByteDepth_val_ptr);
    int            
        qpid010QueueByteTotalEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                         rowreq_ctx,
                                         U64 *
                                         qpid010QueueByteTotalEnqueues_val_ptr);
    int            
        qpid010QueueByteTotalDequeues_get(qpid010QueueTable_rowreq_ctx *
                                         rowreq_ctx,
                                         U64 *
                                         qpid010QueueByteTotalDequeues_val_ptr);
    int            
        qpid010QueueByteTxnEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       qpid010QueueByteTxnEnqueues_val_ptr);
    int            
        qpid010QueueByteTxnDequeues_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       qpid010QueueByteTxnDequeues_val_ptr);
    int            
        qpid010QueueBytePersistEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                           rowreq_ctx,
                                           U64 *
                                           qpid010QueueBytePersistEnqueues_val_ptr);
    int            
        qpid010QueueBytePersistDequeues_get(qpid010QueueTable_rowreq_ctx *
                                           rowreq_ctx,
                                           U64 *
                                           qpid010QueueBytePersistDequeues_val_ptr);
    int            
        qpid010QueueMsgFtdEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 *
                                      qpid010QueueMsgFtdEnqueues_val_ptr);
    int            
        qpid010QueueMsgFtdDequeues_get(qpid010QueueTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 *
                                      qpid010QueueMsgFtdDequeues_val_ptr);
    int            
        qpid010QueueByteFtdEnqueues_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       qpid010QueueByteFtdEnqueues_val_ptr);
    int            
        qpid010QueueByteFtdDequeues_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 *
                                       qpid010QueueByteFtdDequeues_val_ptr);
    int             qpid010QueueMsgFtdDepth_get(qpid010QueueTable_rowreq_ctx
                                               * rowreq_ctx,
                                               U64 *
                                               qpid010QueueMsgFtdDepth_val_ptr);
    int             qpid010QueueByteFtdDepth_get(qpid010QueueTable_rowreq_ctx
                                                * rowreq_ctx,
                                                U64 *
                                                qpid010QueueByteFtdDepth_val_ptr);
    int             qpid010QueueReleases_get(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx,
                                            U64 *
                                            qpid010QueueReleases_val_ptr);
    int             qpid010QueueAcquires_get(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx,
                                            U64 *
                                            qpid010QueueAcquires_val_ptr);
    int             qpid010QueueDiscardsTtl_get(qpid010QueueTable_rowreq_ctx
                                               * rowreq_ctx,
                                               U64 *
                                               qpid010QueueDiscardsTtl_val_ptr);
    int             qpid010QueueDiscardsRing_get(qpid010QueueTable_rowreq_ctx
                                                * rowreq_ctx,
                                                U64 *
                                                qpid010QueueDiscardsRing_val_ptr);
    int             qpid010QueueDiscardsLvq_get(qpid010QueueTable_rowreq_ctx
                                               * rowreq_ctx,
                                               U64 *
                                               qpid010QueueDiscardsLvq_val_ptr);
    int            
        qpid010QueueDiscardsOverflow_get(qpid010QueueTable_rowreq_ctx *
                                        rowreq_ctx,
                                        U64 *
                                        qpid010QueueDiscardsOverflow_val_ptr);
    int            
        qpid010QueueDiscardsSubscriber_get(qpid010QueueTable_rowreq_ctx *
                                          rowreq_ctx,
                                          U64 *
                                          qpid010QueueDiscardsSubscriber_val_ptr);
    int            
        qpid010QueueDiscardsPurge_get(qpid010QueueTable_rowreq_ctx *
                                     rowreq_ctx,
                                     U64 *
                                     qpid010QueueDiscardsPurge_val_ptr);
    int             qpid010QueueReroutes_get(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx,
                                            U64 *
                                            qpid010QueueReroutes_val_ptr);
    int            
        qpid010QueueConsumerCount_get(qpid010QueueTable_rowreq_ctx *
                                     rowreq_ctx,
                                     long
                                     *qpid010QueueConsumerCount_val_ptr);
    int            
        qpid010QueueConsumerCountHi_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long
                                       *qpid010QueueConsumerCountHi_val_ptr);
    int            
        qpid010QueueConsumerCountLow_get(qpid010QueueTable_rowreq_ctx *
                                        rowreq_ctx,
                                        long
                                        *qpid010QueueConsumerCountLow_val_ptr);
    int             qpid010QueueBindingCount_get(qpid010QueueTable_rowreq_ctx
                                                * rowreq_ctx,
                                                long
                                                *qpid010QueueBindingCount_val_ptr);
    int            
        qpid010QueueBindingCountHi_get(qpid010QueueTable_rowreq_ctx *
                                      rowreq_ctx,
                                      long
                                      *qpid010QueueBindingCountHi_val_ptr);
    int            
        qpid010QueueBindingCountLow_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long
                                       *qpid010QueueBindingCountLow_val_ptr);
    int            
        qpid010QueueUnackedMessages_get(qpid010QueueTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long
                                       *qpid010QueueUnackedMessages_val_ptr);
    int            
        qpid010QueueUnackedMessagesHi_get(qpid010QueueTable_rowreq_ctx *
                                         rowreq_ctx,
                                         long
                                         *qpid010QueueUnackedMessagesHi_val_ptr);
    int            
        qpid010QueueUnackedMessagesLow_get(qpid010QueueTable_rowreq_ctx *
                                          rowreq_ctx,
                                          long
                                          *qpid010QueueUnackedMessagesLow_val_ptr);
    int            
        qpid010QueueMessageLatency_get(qpid010QueueTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      qpid010QueueMessageLatency_val_ptr);
    int             qpid010QueueFlowStopped_get(qpid010QueueTable_rowreq_ctx
                                               * rowreq_ctx,
                                               u_long *
                                               qpid010QueueFlowStopped_val_ptr);
    int            
        qpid010QueueFlowStoppedCount_get(qpid010QueueTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long *
                                        qpid010QueueFlowStoppedCount_val_ptr);


    int            
        qpid010QueueTable_indexes_set_tbl_idx(qpid010QueueTable_mib_index *
                                             tbl_idx,
                                             u_long
                                             qpid010QueueInternalIndex_val);
    int            
        qpid010QueueTable_indexes_set(qpid010QueueTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long qpid010QueueInternalIndex_val);




#ifdef __cplusplus
}
#endif
#endif                          /* qpid010QUEUETABLE_DATA_GET_H */
/** @} */
