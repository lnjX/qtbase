#define QT_XML_BUILD_REMOVED_API

#include "qtxmlglobal.h"

QT_USE_NAMESPACE

#if QT_XML_REMOVED_SINCE(6, 6)

#include "qdom.h"

bool QDomImplementation::hasFeature(const QString& feature, const QString& version) const
{
    return hasFeature(qToAnyStringViewIgnoringNull(feature), qToAnyStringViewIgnoringNull(version));
}

#endif

QT_END_NAMESPACE
