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

#include "OAISubnet_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISubnet_getObject_v2_Response_mPayload::OAISubnet_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISubnet_getObject_v2_Response_mPayload::OAISubnet_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAISubnet_getObject_v2_Response_mPayload::~OAISubnet_getObject_v2_Response_mPayload() {}

void OAISubnet_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_subnet_isSet = false;
    m_obj_subnet_isValid = false;
}

void OAISubnet_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISubnet_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_subnet_isValid = ::OpenAPI::fromJsonValue(m_obj_subnet, json[QString("objSubnet")]);
    m_obj_subnet_isSet = !json[QString("objSubnet")].isNull() && m_obj_subnet_isValid;
}

QString OAISubnet_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISubnet_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_subnet.isSet()) {
        obj.insert(QString("objSubnet"), ::OpenAPI::toJsonValue(m_obj_subnet));
    }
    return obj;
}

OAISubnet_ResponseCompound OAISubnet_getObject_v2_Response_mPayload::getObjSubnet() const {
    return m_obj_subnet;
}
void OAISubnet_getObject_v2_Response_mPayload::setObjSubnet(const OAISubnet_ResponseCompound &obj_subnet) {
    m_obj_subnet = obj_subnet;
    m_obj_subnet_isSet = true;
}

bool OAISubnet_getObject_v2_Response_mPayload::is_obj_subnet_Set() const{
    return m_obj_subnet_isSet;
}

bool OAISubnet_getObject_v2_Response_mPayload::is_obj_subnet_Valid() const{
    return m_obj_subnet_isValid;
}

bool OAISubnet_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_subnet.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISubnet_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_subnet_isValid && true;
}

} // namespace OpenAPI
