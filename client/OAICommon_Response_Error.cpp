/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_Error.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_Error::OAICommon_Response_Error(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_Error::OAICommon_Response_Error() {
    this->initializeModel();
}

OAICommon_Response_Error::~OAICommon_Response_Error() {}

void OAICommon_Response_Error::initializeModel() {

    m_s_error_message_isSet = false;
    m_s_error_message_isValid = false;
}

void OAICommon_Response_Error::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_Error::fromJsonObject(QJsonObject json) {

    m_s_error_message_isValid = ::OpenAPI::fromJsonValue(s_error_message, json[QString("sErrorMessage")]);
    m_s_error_message_isSet = !json[QString("sErrorMessage")].isNull() && m_s_error_message_isValid;
}

QString OAICommon_Response_Error::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_Error::asJsonObject() const {
    QJsonObject obj;
    if (m_s_error_message_isSet) {
        obj.insert(QString("sErrorMessage"), ::OpenAPI::toJsonValue(s_error_message));
    }
    return obj;
}

QString OAICommon_Response_Error::getSErrorMessage() const {
    return s_error_message;
}
void OAICommon_Response_Error::setSErrorMessage(const QString &s_error_message) {
    this->s_error_message = s_error_message;
    this->m_s_error_message_isSet = true;
}

bool OAICommon_Response_Error::is_s_error_message_Set() const{
    return m_s_error_message_isSet;
}

bool OAICommon_Response_Error::is_s_error_message_Valid() const{
    return m_s_error_message_isValid;
}

bool OAICommon_Response_Error::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_Error::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_error_message_isValid && true;
}

} // namespace OpenAPI
