#ifndef NETSNMP_FEATURES_H
#define NETSNMP_FEATURES_H

// copy of system header from snmp 5.7
// needed since rhel 6 uses snmp 5.5 which doesn't have these defines


/* prototypes always needed */
#ifndef NETSNMP_FEATURE_CHECKING
#define netsnmp_feature_provide(X)
#define netsnmp_feature_require(X)
#define netsnmp_feature_want(X)
#define netsnmp_feature_child_of(X, Y)
#endif

#define netsnmp_feature_unused(X) char netsnmp_feature_unused_ ## X

#endif /* NETSNMP_FEATURES_H */
