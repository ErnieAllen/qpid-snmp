/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef qpid010LINKTABLE_DATA_SET_H
#define qpid010LINKTABLE_DATA_SET_H

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
 *** Table qpid010LinkTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010LinkTable is subid 1 of qpid010Links.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060,15.1.1.11.1, length: 12
     */


    int             qpid010LinkTable_undo_setup(qpid010LinkTable_rowreq_ctx *
                                               rowreq_ctx);
    int             qpid010LinkTable_undo_cleanup(qpid010LinkTable_rowreq_ctx
                                                 * rowreq_ctx);
    int             qpid010LinkTable_undo(qpid010LinkTable_rowreq_ctx *
                                         rowreq_ctx);
    int             qpid010LinkTable_commit(qpid010LinkTable_rowreq_ctx *
                                           rowreq_ctx);
    int             qpid010LinkTable_undo_commit(qpid010LinkTable_rowreq_ctx
                                                * rowreq_ctx);


    int            
        qpid010LinkVhostRef_check_value(qpid010LinkTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *qpid010LinkVhostRef_val_ptr,
                                       size_t
                                       qpid010LinkVhostRef_val_ptr_len);
    int            
        qpid010LinkVhostRef_undo_setup(qpid010LinkTable_rowreq_ctx *
                                      rowreq_ctx);
    int             qpid010LinkVhostRef_set(qpid010LinkTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *qpid010LinkVhostRef_val_ptr,
                                           size_t
                                           qpid010LinkVhostRef_val_ptr_len);
    int             qpid010LinkVhostRef_undo(qpid010LinkTable_rowreq_ctx *
                                            rowreq_ctx);

    int             qpid010LinkHost_check_value(qpid010LinkTable_rowreq_ctx *
                                               rowreq_ctx,
                                               char
                                               *qpid010LinkHost_val_ptr,
                                               size_t
                                               qpid010LinkHost_val_ptr_len);
    int             qpid010LinkHost_undo_setup(qpid010LinkTable_rowreq_ctx *
                                              rowreq_ctx);
    int             qpid010LinkHost_set(qpid010LinkTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *qpid010LinkHost_val_ptr,
                                       size_t qpid010LinkHost_val_ptr_len);
    int             qpid010LinkHost_undo(qpid010LinkTable_rowreq_ctx *
                                        rowreq_ctx);

    int             qpid010LinkPort_check_value(qpid010LinkTable_rowreq_ctx *
                                               rowreq_ctx,
                                               long qpid010LinkPort_val);
    int             qpid010LinkPort_undo_setup(qpid010LinkTable_rowreq_ctx *
                                              rowreq_ctx);
    int             qpid010LinkPort_set(qpid010LinkTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long qpid010LinkPort_val);
    int             qpid010LinkPort_undo(qpid010LinkTable_rowreq_ctx *
                                        rowreq_ctx);

    int            
        qpid010LinkTransport_check_value(qpid010LinkTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010LinkTransport_val_ptr,
                                        size_t
                                        qpid010LinkTransport_val_ptr_len);
    int            
        qpid010LinkTransport_undo_setup(qpid010LinkTable_rowreq_ctx *
                                       rowreq_ctx);
    int             qpid010LinkTransport_set(qpid010LinkTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *qpid010LinkTransport_val_ptr,
                                            size_t
                                            qpid010LinkTransport_val_ptr_len);
    int             qpid010LinkTransport_undo(qpid010LinkTable_rowreq_ctx *
                                             rowreq_ctx);

    int            
        qpid010LinkDurable_check_value(qpid010LinkTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long qpid010LinkDurable_val);
    int             qpid010LinkDurable_undo_setup(qpid010LinkTable_rowreq_ctx
                                                 * rowreq_ctx);
    int             qpid010LinkDurable_set(qpid010LinkTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long qpid010LinkDurable_val);
    int             qpid010LinkDurable_undo(qpid010LinkTable_rowreq_ctx *
                                           rowreq_ctx);

    int             qpid010LinkState_check_value(qpid010LinkTable_rowreq_ctx
                                                * rowreq_ctx,
                                                char
                                                *qpid010LinkState_val_ptr,
                                                size_t
                                                qpid010LinkState_val_ptr_len);
    int             qpid010LinkState_undo_setup(qpid010LinkTable_rowreq_ctx *
                                               rowreq_ctx);
    int             qpid010LinkState_set(qpid010LinkTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010LinkState_val_ptr,
                                        size_t
                                        qpid010LinkState_val_ptr_len);
    int             qpid010LinkState_undo(qpid010LinkTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        qpid010LinkLastError_check_value(qpid010LinkTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *qpid010LinkLastError_val_ptr,
                                        size_t
                                        qpid010LinkLastError_val_ptr_len);
    int            
        qpid010LinkLastError_undo_setup(qpid010LinkTable_rowreq_ctx *
                                       rowreq_ctx);
    int             qpid010LinkLastError_set(qpid010LinkTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *qpid010LinkLastError_val_ptr,
                                            size_t
                                            qpid010LinkLastError_val_ptr_len);
    int             qpid010LinkLastError_undo(qpid010LinkTable_rowreq_ctx *
                                             rowreq_ctx);


    int            
        qpid010LinkTable_check_dependencies(qpid010LinkTable_rowreq_ctx *
                                           ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* qpid010LINKTABLE_DATA_SET_H */
