/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_objDebugPayload_getList_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_objDebugPayload_getList_allOf::OAICommon_Response_objDebugPayload_getList_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_objDebugPayload_getList_allOf::OAICommon_Response_objDebugPayload_getList_allOf() {
    this->initializeModel();
}

OAICommon_Response_objDebugPayload_getList_allOf::~OAICommon_Response_objDebugPayload_getList_allOf() {}

void OAICommon_Response_objDebugPayload_getList_allOf::initializeModel() {

    m_a_filter_isSet = false;
    m_a_filter_isValid = false;

    m_a_order_by_isSet = false;
    m_a_order_by_isValid = false;
}

void OAICommon_Response_objDebugPayload_getList_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_objDebugPayload_getList_allOf::fromJsonObject(QJsonObject json) {

    m_a_filter_isValid = ::OpenAPI::fromJsonValue(a_filter, json[QString("a_Filter")]);
    m_a_filter_isSet = !json[QString("a_Filter")].isNull() && m_a_filter_isValid;

    m_a_order_by_isValid = ::OpenAPI::fromJsonValue(a_order_by, json[QString("a_OrderBy")]);
    m_a_order_by_isSet = !json[QString("a_OrderBy")].isNull() && m_a_order_by_isValid;
}

QString OAICommon_Response_objDebugPayload_getList_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_objDebugPayload_getList_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_filter.isSet()) {
        obj.insert(QString("a_Filter"), ::OpenAPI::toJsonValue(a_filter));
    }
    if (a_order_by.size() > 0) {
        obj.insert(QString("a_OrderBy"), ::OpenAPI::toJsonValue(a_order_by));
    }
    return obj;
}

OAICommon_Response_Filter OAICommon_Response_objDebugPayload_getList_allOf::getAFilter() const {
    return a_filter;
}
void OAICommon_Response_objDebugPayload_getList_allOf::setAFilter(const OAICommon_Response_Filter &a_filter) {
    this->a_filter = a_filter;
    this->m_a_filter_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList_allOf::is_a_filter_Set() const{
    return m_a_filter_isSet;
}

bool OAICommon_Response_objDebugPayload_getList_allOf::is_a_filter_Valid() const{
    return m_a_filter_isValid;
}

QMap<QString, QString> OAICommon_Response_objDebugPayload_getList_allOf::getAOrderBy() const {
    return a_order_by;
}
void OAICommon_Response_objDebugPayload_getList_allOf::setAOrderBy(const QMap<QString, QString> &a_order_by) {
    this->a_order_by = a_order_by;
    this->m_a_order_by_isSet = true;
}

bool OAICommon_Response_objDebugPayload_getList_allOf::is_a_order_by_Set() const{
    return m_a_order_by_isSet;
}

bool OAICommon_Response_objDebugPayload_getList_allOf::is_a_order_by_Valid() const{
    return m_a_order_by_isValid;
}

bool OAICommon_Response_objDebugPayload_getList_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_filter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_order_by.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_objDebugPayload_getList_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_filter_isValid && m_a_order_by_isValid && true;
}

} // namespace OpenAPI
