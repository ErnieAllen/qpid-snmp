/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef RHM010SESSIONTABLE_ENUMS_H
#define RHM010SESSIONTABLE_ENUMS_H

#ifdef __cplusplus
extern          "C" {
#endif

    /*
     * NOTES on enums
     * ==============
     *
     * Value Mapping
     * -------------
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them
     * below. For example, a boolean flag (1/0) is usually represented
     * as a TruthValue in a MIB, which maps to the values (1/2).
     *
     */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table rhm010SessionTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * rhm010SessionAttached (TruthValue / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef TRUTHVALUE_ENUMS
#define TRUTHVALUE_ENUMS

#define TRUTHVALUE_TRUE  1
#define TRUTHVALUE_FALSE  2

#endif                          /* TRUTHVALUE_ENUMS */




#ifdef __cplusplus
}
#endif
#endif                          /* RHM010SESSIONTABLE_ENUMS_H */
