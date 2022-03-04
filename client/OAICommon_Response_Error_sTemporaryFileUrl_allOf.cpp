/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_Error_sTemporaryFileUrl_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_Error_sTemporaryFileUrl_allOf::OAICommon_Response_Error_sTemporaryFileUrl_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_Error_sTemporaryFileUrl_allOf::OAICommon_Response_Error_sTemporaryFileUrl_allOf() {
    this->initializeModel();
}

OAICommon_Response_Error_sTemporaryFileUrl_allOf::~OAICommon_Response_Error_sTemporaryFileUrl_allOf() {}

void OAICommon_Response_Error_sTemporaryFileUrl_allOf::initializeModel() {

    m_s_temporary_file_url_isSet = false;
    m_s_temporary_file_url_isValid = false;
}

void OAICommon_Response_Error_sTemporaryFileUrl_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_Error_sTemporaryFileUrl_allOf::fromJsonObject(QJsonObject json) {

    m_s_temporary_file_url_isValid = ::OpenAPI::fromJsonValue(s_temporary_file_url, json[QString("sTemporaryFileUrl")]);
    m_s_temporary_file_url_isSet = !json[QString("sTemporaryFileUrl")].isNull() && m_s_temporary_file_url_isValid;
}

QString OAICommon_Response_Error_sTemporaryFileUrl_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_Error_sTemporaryFileUrl_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_s_temporary_file_url_isSet) {
        obj.insert(QString("sTemporaryFileUrl"), ::OpenAPI::toJsonValue(s_temporary_file_url));
    }
    return obj;
}

QString OAICommon_Response_Error_sTemporaryFileUrl_allOf::getSTemporaryFileUrl() const {
    return s_temporary_file_url;
}
void OAICommon_Response_Error_sTemporaryFileUrl_allOf::setSTemporaryFileUrl(const QString &s_temporary_file_url) {
    this->s_temporary_file_url = s_temporary_file_url;
    this->m_s_temporary_file_url_isSet = true;
}

bool OAICommon_Response_Error_sTemporaryFileUrl_allOf::is_s_temporary_file_url_Set() const{
    return m_s_temporary_file_url_isSet;
}

bool OAICommon_Response_Error_sTemporaryFileUrl_allOf::is_s_temporary_file_url_Valid() const{
    return m_s_temporary_file_url_isValid;
}

bool OAICommon_Response_Error_sTemporaryFileUrl_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_temporary_file_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_Error_sTemporaryFileUrl_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
