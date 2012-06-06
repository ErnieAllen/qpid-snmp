/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
#ifndef RHM010LINKTABLE_DATA_SET_H
#define RHM010LINKTABLE_DATA_SET_H

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
 *** Table rhm010LinkTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010LinkTable is subid 1 of rhm010Links.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.11.1, length: 12
     */


    int             rhm010LinkTable_undo_setup(rhm010LinkTable_rowreq_ctx *
                                               rowreq_ctx);
    int             rhm010LinkTable_undo_cleanup(rhm010LinkTable_rowreq_ctx
                                                 * rowreq_ctx);
    int             rhm010LinkTable_undo(rhm010LinkTable_rowreq_ctx *
                                         rowreq_ctx);
    int             rhm010LinkTable_commit(rhm010LinkTable_rowreq_ctx *
                                           rowreq_ctx);
    int             rhm010LinkTable_undo_commit(rhm010LinkTable_rowreq_ctx
                                                * rowreq_ctx);


    int            
        rhm010LinkVhostRef_check_value(rhm010LinkTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *rhm010LinkVhostRef_val_ptr,
                                       size_t
                                       rhm010LinkVhostRef_val_ptr_len);
    int            
        rhm010LinkVhostRef_undo_setup(rhm010LinkTable_rowreq_ctx *
                                      rowreq_ctx);
    int             rhm010LinkVhostRef_set(rhm010LinkTable_rowreq_ctx *
                                           rowreq_ctx,
                                           char
                                           *rhm010LinkVhostRef_val_ptr,
                                           size_t
                                           rhm010LinkVhostRef_val_ptr_len);
    int             rhm010LinkVhostRef_undo(rhm010LinkTable_rowreq_ctx *
                                            rowreq_ctx);

    int             rhm010LinkHost_check_value(rhm010LinkTable_rowreq_ctx *
                                               rowreq_ctx,
                                               char
                                               *rhm010LinkHost_val_ptr,
                                               size_t
                                               rhm010LinkHost_val_ptr_len);
    int             rhm010LinkHost_undo_setup(rhm010LinkTable_rowreq_ctx *
                                              rowreq_ctx);
    int             rhm010LinkHost_set(rhm010LinkTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char *rhm010LinkHost_val_ptr,
                                       size_t rhm010LinkHost_val_ptr_len);
    int             rhm010LinkHost_undo(rhm010LinkTable_rowreq_ctx *
                                        rowreq_ctx);

    int             rhm010LinkPort_check_value(rhm010LinkTable_rowreq_ctx *
                                               rowreq_ctx,
                                               long rhm010LinkPort_val);
    int             rhm010LinkPort_undo_setup(rhm010LinkTable_rowreq_ctx *
                                              rowreq_ctx);
    int             rhm010LinkPort_set(rhm010LinkTable_rowreq_ctx *
                                       rowreq_ctx,
                                       long rhm010LinkPort_val);
    int             rhm010LinkPort_undo(rhm010LinkTable_rowreq_ctx *
                                        rowreq_ctx);

    int            
        rhm010LinkTransport_check_value(rhm010LinkTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *rhm010LinkTransport_val_ptr,
                                        size_t
                                        rhm010LinkTransport_val_ptr_len);
    int            
        rhm010LinkTransport_undo_setup(rhm010LinkTable_rowreq_ctx *
                                       rowreq_ctx);
    int             rhm010LinkTransport_set(rhm010LinkTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *rhm010LinkTransport_val_ptr,
                                            size_t
                                            rhm010LinkTransport_val_ptr_len);
    int             rhm010LinkTransport_undo(rhm010LinkTable_rowreq_ctx *
                                             rowreq_ctx);

    int            
        rhm010LinkDurable_check_value(rhm010LinkTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long rhm010LinkDurable_val);
    int             rhm010LinkDurable_undo_setup(rhm010LinkTable_rowreq_ctx
                                                 * rowreq_ctx);
    int             rhm010LinkDurable_set(rhm010LinkTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long rhm010LinkDurable_val);
    int             rhm010LinkDurable_undo(rhm010LinkTable_rowreq_ctx *
                                           rowreq_ctx);

    int             rhm010LinkState_check_value(rhm010LinkTable_rowreq_ctx
                                                * rowreq_ctx,
                                                char
                                                *rhm010LinkState_val_ptr,
                                                size_t
                                                rhm010LinkState_val_ptr_len);
    int             rhm010LinkState_undo_setup(rhm010LinkTable_rowreq_ctx *
                                               rowreq_ctx);
    int             rhm010LinkState_set(rhm010LinkTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *rhm010LinkState_val_ptr,
                                        size_t
                                        rhm010LinkState_val_ptr_len);
    int             rhm010LinkState_undo(rhm010LinkTable_rowreq_ctx *
                                         rowreq_ctx);

    int            
        rhm010LinkLastError_check_value(rhm010LinkTable_rowreq_ctx *
                                        rowreq_ctx,
                                        char *rhm010LinkLastError_val_ptr,
                                        size_t
                                        rhm010LinkLastError_val_ptr_len);
    int            
        rhm010LinkLastError_undo_setup(rhm010LinkTable_rowreq_ctx *
                                       rowreq_ctx);
    int             rhm010LinkLastError_set(rhm010LinkTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            *rhm010LinkLastError_val_ptr,
                                            size_t
                                            rhm010LinkLastError_val_ptr_len);
    int             rhm010LinkLastError_undo(rhm010LinkTable_rowreq_ctx *
                                             rowreq_ctx);


    int            
        rhm010LinkTable_check_dependencies(rhm010LinkTable_rowreq_ctx *
                                           ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* RHM010LINKTABLE_DATA_SET_H */