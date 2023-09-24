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

#include "OAIWebhook_Userstaged_UserstagedCreated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Userstaged_UserstagedCreated::OAIWebhook_Userstaged_UserstagedCreated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Userstaged_UserstagedCreated::OAIWebhook_Userstaged_UserstagedCreated() {
    this->initializeModel();
}

OAIWebhook_Userstaged_UserstagedCreated::~OAIWebhook_Userstaged_UserstagedCreated() {}

void OAIWebhook_Userstaged_UserstagedCreated::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;

    m_obj_userstaged_isSet = false;
    m_obj_userstaged_isValid = false;
}

void OAIWebhook_Userstaged_UserstagedCreated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Userstaged_UserstagedCreated::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::OpenAPI::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;

    m_obj_userstaged_isValid = ::OpenAPI::fromJsonValue(m_obj_userstaged, json[QString("objUserstaged")]);
    m_obj_userstaged_isSet = !json[QString("objUserstaged")].isNull() && m_obj_userstaged_isValid;
}

QString OAIWebhook_Userstaged_UserstagedCreated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Userstaged_UserstagedCreated::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::OpenAPI::toJsonValue(m_a_obj_attempt));
    }
    if (m_obj_userstaged.isSet()) {
        obj.insert(QString("objUserstaged"), ::OpenAPI::toJsonValue(m_obj_userstaged));
    }
    return obj;
}

OAICustom_Webhook_Response OAIWebhook_Userstaged_UserstagedCreated::getObjWebhook() const {
    return m_obj_webhook;
}
void OAIWebhook_Userstaged_UserstagedCreated::setObjWebhook(const OAICustom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_ResponseCompound> OAIWebhook_Userstaged_UserstagedCreated::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void OAIWebhook_Userstaged_UserstagedCreated::setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

OAIUserstaged_ResponseCompound OAIWebhook_Userstaged_UserstagedCreated::getObjUserstaged() const {
    return m_obj_userstaged;
}
void OAIWebhook_Userstaged_UserstagedCreated::setObjUserstaged(const OAIUserstaged_ResponseCompound &obj_userstaged) {
    m_obj_userstaged = obj_userstaged;
    m_obj_userstaged_isSet = true;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_userstaged_Set() const{
    return m_obj_userstaged_isSet;
}

bool OAIWebhook_Userstaged_UserstagedCreated::is_obj_userstaged_Valid() const{
    return m_obj_userstaged_isValid;
}

bool OAIWebhook_Userstaged_UserstagedCreated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_webhook.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_attempt.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_userstaged.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Userstaged_UserstagedCreated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && m_obj_userstaged_isValid && true;
}

} // namespace OpenAPI
