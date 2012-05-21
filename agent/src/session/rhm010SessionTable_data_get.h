/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file rhm010SessionTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef RHM010SESSIONTABLE_DATA_GET_H
#define RHM010SESSIONTABLE_DATA_GET_H

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
 *** Table rhm010SessionTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010SessionTable is subid 1 of rhm010Sessions.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.13.1, length: 12
     */
    /*
     * indexes
     */

    int             rhm010SessionVhostRef_get(rhm010SessionTable_rowreq_ctx
                                              * rowreq_ctx,
                                              char
                                              **rhm010SessionVhostRef_val_ptr_ptr,
                                              size_t
                                              *rhm010SessionVhostRef_val_ptr_len_ptr);
    int             rhm010SessionName_get(rhm010SessionTable_rowreq_ctx *
                                          rowreq_ctx,
                                          char
                                          **rhm010SessionName_val_ptr_ptr,
                                          size_t
                                          *rhm010SessionName_val_ptr_len_ptr);
    int            
        rhm010SessionChannelId_get(rhm010SessionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   long *rhm010SessionChannelId_val_ptr);
    int            
        rhm010SessionConnectionRef_get(rhm010SessionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char
                                       **rhm010SessionConnectionRef_val_ptr_ptr,
                                       size_t
                                       *rhm010SessionConnectionRef_val_ptr_len_ptr);
    int            
        rhm010SessionDetachedLifespan_get(rhm010SessionTable_rowreq_ctx *
                                          rowreq_ctx,
                                          u_long *
                                          rhm010SessionDetachedLifespan_val_ptr);
    int             rhm010SessionAttached_get(rhm010SessionTable_rowreq_ctx
                                              * rowreq_ctx,
                                              u_long *
                                              rhm010SessionAttached_val_ptr);
    int            
        rhm010SessionExpireTime_get(rhm010SessionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    u_long *
                                    rhm010SessionExpireTime_val_ptr);
    int            
        rhm010SessionMaxClientRate_get(rhm010SessionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long *
                                       rhm010SessionMaxClientRate_val_ptr);
    int            
        rhm010SessionFramesOutstanding_get(rhm010SessionTable_rowreq_ctx *
                                           rowreq_ctx,
                                           u_long *
                                           rhm010SessionFramesOutstanding_val_ptr);
    int            
        rhm010SessionTxnStarts_get(rhm010SessionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   U64 * rhm010SessionTxnStarts_val_ptr);
    int            
        rhm010SessionTxnCommits_get(rhm010SessionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 * rhm010SessionTxnCommits_val_ptr);
    int            
        rhm010SessionTxnRejects_get(rhm010SessionTable_rowreq_ctx *
                                    rowreq_ctx,
                                    U64 * rhm010SessionTxnRejects_val_ptr);
    int             rhm010SessionTxnCount_get(rhm010SessionTable_rowreq_ctx
                                              * rowreq_ctx,
                                              u_long *
                                              rhm010SessionTxnCount_val_ptr);
    int            
        rhm010SessionClientCredit_get(rhm010SessionTable_rowreq_ctx *
                                      rowreq_ctx,
                                      u_long *
                                      rhm010SessionClientCredit_val_ptr);


    int            
        rhm010SessionTable_indexes_set_tbl_idx(rhm010SessionTable_mib_index
                                               * tbl_idx,
                                               u_long
                                               rhm010SessionInternalIndex_val);
    int            
        rhm010SessionTable_indexes_set(rhm010SessionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long
                                       rhm010SessionInternalIndex_val);




#ifdef __cplusplus
}
#endif
#endif                          /* RHM010SESSIONTABLE_DATA_GET_H */
/** @} */