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
#ifndef qpid010QUEUETABLE_INTERFACE_H
#define qpid010QUEUETABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "QueueTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _qpid010QueueTable_initialize_interface
        (qpid010QueueTable_registration * user_ctx, u_long flags);
    void           
        _qpid010QueueTable_shutdown_interface(qpid010QueueTable_registration
                                             * user_ctx);

    qpid010QueueTable_registration *qpid010QueueTable_registration_get(void);

    qpid010QueueTable_registration
        *qpid010QueueTable_registration_set(qpid010QueueTable_registration *
                                           newreg);

    netsnmp_container *qpid010QueueTable_container_get(void);
    int             qpid010QueueTable_container_size(void);

    u_int           qpid010QueueTable_dirty_get(void);
    void            qpid010QueueTable_dirty_set(u_int status);

    qpid010QueueTable_rowreq_ctx *qpid010QueueTable_allocate_rowreq_ctx(void
                                                                      *);
    void           
        qpid010QueueTable_release_rowreq_ctx(qpid010QueueTable_rowreq_ctx *
                                            rowreq_ctx);

    int             qpid010QueueTable_index_to_oid(netsnmp_index * oid_idx,
                                                  qpid010QueueTable_mib_index
                                                  * mib_idx);
    int             qpid010QueueTable_index_from_oid(netsnmp_index *
                                                    oid_idx,
                                                    qpid010QueueTable_mib_index
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
        qpid010QueueTable_container_init_persistence(netsnmp_container *
                                                    container);
    int            
        qpid010QueueTable_container_should_save(qpid010QueueTable_rowreq_ctx
                                               * rowreq_ctx);


    /*
     * access to certain internals. use with caution!
     */
    void            qpid010QueueTable_valid_columns_set(netsnmp_column_info
                                                       *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* qpid010QUEUETABLE_INTERFACE_H */
/** @} */