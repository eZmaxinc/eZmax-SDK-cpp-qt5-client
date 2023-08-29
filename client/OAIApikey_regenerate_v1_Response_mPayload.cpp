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

#include "OAIApikey_regenerate_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_regenerate_v1_Response_mPayload::OAIApikey_regenerate_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_regenerate_v1_Response_mPayload::OAIApikey_regenerate_v1_Response_mPayload() {
    this->initializeModel();
}

OAIApikey_regenerate_v1_Response_mPayload::~OAIApikey_regenerate_v1_Response_mPayload() {}

void OAIApikey_regenerate_v1_Response_mPayload::initializeModel() {

    m_obj_apikey_isSet = false;
    m_obj_apikey_isValid = false;
}

void OAIApikey_regenerate_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_regenerate_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_apikey_isValid = ::OpenAPI::fromJsonValue(m_obj_apikey, json[QString("objApikey")]);
    m_obj_apikey_isSet = !json[QString("objApikey")].isNull() && m_obj_apikey_isValid;
}

QString OAIApikey_regenerate_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_regenerate_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_apikey.isSet()) {
        obj.insert(QString("objApikey"), ::OpenAPI::toJsonValue(m_obj_apikey));
    }
    return obj;
}

OAIApikey_ResponseCompound OAIApikey_regenerate_v1_Response_mPayload::getObjApikey() const {
    return m_obj_apikey;
}
void OAIApikey_regenerate_v1_Response_mPayload::setObjApikey(const OAIApikey_ResponseCompound &obj_apikey) {
    m_obj_apikey = obj_apikey;
    m_obj_apikey_isSet = true;
}

bool OAIApikey_regenerate_v1_Response_mPayload::is_obj_apikey_Set() const{
    return m_obj_apikey_isSet;
}

bool OAIApikey_regenerate_v1_Response_mPayload::is_obj_apikey_Valid() const{
    return m_obj_apikey_isValid;
}

bool OAIApikey_regenerate_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_apikey.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_regenerate_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_apikey_isValid && true;
}

} // namespace OpenAPI
