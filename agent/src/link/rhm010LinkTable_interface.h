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
#ifndef RHM010LINKTABLE_INTERFACE_H
#define RHM010LINKTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "rhm010LinkTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _rhm010LinkTable_initialize_interface(rhm010LinkTable_registration
                                              * user_ctx, u_long flags);
    void           
        _rhm010LinkTable_shutdown_interface(rhm010LinkTable_registration *
                                            user_ctx);

    rhm010LinkTable_registration *rhm010LinkTable_registration_get(void);

    rhm010LinkTable_registration
        *rhm010LinkTable_registration_set(rhm010LinkTable_registration *
                                          newreg);

    netsnmp_container *rhm010LinkTable_container_get(void);
    int             rhm010LinkTable_container_size(void);

    u_int           rhm010LinkTable_dirty_get(void);
    void            rhm010LinkTable_dirty_set(u_int status);

    rhm010LinkTable_rowreq_ctx *rhm010LinkTable_allocate_rowreq_ctx(void
                                                                    *);
    void           
        rhm010LinkTable_release_rowreq_ctx(rhm010LinkTable_rowreq_ctx *
                                           rowreq_ctx);

    int             rhm010LinkTable_index_to_oid(netsnmp_index * oid_idx,
                                                 rhm010LinkTable_mib_index
                                                 * mib_idx);
    int             rhm010LinkTable_index_from_oid(netsnmp_index * oid_idx,
                                                   rhm010LinkTable_mib_index
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
        rhm010LinkTable_container_init_persistence(netsnmp_container *
                                                   container);
    int            
        rhm010LinkTable_container_should_save(rhm010LinkTable_rowreq_ctx *
                                              rowreq_ctx);


    /*
     * access to certain internals. use with caution!
     */
    void            rhm010LinkTable_valid_columns_set(netsnmp_column_info
                                                      *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* RHM010LINKTABLE_INTERFACE_H */
/** @} */