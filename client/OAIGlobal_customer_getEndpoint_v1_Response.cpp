/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIGlobal_customer_getEndpoint_v1_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGlobal_customer_getEndpoint_v1_Response::OAIGlobal_customer_getEndpoint_v1_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGlobal_customer_getEndpoint_v1_Response::OAIGlobal_customer_getEndpoint_v1_Response() {
    this->initializeModel();
}

OAIGlobal_customer_getEndpoint_v1_Response::~OAIGlobal_customer_getEndpoint_v1_Response() {}

void OAIGlobal_customer_getEndpoint_v1_Response::initializeModel() {

    m_s_endpoint_url_isSet = false;
    m_s_endpoint_url_isValid = false;
}

void OAIGlobal_customer_getEndpoint_v1_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGlobal_customer_getEndpoint_v1_Response::fromJsonObject(QJsonObject json) {

    m_s_endpoint_url_isValid = ::OpenAPI::fromJsonValue(s_endpoint_url, json[QString("sEndpointURL")]);
    m_s_endpoint_url_isSet = !json[QString("sEndpointURL")].isNull() && m_s_endpoint_url_isValid;
}

QString OAIGlobal_customer_getEndpoint_v1_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGlobal_customer_getEndpoint_v1_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_endpoint_url_isSet) {
        obj.insert(QString("sEndpointURL"), ::OpenAPI::toJsonValue(s_endpoint_url));
    }
    return obj;
}

QString OAIGlobal_customer_getEndpoint_v1_Response::getSEndpointUrl() const {
    return s_endpoint_url;
}
void OAIGlobal_customer_getEndpoint_v1_Response::setSEndpointUrl(const QString &s_endpoint_url) {
    this->s_endpoint_url = s_endpoint_url;
    this->m_s_endpoint_url_isSet = true;
}

bool OAIGlobal_customer_getEndpoint_v1_Response::is_s_endpoint_url_Set() const{
    return m_s_endpoint_url_isSet;
}

bool OAIGlobal_customer_getEndpoint_v1_Response::is_s_endpoint_url_Valid() const{
    return m_s_endpoint_url_isValid;
}

bool OAIGlobal_customer_getEndpoint_v1_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_endpoint_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGlobal_customer_getEndpoint_v1_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_endpoint_url_isValid && true;
}

} // namespace OpenAPI
