/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_Redirect_sSecretquestionTextX.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_Redirect_sSecretquestionTextX::OAICommon_Response_Redirect_sSecretquestionTextX(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_Redirect_sSecretquestionTextX::OAICommon_Response_Redirect_sSecretquestionTextX() {
    this->initializeModel();
}

OAICommon_Response_Redirect_sSecretquestionTextX::~OAICommon_Response_Redirect_sSecretquestionTextX() {}

void OAICommon_Response_Redirect_sSecretquestionTextX::initializeModel() {

    m_s_secretquestion_text_x_isSet = false;
    m_s_secretquestion_text_x_isValid = false;
}

void OAICommon_Response_Redirect_sSecretquestionTextX::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_Redirect_sSecretquestionTextX::fromJsonObject(QJsonObject json) {

    m_s_secretquestion_text_x_isValid = ::OpenAPI::fromJsonValue(s_secretquestion_text_x, json[QString("sSecretquestionTextX")]);
    m_s_secretquestion_text_x_isSet = !json[QString("sSecretquestionTextX")].isNull() && m_s_secretquestion_text_x_isValid;
}

QString OAICommon_Response_Redirect_sSecretquestionTextX::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_Redirect_sSecretquestionTextX::asJsonObject() const {
    QJsonObject obj;
    if (m_s_secretquestion_text_x_isSet) {
        obj.insert(QString("sSecretquestionTextX"), ::OpenAPI::toJsonValue(s_secretquestion_text_x));
    }
    return obj;
}

QString OAICommon_Response_Redirect_sSecretquestionTextX::getSSecretquestionTextX() const {
    return s_secretquestion_text_x;
}
void OAICommon_Response_Redirect_sSecretquestionTextX::setSSecretquestionTextX(const QString &s_secretquestion_text_x) {
    this->s_secretquestion_text_x = s_secretquestion_text_x;
    this->m_s_secretquestion_text_x_isSet = true;
}

bool OAICommon_Response_Redirect_sSecretquestionTextX::is_s_secretquestion_text_x_Set() const{
    return m_s_secretquestion_text_x_isSet;
}

bool OAICommon_Response_Redirect_sSecretquestionTextX::is_s_secretquestion_text_x_Valid() const{
    return m_s_secretquestion_text_x_isValid;
}

bool OAICommon_Response_Redirect_sSecretquestionTextX::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_secretquestion_text_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_Redirect_sSecretquestionTextX::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_secretquestion_text_x_isValid && true;
}

} // namespace OpenAPI
