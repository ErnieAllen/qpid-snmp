/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file qpid010ConnectionTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef qpid010CONNECTIONTABLE_DATA_GET_H
#define qpid010CONNECTIONTABLE_DATA_GET_H

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
 *** Table qpid010ConnectionTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::qpid010ConnectionTable is subid 1 of qpid010Connections.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.10.1, length: 12
     */
    /*
     * indexes
     */

    int            
        qpid010ConnectionVhostRef_get(qpid010ConnectionTable_rowreq_ctx *
                                     rowreq_ctx,
                                     char
                                     **qpid010ConnectionVhostRef_val_ptr_ptr,
                                     size_t
                                     *qpid010ConnectionVhostRef_val_ptr_len_ptr);
    int            
        qpid010ConnectionAddress_get(qpid010ConnectionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    char
                                    **qpid010ConnectionAddress_val_ptr_ptr,
                                    size_t
                                    *qpid010ConnectionAddress_val_ptr_len_ptr);
    int            
        qpid010ConnectionIncoming_get(qpid010ConnectionTable_rowreq_ctx *
                                     rowreq_ctx,
                                     u_long *
                                     qpid010ConnectionIncoming_val_ptr);
    int            
        qpid010ConnectionSystemConnection_get
        (qpid010ConnectionTable_rowreq_ctx * rowreq_ctx,
         u_long * qpid010ConnectionSystemConnection_val_ptr);
    int            
        qpid010ConnectionUserProxyAuth_get(qpid010ConnectionTable_rowreq_ctx
                                          * rowreq_ctx,
                                          u_long *
                                          qpid010ConnectionUserProxyAuth_val_ptr);
    int            
        qpid010ConnectionFederationLink_get(qpid010ConnectionTable_rowreq_ctx
                                           * rowreq_ctx,
                                           u_long *
                                           qpid010ConnectionFederationLink_val_ptr);
    int            
        qpid010ConnectionAuthIdentity_get(qpid010ConnectionTable_rowreq_ctx *
                                         rowreq_ctx,
                                         char
                                         **qpid010ConnectionAuthIdentity_val_ptr_ptr,
                                         size_t
                                         *qpid010ConnectionAuthIdentity_val_ptr_len_ptr);
    int            
        qpid010ConnectionRemoteProcessName_get
        (qpid010ConnectionTable_rowreq_ctx * rowreq_ctx,
         char **qpid010ConnectionRemoteProcessName_val_ptr_ptr,
         size_t *qpid010ConnectionRemoteProcessName_val_ptr_len_ptr);
    int            
        qpid010ConnectionRemotePid_get(qpid010ConnectionTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      qpid010ConnectionRemotePid_val_ptr);
    int            
        qpid010ConnectionRemoteParentPid_get
        (qpid010ConnectionTable_rowreq_ctx * rowreq_ctx,
         u_long * qpid010ConnectionRemoteParentPid_val_ptr);
    int            
        qpid010ConnectionShadow_get(qpid010ConnectionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   u_long *
                                   qpid010ConnectionShadow_val_ptr);
    int            
        qpid010ConnectionSaslMechanism_get(qpid010ConnectionTable_rowreq_ctx
                                          * rowreq_ctx,
                                          char
                                          **qpid010ConnectionSaslMechanism_val_ptr_ptr,
                                          size_t
                                          *qpid010ConnectionSaslMechanism_val_ptr_len_ptr);
    int            
        qpid010ConnectionSaslSsf_get(qpid010ConnectionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    long *qpid010ConnectionSaslSsf_val_ptr);
    int            
        qpid010ConnectionClosing_get(qpid010ConnectionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    qpid010ConnectionClosing_val_ptr);
    int            
        qpid010ConnectionFramesFromClient_get
        (qpid010ConnectionTable_rowreq_ctx * rowreq_ctx,
         U64 * qpid010ConnectionFramesFromClient_val_ptr);
    int            
        qpid010ConnectionFramesToClient_get(qpid010ConnectionTable_rowreq_ctx
                                           * rowreq_ctx,
                                           U64 *
                                           qpid010ConnectionFramesToClient_val_ptr);
    int            
        qpid010ConnectionBytesFromClient_get
        (qpid010ConnectionTable_rowreq_ctx * rowreq_ctx,
         U64 * qpid010ConnectionBytesFromClient_val_ptr);
    int            
        qpid010ConnectionBytesToClient_get(qpid010ConnectionTable_rowreq_ctx
                                          * rowreq_ctx,
                                          U64 *
                                          qpid010ConnectionBytesToClient_val_ptr);
    int            
        qpid010ConnectionMsgsFromClient_get(qpid010ConnectionTable_rowreq_ctx
                                           * rowreq_ctx,
                                           U64 *
                                           qpid010ConnectionMsgsFromClient_val_ptr);
    int            
        qpid010ConnectionMsgsToClient_get(qpid010ConnectionTable_rowreq_ctx *
                                         rowreq_ctx,
                                         U64 *
                                         qpid010ConnectionMsgsToClient_val_ptr);


    int            
        qpid010ConnectionTable_indexes_set_tbl_idx
        (qpid010ConnectionTable_mib_index * tbl_idx,
         u_long qpid010ConnectionInternalIndex_val);
    int            
        qpid010ConnectionTable_indexes_set(qpid010ConnectionTable_rowreq_ctx
                                          * rowreq_ctx,
                                          u_long
                                          qpid010ConnectionInternalIndex_val);




#ifdef __cplusplus
}
#endif
#endif                          /* qpid010CONNECTIONTABLE_DATA_GET_H */
/** @} */
