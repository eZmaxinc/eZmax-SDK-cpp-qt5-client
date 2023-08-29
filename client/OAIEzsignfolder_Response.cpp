/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_Response::OAIEzsignfolder_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_Response::OAIEzsignfolder_Response() {
    this->initializeModel();
}

OAIEzsignfolder_Response::~OAIEzsignfolder_Response() {}

void OAIEzsignfolder_Response::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;

    m_fki_ezsigntsarequirement_id_isSet = false;
    m_fki_ezsigntsarequirement_id_isValid = false;

    m_s_ezsigntsarequirement_description_x_isSet = false;
    m_s_ezsigntsarequirement_description_x_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_t_ezsignfolder_note_isSet = false;
    m_t_ezsignfolder_note_isValid = false;

    m_b_ezsignfolder_isdisposable_isSet = false;
    m_b_ezsignfolder_isdisposable_isValid = false;

    m_e_ezsignfolder_sendreminderfrequency_isSet = false;
    m_e_ezsignfolder_sendreminderfrequency_isValid = false;

    m_dt_ezsignfolder_delayedsenddate_isSet = false;
    m_dt_ezsignfolder_delayedsenddate_isValid = false;

    m_dt_ezsignfolder_duedate_isSet = false;
    m_dt_ezsignfolder_duedate_isValid = false;

    m_dt_ezsignfolder_sentdate_isSet = false;
    m_dt_ezsignfolder_sentdate_isValid = false;

    m_dt_ezsignfolder_scheduledarchive_isSet = false;
    m_dt_ezsignfolder_scheduledarchive_isValid = false;

    m_dt_ezsignfolder_scheduleddispose_isSet = false;
    m_dt_ezsignfolder_scheduleddispose_isValid = false;

    m_e_ezsignfolder_step_isSet = false;
    m_e_ezsignfolder_step_isValid = false;

    m_dt_ezsignfolder_close_isSet = false;
    m_dt_ezsignfolder_close_isValid = false;

    m_t_ezsignfolder_message_isSet = false;
    m_t_ezsignfolder_message_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_s_ezsignfolder_externalid_isSet = false;
    m_s_ezsignfolder_externalid_isValid = false;
}

void OAIEzsignfolder_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_fki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(m_fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(m_s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_fki_ezsigntsarequirement_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsigntsarequirement_id, json[QString("fkiEzsigntsarequirementID")]);
    m_fki_ezsigntsarequirement_id_isSet = !json[QString("fkiEzsigntsarequirementID")].isNull() && m_fki_ezsigntsarequirement_id_isValid;

    m_s_ezsigntsarequirement_description_x_isValid = ::OpenAPI::fromJsonValue(m_s_ezsigntsarequirement_description_x, json[QString("sEzsigntsarequirementDescriptionX")]);
    m_s_ezsigntsarequirement_description_x_isSet = !json[QString("sEzsigntsarequirementDescriptionX")].isNull() && m_s_ezsigntsarequirement_description_x_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_t_ezsignfolder_note_isValid = ::OpenAPI::fromJsonValue(m_t_ezsignfolder_note, json[QString("tEzsignfolderNote")]);
    m_t_ezsignfolder_note_isSet = !json[QString("tEzsignfolderNote")].isNull() && m_t_ezsignfolder_note_isValid;

    m_b_ezsignfolder_isdisposable_isValid = ::OpenAPI::fromJsonValue(m_b_ezsignfolder_isdisposable, json[QString("bEzsignfolderIsdisposable")]);
    m_b_ezsignfolder_isdisposable_isSet = !json[QString("bEzsignfolderIsdisposable")].isNull() && m_b_ezsignfolder_isdisposable_isValid;

    m_e_ezsignfolder_sendreminderfrequency_isValid = ::OpenAPI::fromJsonValue(m_e_ezsignfolder_sendreminderfrequency, json[QString("eEzsignfolderSendreminderfrequency")]);
    m_e_ezsignfolder_sendreminderfrequency_isSet = !json[QString("eEzsignfolderSendreminderfrequency")].isNull() && m_e_ezsignfolder_sendreminderfrequency_isValid;

    m_dt_ezsignfolder_delayedsenddate_isValid = ::OpenAPI::fromJsonValue(m_dt_ezsignfolder_delayedsenddate, json[QString("dtEzsignfolderDelayedsenddate")]);
    m_dt_ezsignfolder_delayedsenddate_isSet = !json[QString("dtEzsignfolderDelayedsenddate")].isNull() && m_dt_ezsignfolder_delayedsenddate_isValid;

    m_dt_ezsignfolder_duedate_isValid = ::OpenAPI::fromJsonValue(m_dt_ezsignfolder_duedate, json[QString("dtEzsignfolderDuedate")]);
    m_dt_ezsignfolder_duedate_isSet = !json[QString("dtEzsignfolderDuedate")].isNull() && m_dt_ezsignfolder_duedate_isValid;

    m_dt_ezsignfolder_sentdate_isValid = ::OpenAPI::fromJsonValue(m_dt_ezsignfolder_sentdate, json[QString("dtEzsignfolderSentdate")]);
    m_dt_ezsignfolder_sentdate_isSet = !json[QString("dtEzsignfolderSentdate")].isNull() && m_dt_ezsignfolder_sentdate_isValid;

    m_dt_ezsignfolder_scheduledarchive_isValid = ::OpenAPI::fromJsonValue(m_dt_ezsignfolder_scheduledarchive, json[QString("dtEzsignfolderScheduledarchive")]);
    m_dt_ezsignfolder_scheduledarchive_isSet = !json[QString("dtEzsignfolderScheduledarchive")].isNull() && m_dt_ezsignfolder_scheduledarchive_isValid;

    m_dt_ezsignfolder_scheduleddispose_isValid = ::OpenAPI::fromJsonValue(m_dt_ezsignfolder_scheduleddispose, json[QString("dtEzsignfolderScheduleddispose")]);
    m_dt_ezsignfolder_scheduleddispose_isSet = !json[QString("dtEzsignfolderScheduleddispose")].isNull() && m_dt_ezsignfolder_scheduleddispose_isValid;

    m_e_ezsignfolder_step_isValid = ::OpenAPI::fromJsonValue(m_e_ezsignfolder_step, json[QString("eEzsignfolderStep")]);
    m_e_ezsignfolder_step_isSet = !json[QString("eEzsignfolderStep")].isNull() && m_e_ezsignfolder_step_isValid;

    m_dt_ezsignfolder_close_isValid = ::OpenAPI::fromJsonValue(m_dt_ezsignfolder_close, json[QString("dtEzsignfolderClose")]);
    m_dt_ezsignfolder_close_isSet = !json[QString("dtEzsignfolderClose")].isNull() && m_dt_ezsignfolder_close_isValid;

    m_t_ezsignfolder_message_isValid = ::OpenAPI::fromJsonValue(m_t_ezsignfolder_message, json[QString("tEzsignfolderMessage")]);
    m_t_ezsignfolder_message_isSet = !json[QString("tEzsignfolderMessage")].isNull() && m_t_ezsignfolder_message_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_s_ezsignfolder_externalid_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignfolder_externalid, json[QString("sEzsignfolderExternalid")]);
    m_s_ezsignfolder_externalid_isSet = !json[QString("sEzsignfolderExternalid")].isNull() && m_s_ezsignfolder_externalid_isValid;
}

QString OAIEzsignfolder_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(m_pki_ezsignfolder_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::OpenAPI::toJsonValue(m_fki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(m_s_billingentityinternal_description_x));
    }
    if (m_fki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("fkiEzsigntsarequirementID"), ::OpenAPI::toJsonValue(m_fki_ezsigntsarequirement_id));
    }
    if (m_s_ezsigntsarequirement_description_x_isSet) {
        obj.insert(QString("sEzsigntsarequirementDescriptionX"), ::OpenAPI::toJsonValue(m_s_ezsigntsarequirement_description_x));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_t_ezsignfolder_note_isSet) {
        obj.insert(QString("tEzsignfolderNote"), ::OpenAPI::toJsonValue(m_t_ezsignfolder_note));
    }
    if (m_b_ezsignfolder_isdisposable_isSet) {
        obj.insert(QString("bEzsignfolderIsdisposable"), ::OpenAPI::toJsonValue(m_b_ezsignfolder_isdisposable));
    }
    if (m_e_ezsignfolder_sendreminderfrequency.isSet()) {
        obj.insert(QString("eEzsignfolderSendreminderfrequency"), ::OpenAPI::toJsonValue(m_e_ezsignfolder_sendreminderfrequency));
    }
    if (m_dt_ezsignfolder_delayedsenddate_isSet) {
        obj.insert(QString("dtEzsignfolderDelayedsenddate"), ::OpenAPI::toJsonValue(m_dt_ezsignfolder_delayedsenddate));
    }
    if (m_dt_ezsignfolder_duedate_isSet) {
        obj.insert(QString("dtEzsignfolderDuedate"), ::OpenAPI::toJsonValue(m_dt_ezsignfolder_duedate));
    }
    if (m_dt_ezsignfolder_sentdate_isSet) {
        obj.insert(QString("dtEzsignfolderSentdate"), ::OpenAPI::toJsonValue(m_dt_ezsignfolder_sentdate));
    }
    if (m_dt_ezsignfolder_scheduledarchive_isSet) {
        obj.insert(QString("dtEzsignfolderScheduledarchive"), ::OpenAPI::toJsonValue(m_dt_ezsignfolder_scheduledarchive));
    }
    if (m_dt_ezsignfolder_scheduleddispose_isSet) {
        obj.insert(QString("dtEzsignfolderScheduleddispose"), ::OpenAPI::toJsonValue(m_dt_ezsignfolder_scheduleddispose));
    }
    if (m_e_ezsignfolder_step.isSet()) {
        obj.insert(QString("eEzsignfolderStep"), ::OpenAPI::toJsonValue(m_e_ezsignfolder_step));
    }
    if (m_dt_ezsignfolder_close_isSet) {
        obj.insert(QString("dtEzsignfolderClose"), ::OpenAPI::toJsonValue(m_dt_ezsignfolder_close));
    }
    if (m_t_ezsignfolder_message_isSet) {
        obj.insert(QString("tEzsignfolderMessage"), ::OpenAPI::toJsonValue(m_t_ezsignfolder_message));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(m_obj_audit));
    }
    if (m_s_ezsignfolder_externalid_isSet) {
        obj.insert(QString("sEzsignfolderExternalid"), ::OpenAPI::toJsonValue(m_s_ezsignfolder_externalid));
    }
    return obj;
}

qint32 OAIEzsignfolder_Response::getPkiEzsignfolderId() const {
    return m_pki_ezsignfolder_id;
}
void OAIEzsignfolder_Response::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    m_pki_ezsignfolder_id = pki_ezsignfolder_id;
    m_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_Response::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_Response::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

qint32 OAIEzsignfolder_Response::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void OAIEzsignfolder_Response::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfolder_Response::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfolder_Response::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString OAIEzsignfolder_Response::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void OAIEzsignfolder_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsignfolder_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsignfolder_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

qint32 OAIEzsignfolder_Response::getFkiBillingentityinternalId() const {
    return m_fki_billingentityinternal_id;
}
void OAIEzsignfolder_Response::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    m_fki_billingentityinternal_id = fki_billingentityinternal_id;
    m_fki_billingentityinternal_id_isSet = true;
}

bool OAIEzsignfolder_Response::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool OAIEzsignfolder_Response::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString OAIEzsignfolder_Response::getSBillingentityinternalDescriptionX() const {
    return m_s_billingentityinternal_description_x;
}
void OAIEzsignfolder_Response::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    m_s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIEzsignfolder_Response::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIEzsignfolder_Response::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

qint32 OAIEzsignfolder_Response::getFkiEzsigntsarequirementId() const {
    return m_fki_ezsigntsarequirement_id;
}
void OAIEzsignfolder_Response::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    m_fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    m_fki_ezsigntsarequirement_id_isSet = true;
}

bool OAIEzsignfolder_Response::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool OAIEzsignfolder_Response::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString OAIEzsignfolder_Response::getSEzsigntsarequirementDescriptionX() const {
    return m_s_ezsigntsarequirement_description_x;
}
void OAIEzsignfolder_Response::setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x) {
    m_s_ezsigntsarequirement_description_x = s_ezsigntsarequirement_description_x;
    m_s_ezsigntsarequirement_description_x_isSet = true;
}

bool OAIEzsignfolder_Response::is_s_ezsigntsarequirement_description_x_Set() const{
    return m_s_ezsigntsarequirement_description_x_isSet;
}

bool OAIEzsignfolder_Response::is_s_ezsigntsarequirement_description_x_Valid() const{
    return m_s_ezsigntsarequirement_description_x_isValid;
}

QString OAIEzsignfolder_Response::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void OAIEzsignfolder_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool OAIEzsignfolder_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAIEzsignfolder_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAIEzsignfolder_Response::getTEzsignfolderNote() const {
    return m_t_ezsignfolder_note;
}
void OAIEzsignfolder_Response::setTEzsignfolderNote(const QString &t_ezsignfolder_note) {
    m_t_ezsignfolder_note = t_ezsignfolder_note;
    m_t_ezsignfolder_note_isSet = true;
}

bool OAIEzsignfolder_Response::is_t_ezsignfolder_note_Set() const{
    return m_t_ezsignfolder_note_isSet;
}

bool OAIEzsignfolder_Response::is_t_ezsignfolder_note_Valid() const{
    return m_t_ezsignfolder_note_isValid;
}

bool OAIEzsignfolder_Response::isBEzsignfolderIsdisposable() const {
    return m_b_ezsignfolder_isdisposable;
}
void OAIEzsignfolder_Response::setBEzsignfolderIsdisposable(const bool &b_ezsignfolder_isdisposable) {
    m_b_ezsignfolder_isdisposable = b_ezsignfolder_isdisposable;
    m_b_ezsignfolder_isdisposable_isSet = true;
}

bool OAIEzsignfolder_Response::is_b_ezsignfolder_isdisposable_Set() const{
    return m_b_ezsignfolder_isdisposable_isSet;
}

bool OAIEzsignfolder_Response::is_b_ezsignfolder_isdisposable_Valid() const{
    return m_b_ezsignfolder_isdisposable_isValid;
}

OAIField_eEzsignfolderSendreminderfrequency OAIEzsignfolder_Response::getEEzsignfolderSendreminderfrequency() const {
    return m_e_ezsignfolder_sendreminderfrequency;
}
void OAIEzsignfolder_Response::setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    m_e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool OAIEzsignfolder_Response::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool OAIEzsignfolder_Response::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

QString OAIEzsignfolder_Response::getDtEzsignfolderDelayedsenddate() const {
    return m_dt_ezsignfolder_delayedsenddate;
}
void OAIEzsignfolder_Response::setDtEzsignfolderDelayedsenddate(const QString &dt_ezsignfolder_delayedsenddate) {
    m_dt_ezsignfolder_delayedsenddate = dt_ezsignfolder_delayedsenddate;
    m_dt_ezsignfolder_delayedsenddate_isSet = true;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_delayedsenddate_Set() const{
    return m_dt_ezsignfolder_delayedsenddate_isSet;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_delayedsenddate_Valid() const{
    return m_dt_ezsignfolder_delayedsenddate_isValid;
}

QString OAIEzsignfolder_Response::getDtEzsignfolderDuedate() const {
    return m_dt_ezsignfolder_duedate;
}
void OAIEzsignfolder_Response::setDtEzsignfolderDuedate(const QString &dt_ezsignfolder_duedate) {
    m_dt_ezsignfolder_duedate = dt_ezsignfolder_duedate;
    m_dt_ezsignfolder_duedate_isSet = true;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_duedate_Set() const{
    return m_dt_ezsignfolder_duedate_isSet;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_duedate_Valid() const{
    return m_dt_ezsignfolder_duedate_isValid;
}

QString OAIEzsignfolder_Response::getDtEzsignfolderSentdate() const {
    return m_dt_ezsignfolder_sentdate;
}
void OAIEzsignfolder_Response::setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate) {
    m_dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    m_dt_ezsignfolder_sentdate_isSet = true;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_sentdate_Set() const{
    return m_dt_ezsignfolder_sentdate_isSet;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_sentdate_Valid() const{
    return m_dt_ezsignfolder_sentdate_isValid;
}

QString OAIEzsignfolder_Response::getDtEzsignfolderScheduledarchive() const {
    return m_dt_ezsignfolder_scheduledarchive;
}
void OAIEzsignfolder_Response::setDtEzsignfolderScheduledarchive(const QString &dt_ezsignfolder_scheduledarchive) {
    m_dt_ezsignfolder_scheduledarchive = dt_ezsignfolder_scheduledarchive;
    m_dt_ezsignfolder_scheduledarchive_isSet = true;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_scheduledarchive_Set() const{
    return m_dt_ezsignfolder_scheduledarchive_isSet;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_scheduledarchive_Valid() const{
    return m_dt_ezsignfolder_scheduledarchive_isValid;
}

QString OAIEzsignfolder_Response::getDtEzsignfolderScheduleddispose() const {
    return m_dt_ezsignfolder_scheduleddispose;
}
void OAIEzsignfolder_Response::setDtEzsignfolderScheduleddispose(const QString &dt_ezsignfolder_scheduleddispose) {
    m_dt_ezsignfolder_scheduleddispose = dt_ezsignfolder_scheduleddispose;
    m_dt_ezsignfolder_scheduleddispose_isSet = true;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_scheduleddispose_Set() const{
    return m_dt_ezsignfolder_scheduleddispose_isSet;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_scheduleddispose_Valid() const{
    return m_dt_ezsignfolder_scheduleddispose_isValid;
}

OAIField_eEzsignfolderStep OAIEzsignfolder_Response::getEEzsignfolderStep() const {
    return m_e_ezsignfolder_step;
}
void OAIEzsignfolder_Response::setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step) {
    m_e_ezsignfolder_step = e_ezsignfolder_step;
    m_e_ezsignfolder_step_isSet = true;
}

bool OAIEzsignfolder_Response::is_e_ezsignfolder_step_Set() const{
    return m_e_ezsignfolder_step_isSet;
}

bool OAIEzsignfolder_Response::is_e_ezsignfolder_step_Valid() const{
    return m_e_ezsignfolder_step_isValid;
}

QString OAIEzsignfolder_Response::getDtEzsignfolderClose() const {
    return m_dt_ezsignfolder_close;
}
void OAIEzsignfolder_Response::setDtEzsignfolderClose(const QString &dt_ezsignfolder_close) {
    m_dt_ezsignfolder_close = dt_ezsignfolder_close;
    m_dt_ezsignfolder_close_isSet = true;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_close_Set() const{
    return m_dt_ezsignfolder_close_isSet;
}

bool OAIEzsignfolder_Response::is_dt_ezsignfolder_close_Valid() const{
    return m_dt_ezsignfolder_close_isValid;
}

QString OAIEzsignfolder_Response::getTEzsignfolderMessage() const {
    return m_t_ezsignfolder_message;
}
void OAIEzsignfolder_Response::setTEzsignfolderMessage(const QString &t_ezsignfolder_message) {
    m_t_ezsignfolder_message = t_ezsignfolder_message;
    m_t_ezsignfolder_message_isSet = true;
}

bool OAIEzsignfolder_Response::is_t_ezsignfolder_message_Set() const{
    return m_t_ezsignfolder_message_isSet;
}

bool OAIEzsignfolder_Response::is_t_ezsignfolder_message_Valid() const{
    return m_t_ezsignfolder_message_isValid;
}

OAICommon_Audit OAIEzsignfolder_Response::getObjAudit() const {
    return m_obj_audit;
}
void OAIEzsignfolder_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool OAIEzsignfolder_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsignfolder_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QString OAIEzsignfolder_Response::getSEzsignfolderExternalid() const {
    return m_s_ezsignfolder_externalid;
}
void OAIEzsignfolder_Response::setSEzsignfolderExternalid(const QString &s_ezsignfolder_externalid) {
    m_s_ezsignfolder_externalid = s_ezsignfolder_externalid;
    m_s_ezsignfolder_externalid_isSet = true;
}

bool OAIEzsignfolder_Response::is_s_ezsignfolder_externalid_Set() const{
    return m_s_ezsignfolder_externalid_isSet;
}

bool OAIEzsignfolder_Response::is_s_ezsignfolder_externalid_Valid() const{
    return m_s_ezsignfolder_externalid_isValid;
}

bool OAIEzsignfolder_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
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

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntsarequirement_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntsarequirement_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfolder_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_isdisposable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_sendreminderfrequency.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_delayedsenddate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_sentdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_scheduledarchive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_scheduleddispose_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignfolder_step.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_close_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfolder_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_externalid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && true;
}

} // namespace OpenAPI
