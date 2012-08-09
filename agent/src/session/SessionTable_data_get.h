/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file brokerSessionTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef brokerSESSIONTABLE_DATA_GET_H
#define brokerSESSIONTABLE_DATA_GET_H

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
 *** Table brokerSessionTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * QPID-MESSAGING-MIB::brokerSessionTable is subid 1 of brokerSessions.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.18060.5672.1.1.13.1, length: 12
     */
    /*
     * indexes
     */

    int             brokerSessionVhostRef_get(brokerSessionTable_rowreq_ctx
                                              * rowreq_ctx,
                                              char
                                              **brokerSessionVhostRef_val_ptr_ptr,
                                              size_t
                                              *brokerSessionVhostRef_val_ptr_len_ptr);
    int             brokerSessionName_get(brokerSessionTable_rowreq_ctx *
                                          rowreq_ctx,
                                          char
                                          **brokerSessionName_val_ptr_ptr,
                                          size_t
                                          *brokerSessionName_val_ptr_len_ptr);
    int            
        brokerSessionChannelId_get(brokerSessionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   long *brokerSessionChannelId_val_ptr);
    int            
        brokerSessionConnectionRef_get(brokerSessionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char
                                       **brokerSessionConnectionRef_val_ptr_ptr,
                                       size_t
                                       *brokerSessionConnectionRef_val_ptr_len_ptr);
    int            
        brokerSessionDetachedLifespan_get(brokerSessionTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long *
                                          brokerSessionDetachedLifespan_val_ptr);
    int             brokerSessionAttached_get(brokerSessionTable_rowreq_ctx
                                              * rowreq_ctx,
                                              u_long *
                                              brokerSessionAttached_val_ptr);
    int            
        brokerSessionExpireTime_get(brokerSessionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    brokerSessionExpireTime_val_ptr);
    int            
        brokerSessionMaxClientRate_get(brokerSessionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long *
                                       brokerSessionMaxClientRate_val_ptr);
    int            
        brokerSessionFramesOutstanding_get(brokerSessionTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           brokerSessionFramesOutstanding_val_ptr);
    int            
        brokerSessionTxnStarts_get(brokerSessionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   U64 * brokerSessionTxnStarts_val_ptr);
    int            
        brokerSessionTxnCommits_get(brokerSessionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 * brokerSessionTxnCommits_val_ptr);
    int            
        brokerSessionTxnRejects_get(brokerSessionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 * brokerSessionTxnRejects_val_ptr);
    int             brokerSessionTxnCount_get(brokerSessionTable_rowreq_ctx
                                              * rowreq_ctx,
                                              u_long *
                                              brokerSessionTxnCount_val_ptr);
    int            
        brokerSessionClientCredit_get(brokerSessionTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      brokerSessionClientCredit_val_ptr);


    int            
        brokerSessionTable_indexes_set_tbl_idx(brokerSessionTable_mib_index
                                               * tbl_idx,
                                               u_long
                                               brokerSessionInternalIndex_val);
    int            
        brokerSessionTable_indexes_set(brokerSessionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long
                                       brokerSessionInternalIndex_val);




#ifdef __cplusplus
}
#endif
#endif                          /* brokerSESSIONTABLE_DATA_GET_H */
/** @} */
