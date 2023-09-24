/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIApikey_getSubnets_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_getSubnets_v1_Response_mPayload::OAIApikey_getSubnets_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_getSubnets_v1_Response_mPayload::OAIApikey_getSubnets_v1_Response_mPayload() {
    this->initializeModel();
}

OAIApikey_getSubnets_v1_Response_mPayload::~OAIApikey_getSubnets_v1_Response_mPayload() {}

void OAIApikey_getSubnets_v1_Response_mPayload::initializeModel() {

    m_a_obj_subnet_isSet = false;
    m_a_obj_subnet_isValid = false;
}

void OAIApikey_getSubnets_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_getSubnets_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_subnet_isValid = ::OpenAPI::fromJsonValue(m_a_obj_subnet, json[QString("a_objSubnet")]);
    m_a_obj_subnet_isSet = !json[QString("a_objSubnet")].isNull() && m_a_obj_subnet_isValid;
}

QString OAIApikey_getSubnets_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_getSubnets_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_subnet.size() > 0) {
        obj.insert(QString("a_objSubnet"), ::OpenAPI::toJsonValue(m_a_obj_subnet));
    }
    return obj;
}

QList<OAISubnet_ResponseCompound> OAIApikey_getSubnets_v1_Response_mPayload::getAObjSubnet() const {
    return m_a_obj_subnet;
}
void OAIApikey_getSubnets_v1_Response_mPayload::setAObjSubnet(const QList<OAISubnet_ResponseCompound> &a_obj_subnet) {
    m_a_obj_subnet = a_obj_subnet;
    m_a_obj_subnet_isSet = true;
}

bool OAIApikey_getSubnets_v1_Response_mPayload::is_a_obj_subnet_Set() const{
    return m_a_obj_subnet_isSet;
}

bool OAIApikey_getSubnets_v1_Response_mPayload::is_a_obj_subnet_Valid() const{
    return m_a_obj_subnet_isValid;
}

bool OAIApikey_getSubnets_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_subnet.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_getSubnets_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_subnet_isValid && true;
}

} // namespace OpenAPI
