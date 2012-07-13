/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef qpid010EXCHANGETABLE_DATA_SET_H
#define qpid010EXCHANGETABLE_DATA_SET_H

#ifdef __cplusplus
extern          "C" {
#endif

    /*
     *********************************************************************
     * SET function declarations
     */

    /*
     *********************************************************************
     * SET Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table qpid010ExchangeTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010ExchangeTable is subid 1 of qpid010Exchanges.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.7.1, length: 12
     */


    int            
        qpid010ExchangeTable_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx);
    int            
        qpid010ExchangeTable_undo_cleanup(qpid010ExchangeTable_rowreq_ctx *
                                         rowreq_ctx);
    int             qpid010ExchangeTable_undo(qpid010ExchangeTable_rowreq_ctx
                                             * rowreq_ctx);
    int            
        qpid010ExchangeTable_commit(qpid010ExchangeTable_rowreq_ctx *
                                   rowreq_ctx);
    int            
        qpid010ExchangeTable_undo_commit(qpid010ExchangeTable_rowreq_ctx *
                                        rowreq_ctx);


    int            
        qpid010ExchangeVhostRef_check_value(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *qpid010ExchangeVhostRef_val_ptr,
                                           size_t
                                           qpid010ExchangeVhostRef_val_ptr_len);
    int            
        qpid010ExchangeVhostRef_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                          rowreq_ctx);
    int            
        qpid010ExchangeVhostRef_set(qpid010ExchangeTable_rowreq_ctx *
                                   rowreq_ctx,
                                   char *qpid010ExchangeVhostRef_val_ptr,
                                   size_t
                                   qpid010ExchangeVhostRef_val_ptr_len);
    int            
        qpid010ExchangeVhostRef_undo(qpid010ExchangeTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        qpid010ExchangeName_check_value(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *qpid010ExchangeName_val_ptr,
                                       size_t
                                       qpid010ExchangeName_val_ptr_len);
    int            
        qpid010ExchangeName_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                      rowreq_ctx);
    int             qpid010ExchangeName_set(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *qpid010ExchangeName_val_ptr,
                                           size_t
                                           qpid010ExchangeName_val_ptr_len);
    int             qpid010ExchangeName_undo(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx);

    int            
        qpid010ExchangeType_check_value(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *qpid010ExchangeType_val_ptr,
                                       size_t
                                       qpid010ExchangeType_val_ptr_len);
    int            
        qpid010ExchangeType_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                      rowreq_ctx);
    int             qpid010ExchangeType_set(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *qpid010ExchangeType_val_ptr,
                                           size_t
                                           qpid010ExchangeType_val_ptr_len);
    int             qpid010ExchangeType_undo(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx);

    int            
        qpid010ExchangeDurable_check_value(qpid010ExchangeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long
                                          qpid010ExchangeDurable_val);
    int            
        qpid010ExchangeDurable_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                         rowreq_ctx);
    int            
        qpid010ExchangeDurable_set(qpid010ExchangeTable_rowreq_ctx *
                                  rowreq_ctx,
                                  u_long qpid010ExchangeDurable_val);
    int            
        qpid010ExchangeDurable_undo(qpid010ExchangeTable_rowreq_ctx *
                                   rowreq_ctx);

    int            
        qpid010ExchangeAutoDelete_check_value(qpid010ExchangeTable_rowreq_ctx
                                             * rowreq_ctx,
                                             u_long
                                             qpid010ExchangeAutoDelete_val);
    int            
        qpid010ExchangeAutoDelete_undo_setup(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx);
    int            
        qpid010ExchangeAutoDelete_set(qpid010ExchangeTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long qpid010ExchangeAutoDelete_val);
    int            
        qpid010ExchangeAutoDelete_undo(qpid010ExchangeTable_rowreq_ctx *
                                      rowreq_ctx);

    int            
        qpid010ExchangeAltExchange_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         char *qpid010ExchangeAltExchange_val_ptr,
         size_t qpid010ExchangeAltExchange_val_ptr_len);
    int            
        qpid010ExchangeAltExchange_undo_setup(qpid010ExchangeTable_rowreq_ctx
                                             * rowreq_ctx);
    int            
        qpid010ExchangeAltExchange_set(qpid010ExchangeTable_rowreq_ctx *
                                      rowreq_ctx,
                                      char
                                      *qpid010ExchangeAltExchange_val_ptr,
                                      size_t
                                      qpid010ExchangeAltExchange_val_ptr_len);
    int            
        qpid010ExchangeAltExchange_undo(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx);

    int            
        qpid010ExchangeArguments_check_value(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx,
                                            char
                                            *qpid010ExchangeArguments_val_ptr,
                                            size_t
                                            qpid010ExchangeArguments_val_ptr_len);
    int            
        qpid010ExchangeArguments_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        qpid010ExchangeArguments_set(qpid010ExchangeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char *qpid010ExchangeArguments_val_ptr,
                                    size_t
                                    qpid010ExchangeArguments_val_ptr_len);
    int            
        qpid010ExchangeArguments_undo(qpid010ExchangeTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        qpid010ExchangeProducerCount_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         long qpid010ExchangeProducerCount_val);
    int            
        qpid010ExchangeProducerCount_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeProducerCount_set(qpid010ExchangeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        long
                                        qpid010ExchangeProducerCount_val);
    int            
        qpid010ExchangeProducerCount_undo(qpid010ExchangeTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        qpid010ExchangeProducerCountHi_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         long qpid010ExchangeProducerCountHi_val);
    int            
        qpid010ExchangeProducerCountHi_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeProducerCountHi_set(qpid010ExchangeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          long
                                          qpid010ExchangeProducerCountHi_val);
    int            
        qpid010ExchangeProducerCountHi_undo(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx);

    int            
        qpid010ExchangeProducerCountLow_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         long qpid010ExchangeProducerCountLow_val);
    int            
        qpid010ExchangeProducerCountLow_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeProducerCountLow_set(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           long
                                           qpid010ExchangeProducerCountLow_val);
    int            
        qpid010ExchangeProducerCountLow_undo(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx);

    int            
        qpid010ExchangeBindingCount_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         long qpid010ExchangeBindingCount_val);
    int            
        qpid010ExchangeBindingCount_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeBindingCount_set(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long
                                       qpid010ExchangeBindingCount_val);
    int            
        qpid010ExchangeBindingCount_undo(qpid010ExchangeTable_rowreq_ctx *
                                        rowreq_ctx);

    int            
        qpid010ExchangeBindingCountHi_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         long qpid010ExchangeBindingCountHi_val);
    int            
        qpid010ExchangeBindingCountHi_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeBindingCountHi_set(qpid010ExchangeTable_rowreq_ctx *
                                         rowreq_ctx,
                                         long
                                         qpid010ExchangeBindingCountHi_val);
    int            
        qpid010ExchangeBindingCountHi_undo(qpid010ExchangeTable_rowreq_ctx *
                                          rowreq_ctx);

    int            
        qpid010ExchangeBindingCountLow_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         long qpid010ExchangeBindingCountLow_val);
    int            
        qpid010ExchangeBindingCountLow_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeBindingCountLow_set(qpid010ExchangeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          long
                                          qpid010ExchangeBindingCountLow_val);
    int            
        qpid010ExchangeBindingCountLow_undo(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx);

    int            
        qpid010ExchangeMsgReceives_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         U64 qpid010ExchangeMsgReceives_val);
    int            
        qpid010ExchangeMsgReceives_undo_setup(qpid010ExchangeTable_rowreq_ctx
                                             * rowreq_ctx);
    int            
        qpid010ExchangeMsgReceives_set(qpid010ExchangeTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 qpid010ExchangeMsgReceives_val);
    int            
        qpid010ExchangeMsgReceives_undo(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx);

    int            
        qpid010ExchangeMsgDrops_check_value(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           U64 qpid010ExchangeMsgDrops_val);
    int            
        qpid010ExchangeMsgDrops_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                          rowreq_ctx);
    int            
        qpid010ExchangeMsgDrops_set(qpid010ExchangeTable_rowreq_ctx *
                                   rowreq_ctx,
                                   U64 qpid010ExchangeMsgDrops_val);
    int            
        qpid010ExchangeMsgDrops_undo(qpid010ExchangeTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        qpid010ExchangeMsgRoutes_check_value(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx,
                                            U64
                                            qpid010ExchangeMsgRoutes_val);
    int            
        qpid010ExchangeMsgRoutes_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        qpid010ExchangeMsgRoutes_set(qpid010ExchangeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 qpid010ExchangeMsgRoutes_val);
    int            
        qpid010ExchangeMsgRoutes_undo(qpid010ExchangeTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        qpid010ExchangeByteReceives_check_value
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx,
         U64 qpid010ExchangeByteReceives_val);
    int            
        qpid010ExchangeByteReceives_undo_setup
        (qpid010ExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        qpid010ExchangeByteReceives_set(qpid010ExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 qpid010ExchangeByteReceives_val);
    int            
        qpid010ExchangeByteReceives_undo(qpid010ExchangeTable_rowreq_ctx *
                                        rowreq_ctx);

    int            
        qpid010ExchangeByteDrops_check_value(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx,
                                            U64
                                            qpid010ExchangeByteDrops_val);
    int            
        qpid010ExchangeByteDrops_undo_setup(qpid010ExchangeTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        qpid010ExchangeByteDrops_set(qpid010ExchangeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 qpid010ExchangeByteDrops_val);
    int            
        qpid010ExchangeByteDrops_undo(qpid010ExchangeTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        qpid010ExchangeByteRoutes_check_value(qpid010ExchangeTable_rowreq_ctx
                                             * rowreq_ctx,
                                             U64
                                             qpid010ExchangeByteRoutes_val);
    int            
        qpid010ExchangeByteRoutes_undo_setup(qpid010ExchangeTable_rowreq_ctx
                                            * rowreq_ctx);
    int            
        qpid010ExchangeByteRoutes_set(qpid010ExchangeTable_rowreq_ctx *
                                     rowreq_ctx,
                                     U64 qpid010ExchangeByteRoutes_val);
    int            
        qpid010ExchangeByteRoutes_undo(qpid010ExchangeTable_rowreq_ctx *
                                      rowreq_ctx);


    int            
        qpid010ExchangeTable_check_dependencies
        (qpid010ExchangeTable_rowreq_ctx * ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* qpid010EXCHANGETABLE_DATA_SET_H */
