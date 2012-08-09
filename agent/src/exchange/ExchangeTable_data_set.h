/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef brokerEXCHANGETABLE_DATA_SET_H
#define brokerEXCHANGETABLE_DATA_SET_H

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
 *** Table brokerExchangeTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * QPID-MESSAGING-MIB::brokerExchangeTable is subid 1 of brokerExchanges.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.7.1, length: 12
     */


    int            
        brokerExchangeTable_undo_setup(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx);
    int            
        brokerExchangeTable_undo_cleanup(brokerExchangeTable_rowreq_ctx *
                                         rowreq_ctx);
    int             brokerExchangeTable_undo(brokerExchangeTable_rowreq_ctx
                                             * rowreq_ctx);
    int            
        brokerExchangeTable_commit(brokerExchangeTable_rowreq_ctx *
                                   rowreq_ctx);
    int            
        brokerExchangeTable_undo_commit(brokerExchangeTable_rowreq_ctx *
                                        rowreq_ctx);


    int            
        brokerExchangeVhostRef_check_value(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *brokerExchangeVhostRef_val_ptr,
                                           size_t
                                           brokerExchangeVhostRef_val_ptr_len);
    int            
        brokerExchangeVhostRef_undo_setup(brokerExchangeTable_rowreq_ctx *
                                          rowreq_ctx);
    int            
        brokerExchangeVhostRef_set(brokerExchangeTable_rowreq_ctx *
                                   rowreq_ctx,
                                   char *brokerExchangeVhostRef_val_ptr,
                                   size_t
                                   brokerExchangeVhostRef_val_ptr_len);
    int            
        brokerExchangeVhostRef_undo(brokerExchangeTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        brokerExchangeName_check_value(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *brokerExchangeName_val_ptr,
                                       size_t
                                       brokerExchangeName_val_ptr_len);
    int            
        brokerExchangeName_undo_setup(brokerExchangeTable_rowreq_ctx *
                                      rowreq_ctx);
    int             brokerExchangeName_set(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *brokerExchangeName_val_ptr,
                                           size_t
                                           brokerExchangeName_val_ptr_len);
    int             brokerExchangeName_undo(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx);

    int            
        brokerExchangeType_check_value(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *brokerExchangeType_val_ptr,
                                       size_t
                                       brokerExchangeType_val_ptr_len);
    int            
        brokerExchangeType_undo_setup(brokerExchangeTable_rowreq_ctx *
                                      rowreq_ctx);
    int             brokerExchangeType_set(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *brokerExchangeType_val_ptr,
                                           size_t
                                           brokerExchangeType_val_ptr_len);
    int             brokerExchangeType_undo(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx);

    int            
        brokerExchangeDurable_check_value(brokerExchangeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long
                                          brokerExchangeDurable_val);
    int            
        brokerExchangeDurable_undo_setup(brokerExchangeTable_rowreq_ctx *
                                         rowreq_ctx);
    int            
        brokerExchangeDurable_set(brokerExchangeTable_rowreq_ctx *
                                  rowreq_ctx,
                                  u_long brokerExchangeDurable_val);
    int            
        brokerExchangeDurable_undo(brokerExchangeTable_rowreq_ctx *
                                   rowreq_ctx);

    int            
        brokerExchangeAutoDelete_check_value(brokerExchangeTable_rowreq_ctx
                                             * rowreq_ctx,
                                             u_long
                                             brokerExchangeAutoDelete_val);
    int            
        brokerExchangeAutoDelete_undo_setup(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx);
    int            
        brokerExchangeAutoDelete_set(brokerExchangeTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long brokerExchangeAutoDelete_val);
    int            
        brokerExchangeAutoDelete_undo(brokerExchangeTable_rowreq_ctx *
                                      rowreq_ctx);

    int            
        brokerExchangeAltExchange_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         char *brokerExchangeAltExchange_val_ptr,
         size_t brokerExchangeAltExchange_val_ptr_len);
    int            
        brokerExchangeAltExchange_undo_setup(brokerExchangeTable_rowreq_ctx
                                             * rowreq_ctx);
    int            
        brokerExchangeAltExchange_set(brokerExchangeTable_rowreq_ctx *
                                      rowreq_ctx,
                                      char
                                      *brokerExchangeAltExchange_val_ptr,
                                      size_t
                                      brokerExchangeAltExchange_val_ptr_len);
    int            
        brokerExchangeAltExchange_undo(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx);

    int            
        brokerExchangeArguments_check_value(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx,
                                            char
                                            *brokerExchangeArguments_val_ptr,
                                            size_t
                                            brokerExchangeArguments_val_ptr_len);
    int            
        brokerExchangeArguments_undo_setup(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        brokerExchangeArguments_set(brokerExchangeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char *brokerExchangeArguments_val_ptr,
                                    size_t
                                    brokerExchangeArguments_val_ptr_len);
    int            
        brokerExchangeArguments_undo(brokerExchangeTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        brokerExchangeProducerCount_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         long brokerExchangeProducerCount_val);
    int            
        brokerExchangeProducerCount_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeProducerCount_set(brokerExchangeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        long
                                        brokerExchangeProducerCount_val);
    int            
        brokerExchangeProducerCount_undo(brokerExchangeTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        brokerExchangeProducerCountHi_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         long brokerExchangeProducerCountHi_val);
    int            
        brokerExchangeProducerCountHi_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeProducerCountHi_set(brokerExchangeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          long
                                          brokerExchangeProducerCountHi_val);
    int            
        brokerExchangeProducerCountHi_undo(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx);

    int            
        brokerExchangeProducerCountLow_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         long brokerExchangeProducerCountLow_val);
    int            
        brokerExchangeProducerCountLow_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeProducerCountLow_set(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           long
                                           brokerExchangeProducerCountLow_val);
    int            
        brokerExchangeProducerCountLow_undo(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx);

    int            
        brokerExchangeBindingCount_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         long brokerExchangeBindingCount_val);
    int            
        brokerExchangeBindingCount_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeBindingCount_set(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long
                                       brokerExchangeBindingCount_val);
    int            
        brokerExchangeBindingCount_undo(brokerExchangeTable_rowreq_ctx *
                                        rowreq_ctx);

    int            
        brokerExchangeBindingCountHi_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         long brokerExchangeBindingCountHi_val);
    int            
        brokerExchangeBindingCountHi_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeBindingCountHi_set(brokerExchangeTable_rowreq_ctx *
                                         rowreq_ctx,
                                         long
                                         brokerExchangeBindingCountHi_val);
    int            
        brokerExchangeBindingCountHi_undo(brokerExchangeTable_rowreq_ctx *
                                          rowreq_ctx);

    int            
        brokerExchangeBindingCountLow_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         long brokerExchangeBindingCountLow_val);
    int            
        brokerExchangeBindingCountLow_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeBindingCountLow_set(brokerExchangeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          long
                                          brokerExchangeBindingCountLow_val);
    int            
        brokerExchangeBindingCountLow_undo(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx);

    int            
        brokerExchangeMsgReceives_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         U64 brokerExchangeMsgReceives_val);
    int            
        brokerExchangeMsgReceives_undo_setup(brokerExchangeTable_rowreq_ctx
                                             * rowreq_ctx);
    int            
        brokerExchangeMsgReceives_set(brokerExchangeTable_rowreq_ctx *
                                      rowreq_ctx,
                                      U64 brokerExchangeMsgReceives_val);
    int            
        brokerExchangeMsgReceives_undo(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx);

    int            
        brokerExchangeMsgDrops_check_value(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           U64 brokerExchangeMsgDrops_val);
    int            
        brokerExchangeMsgDrops_undo_setup(brokerExchangeTable_rowreq_ctx *
                                          rowreq_ctx);
    int            
        brokerExchangeMsgDrops_set(brokerExchangeTable_rowreq_ctx *
                                   rowreq_ctx,
                                   U64 brokerExchangeMsgDrops_val);
    int            
        brokerExchangeMsgDrops_undo(brokerExchangeTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        brokerExchangeMsgRoutes_check_value(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx,
                                            U64
                                            brokerExchangeMsgRoutes_val);
    int            
        brokerExchangeMsgRoutes_undo_setup(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        brokerExchangeMsgRoutes_set(brokerExchangeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 brokerExchangeMsgRoutes_val);
    int            
        brokerExchangeMsgRoutes_undo(brokerExchangeTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        brokerExchangeByteReceives_check_value
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx,
         U64 brokerExchangeByteReceives_val);
    int            
        brokerExchangeByteReceives_undo_setup
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);
    int            
        brokerExchangeByteReceives_set(brokerExchangeTable_rowreq_ctx *
                                       rowreq_ctx,
                                       U64 brokerExchangeByteReceives_val);
    int            
        brokerExchangeByteReceives_undo(brokerExchangeTable_rowreq_ctx *
                                        rowreq_ctx);

    int            
        brokerExchangeByteDrops_check_value(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx,
                                            U64
                                            brokerExchangeByteDrops_val);
    int            
        brokerExchangeByteDrops_undo_setup(brokerExchangeTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        brokerExchangeByteDrops_set(brokerExchangeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 brokerExchangeByteDrops_val);
    int            
        brokerExchangeByteDrops_undo(brokerExchangeTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        brokerExchangeByteRoutes_check_value(brokerExchangeTable_rowreq_ctx
                                             * rowreq_ctx,
                                             U64
                                             brokerExchangeByteRoutes_val);
    int            
        brokerExchangeByteRoutes_undo_setup(brokerExchangeTable_rowreq_ctx
                                            * rowreq_ctx);
    int            
        brokerExchangeByteRoutes_set(brokerExchangeTable_rowreq_ctx *
                                     rowreq_ctx,
                                     U64 brokerExchangeByteRoutes_val);
    int            
        brokerExchangeByteRoutes_undo(brokerExchangeTable_rowreq_ctx *
                                      rowreq_ctx);


    int            
        brokerExchangeTable_check_dependencies
        (brokerExchangeTable_rowreq_ctx * ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* brokerEXCHANGETABLE_DATA_SET_H */
