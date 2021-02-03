/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_User_UserCreated.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_User_UserCreated::OAIWebhook_User_UserCreated(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_User_UserCreated::OAIWebhook_User_UserCreated() {
    this->initializeModel();
}

OAIWebhook_User_UserCreated::~OAIWebhook_User_UserCreated() {}

void OAIWebhook_User_UserCreated::initializeModel() {

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;
}

void OAIWebhook_User_UserCreated::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_User_UserCreated::fromJsonObject(QJsonObject json) {

    m_obj_user_isValid = ::OpenAPI::fromJsonValue(obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::OpenAPI::fromJsonValue(a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;
}

QString OAIWebhook_User_UserCreated::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_User_UserCreated::asJsonObject() const {
    QJsonObject obj;
    if (obj_user.isSet()) {
        obj.insert(QString("objUser"), ::OpenAPI::toJsonValue(obj_user));
    }
    if (obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(obj_webhook));
    }
    if (a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::OpenAPI::toJsonValue(a_obj_attempt));
    }
    return obj;
}

OAIUser_Response OAIWebhook_User_UserCreated::getObjUser() const {
    return obj_user;
}
void OAIWebhook_User_UserCreated::setObjUser(const OAIUser_Response &obj_user) {
    this->obj_user = obj_user;
    this->m_obj_user_isSet = true;
}

bool OAIWebhook_User_UserCreated::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAIWebhook_User_UserCreated::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

OAIWebhook_Response OAIWebhook_User_UserCreated::getObjWebhook() const {
    return obj_webhook;
}
void OAIWebhook_User_UserCreated::setObjWebhook(const OAIWebhook_Response &obj_webhook) {
    this->obj_webhook = obj_webhook;
    this->m_obj_webhook_isSet = true;
}

bool OAIWebhook_User_UserCreated::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_User_UserCreated::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_Response> OAIWebhook_User_UserCreated::getAObjAttempt() const {
    return a_obj_attempt;
}
void OAIWebhook_User_UserCreated::setAObjAttempt(const QList<OAIAttempt_Response> &a_obj_attempt) {
    this->a_obj_attempt = a_obj_attempt;
    this->m_a_obj_attempt_isSet = true;
}

bool OAIWebhook_User_UserCreated::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAIWebhook_User_UserCreated::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

bool OAIWebhook_User_UserCreated::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_webhook.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_attempt.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_User_UserCreated::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_user_isValid && m_obj_webhook_isValid && m_a_obj_attempt_isValid && true;
}

} // namespace OpenAPI
