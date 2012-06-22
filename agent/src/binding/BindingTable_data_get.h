/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file qpid010BindingTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef qpid010BINDINGTABLE_DATA_GET_H
#define qpid010BINDINGTABLE_DATA_GET_H

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
 *** Table qpid010BindingTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010BindingTable is subid 1 of qpid010Bindings.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060,15.1.1.8.1, length: 12
     */
    /*
     * indexes
     */

    int            
        qpid010BindingExchangeRef_get(qpid010BindingTable_rowreq_ctx *
                                     rowreq_ctx,
                                     char
                                     **qpid010BindingExchangeRef_val_ptr_ptr,
                                     size_t
                                     *qpid010BindingExchangeRef_val_ptr_len_ptr);
    int             qpid010BindingQueueRef_get(qpid010BindingTable_rowreq_ctx
                                              * rowreq_ctx,
                                              char
                                              **qpid010BindingQueueRef_val_ptr_ptr,
                                              size_t
                                              *qpid010BindingQueueRef_val_ptr_len_ptr);
    int            
        qpid010BindingBindingKey_get(qpid010BindingTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char
                                    **qpid010BindingBindingKey_val_ptr_ptr,
                                    size_t
                                    *qpid010BindingBindingKey_val_ptr_len_ptr);
    int            
        qpid010BindingArguments_get(qpid010BindingTable_rowreq_ctx *
                                   rowreq_ctx,
                                   char
                                   **qpid010BindingArguments_val_ptr_ptr,
                                   size_t
                                   *qpid010BindingArguments_val_ptr_len_ptr);
    int             qpid010BindingOrigin_get(qpid010BindingTable_rowreq_ctx *
                                            rowreq_ctx,
                                            char
                                            **qpid010BindingOrigin_val_ptr_ptr,
                                            size_t
                                            *qpid010BindingOrigin_val_ptr_len_ptr);
    int            
        qpid010BindingMsgMatched_get(qpid010BindingTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 * qpid010BindingMsgMatched_val_ptr);


    int            
        qpid010BindingTable_indexes_set_tbl_idx(qpid010BindingTable_mib_index
                                               * tbl_idx,
                                               u_long
                                               qpid010BindingInternalIndex_val);
    int            
        qpid010BindingTable_indexes_set(qpid010BindingTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long
                                       qpid010BindingInternalIndex_val);




#ifdef __cplusplus
}
#endif
#endif                          /* qpid010BINDINGTABLE_DATA_GET_H */
/** @} */
