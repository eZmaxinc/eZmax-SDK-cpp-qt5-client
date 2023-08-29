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

#include "OAISignature_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISignature_getObject_v2_Response_mPayload::OAISignature_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISignature_getObject_v2_Response_mPayload::OAISignature_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAISignature_getObject_v2_Response_mPayload::~OAISignature_getObject_v2_Response_mPayload() {}

void OAISignature_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_signature_isSet = false;
    m_obj_signature_isValid = false;
}

void OAISignature_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISignature_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_signature_isValid = ::OpenAPI::fromJsonValue(m_obj_signature, json[QString("objSignature")]);
    m_obj_signature_isSet = !json[QString("objSignature")].isNull() && m_obj_signature_isValid;
}

QString OAISignature_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISignature_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_signature.isSet()) {
        obj.insert(QString("objSignature"), ::OpenAPI::toJsonValue(m_obj_signature));
    }
    return obj;
}

OAISignature_ResponseCompound OAISignature_getObject_v2_Response_mPayload::getObjSignature() const {
    return m_obj_signature;
}
void OAISignature_getObject_v2_Response_mPayload::setObjSignature(const OAISignature_ResponseCompound &obj_signature) {
    m_obj_signature = obj_signature;
    m_obj_signature_isSet = true;
}

bool OAISignature_getObject_v2_Response_mPayload::is_obj_signature_Set() const{
    return m_obj_signature_isSet;
}

bool OAISignature_getObject_v2_Response_mPayload::is_obj_signature_Valid() const{
    return m_obj_signature_isValid;
}

bool OAISignature_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_signature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISignature_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_signature_isValid && true;
}

} // namespace OpenAPI
