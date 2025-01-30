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

#include "Webhook_Ezsign_FolderSent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_Ezsign_FolderSent::Webhook_Ezsign_FolderSent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_Ezsign_FolderSent::Webhook_Ezsign_FolderSent() {
    this->initializeModel();
}

Webhook_Ezsign_FolderSent::~Webhook_Ezsign_FolderSent() {}

void Webhook_Ezsign_FolderSent::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;
}

void Webhook_Ezsign_FolderSent::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_Ezsign_FolderSent::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::Ezmaxapi::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;

    m_obj_ezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;
}

QString Webhook_Ezsign_FolderSent::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_Ezsign_FolderSent::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::Ezmaxapi::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::Ezmaxapi::toJsonValue(m_a_obj_attempt));
    }
    if (m_obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfolder));
    }
    return obj;
}

Custom_Webhook_Response Webhook_Ezsign_FolderSent::getObjWebhook() const {
    return m_obj_webhook;
}
void Webhook_Ezsign_FolderSent::setObjWebhook(const Custom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool Webhook_Ezsign_FolderSent::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool Webhook_Ezsign_FolderSent::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<Attempt_ResponseCompound> Webhook_Ezsign_FolderSent::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void Webhook_Ezsign_FolderSent::setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool Webhook_Ezsign_FolderSent::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool Webhook_Ezsign_FolderSent::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

Ezsignfolder_Response Webhook_Ezsign_FolderSent::getObjEzsignfolder() const {
    return m_obj_ezsignfolder;
}
void Webhook_Ezsign_FolderSent::setObjEzsignfolder(const Ezsignfolder_Response &obj_ezsignfolder) {
    m_obj_ezsignfolder = obj_ezsignfolder;
    m_obj_ezsignfolder_isSet = true;
}

bool Webhook_Ezsign_FolderSent::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool Webhook_Ezsign_FolderSent::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

bool Webhook_Ezsign_FolderSent::isSet() const {
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

        if (m_obj_ezsignfolder.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_Ezsign_FolderSent::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && m_obj_ezsignfolder_isValid && true;
}

} // namespace Ezmaxapi
