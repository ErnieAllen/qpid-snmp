/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef qpid010BRIDGETABLE_DATA_SET_H
#define qpid010BRIDGETABLE_DATA_SET_H

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
 *** Table qpid010BridgeTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010BridgeTable is subid 1 of qpid010Bridges.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060,15.1.1.12.1, length: 12
     */


    int            
        qpid010BridgeTable_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                     rowreq_ctx);
    int            
        qpid010BridgeTable_undo_cleanup(qpid010BridgeTable_rowreq_ctx *
                                       rowreq_ctx);
    int             qpid010BridgeTable_undo(qpid010BridgeTable_rowreq_ctx *
                                           rowreq_ctx);
    int             qpid010BridgeTable_commit(qpid010BridgeTable_rowreq_ctx *
                                             rowreq_ctx);
    int            
        qpid010BridgeTable_undo_commit(qpid010BridgeTable_rowreq_ctx *
                                      rowreq_ctx);


    int            
        qpid010BridgeLinkRef_check_value(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010BridgeLinkRef_val_ptr,
                                        size_t
                                        qpid010BridgeLinkRef_val_ptr_len);
    int            
        qpid010BridgeLinkRef_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                       rowreq_ctx);
    int             qpid010BridgeLinkRef_set(qpid010BridgeTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *qpid010BridgeLinkRef_val_ptr,
                                            size_t
                                            qpid010BridgeLinkRef_val_ptr_len);
    int             qpid010BridgeLinkRef_undo(qpid010BridgeTable_rowreq_ctx *
                                             rowreq_ctx);

    int            
        qpid010BridgeChannelId_check_value(qpid010BridgeTable_rowreq_ctx *
                                          rowreq_ctx,
                                          long qpid010BridgeChannelId_val);
    int            
        qpid010BridgeChannelId_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx);
    int             qpid010BridgeChannelId_set(qpid010BridgeTable_rowreq_ctx
                                              * rowreq_ctx,
                                              long
                                              qpid010BridgeChannelId_val);
    int             qpid010BridgeChannelId_undo(qpid010BridgeTable_rowreq_ctx
                                               * rowreq_ctx);

    int            
        qpid010BridgeDurable_check_value(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long qpid010BridgeDurable_val);
    int            
        qpid010BridgeDurable_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                       rowreq_ctx);
    int             qpid010BridgeDurable_set(qpid010BridgeTable_rowreq_ctx *
                                            rowreq_ctx,
                                            u_long
                                            qpid010BridgeDurable_val);
    int             qpid010BridgeDurable_undo(qpid010BridgeTable_rowreq_ctx *
                                             rowreq_ctx);

    int            
        qpid010BridgeSrc_check_value(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char *qpid010BridgeSrc_val_ptr,
                                    size_t qpid010BridgeSrc_val_ptr_len);
    int             qpid010BridgeSrc_undo_setup(qpid010BridgeTable_rowreq_ctx
                                               * rowreq_ctx);
    int             qpid010BridgeSrc_set(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010BridgeSrc_val_ptr,
                                        size_t
                                        qpid010BridgeSrc_val_ptr_len);
    int             qpid010BridgeSrc_undo(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        qpid010BridgeDest_check_value(qpid010BridgeTable_rowreq_ctx *
                                     rowreq_ctx,
                                     char *qpid010BridgeDest_val_ptr,
                                     size_t qpid010BridgeDest_val_ptr_len);
    int            
        qpid010BridgeDest_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx);
    int             qpid010BridgeDest_set(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx,
                                         char *qpid010BridgeDest_val_ptr,
                                         size_t
                                         qpid010BridgeDest_val_ptr_len);
    int             qpid010BridgeDest_undo(qpid010BridgeTable_rowreq_ctx *
                                          rowreq_ctx);

    int            
        qpid010BridgeKey_check_value(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char *qpid010BridgeKey_val_ptr,
                                    size_t qpid010BridgeKey_val_ptr_len);
    int             qpid010BridgeKey_undo_setup(qpid010BridgeTable_rowreq_ctx
                                               * rowreq_ctx);
    int             qpid010BridgeKey_set(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010BridgeKey_val_ptr,
                                        size_t
                                        qpid010BridgeKey_val_ptr_len);
    int             qpid010BridgeKey_undo(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        qpid010BridgeSrcIsQueue_check_value(qpid010BridgeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long
                                           qpid010BridgeSrcIsQueue_val);
    int            
        qpid010BridgeSrcIsQueue_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                          rowreq_ctx);
    int             qpid010BridgeSrcIsQueue_set(qpid010BridgeTable_rowreq_ctx
                                               * rowreq_ctx,
                                               u_long
                                               qpid010BridgeSrcIsQueue_val);
    int            
        qpid010BridgeSrcIsQueue_undo(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        qpid010BridgeSrcIsLocal_check_value(qpid010BridgeTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long
                                           qpid010BridgeSrcIsLocal_val);
    int            
        qpid010BridgeSrcIsLocal_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                          rowreq_ctx);
    int             qpid010BridgeSrcIsLocal_set(qpid010BridgeTable_rowreq_ctx
                                               * rowreq_ctx,
                                               u_long
                                               qpid010BridgeSrcIsLocal_val);
    int            
        qpid010BridgeSrcIsLocal_undo(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx);

    int            
        qpid010BridgeTag_check_value(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char *qpid010BridgeTag_val_ptr,
                                    size_t qpid010BridgeTag_val_ptr_len);
    int             qpid010BridgeTag_undo_setup(qpid010BridgeTable_rowreq_ctx
                                               * rowreq_ctx);
    int             qpid010BridgeTag_set(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010BridgeTag_val_ptr,
                                        size_t
                                        qpid010BridgeTag_val_ptr_len);
    int             qpid010BridgeTag_undo(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        qpid010BridgeExcludes_check_value(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx,
                                         char
                                         *qpid010BridgeExcludes_val_ptr,
                                         size_t
                                         qpid010BridgeExcludes_val_ptr_len);
    int            
        qpid010BridgeExcludes_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx);
    int             qpid010BridgeExcludes_set(qpid010BridgeTable_rowreq_ctx *
                                             rowreq_ctx,
                                             char
                                             *qpid010BridgeExcludes_val_ptr,
                                             size_t
                                             qpid010BridgeExcludes_val_ptr_len);
    int             qpid010BridgeExcludes_undo(qpid010BridgeTable_rowreq_ctx
                                              * rowreq_ctx);

    int            
        qpid010BridgeDynamic_check_value(qpid010BridgeTable_rowreq_ctx *
                                        rowreq_ctx,
                                        u_long qpid010BridgeDynamic_val);
    int            
        qpid010BridgeDynamic_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                       rowreq_ctx);
    int             qpid010BridgeDynamic_set(qpid010BridgeTable_rowreq_ctx *
                                            rowreq_ctx,
                                            u_long
                                            qpid010BridgeDynamic_val);
    int             qpid010BridgeDynamic_undo(qpid010BridgeTable_rowreq_ctx *
                                             rowreq_ctx);

    int            
        qpid010BridgeSync_check_value(qpid010BridgeTable_rowreq_ctx *
                                     rowreq_ctx,
                                     long qpid010BridgeSync_val);
    int            
        qpid010BridgeSync_undo_setup(qpid010BridgeTable_rowreq_ctx *
                                    rowreq_ctx);
    int             qpid010BridgeSync_set(qpid010BridgeTable_rowreq_ctx *
                                         rowreq_ctx,
                                         long qpid010BridgeSync_val);
    int             qpid010BridgeSync_undo(qpid010BridgeTable_rowreq_ctx *
                                          rowreq_ctx);


    int            
        qpid010BridgeTable_check_dependencies(qpid010BridgeTable_rowreq_ctx *
                                             ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* qpid010BRIDGETABLE_DATA_SET_H */