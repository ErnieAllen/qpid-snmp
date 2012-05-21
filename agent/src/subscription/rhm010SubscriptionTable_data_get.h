/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 *
 * @file rhm010SubscriptionTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef RHM010SUBSCRIPTIONTABLE_DATA_GET_H
#define RHM010SUBSCRIPTIONTABLE_DATA_GET_H

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
 *** Table rhm010SubscriptionTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * MRG-MESSAGING-MIB::rhm010SubscriptionTable is subid 1 of rhm010Subscriptions.
     * Its status is Current.
     * OID: .1.3.6.1.4.1.2312.5672.1.1.9.1, length: 12
     */
    /*
     * indexes
     */

    int            
        rhm010SubscriptionSessionRef_get(rhm010SubscriptionTable_rowreq_ctx
                                         * rowreq_ctx,
                                         char
                                         **rhm010SubscriptionSessionRef_val_ptr_ptr,
                                         size_t
                                         *rhm010SubscriptionSessionRef_val_ptr_len_ptr);
    int            
        rhm010SubscriptionQueueRef_get(rhm010SubscriptionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       char
                                       **rhm010SubscriptionQueueRef_val_ptr_ptr,
                                       size_t
                                       *rhm010SubscriptionQueueRef_val_ptr_len_ptr);
    int            
        rhm010SubscriptionName_get(rhm010SubscriptionTable_rowreq_ctx *
                                   rowreq_ctx,
                                   char
                                   **rhm010SubscriptionName_val_ptr_ptr,
                                   size_t
                                   *rhm010SubscriptionName_val_ptr_len_ptr);
    int            
        rhm010SubscriptionBrowsing_get(rhm010SubscriptionTable_rowreq_ctx *
                                       rowreq_ctx,
                                       u_long *
                                       rhm010SubscriptionBrowsing_val_ptr);
    int            
        rhm010SubscriptionAcknowledged_get
        (rhm010SubscriptionTable_rowreq_ctx * rowreq_ctx,
         u_long * rhm010SubscriptionAcknowledged_val_ptr);
    int            
        rhm010SubscriptionExclusive_get(rhm010SubscriptionTable_rowreq_ctx
                                        * rowreq_ctx,
                                        u_long *
                                        rhm010SubscriptionExclusive_val_ptr);
    int            
        rhm010SubscriptionCreditMode_get(rhm010SubscriptionTable_rowreq_ctx
                                         * rowreq_ctx,
                                         char
                                         **rhm010SubscriptionCreditMode_val_ptr_ptr,
                                         size_t
                                         *rhm010SubscriptionCreditMode_val_ptr_len_ptr);
    int            
        rhm010SubscriptionArguments_get(rhm010SubscriptionTable_rowreq_ctx
                                        * rowreq_ctx,
                                        char
                                        **rhm010SubscriptionArguments_val_ptr_ptr,
                                        size_t
                                        *rhm010SubscriptionArguments_val_ptr_len_ptr);
    int            
        rhm010SubscriptionDelivered_get(rhm010SubscriptionTable_rowreq_ctx
                                        * rowreq_ctx,
                                        U64 *
                                        rhm010SubscriptionDelivered_val_ptr);


    int            
        rhm010SubscriptionTable_indexes_set_tbl_idx
        (rhm010SubscriptionTable_mib_index * tbl_idx,
         u_long rhm010SubscriptionInternalIndex_val);
    int            
        rhm010SubscriptionTable_indexes_set
        (rhm010SubscriptionTable_rowreq_ctx * rowreq_ctx,
         u_long rhm010SubscriptionInternalIndex_val);




#ifdef __cplusplus
}
#endif
#endif                          /* RHM010SUBSCRIPTIONTABLE_DATA_GET_H */
/** @} */
