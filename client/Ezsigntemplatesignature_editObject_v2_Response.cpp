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

#include "Ezsigntemplatesignature_editObject_v2_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesignature_editObject_v2_Response::Ezsigntemplatesignature_editObject_v2_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesignature_editObject_v2_Response::Ezsigntemplatesignature_editObject_v2_Response() {
    this->initializeModel();
}

Ezsigntemplatesignature_editObject_v2_Response::~Ezsigntemplatesignature_editObject_v2_Response() {}

void Ezsigntemplatesignature_editObject_v2_Response::initializeModel() {

    m_obj_debug_payload_isSet = false;
    m_obj_debug_payload_isValid = false;

    m_obj_debug_isSet = false;
    m_obj_debug_isValid = false;
}

void Ezsigntemplatesignature_editObject_v2_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesignature_editObject_v2_Response::fromJsonObject(QJsonObject json) {

    m_obj_debug_payload_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug_payload, json[QString("objDebugPayload")]);
    m_obj_debug_payload_isSet = !json[QString("objDebugPayload")].isNull() && m_obj_debug_payload_isValid;

    m_obj_debug_isValid = ::Ezmaxapi::fromJsonValue(m_obj_debug, json[QString("objDebug")]);
    m_obj_debug_isSet = !json[QString("objDebug")].isNull() && m_obj_debug_isValid;
}

QString Ezsigntemplatesignature_editObject_v2_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesignature_editObject_v2_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_debug_payload.isSet()) {
        obj.insert(QString("objDebugPayload"), ::Ezmaxapi::toJsonValue(m_obj_debug_payload));
    }
    if (m_obj_debug.isSet()) {
        obj.insert(QString("objDebug"), ::Ezmaxapi::toJsonValue(m_obj_debug));
    }
    return obj;
}

Common_Response_objDebugPayload Ezsigntemplatesignature_editObject_v2_Response::getObjDebugPayload() const {
    return m_obj_debug_payload;
}
void Ezsigntemplatesignature_editObject_v2_Response::setObjDebugPayload(const Common_Response_objDebugPayload &obj_debug_payload) {
    m_obj_debug_payload = obj_debug_payload;
    m_obj_debug_payload_isSet = true;
}

bool Ezsigntemplatesignature_editObject_v2_Response::is_obj_debug_payload_Set() const{
    return m_obj_debug_payload_isSet;
}

bool Ezsigntemplatesignature_editObject_v2_Response::is_obj_debug_payload_Valid() const{
    return m_obj_debug_payload_isValid;
}

Common_Response_objDebug Ezsigntemplatesignature_editObject_v2_Response::getObjDebug() const {
    return m_obj_debug;
}
void Ezsigntemplatesignature_editObject_v2_Response::setObjDebug(const Common_Response_objDebug &obj_debug) {
    m_obj_debug = obj_debug;
    m_obj_debug_isSet = true;
}

bool Ezsigntemplatesignature_editObject_v2_Response::is_obj_debug_Set() const{
    return m_obj_debug_isSet;
}

bool Ezsigntemplatesignature_editObject_v2_Response::is_obj_debug_Valid() const{
    return m_obj_debug_isValid;
}

bool Ezsigntemplatesignature_editObject_v2_Response::isSet() const {
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

bool Ezsigntemplatesignature_editObject_v2_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_debug_payload_isValid && true;
}

} // namespace Ezmaxapi
