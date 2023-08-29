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

#include "OAIScim_ServiceProviderConfig_filter.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScim_ServiceProviderConfig_filter::OAIScim_ServiceProviderConfig_filter(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScim_ServiceProviderConfig_filter::OAIScim_ServiceProviderConfig_filter() {
    this->initializeModel();
}

OAIScim_ServiceProviderConfig_filter::~OAIScim_ServiceProviderConfig_filter() {}

void OAIScim_ServiceProviderConfig_filter::initializeModel() {

    m_supported_isSet = false;
    m_supported_isValid = false;

    m_max_results_isSet = false;
    m_max_results_isValid = false;
}

void OAIScim_ServiceProviderConfig_filter::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScim_ServiceProviderConfig_filter::fromJsonObject(QJsonObject json) {

    m_supported_isValid = ::OpenAPI::fromJsonValue(m_supported, json[QString("supported")]);
    m_supported_isSet = !json[QString("supported")].isNull() && m_supported_isValid;

    m_max_results_isValid = ::OpenAPI::fromJsonValue(m_max_results, json[QString("maxResults")]);
    m_max_results_isSet = !json[QString("maxResults")].isNull() && m_max_results_isValid;
}

QString OAIScim_ServiceProviderConfig_filter::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScim_ServiceProviderConfig_filter::asJsonObject() const {
    QJsonObject obj;
    if (m_supported_isSet) {
        obj.insert(QString("supported"), ::OpenAPI::toJsonValue(m_supported));
    }
    if (m_max_results_isSet) {
        obj.insert(QString("maxResults"), ::OpenAPI::toJsonValue(m_max_results));
    }
    return obj;
}

bool OAIScim_ServiceProviderConfig_filter::isSupported() const {
    return m_supported;
}
void OAIScim_ServiceProviderConfig_filter::setSupported(const bool &supported) {
    m_supported = supported;
    m_supported_isSet = true;
}

bool OAIScim_ServiceProviderConfig_filter::is_supported_Set() const{
    return m_supported_isSet;
}

bool OAIScim_ServiceProviderConfig_filter::is_supported_Valid() const{
    return m_supported_isValid;
}

qint32 OAIScim_ServiceProviderConfig_filter::getMaxResults() const {
    return m_max_results;
}
void OAIScim_ServiceProviderConfig_filter::setMaxResults(const qint32 &max_results) {
    m_max_results = max_results;
    m_max_results_isSet = true;
}

bool OAIScim_ServiceProviderConfig_filter::is_max_results_Set() const{
    return m_max_results_isSet;
}

bool OAIScim_ServiceProviderConfig_filter::is_max_results_Valid() const{
    return m_max_results_isValid;
}

bool OAIScim_ServiceProviderConfig_filter::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_supported_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_results_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScim_ServiceProviderConfig_filter::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_supported_isValid && m_max_results_isValid && true;
}

} // namespace OpenAPI
