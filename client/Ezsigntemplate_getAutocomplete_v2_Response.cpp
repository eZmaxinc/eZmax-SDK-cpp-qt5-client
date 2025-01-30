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

#include "Ezsigntemplate_getAutocomplete_v2_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplate_getAutocomplete_v2_Response::Ezsigntemplate_getAutocomplete_v2_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplate_getAutocomplete_v2_Response::Ezsigntemplate_getAutocomplete_v2_Response() {
    this->initializeModel();
}

Ezsigntemplate_getAutocomplete_v2_Response::~Ezsigntemplate_getAutocomplete_v2_Response() {}

void Ezsigntemplate_getAutocomplete_v2_Response::initializeModel() {

    m_obj_debug_payload_isSet = false;
    m_obj_debug_payload_isValid = false;

    m_obj_debug_isSet = false;
    m_obj_debug_isValid = false;

    m_m_payload_isSet = false;
    m_m_payload_isValid = false;
}

void Ezsigntemplate_getAutocomplete_v2_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplate_getAutocomplete_v2_Response::fromJsonObject(QJsonObject json) {

    m_obj_debug_payload_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug_payload, json[QString("objDebugPayload")]);
    m_obj_debug_payload_isSet = !json[QString("objDebugPayload")].isNull() && m_obj_debug_payload_isValid;

    m_obj_debug_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug, json[QString("objDebug")]);
    m_obj_debug_isSet = !json[QString("objDebug")].isNull() && m_obj_debug_isValid;

    m_m_payload_isValid = ::Ezmaxapi::fromJsonValue(m_m_payload, json[QString("mPayload")]);
    m_m_payload_isSet = !json[QString("mPayload")].isNull() && m_m_payload_isValid;
}

QString Ezsigntemplate_getAutocomplete_v2_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplate_getAutocomplete_v2_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_debug_payload.isSet()) {
        obj.insert(QString("objDebugPayload"), ::Ezmaxapi::toJsonValue(m_obj_debug_payload));
    }
    if (m_obj_debug.isSet()) {
        obj.insert(QString("objDebug"), ::Ezmaxapi::toJsonValue(m_obj_debug));
    }
    if (m_m_payload.isSet()) {
        obj.insert(QString("mPayload"), ::Ezmaxapi::toJsonValue(m_m_payload));
    }
    return obj;
}

Common_Response_objDebugPayload Ezsigntemplate_getAutocomplete_v2_Response::getObjDebugPayload() const {
    return m_obj_debug_payload;
}
void Ezsigntemplate_getAutocomplete_v2_Response::setObjDebugPayload(const Common_Response_objDebugPayload &obj_debug_payload) {
    m_obj_debug_payload = obj_debug_payload;
    m_obj_debug_payload_isSet = true;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::is_obj_debug_payload_Set() const{
    return m_obj_debug_payload_isSet;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::is_obj_debug_payload_Valid() const{
    return m_obj_debug_payload_isValid;
}

Common_Response_objDebug Ezsigntemplate_getAutocomplete_v2_Response::getObjDebug() const {
    return m_obj_debug;
}
void Ezsigntemplate_getAutocomplete_v2_Response::setObjDebug(const Common_Response_objDebug &obj_debug) {
    m_obj_debug = obj_debug;
    m_obj_debug_isSet = true;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::is_obj_debug_Set() const{
    return m_obj_debug_isSet;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::is_obj_debug_Valid() const{
    return m_obj_debug_isValid;
}

Ezsigntemplate_getAutocomplete_v2_Response_mPayload Ezsigntemplate_getAutocomplete_v2_Response::getMPayload() const {
    return m_m_payload;
}
void Ezsigntemplate_getAutocomplete_v2_Response::setMPayload(const Ezsigntemplate_getAutocomplete_v2_Response_mPayload &m_payload) {
    m_m_payload = m_payload;
    m_m_payload_isSet = true;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::is_m_payload_Set() const{
    return m_m_payload_isSet;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::is_m_payload_Valid() const{
    return m_m_payload_isValid;
}

bool Ezsigntemplate_getAutocomplete_v2_Response::isSet() const {
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

bool Ezsigntemplate_getAutocomplete_v2_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_debug_payload_isValid && m_m_payload_isValid && true;
}

} // namespace Ezmaxapi
