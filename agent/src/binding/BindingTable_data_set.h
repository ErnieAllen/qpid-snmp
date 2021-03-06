/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef brokerBINDINGTABLE_DATA_SET_H
#define brokerBINDINGTABLE_DATA_SET_H

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
 *** Table brokerBindingTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * QPID-MESSAGING-MIB::brokerBindingTable is subid 1 of brokerBindings.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.8.1, length: 12
     */


    int            
        brokerBindingTable_undo_setup(brokerBindingTable_rowreq_ctx *
                                      rowreq_ctx);
    int            
        brokerBindingTable_undo_cleanup(brokerBindingTable_rowreq_ctx *
                                        rowreq_ctx);
    int             brokerBindingTable_undo(brokerBindingTable_rowreq_ctx *
                                            rowreq_ctx);
    int             brokerBindingTable_commit(brokerBindingTable_rowreq_ctx
                                              * rowreq_ctx);
    int            
        brokerBindingTable_undo_commit(brokerBindingTable_rowreq_ctx *
                                       rowreq_ctx);


    int            
        brokerBindingExchangeRef_check_value(brokerBindingTable_rowreq_ctx
                                             * rowreq_ctx,
                                             char
                                             *brokerBindingExchangeRef_val_ptr,
                                             size_t
                                             brokerBindingExchangeRef_val_ptr_len);
    int            
        brokerBindingExchangeRef_undo_setup(brokerBindingTable_rowreq_ctx *
                                            rowreq_ctx);
    int            
        brokerBindingExchangeRef_set(brokerBindingTable_rowreq_ctx *
                                     rowreq_ctx,
                                     char
                                     *brokerBindingExchangeRef_val_ptr,
                                     size_t
                                     brokerBindingExchangeRef_val_ptr_len);
    int            
        brokerBindingExchangeRef_undo(brokerBindingTable_rowreq_ctx *
                                      rowreq_ctx);

    int            
        brokerBindingQueueRef_check_value(brokerBindingTable_rowreq_ctx *
                                          rowreq_ctx,
                                          char
                                          *brokerBindingQueueRef_val_ptr,
                                          size_t
                                          brokerBindingQueueRef_val_ptr_len);
    int            
        brokerBindingQueueRef_undo_setup(brokerBindingTable_rowreq_ctx *
                                         rowreq_ctx);
    int             brokerBindingQueueRef_set(brokerBindingTable_rowreq_ctx
                                              * rowreq_ctx,
                                              char
                                              *brokerBindingQueueRef_val_ptr,
                                              size_t
                                              brokerBindingQueueRef_val_ptr_len);
    int            
        brokerBindingQueueRef_undo(brokerBindingTable_rowreq_ctx *
                                   rowreq_ctx);

    int            
        brokerBindingBindingKey_check_value(brokerBindingTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *brokerBindingBindingKey_val_ptr,
                                            size_t
                                            brokerBindingBindingKey_val_ptr_len);
    int            
        brokerBindingBindingKey_undo_setup(brokerBindingTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        brokerBindingBindingKey_set(brokerBindingTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char *brokerBindingBindingKey_val_ptr,
                                    size_t
                                    brokerBindingBindingKey_val_ptr_len);
    int            
        brokerBindingBindingKey_undo(brokerBindingTable_rowreq_ctx *
                                     rowreq_ctx);

    int            
        brokerBindingArguments_check_value(brokerBindingTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *brokerBindingArguments_val_ptr,
                                           size_t
                                           brokerBindingArguments_val_ptr_len);
    int            
        brokerBindingArguments_undo_setup(brokerBindingTable_rowreq_ctx *
                                          rowreq_ctx);
    int            
        brokerBindingArguments_set(brokerBindingTable_rowreq_ctx *
                                   rowreq_ctx,
                                   char *brokerBindingArguments_val_ptr,
                                   size_t
                                   brokerBindingArguments_val_ptr_len);
    int            
        brokerBindingArguments_undo(brokerBindingTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        brokerBindingOrigin_check_value(brokerBindingTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *brokerBindingOrigin_val_ptr,
                                        size_t
                                        brokerBindingOrigin_val_ptr_len);
    int            
        brokerBindingOrigin_undo_setup(brokerBindingTable_rowreq_ctx *
                                       rowreq_ctx);
    int             brokerBindingOrigin_set(brokerBindingTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *brokerBindingOrigin_val_ptr,
                                            size_t
                                            brokerBindingOrigin_val_ptr_len);
    int             brokerBindingOrigin_undo(brokerBindingTable_rowreq_ctx
                                             * rowreq_ctx);

    int            
        brokerBindingMsgMatched_check_value(brokerBindingTable_rowreq_ctx *
                                            rowreq_ctx,
                                            U64
                                            brokerBindingMsgMatched_val);
    int            
        brokerBindingMsgMatched_undo_setup(brokerBindingTable_rowreq_ctx *
                                           rowreq_ctx);
    int            
        brokerBindingMsgMatched_set(brokerBindingTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 brokerBindingMsgMatched_val);
    int            
        brokerBindingMsgMatched_undo(brokerBindingTable_rowreq_ctx *
                                     rowreq_ctx);


    int            
        brokerBindingTable_check_dependencies(brokerBindingTable_rowreq_ctx
                                              * ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* brokerBINDINGTABLE_DATA_SET_H */
