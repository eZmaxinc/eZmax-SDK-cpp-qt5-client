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

#include "OAIWebhook_Ezsign_EzsignsignerConnect.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Ezsign_EzsignsignerConnect::OAIWebhook_Ezsign_EzsignsignerConnect(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Ezsign_EzsignsignerConnect::OAIWebhook_Ezsign_EzsignsignerConnect() {
    this->initializeModel();
}

OAIWebhook_Ezsign_EzsignsignerConnect::~OAIWebhook_Ezsign_EzsignsignerConnect() {}

void OAIWebhook_Ezsign_EzsignsignerConnect::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;

    m_obj_ezsignfoldersignerassociation_isSet = false;
    m_obj_ezsignfoldersignerassociation_isValid = false;
}

void OAIWebhook_Ezsign_EzsignsignerConnect::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Ezsign_EzsignsignerConnect::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::OpenAPI::fromJsonValue(m_a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;

    m_obj_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;

    m_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsignfoldersignerassociation, json[QString("objEzsignfoldersignerassociation")]);
    m_obj_ezsignfoldersignerassociation_isSet = !json[QString("objEzsignfoldersignerassociation")].isNull() && m_obj_ezsignfoldersignerassociation_isValid;
}

QString OAIWebhook_Ezsign_EzsignsignerConnect::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Ezsign_EzsignsignerConnect::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(m_obj_webhook));
    }
    if (m_a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::OpenAPI::toJsonValue(m_a_obj_attempt));
    }
    if (m_obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::OpenAPI::toJsonValue(m_obj_ezsignfolder));
    }
    if (m_obj_ezsignfoldersignerassociation.isSet()) {
        obj.insert(QString("objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(m_obj_ezsignfoldersignerassociation));
    }
    return obj;
}

OAICustom_Webhook_Response OAIWebhook_Ezsign_EzsignsignerConnect::getObjWebhook() const {
    return m_obj_webhook;
}
void OAIWebhook_Ezsign_EzsignsignerConnect::setObjWebhook(const OAICustom_Webhook_Response &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_ResponseCompound> OAIWebhook_Ezsign_EzsignsignerConnect::getAObjAttempt() const {
    return m_a_obj_attempt;
}
void OAIWebhook_Ezsign_EzsignsignerConnect::setAObjAttempt(const QList<OAIAttempt_ResponseCompound> &a_obj_attempt) {
    m_a_obj_attempt = a_obj_attempt;
    m_a_obj_attempt_isSet = true;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

OAIEzsignfolder_Response OAIWebhook_Ezsign_EzsignsignerConnect::getObjEzsignfolder() const {
    return m_obj_ezsignfolder;
}
void OAIWebhook_Ezsign_EzsignsignerConnect::setObjEzsignfolder(const OAIEzsignfolder_Response &obj_ezsignfolder) {
    m_obj_ezsignfolder = obj_ezsignfolder;
    m_obj_ezsignfolder_isSet = true;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

OAIEzsignfoldersignerassociation_ResponseCompound OAIWebhook_Ezsign_EzsignsignerConnect::getObjEzsignfoldersignerassociation() const {
    return m_obj_ezsignfoldersignerassociation;
}
void OAIWebhook_Ezsign_EzsignsignerConnect::setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_ResponseCompound &obj_ezsignfoldersignerassociation) {
    m_obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    m_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_obj_ezsignfoldersignerassociation_Set() const{
    return m_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::is_obj_ezsignfoldersignerassociation_Valid() const{
    return m_obj_ezsignfoldersignerassociation_isValid;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::isSet() const {
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

        if (m_obj_ezsignfoldersignerassociation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Ezsign_EzsignsignerConnect::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && m_obj_ezsignfoldersignerassociation_isValid && true;
}

} // namespace OpenAPI
