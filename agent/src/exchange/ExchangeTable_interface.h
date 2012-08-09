/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef brokerEXCHANGETABLE_INTERFACE_H
#define brokerEXCHANGETABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "ExchangeTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _brokerExchangeTable_initialize_interface
        (brokerExchangeTable_registration * user_ctx, u_long flags);
    void           
        _brokerExchangeTable_shutdown_interface
        (brokerExchangeTable_registration * user_ctx);

    brokerExchangeTable_registration
        *brokerExchangeTable_registration_get(void);

    brokerExchangeTable_registration
        *brokerExchangeTable_registration_set
        (brokerExchangeTable_registration * newreg);

    netsnmp_container *brokerExchangeTable_container_get(void);
    int             brokerExchangeTable_container_size(void);

    u_int           brokerExchangeTable_dirty_get(void);
    void            brokerExchangeTable_dirty_set(u_int status);

    brokerExchangeTable_rowreq_ctx
        *brokerExchangeTable_allocate_rowreq_ctx(void *);
    void           
        brokerExchangeTable_release_rowreq_ctx
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);

    int             brokerExchangeTable_index_to_oid(netsnmp_index *
                                                     oid_idx,
                                                     brokerExchangeTable_mib_index
                                                     * mib_idx);
    int             brokerExchangeTable_index_from_oid(netsnmp_index *
                                                       oid_idx,
                                                       brokerExchangeTable_mib_index
                                                       * mib_idx);

    /*
     *********************************************************************
     * Persistent declarations
     */
    /*
     * persistence
     */
#define LINE_TERM_CHAR '$'

    void           
        brokerExchangeTable_container_init_persistence(netsnmp_container *
                                                       container);
    int            
        brokerExchangeTable_container_should_save
        (brokerExchangeTable_rowreq_ctx * rowreq_ctx);


    /*
     * access to certain internals. use with caution!
     */
    void           
        brokerExchangeTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* brokerEXCHANGETABLE_INTERFACE_H */
/** @} */
