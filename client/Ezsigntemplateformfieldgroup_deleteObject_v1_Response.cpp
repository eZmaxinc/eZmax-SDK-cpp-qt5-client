/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplateformfieldgroup_deleteObject_v1_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateformfieldgroup_deleteObject_v1_Response::Ezsigntemplateformfieldgroup_deleteObject_v1_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateformfieldgroup_deleteObject_v1_Response::Ezsigntemplateformfieldgroup_deleteObject_v1_Response() {
    this->initializeModel();
}

Ezsigntemplateformfieldgroup_deleteObject_v1_Response::~Ezsigntemplateformfieldgroup_deleteObject_v1_Response() {}

void Ezsigntemplateformfieldgroup_deleteObject_v1_Response::initializeModel() {

    m_obj_debug_payload_isSet = false;
    m_obj_debug_payload_isValid = false;

    m_obj_debug_isSet = false;
    m_obj_debug_isValid = false;
}

void Ezsigntemplateformfieldgroup_deleteObject_v1_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateformfieldgroup_deleteObject_v1_Response::fromJsonObject(QJsonObject json) {

    m_obj_debug_payload_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug_payload, json[QString("objDebugPayload")]);
    m_obj_debug_payload_isSet = !json[QString("objDebugPayload")].isNull() && m_obj_debug_payload_isValid;

    m_obj_debug_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug, json[QString("objDebug")]);
    m_obj_debug_isSet = !json[QString("objDebug")].isNull() && m_obj_debug_isValid;
}

QString Ezsigntemplateformfieldgroup_deleteObject_v1_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateformfieldgroup_deleteObject_v1_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_debug_payload.isSet()) {
        obj.insert(QString("objDebugPayload"), ::Ezmaxapi::toJsonValue(m_obj_debug_payload));
    }
    if (m_obj_debug.isSet()) {
        obj.insert(QString("objDebug"), ::Ezmaxapi::toJsonValue(m_obj_debug));
    }
    return obj;
}

Common_Response_objDebugPayload Ezsigntemplateformfieldgroup_deleteObject_v1_Response::getObjDebugPayload() const {
    return m_obj_debug_payload;
}
void Ezsigntemplateformfieldgroup_deleteObject_v1_Response::setObjDebugPayload(const Common_Response_objDebugPayload &obj_debug_payload) {
    m_obj_debug_payload = obj_debug_payload;
    m_obj_debug_payload_isSet = true;
}

bool Ezsigntemplateformfieldgroup_deleteObject_v1_Response::is_obj_debug_payload_Set() const{
    return m_obj_debug_payload_isSet;
}

bool Ezsigntemplateformfieldgroup_deleteObject_v1_Response::is_obj_debug_payload_Valid() const{
    return m_obj_debug_payload_isValid;
}

Common_Response_objDebug Ezsigntemplateformfieldgroup_deleteObject_v1_Response::getObjDebug() const {
    return m_obj_debug;
}
void Ezsigntemplateformfieldgroup_deleteObject_v1_Response::setObjDebug(const Common_Response_objDebug &obj_debug) {
    m_obj_debug = obj_debug;
    m_obj_debug_isSet = true;
}

bool Ezsigntemplateformfieldgroup_deleteObject_v1_Response::is_obj_debug_Set() const{
    return m_obj_debug_isSet;
}

bool Ezsigntemplateformfieldgroup_deleteObject_v1_Response::is_obj_debug_Valid() const{
    return m_obj_debug_isValid;
}

bool Ezsigntemplateformfieldgroup_deleteObject_v1_Response::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateformfieldgroup_deleteObject_v1_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_debug_payload_isValid && true;
}

} // namespace Ezmaxapi
