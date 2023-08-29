/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::~OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response() {}

void OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::initializeModel() {

    m_obj_debug_payload_isSet = false;
    m_obj_debug_payload_isValid = false;

    m_obj_debug_isSet = false;
    m_obj_debug_isValid = false;

    m_m_payload_isSet = false;
    m_m_payload_isValid = false;
}

void OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::fromJsonObject(QJsonObject json) {

    m_obj_debug_payload_isValid = ::OpenAPI::fromJsonValue(m_obj_debug_payload, json[QString("objDebugPayload")]);
    m_obj_debug_payload_isSet = !json[QString("objDebugPayload")].isNull() && m_obj_debug_payload_isValid;

    m_obj_debug_isValid = ::OpenAPI::fromJsonValue(m_obj_debug, json[QString("objDebug")]);
    m_obj_debug_isSet = !json[QString("objDebug")].isNull() && m_obj_debug_isValid;

    m_m_payload_isValid = ::OpenAPI::fromJsonValue(m_m_payload, json[QString("mPayload")]);
    m_m_payload_isSet = !json[QString("mPayload")].isNull() && m_m_payload_isValid;
}

QString OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_debug_payload.isSet()) {
        obj.insert(QString("objDebugPayload"), ::OpenAPI::toJsonValue(m_obj_debug_payload));
    }
    if (m_obj_debug.isSet()) {
        obj.insert(QString("objDebug"), ::OpenAPI::toJsonValue(m_obj_debug));
    }
    if (m_m_payload.isSet()) {
        obj.insert(QString("mPayload"), ::OpenAPI::toJsonValue(m_m_payload));
    }
    return obj;
}

OAICommon_Response_objDebugPayload OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::getObjDebugPayload() const {
    return m_obj_debug_payload;
}
void OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::setObjDebugPayload(const OAICommon_Response_objDebugPayload &obj_debug_payload) {
    m_obj_debug_payload = obj_debug_payload;
    m_obj_debug_payload_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::is_obj_debug_payload_Set() const{
    return m_obj_debug_payload_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::is_obj_debug_payload_Valid() const{
    return m_obj_debug_payload_isValid;
}

OAICommon_Response_objDebug OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::getObjDebug() const {
    return m_obj_debug;
}
void OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::setObjDebug(const OAICommon_Response_objDebug &obj_debug) {
    m_obj_debug = obj_debug;
    m_obj_debug_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::is_obj_debug_Set() const{
    return m_obj_debug_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::is_obj_debug_Valid() const{
    return m_obj_debug_isValid;
}

OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::getMPayload() const {
    return m_m_payload;
}
void OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::setMPayload(const OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response_mPayload &m_payload) {
    m_m_payload = m_payload;
    m_m_payload_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::is_m_payload_Set() const{
    return m_m_payload_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::is_m_payload_Valid() const{
    return m_m_payload_isValid;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_debug_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_debug.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_m_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesignermembership_deleteObject_v1_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_debug_payload_isValid && m_m_payload_isValid && true;
}

} // namespace OpenAPI
