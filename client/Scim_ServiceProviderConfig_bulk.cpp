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

#include "Scim_ServiceProviderConfig_bulk.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Scim_ServiceProviderConfig_bulk::Scim_ServiceProviderConfig_bulk(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Scim_ServiceProviderConfig_bulk::Scim_ServiceProviderConfig_bulk() {
    this->initializeModel();
}

Scim_ServiceProviderConfig_bulk::~Scim_ServiceProviderConfig_bulk() {}

void Scim_ServiceProviderConfig_bulk::initializeModel() {

    m_supported_isSet = false;
    m_supported_isValid = false;

    m_max_operations_isSet = false;
    m_max_operations_isValid = false;

    m_max_payload_size_isSet = false;
    m_max_payload_size_isValid = false;
}

void Scim_ServiceProviderConfig_bulk::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Scim_ServiceProviderConfig_bulk::fromJsonObject(QJsonObject json) {

    m_supported_isValid = ::Ezmaxapi::fromJsonValue(m_supported, json[QString("supported")]);
    m_supported_isSet = !json[QString("supported")].isNull() && m_supported_isValid;

    m_max_operations_isValid = ::Ezmaxapi::fromJsonValue(m_max_operations, json[QString("maxOperations")]);
    m_max_operations_isSet = !json[QString("maxOperations")].isNull() && m_max_operations_isValid;

    m_max_payload_size_isValid = ::Ezmaxapi::fromJsonValue(m_max_payload_size, json[QString("maxPayloadSize")]);
    m_max_payload_size_isSet = !json[QString("maxPayloadSize")].isNull() && m_max_payload_size_isValid;
}

QString Scim_ServiceProviderConfig_bulk::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Scim_ServiceProviderConfig_bulk::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_isSet) {
        obj.insert(QString("supported"), ::Ezmaxapi::toJsonValue(m_supported));
    }
    if (m_max_operations_isSet) {
        obj.insert(QString("maxOperations"), ::Ezmaxapi::toJsonValue(m_max_operations));
    }
    if (m_max_payload_size_isSet) {
        obj.insert(QString("maxPayloadSize"), ::Ezmaxapi::toJsonValue(m_max_payload_size));
    }
    return obj;
}

bool Scim_ServiceProviderConfig_bulk::isSupported() const {
    return m_supported;
}
void Scim_ServiceProviderConfig_bulk::setSupported(const bool &supported) {
    m_supported = supported;
    m_supported_isSet = true;
}

bool Scim_ServiceProviderConfig_bulk::is_supported_Set() const{
    return m_supported_isSet;
}

bool Scim_ServiceProviderConfig_bulk::is_supported_Valid() const{
    return m_supported_isValid;
}

qint32 Scim_ServiceProviderConfig_bulk::getMaxOperations() const {
    return m_max_operations;
}
void Scim_ServiceProviderConfig_bulk::setMaxOperations(const qint32 &max_operations) {
    m_max_operations = max_operations;
    m_max_operations_isSet = true;
}

bool Scim_ServiceProviderConfig_bulk::is_max_operations_Set() const{
    return m_max_operations_isSet;
}

bool Scim_ServiceProviderConfig_bulk::is_max_operations_Valid() const{
    return m_max_operations_isValid;
}

qint32 Scim_ServiceProviderConfig_bulk::getMaxPayloadSize() const {
    return m_max_payload_size;
}
void Scim_ServiceProviderConfig_bulk::setMaxPayloadSize(const qint32 &max_payload_size) {
    m_max_payload_size = max_payload_size;
    m_max_payload_size_isSet = true;
}

bool Scim_ServiceProviderConfig_bulk::is_max_payload_size_Set() const{
    return m_max_payload_size_isSet;
}

bool Scim_ServiceProviderConfig_bulk::is_max_payload_size_Valid() const{
    return m_max_payload_size_isValid;
}

bool Scim_ServiceProviderConfig_bulk::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_operations_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_payload_size_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Scim_ServiceProviderConfig_bulk::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_supported_isValid && m_max_operations_isValid && m_max_payload_size_isValid && true;
}

} // namespace Ezmaxapi
