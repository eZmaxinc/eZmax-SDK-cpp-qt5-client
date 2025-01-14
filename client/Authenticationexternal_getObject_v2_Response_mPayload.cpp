/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Authenticationexternal_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Authenticationexternal_getObject_v2_Response_mPayload::Authenticationexternal_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Authenticationexternal_getObject_v2_Response_mPayload::Authenticationexternal_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Authenticationexternal_getObject_v2_Response_mPayload::~Authenticationexternal_getObject_v2_Response_mPayload() {}

void Authenticationexternal_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_authenticationexternal_isSet = false;
    m_obj_authenticationexternal_isValid = false;
}

void Authenticationexternal_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Authenticationexternal_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_authenticationexternal_isValid = ::Ezmaxapi::fromJsonValue(m_obj_authenticationexternal, json[QString("objAuthenticationexternal")]);
    m_obj_authenticationexternal_isSet = !json[QString("objAuthenticationexternal")].isNull() && m_obj_authenticationexternal_isValid;
}

QString Authenticationexternal_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Authenticationexternal_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_authenticationexternal.isSet()) {
        obj.insert(QString("objAuthenticationexternal"), ::Ezmaxapi::toJsonValue(m_obj_authenticationexternal));
    }
    return obj;
}

Authenticationexternal_ResponseCompound Authenticationexternal_getObject_v2_Response_mPayload::getObjAuthenticationexternal() const {
    return m_obj_authenticationexternal;
}
void Authenticationexternal_getObject_v2_Response_mPayload::setObjAuthenticationexternal(const Authenticationexternal_ResponseCompound &obj_authenticationexternal) {
    m_obj_authenticationexternal = obj_authenticationexternal;
    m_obj_authenticationexternal_isSet = true;
}

bool Authenticationexternal_getObject_v2_Response_mPayload::is_obj_authenticationexternal_Set() const{
    return m_obj_authenticationexternal_isSet;
}

bool Authenticationexternal_getObject_v2_Response_mPayload::is_obj_authenticationexternal_Valid() const{
    return m_obj_authenticationexternal_isValid;
}

bool Authenticationexternal_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_authenticationexternal.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Authenticationexternal_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_authenticationexternal_isValid && true;
}

} // namespace Ezmaxapi
