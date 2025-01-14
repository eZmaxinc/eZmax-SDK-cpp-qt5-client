/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Webhook_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Webhook_ResponseCompound::Webhook_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Webhook_ResponseCompound::Webhook_ResponseCompound() {
    this->initializeModel();
}

Webhook_ResponseCompound::~Webhook_ResponseCompound() {}

void Webhook_ResponseCompound::initializeModel() {

    m_pki_webhook_id_isSet = false;
    m_pki_webhook_id_isValid = false;

    m_fki_authenticationexternal_id_isSet = false;
    m_fki_authenticationexternal_id_isValid = false;

    m_s_webhook_description_isSet = false;
    m_s_webhook_description_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_e_webhook_module_isSet = false;
    m_e_webhook_module_isValid = false;

    m_e_webhook_ezsignevent_isSet = false;
    m_e_webhook_ezsignevent_isValid = false;

    m_e_webhook_managementevent_isSet = false;
    m_e_webhook_managementevent_isValid = false;

    m_s_webhook_url_isSet = false;
    m_s_webhook_url_isValid = false;

    m_s_webhook_emailfailed_isSet = false;
    m_s_webhook_emailfailed_isValid = false;

    m_s_webhook_apikey_isSet = false;
    m_s_webhook_apikey_isValid = false;

    m_s_webhook_secret_isSet = false;
    m_s_webhook_secret_isValid = false;

    m_b_webhook_isactive_isSet = false;
    m_b_webhook_isactive_isValid = false;

    m_b_webhook_issigned_isSet = false;
    m_b_webhook_issigned_isValid = false;

    m_b_webhook_skipsslvalidation_isSet = false;
    m_b_webhook_skipsslvalidation_isValid = false;

    m_s_authenticationexternal_description_isSet = false;
    m_s_authenticationexternal_description_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_s_webhook_event_isSet = false;
    m_s_webhook_event_isValid = false;

    m_a_obj_webhookheader_isSet = false;
    m_a_obj_webhookheader_isValid = false;
}

void Webhook_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Webhook_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_webhook_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_webhook_id, json[QString("pkiWebhookID")]);
    m_pki_webhook_id_isSet = !json[QString("pkiWebhookID")].isNull() && m_pki_webhook_id_isValid;

    m_fki_authenticationexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_authenticationexternal_id, json[QString("fkiAuthenticationexternalID")]);
    m_fki_authenticationexternal_id_isSet = !json[QString("fkiAuthenticationexternalID")].isNull() && m_fki_authenticationexternal_id_isValid;

    m_s_webhook_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_description, json[QString("sWebhookDescription")]);
    m_s_webhook_description_isSet = !json[QString("sWebhookDescription")].isNull() && m_s_webhook_description_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_e_webhook_module_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_module, json[QString("eWebhookModule")]);
    m_e_webhook_module_isSet = !json[QString("eWebhookModule")].isNull() && m_e_webhook_module_isValid;

    m_e_webhook_ezsignevent_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_ezsignevent, json[QString("eWebhookEzsignevent")]);
    m_e_webhook_ezsignevent_isSet = !json[QString("eWebhookEzsignevent")].isNull() && m_e_webhook_ezsignevent_isValid;

    m_e_webhook_managementevent_isValid = ::Ezmaxapi::fromJsonValue(m_e_webhook_managementevent, json[QString("eWebhookManagementevent")]);
    m_e_webhook_managementevent_isSet = !json[QString("eWebhookManagementevent")].isNull() && m_e_webhook_managementevent_isValid;

    m_s_webhook_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_url, json[QString("sWebhookUrl")]);
    m_s_webhook_url_isSet = !json[QString("sWebhookUrl")].isNull() && m_s_webhook_url_isValid;

    m_s_webhook_emailfailed_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_emailfailed, json[QString("sWebhookEmailfailed")]);
    m_s_webhook_emailfailed_isSet = !json[QString("sWebhookEmailfailed")].isNull() && m_s_webhook_emailfailed_isValid;

    m_s_webhook_apikey_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_apikey, json[QString("sWebhookApikey")]);
    m_s_webhook_apikey_isSet = !json[QString("sWebhookApikey")].isNull() && m_s_webhook_apikey_isValid;

    m_s_webhook_secret_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_secret, json[QString("sWebhookSecret")]);
    m_s_webhook_secret_isSet = !json[QString("sWebhookSecret")].isNull() && m_s_webhook_secret_isValid;

    m_b_webhook_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_webhook_isactive, json[QString("bWebhookIsactive")]);
    m_b_webhook_isactive_isSet = !json[QString("bWebhookIsactive")].isNull() && m_b_webhook_isactive_isValid;

    m_b_webhook_issigned_isValid = ::Ezmaxapi::fromJsonValue(m_b_webhook_issigned, json[QString("bWebhookIssigned")]);
    m_b_webhook_issigned_isSet = !json[QString("bWebhookIssigned")].isNull() && m_b_webhook_issigned_isValid;

    m_b_webhook_skipsslvalidation_isValid = ::Ezmaxapi::fromJsonValue(m_b_webhook_skipsslvalidation, json[QString("bWebhookSkipsslvalidation")]);
    m_b_webhook_skipsslvalidation_isSet = !json[QString("bWebhookSkipsslvalidation")].isNull() && m_b_webhook_skipsslvalidation_isValid;

    m_s_authenticationexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_authenticationexternal_description, json[QString("sAuthenticationexternalDescription")]);
    m_s_authenticationexternal_description_isSet = !json[QString("sAuthenticationexternalDescription")].isNull() && m_s_authenticationexternal_description_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_s_webhook_event_isValid = ::Ezmaxapi::fromJsonValue(m_s_webhook_event, json[QString("sWebhookEvent")]);
    m_s_webhook_event_isSet = !json[QString("sWebhookEvent")].isNull() && m_s_webhook_event_isValid;

    m_a_obj_webhookheader_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_webhookheader, json[QString("a_objWebhookheader")]);
    m_a_obj_webhookheader_isSet = !json[QString("a_objWebhookheader")].isNull() && m_a_obj_webhookheader_isValid;
}

QString Webhook_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Webhook_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_webhook_id_isSet) {
        obj.insert(QString("pkiWebhookID"), ::Ezmaxapi::toJsonValue(m_pki_webhook_id));
    }
    if (m_fki_authenticationexternal_id_isSet) {
        obj.insert(QString("fkiAuthenticationexternalID"), ::Ezmaxapi::toJsonValue(m_fki_authenticationexternal_id));
    }
    if (m_s_webhook_description_isSet) {
        obj.insert(QString("sWebhookDescription"), ::Ezmaxapi::toJsonValue(m_s_webhook_description));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::Ezmaxapi::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_e_webhook_module.isSet()) {
        obj.insert(QString("eWebhookModule"), ::Ezmaxapi::toJsonValue(m_e_webhook_module));
    }
    if (m_e_webhook_ezsignevent.isSet()) {
        obj.insert(QString("eWebhookEzsignevent"), ::Ezmaxapi::toJsonValue(m_e_webhook_ezsignevent));
    }
    if (m_e_webhook_managementevent.isSet()) {
        obj.insert(QString("eWebhookManagementevent"), ::Ezmaxapi::toJsonValue(m_e_webhook_managementevent));
    }
    if (m_s_webhook_url_isSet) {
        obj.insert(QString("sWebhookUrl"), ::Ezmaxapi::toJsonValue(m_s_webhook_url));
    }
    if (m_s_webhook_emailfailed_isSet) {
        obj.insert(QString("sWebhookEmailfailed"), ::Ezmaxapi::toJsonValue(m_s_webhook_emailfailed));
    }
    if (m_s_webhook_apikey_isSet) {
        obj.insert(QString("sWebhookApikey"), ::Ezmaxapi::toJsonValue(m_s_webhook_apikey));
    }
    if (m_s_webhook_secret_isSet) {
        obj.insert(QString("sWebhookSecret"), ::Ezmaxapi::toJsonValue(m_s_webhook_secret));
    }
    if (m_b_webhook_isactive_isSet) {
        obj.insert(QString("bWebhookIsactive"), ::Ezmaxapi::toJsonValue(m_b_webhook_isactive));
    }
    if (m_b_webhook_issigned_isSet) {
        obj.insert(QString("bWebhookIssigned"), ::Ezmaxapi::toJsonValue(m_b_webhook_issigned));
    }
    if (m_b_webhook_skipsslvalidation_isSet) {
        obj.insert(QString("bWebhookSkipsslvalidation"), ::Ezmaxapi::toJsonValue(m_b_webhook_skipsslvalidation));
    }
    if (m_s_authenticationexternal_description_isSet) {
        obj.insert(QString("sAuthenticationexternalDescription"), ::Ezmaxapi::toJsonValue(m_s_authenticationexternal_description));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    if (m_s_webhook_event_isSet) {
        obj.insert(QString("sWebhookEvent"), ::Ezmaxapi::toJsonValue(m_s_webhook_event));
    }
    if (m_a_obj_webhookheader.size() > 0) {
        obj.insert(QString("a_objWebhookheader"), ::Ezmaxapi::toJsonValue(m_a_obj_webhookheader));
    }
    return obj;
}

qint32 Webhook_ResponseCompound::getPkiWebhookId() const {
    return m_pki_webhook_id;
}
void Webhook_ResponseCompound::setPkiWebhookId(const qint32 &pki_webhook_id) {
    m_pki_webhook_id = pki_webhook_id;
    m_pki_webhook_id_isSet = true;
}

bool Webhook_ResponseCompound::is_pki_webhook_id_Set() const{
    return m_pki_webhook_id_isSet;
}

bool Webhook_ResponseCompound::is_pki_webhook_id_Valid() const{
    return m_pki_webhook_id_isValid;
}

qint32 Webhook_ResponseCompound::getFkiAuthenticationexternalId() const {
    return m_fki_authenticationexternal_id;
}
void Webhook_ResponseCompound::setFkiAuthenticationexternalId(const qint32 &fki_authenticationexternal_id) {
    m_fki_authenticationexternal_id = fki_authenticationexternal_id;
    m_fki_authenticationexternal_id_isSet = true;
}

bool Webhook_ResponseCompound::is_fki_authenticationexternal_id_Set() const{
    return m_fki_authenticationexternal_id_isSet;
}

bool Webhook_ResponseCompound::is_fki_authenticationexternal_id_Valid() const{
    return m_fki_authenticationexternal_id_isValid;
}

QString Webhook_ResponseCompound::getSWebhookDescription() const {
    return m_s_webhook_description;
}
void Webhook_ResponseCompound::setSWebhookDescription(const QString &s_webhook_description) {
    m_s_webhook_description = s_webhook_description;
    m_s_webhook_description_isSet = true;
}

bool Webhook_ResponseCompound::is_s_webhook_description_Set() const{
    return m_s_webhook_description_isSet;
}

bool Webhook_ResponseCompound::is_s_webhook_description_Valid() const{
    return m_s_webhook_description_isValid;
}

qint32 Webhook_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void Webhook_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool Webhook_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool Webhook_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString Webhook_ResponseCompound::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void Webhook_ResponseCompound::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool Webhook_ResponseCompound::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool Webhook_ResponseCompound::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

Field_eWebhookModule Webhook_ResponseCompound::getEWebhookModule() const {
    return m_e_webhook_module;
}
void Webhook_ResponseCompound::setEWebhookModule(const Field_eWebhookModule &e_webhook_module) {
    m_e_webhook_module = e_webhook_module;
    m_e_webhook_module_isSet = true;
}

bool Webhook_ResponseCompound::is_e_webhook_module_Set() const{
    return m_e_webhook_module_isSet;
}

bool Webhook_ResponseCompound::is_e_webhook_module_Valid() const{
    return m_e_webhook_module_isValid;
}

Field_eWebhookEzsignevent Webhook_ResponseCompound::getEWebhookEzsignevent() const {
    return m_e_webhook_ezsignevent;
}
void Webhook_ResponseCompound::setEWebhookEzsignevent(const Field_eWebhookEzsignevent &e_webhook_ezsignevent) {
    m_e_webhook_ezsignevent = e_webhook_ezsignevent;
    m_e_webhook_ezsignevent_isSet = true;
}

bool Webhook_ResponseCompound::is_e_webhook_ezsignevent_Set() const{
    return m_e_webhook_ezsignevent_isSet;
}

bool Webhook_ResponseCompound::is_e_webhook_ezsignevent_Valid() const{
    return m_e_webhook_ezsignevent_isValid;
}

Field_eWebhookManagementevent Webhook_ResponseCompound::getEWebhookManagementevent() const {
    return m_e_webhook_managementevent;
}
void Webhook_ResponseCompound::setEWebhookManagementevent(const Field_eWebhookManagementevent &e_webhook_managementevent) {
    m_e_webhook_managementevent = e_webhook_managementevent;
    m_e_webhook_managementevent_isSet = true;
}

bool Webhook_ResponseCompound::is_e_webhook_managementevent_Set() const{
    return m_e_webhook_managementevent_isSet;
}

bool Webhook_ResponseCompound::is_e_webhook_managementevent_Valid() const{
    return m_e_webhook_managementevent_isValid;
}

QString Webhook_ResponseCompound::getSWebhookUrl() const {
    return m_s_webhook_url;
}
void Webhook_ResponseCompound::setSWebhookUrl(const QString &s_webhook_url) {
    m_s_webhook_url = s_webhook_url;
    m_s_webhook_url_isSet = true;
}

bool Webhook_ResponseCompound::is_s_webhook_url_Set() const{
    return m_s_webhook_url_isSet;
}

bool Webhook_ResponseCompound::is_s_webhook_url_Valid() const{
    return m_s_webhook_url_isValid;
}

QString Webhook_ResponseCompound::getSWebhookEmailfailed() const {
    return m_s_webhook_emailfailed;
}
void Webhook_ResponseCompound::setSWebhookEmailfailed(const QString &s_webhook_emailfailed) {
    m_s_webhook_emailfailed = s_webhook_emailfailed;
    m_s_webhook_emailfailed_isSet = true;
}

bool Webhook_ResponseCompound::is_s_webhook_emailfailed_Set() const{
    return m_s_webhook_emailfailed_isSet;
}

bool Webhook_ResponseCompound::is_s_webhook_emailfailed_Valid() const{
    return m_s_webhook_emailfailed_isValid;
}

QString Webhook_ResponseCompound::getSWebhookApikey() const {
    return m_s_webhook_apikey;
}
void Webhook_ResponseCompound::setSWebhookApikey(const QString &s_webhook_apikey) {
    m_s_webhook_apikey = s_webhook_apikey;
    m_s_webhook_apikey_isSet = true;
}

bool Webhook_ResponseCompound::is_s_webhook_apikey_Set() const{
    return m_s_webhook_apikey_isSet;
}

bool Webhook_ResponseCompound::is_s_webhook_apikey_Valid() const{
    return m_s_webhook_apikey_isValid;
}

QString Webhook_ResponseCompound::getSWebhookSecret() const {
    return m_s_webhook_secret;
}
void Webhook_ResponseCompound::setSWebhookSecret(const QString &s_webhook_secret) {
    m_s_webhook_secret = s_webhook_secret;
    m_s_webhook_secret_isSet = true;
}

bool Webhook_ResponseCompound::is_s_webhook_secret_Set() const{
    return m_s_webhook_secret_isSet;
}

bool Webhook_ResponseCompound::is_s_webhook_secret_Valid() const{
    return m_s_webhook_secret_isValid;
}

bool Webhook_ResponseCompound::isBWebhookIsactive() const {
    return m_b_webhook_isactive;
}
void Webhook_ResponseCompound::setBWebhookIsactive(const bool &b_webhook_isactive) {
    m_b_webhook_isactive = b_webhook_isactive;
    m_b_webhook_isactive_isSet = true;
}

bool Webhook_ResponseCompound::is_b_webhook_isactive_Set() const{
    return m_b_webhook_isactive_isSet;
}

bool Webhook_ResponseCompound::is_b_webhook_isactive_Valid() const{
    return m_b_webhook_isactive_isValid;
}

bool Webhook_ResponseCompound::isBWebhookIssigned() const {
    return m_b_webhook_issigned;
}
void Webhook_ResponseCompound::setBWebhookIssigned(const bool &b_webhook_issigned) {
    m_b_webhook_issigned = b_webhook_issigned;
    m_b_webhook_issigned_isSet = true;
}

bool Webhook_ResponseCompound::is_b_webhook_issigned_Set() const{
    return m_b_webhook_issigned_isSet;
}

bool Webhook_ResponseCompound::is_b_webhook_issigned_Valid() const{
    return m_b_webhook_issigned_isValid;
}

bool Webhook_ResponseCompound::isBWebhookSkipsslvalidation() const {
    return m_b_webhook_skipsslvalidation;
}
void Webhook_ResponseCompound::setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation) {
    m_b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    m_b_webhook_skipsslvalidation_isSet = true;
}

bool Webhook_ResponseCompound::is_b_webhook_skipsslvalidation_Set() const{
    return m_b_webhook_skipsslvalidation_isSet;
}

bool Webhook_ResponseCompound::is_b_webhook_skipsslvalidation_Valid() const{
    return m_b_webhook_skipsslvalidation_isValid;
}

QString Webhook_ResponseCompound::getSAuthenticationexternalDescription() const {
    return m_s_authenticationexternal_description;
}
void Webhook_ResponseCompound::setSAuthenticationexternalDescription(const QString &s_authenticationexternal_description) {
    m_s_authenticationexternal_description = s_authenticationexternal_description;
    m_s_authenticationexternal_description_isSet = true;
}

bool Webhook_ResponseCompound::is_s_authenticationexternal_description_Set() const{
    return m_s_authenticationexternal_description_isSet;
}

bool Webhook_ResponseCompound::is_s_authenticationexternal_description_Valid() const{
    return m_s_authenticationexternal_description_isValid;
}

Common_Audit Webhook_ResponseCompound::getObjAudit() const {
    return m_obj_audit;
}
void Webhook_ResponseCompound::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Webhook_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Webhook_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QString Webhook_ResponseCompound::getSWebhookEvent() const {
    return m_s_webhook_event;
}
void Webhook_ResponseCompound::setSWebhookEvent(const QString &s_webhook_event) {
    m_s_webhook_event = s_webhook_event;
    m_s_webhook_event_isSet = true;
}

bool Webhook_ResponseCompound::is_s_webhook_event_Set() const{
    return m_s_webhook_event_isSet;
}

bool Webhook_ResponseCompound::is_s_webhook_event_Valid() const{
    return m_s_webhook_event_isValid;
}

QList<Webhookheader_ResponseCompound> Webhook_ResponseCompound::getAObjWebhookheader() const {
    return m_a_obj_webhookheader;
}
void Webhook_ResponseCompound::setAObjWebhookheader(const QList<Webhookheader_ResponseCompound> &a_obj_webhookheader) {
    m_a_obj_webhookheader = a_obj_webhookheader;
    m_a_obj_webhookheader_isSet = true;
}

bool Webhook_ResponseCompound::is_a_obj_webhookheader_Set() const{
    return m_a_obj_webhookheader_isSet;
}

bool Webhook_ResponseCompound::is_a_obj_webhookheader_Valid() const{
    return m_a_obj_webhookheader_isValid;
}

bool Webhook_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_webhook_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_authenticationexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_module.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_ezsignevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_webhook_managementevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_emailfailed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_apikey_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_secret_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_issigned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_skipsslvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_authenticationexternal_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_event_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_webhookheader.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Webhook_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_webhook_id_isValid && m_s_webhook_description_isValid && m_e_webhook_module_isValid && m_s_webhook_url_isValid && m_s_webhook_emailfailed_isValid && m_b_webhook_isactive_isValid && m_b_webhook_issigned_isValid && m_b_webhook_skipsslvalidation_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi
