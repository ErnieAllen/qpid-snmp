#include "qpid.hpp"
#include "qpid_api.h"

#include <string.h>

QmfWrapper * wqmf = NULL;

enum scalarType {
   _16,
   _32,
   _64,
   _string,
   _bool
};

struct counter64 {
    unsigned long high;
    unsigned long low;
};

// forward declare function that is private to this file
void qpidGetScalar(const char *className, const char *scalarName, void *scalar, scalarType size, size_t len=0);

void *qpidGet(const char * buf)
{
	if (wqmf->connected()) {
		qmf::ConsoleEvent *pEvent = new qmf::ConsoleEvent();
		wqmf->query(pEvent, buf);
		return (void *)pEvent;
	}
	return (void *)NULL;
}
void qpidRelease(void * pEvent)
{
	if (pEvent) {
		delete (qmf::ConsoleEvent *)pEvent;
	}
}

unsigned int qpidGetCount(void *p)
{
	if (p) {
		qmf::ConsoleEvent * pEvent = (qmf::ConsoleEvent *)p;
		return pEvent->getDataCount();
	}
	return 0;
}

void * qpidGetDataRow(void *p, unsigned int index)
{
	if (p) {
		qmf::ConsoleEvent * pEvent = (qmf::ConsoleEvent *)p;

		if ((pEvent->isNull()) || (!pEvent->isValid()))
			return NULL;

		if (pEvent->getDataCount() < index)
			return NULL;

		qmf::Data * pQmfData = new qmf::Data(pEvent->getData(index));
		return (void *)pQmfData;
	}
	return NULL;
}

void qpidReleaseDataRow(void *pRow)
{
	if (pRow) {
		delete (qmf::Data *)pRow;
	}
}

void qpidGetScalarString(const char *className, const char *scalarName, char *buf, size_t len)
{
	qpidGetScalar(className, scalarName, (void *)buf, _string, len);
}

void qpidGetScalarBool(const char *className, const char *scalarName, bool *truthVal)
{
	qpidGetScalar(className, scalarName, (void *)truthVal, _bool);
}

void qpidGetScalarU64(const char *className, const char *scalarName, uint64_t *u64)
{
	qpidGetScalar(className, scalarName, (void *)u64, _64);
}

void qpidGetScalarS64(const char *className, const char *scalarName, struct counter64 *s64)
{
	uint64_t u64;
	qpidGetScalarU64(className, scalarName, &u64);
	s64->high = HIGHLONG(u64);
	s64->low = LOWLONG(u64);
}

void qpidGetScalarU32(const char *className, const char *scalarName, uint32_t *u32)
{
	qpidGetScalar(className, scalarName, (void *)u32, _32);
}

void qpidGetScalarU16(const char *className, const char *scalarName, uint16_t *u16)
{
	qpidGetScalar(className, scalarName, (void *)u16, _16);
}

void qpidGetScalar(const char *className, const char *scalarName, void *scalar, scalarType size, size_t len)
{
	void *pEvent = qpidGet(className);
	int count = qpidGetCount(pEvent);
	if (count > 0) {
		void * pRow = qpidGetDataRow(pEvent, 0);
		switch (size) {
		case _16:
			*((uint16_t *)scalar) = qpidGetU16(pRow, scalarName);
			break;
		case _32:
			*((uint32_t *)scalar) = qpidGetU32(pRow, scalarName);
			break;
		case _64:
			*((uint64_t *)scalar) = qpidGetU64(pRow, scalarName);
			break;
		case _bool:
			*((bool *)scalar) = qpidGetBool(pRow, scalarName);
			break;
		case _string:
			strncpy((char *)scalar, qpidGetString(pRow, scalarName), len);
			break;
		default:
			break;
		}
	    qpidReleaseDataRow(pRow);
	} else {
		switch (size) {
		case _16:
			*((uint16_t *)scalar) = 0;
			break;
		case _32:
			*((uint32_t *)scalar) = 0;
			break;
		case _64:
			*((uint64_t *)scalar) = 0;
			break;
		case _bool:
			*((bool *)scalar) = false;
			break;
		case _string:
			((char *)scalar)[0] = '\0';
			break;
		default:
			break;
		}
	}
	qpidRelease(pEvent);
}

uint64_t qpidGetU64(void *p, const char *attrib)
{
	if (p) {
		qmf::Data * pQmfData = (qmf::Data *)p;
		try {
			qpid::types::Variant prop(pQmfData->getProperty(attrib));
			return prop.asUint64();
		} catch (qmf::KeyNotFound) {}
	}
	return 0;
}

uint32_t qpidGetU32(void *p, const char *attrib)
{
	if (p) {
		qmf::Data * pQmfData = (qmf::Data *)p;
		try {
			qpid::types::Variant prop(pQmfData->getProperty(attrib));
			return  prop.asUint32();
		} catch (qmf::KeyNotFound) {}
	}
	return 0;

}

uint16_t qpidGetU16(void *p, const char *attrib)
{
	if (p) {
		qmf::Data * pQmfData = (qmf::Data *)p;
		try {
			qpid::types::Variant prop(pQmfData->getProperty(attrib));
			return  prop.asUint16();
		} catch (qmf::KeyNotFound) {}
	}
	return 0;

}

const char * qpidGetString(void *p, const char *attrib)
{
	if (p) {
		qmf::Data * pQmfData = (qmf::Data *)p;
		try {
			qpid::types::Variant prop(pQmfData->getProperty(attrib));
			return prop.asString().c_str();
		} catch (qmf::KeyNotFound) {}
	}
	return wqmf->emptyString;
}

bool qpidGetBool(void *p, const char *attrib)
{
	if (p) {
		qmf::Data * pQmfData = (qmf::Data *)p;
		try {
			qpid::types::Variant prop(pQmfData->getProperty(attrib));
			return prop.asBool();
		} catch (qmf::KeyNotFound) {}
	}
	return false;
}

bool init_qmf(char * brokerUrl, char * connect_options, char * qmf_options)
{
	close_qmf();

	wqmf = new QmfWrapper();
	wqmf->connect(brokerUrl, connect_options, qmf_options);
	return wqmf->connected();
}

void close_qmf()
{
	if (wqmf) {
		wqmf->disconnect();
		delete wqmf;
		wqmf = NULL;
	}
}

QmfWrapper::QmfWrapper() : isConnected(false)
{
    emptyString[0] = '\0';
}

void QmfWrapper::query(qmf::ConsoleEvent * pEvent, const char * brokerClassName)
{
	if (!isConnected)
		return;

	qmf::Agent agent = sess.getConnectedBrokerAgent();
    *pEvent = agent.query(qmf::Query(qmf::QUERY_OBJECT, brokerClassName, "org.apache.qpid.broker"));
}

// Connect to the requested broker
// The internal variable isConnected is used to communicate success or failure
void QmfWrapper::connect(char *brokerUrl, char * connect_options, char * qmf_options)
{
    try {
		conn = qpid::messaging::Connection(brokerUrl, connect_options);
		conn.open();

		sess = qmf::ConsoleSession(conn, qmf_options);
		sess.open();
		qmsession = conn.createSession();
		isConnected = true;

		try {
            sess.setAgentFilter("[eq, _product, [quote, 'qpidd']]");
        } catch (std::exception&) {
        	isConnected = false;
        }

    } catch(qpid::messaging::MessagingException& ex) {
    	isConnected = false;
    }
}

void QmfWrapper::disconnect()
{
	if (isConnected) {
		isConnected = false;
		qmsession.close();
		sess.close();
		conn.close();
	}
}
