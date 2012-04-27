#ifdef __cplusplus
extern "C" {
#else
#include <stdbool.h>
#endif

// is something like this defined somewhere else ?
#define HIGHLONG(u64) ((u64 & 0xFFFFFFFF00000000) >> 32)
#define LOWLONG(u64) (u64 & 0x00000000FFFFFFFF)

bool init_qmf(char * brokerUrl, char * connect_options, char * qmf_options);
void close_qmf();

void *qpidGet(const char * buf);
void qpidRelease(void * pEvent);
unsigned int qpidGetCount(void *p);
void * qpidGetDataRow(void *p, unsigned int index);
void qpidReleaseDataRow(void *pRow);

uint64_t 	qpidGetU64(void *p, const char *attrib);
uint32_t	qpidGetU32(void *p, const char *attrib);
uint16_t	qpidGetU16(void *p, const char *attrib);
const char *qpidGetString(void *p, const char *attrib);
bool 		qpidGetBool(void *p, const char *attrib);

void qpidGetScalarString(const char *className, const char *scalarName, char *buf, size_t len);
void qpidGetScalarBool(const char *className, const char *scalarName, bool *truthVal);
void qpidGetScalarU64(const char *className, const char *scalarName, uint64_t *u64);
void qpidGetScalarU32(const char *className, const char *scalarName, uint32_t *u32);
void qpidGetScalarU16(const char *className, const char *scalarName, uint16_t *u16);

#ifdef __cplusplus
}
#endif
