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

#include "Signature_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Signature_getObject_v2_Response_mPayload::Signature_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Signature_getObject_v2_Response_mPayload::Signature_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Signature_getObject_v2_Response_mPayload::~Signature_getObject_v2_Response_mPayload() {}

void Signature_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_signature_isSet = false;
    m_obj_signature_isValid = false;
}

void Signature_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Signature_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_signature_isValid = ::Ezmaxapi::fromJsonValue(m_obj_signature, json[QString("objSignature")]);
    m_obj_signature_isSet = !json[QString("objSignature")].isNull() && m_obj_signature_isValid;
}

QString Signature_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Signature_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_signature.isSet()) {
        obj.insert(QString("objSignature"), ::Ezmaxapi::toJsonValue(m_obj_signature));
    }
    return obj;
}

Signature_ResponseCompound Signature_getObject_v2_Response_mPayload::getObjSignature() const {
    return m_obj_signature;
}
void Signature_getObject_v2_Response_mPayload::setObjSignature(const Signature_ResponseCompound &obj_signature) {
    m_obj_signature = obj_signature;
    m_obj_signature_isSet = true;
}

bool Signature_getObject_v2_Response_mPayload::is_obj_signature_Set() const{
    return m_obj_signature_isSet;
}

bool Signature_getObject_v2_Response_mPayload::is_obj_signature_Valid() const{
    return m_obj_signature_isValid;
}

bool Signature_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_signature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Signature_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_signature_isValid && true;
}

} // namespace Ezmaxapi
