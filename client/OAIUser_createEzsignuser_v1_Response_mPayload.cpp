/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUser_createEzsignuser_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_createEzsignuser_v1_Response_mPayload::OAIUser_createEzsignuser_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_createEzsignuser_v1_Response_mPayload::OAIUser_createEzsignuser_v1_Response_mPayload() {
    this->initializeModel();
}

OAIUser_createEzsignuser_v1_Response_mPayload::~OAIUser_createEzsignuser_v1_Response_mPayload() {}

void OAIUser_createEzsignuser_v1_Response_mPayload::initializeModel() {

    m_a_s_email_address_success_isSet = false;
    m_a_s_email_address_success_isValid = false;

    m_a_s_email_address_failure_isSet = false;
    m_a_s_email_address_failure_isValid = false;
}

void OAIUser_createEzsignuser_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_createEzsignuser_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_s_email_address_success_isValid = ::OpenAPI::fromJsonValue(a_s_email_address_success, json[QString("a_sEmailAddressSuccess")]);
    m_a_s_email_address_success_isSet = !json[QString("a_sEmailAddressSuccess")].isNull() && m_a_s_email_address_success_isValid;

    m_a_s_email_address_failure_isValid = ::OpenAPI::fromJsonValue(a_s_email_address_failure, json[QString("a_sEmailAddressFailure")]);
    m_a_s_email_address_failure_isSet = !json[QString("a_sEmailAddressFailure")].isNull() && m_a_s_email_address_failure_isValid;
}

QString OAIUser_createEzsignuser_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_createEzsignuser_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_s_email_address_success.size() > 0) {
        obj.insert(QString("a_sEmailAddressSuccess"), ::OpenAPI::toJsonValue(a_s_email_address_success));
    }
    if (a_s_email_address_failure.size() > 0) {
        obj.insert(QString("a_sEmailAddressFailure"), ::OpenAPI::toJsonValue(a_s_email_address_failure));
    }
    return obj;
}

QList<QString> OAIUser_createEzsignuser_v1_Response_mPayload::getASEmailAddressSuccess() const {
    return a_s_email_address_success;
}
void OAIUser_createEzsignuser_v1_Response_mPayload::setASEmailAddressSuccess(const QList<QString> &a_s_email_address_success) {
    this->a_s_email_address_success = a_s_email_address_success;
    this->m_a_s_email_address_success_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Response_mPayload::is_a_s_email_address_success_Set() const{
    return m_a_s_email_address_success_isSet;
}

bool OAIUser_createEzsignuser_v1_Response_mPayload::is_a_s_email_address_success_Valid() const{
    return m_a_s_email_address_success_isValid;
}

QList<QString> OAIUser_createEzsignuser_v1_Response_mPayload::getASEmailAddressFailure() const {
    return a_s_email_address_failure;
}
void OAIUser_createEzsignuser_v1_Response_mPayload::setASEmailAddressFailure(const QList<QString> &a_s_email_address_failure) {
    this->a_s_email_address_failure = a_s_email_address_failure;
    this->m_a_s_email_address_failure_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Response_mPayload::is_a_s_email_address_failure_Set() const{
    return m_a_s_email_address_failure_isSet;
}

bool OAIUser_createEzsignuser_v1_Response_mPayload::is_a_s_email_address_failure_Valid() const{
    return m_a_s_email_address_failure_isValid;
}

bool OAIUser_createEzsignuser_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_s_email_address_success.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_s_email_address_failure.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_createEzsignuser_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_s_email_address_success_isValid && m_a_s_email_address_failure_isValid && true;
}

} // namespace OpenAPI
