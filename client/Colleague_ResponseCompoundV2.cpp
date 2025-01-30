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

#include "Colleague_ResponseCompoundV2.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Colleague_ResponseCompoundV2::Colleague_ResponseCompoundV2(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Colleague_ResponseCompoundV2::Colleague_ResponseCompoundV2() {
    this->initializeModel();
}

Colleague_ResponseCompoundV2::~Colleague_ResponseCompoundV2() {}

void Colleague_ResponseCompoundV2::initializeModel() {

    m_pki_colleague_id_isSet = false;
    m_pki_colleague_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_user_id_colleague_isSet = false;
    m_fki_user_id_colleague_isValid = false;

    m_b_colleague_ezsignemail_isSet = false;
    m_b_colleague_ezsignemail_isValid = false;

    m_b_colleague_financial_isSet = false;
    m_b_colleague_financial_isValid = false;

    m_b_colleague_usecloneemail_isSet = false;
    m_b_colleague_usecloneemail_isValid = false;

    m_b_colleague_attachment_isSet = false;
    m_b_colleague_attachment_isValid = false;

    m_b_colleague_canafe_isSet = false;
    m_b_colleague_canafe_isValid = false;

    m_b_colleague_permission_isSet = false;
    m_b_colleague_permission_isValid = false;

    m_b_colleague_realestatecompleted_isSet = false;
    m_b_colleague_realestatecompleted_isValid = false;

    m_dt_colleague_from_isSet = false;
    m_dt_colleague_from_isValid = false;

    m_dt_colleague_to_isSet = false;
    m_dt_colleague_to_isValid = false;

    m_e_colleague_ezsign_isSet = false;
    m_e_colleague_ezsign_isValid = false;

    m_e_colleague_realestateinprogress_isSet = false;
    m_e_colleague_realestateinprogress_isValid = false;

    m_obj_user_name_isSet = false;
    m_obj_user_name_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void Colleague_ResponseCompoundV2::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Colleague_ResponseCompoundV2::fromJsonObject(QJsonObject json) {

    m_pki_colleague_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_colleague_id, json[QString("pkiColleagueID")]);
    m_pki_colleague_id_isSet = !json[QString("pkiColleagueID")].isNull() && m_pki_colleague_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_user_id_colleague_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id_colleague, json[QString("fkiUserIDColleague")]);
    m_fki_user_id_colleague_isSet = !json[QString("fkiUserIDColleague")].isNull() && m_fki_user_id_colleague_isValid;

    m_b_colleague_ezsignemail_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_ezsignemail, json[QString("bColleagueEzsignemail")]);
    m_b_colleague_ezsignemail_isSet = !json[QString("bColleagueEzsignemail")].isNull() && m_b_colleague_ezsignemail_isValid;

    m_b_colleague_financial_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_financial, json[QString("bColleagueFinancial")]);
    m_b_colleague_financial_isSet = !json[QString("bColleagueFinancial")].isNull() && m_b_colleague_financial_isValid;

    m_b_colleague_usecloneemail_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_usecloneemail, json[QString("bColleagueUsecloneemail")]);
    m_b_colleague_usecloneemail_isSet = !json[QString("bColleagueUsecloneemail")].isNull() && m_b_colleague_usecloneemail_isValid;

    m_b_colleague_attachment_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_attachment, json[QString("bColleagueAttachment")]);
    m_b_colleague_attachment_isSet = !json[QString("bColleagueAttachment")].isNull() && m_b_colleague_attachment_isValid;

    m_b_colleague_canafe_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_canafe, json[QString("bColleagueCanafe")]);
    m_b_colleague_canafe_isSet = !json[QString("bColleagueCanafe")].isNull() && m_b_colleague_canafe_isValid;

    m_b_colleague_permission_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_permission, json[QString("bColleaguePermission")]);
    m_b_colleague_permission_isSet = !json[QString("bColleaguePermission")].isNull() && m_b_colleague_permission_isValid;

    m_b_colleague_realestatecompleted_isValid = ::Ezmaxapi::fromJsonValue(m_b_colleague_realestatecompleted, json[QString("bColleagueRealestatecompleted")]);
    m_b_colleague_realestatecompleted_isSet = !json[QString("bColleagueRealestatecompleted")].isNull() && m_b_colleague_realestatecompleted_isValid;

    m_dt_colleague_from_isValid = ::Ezmaxapi::fromJsonValue(m_dt_colleague_from, json[QString("dtColleagueFrom")]);
    m_dt_colleague_from_isSet = !json[QString("dtColleagueFrom")].isNull() && m_dt_colleague_from_isValid;

    m_dt_colleague_to_isValid = ::Ezmaxapi::fromJsonValue(m_dt_colleague_to, json[QString("dtColleagueTo")]);
    m_dt_colleague_to_isSet = !json[QString("dtColleagueTo")].isNull() && m_dt_colleague_to_isValid;

    m_e_colleague_ezsign_isValid = ::Ezmaxapi::fromJsonValue(m_e_colleague_ezsign, json[QString("eColleagueEzsign")]);
    m_e_colleague_ezsign_isSet = !json[QString("eColleagueEzsign")].isNull() && m_e_colleague_ezsign_isValid;

    m_e_colleague_realestateinprogress_isValid = ::Ezmaxapi::fromJsonValue(m_e_colleague_realestateinprogress, json[QString("eColleagueRealestateinprogress")]);
    m_e_colleague_realestateinprogress_isSet = !json[QString("eColleagueRealestateinprogress")].isNull() && m_e_colleague_realestateinprogress_isValid;

    m_obj_user_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_user_name, json[QString("objUserName")]);
    m_obj_user_name_isSet = !json[QString("objUserName")].isNull() && m_obj_user_name_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString Colleague_ResponseCompoundV2::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Colleague_ResponseCompoundV2::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_colleague_id_isSet) {
        obj.insert(QString("pkiColleagueID"), ::Ezmaxapi::toJsonValue(m_pki_colleague_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_user_id_colleague_isSet) {
        obj.insert(QString("fkiUserIDColleague"), ::Ezmaxapi::toJsonValue(m_fki_user_id_colleague));
    }
    if (m_b_colleague_ezsignemail_isSet) {
        obj.insert(QString("bColleagueEzsignemail"), ::Ezmaxapi::toJsonValue(m_b_colleague_ezsignemail));
    }
    if (m_b_colleague_financial_isSet) {
        obj.insert(QString("bColleagueFinancial"), ::Ezmaxapi::toJsonValue(m_b_colleague_financial));
    }
    if (m_b_colleague_usecloneemail_isSet) {
        obj.insert(QString("bColleagueUsecloneemail"), ::Ezmaxapi::toJsonValue(m_b_colleague_usecloneemail));
    }
    if (m_b_colleague_attachment_isSet) {
        obj.insert(QString("bColleagueAttachment"), ::Ezmaxapi::toJsonValue(m_b_colleague_attachment));
    }
    if (m_b_colleague_canafe_isSet) {
        obj.insert(QString("bColleagueCanafe"), ::Ezmaxapi::toJsonValue(m_b_colleague_canafe));
    }
    if (m_b_colleague_permission_isSet) {
        obj.insert(QString("bColleaguePermission"), ::Ezmaxapi::toJsonValue(m_b_colleague_permission));
    }
    if (m_b_colleague_realestatecompleted_isSet) {
        obj.insert(QString("bColleagueRealestatecompleted"), ::Ezmaxapi::toJsonValue(m_b_colleague_realestatecompleted));
    }
    if (m_dt_colleague_from_isSet) {
        obj.insert(QString("dtColleagueFrom"), ::Ezmaxapi::toJsonValue(m_dt_colleague_from));
    }
    if (m_dt_colleague_to_isSet) {
        obj.insert(QString("dtColleagueTo"), ::Ezmaxapi::toJsonValue(m_dt_colleague_to));
    }
    if (m_e_colleague_ezsign.isSet()) {
        obj.insert(QString("eColleagueEzsign"), ::Ezmaxapi::toJsonValue(m_e_colleague_ezsign));
    }
    if (m_e_colleague_realestateinprogress.isSet()) {
        obj.insert(QString("eColleagueRealestateinprogress"), ::Ezmaxapi::toJsonValue(m_e_colleague_realestateinprogress));
    }
    if (m_obj_user_name.isSet()) {
        obj.insert(QString("objUserName"), ::Ezmaxapi::toJsonValue(m_obj_user_name));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 Colleague_ResponseCompoundV2::getPkiColleagueId() const {
    return m_pki_colleague_id;
}
void Colleague_ResponseCompoundV2::setPkiColleagueId(const qint32 &pki_colleague_id) {
    m_pki_colleague_id = pki_colleague_id;
    m_pki_colleague_id_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_pki_colleague_id_Set() const{
    return m_pki_colleague_id_isSet;
}

bool Colleague_ResponseCompoundV2::is_pki_colleague_id_Valid() const{
    return m_pki_colleague_id_isValid;
}

qint32 Colleague_ResponseCompoundV2::getFkiUserId() const {
    return m_fki_user_id;
}
void Colleague_ResponseCompoundV2::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Colleague_ResponseCompoundV2::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Colleague_ResponseCompoundV2::getFkiUserIdColleague() const {
    return m_fki_user_id_colleague;
}
void Colleague_ResponseCompoundV2::setFkiUserIdColleague(const qint32 &fki_user_id_colleague) {
    m_fki_user_id_colleague = fki_user_id_colleague;
    m_fki_user_id_colleague_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_fki_user_id_colleague_Set() const{
    return m_fki_user_id_colleague_isSet;
}

bool Colleague_ResponseCompoundV2::is_fki_user_id_colleague_Valid() const{
    return m_fki_user_id_colleague_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleagueEzsignemail() const {
    return m_b_colleague_ezsignemail;
}
void Colleague_ResponseCompoundV2::setBColleagueEzsignemail(const bool &b_colleague_ezsignemail) {
    m_b_colleague_ezsignemail = b_colleague_ezsignemail;
    m_b_colleague_ezsignemail_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_ezsignemail_Set() const{
    return m_b_colleague_ezsignemail_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_ezsignemail_Valid() const{
    return m_b_colleague_ezsignemail_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleagueFinancial() const {
    return m_b_colleague_financial;
}
void Colleague_ResponseCompoundV2::setBColleagueFinancial(const bool &b_colleague_financial) {
    m_b_colleague_financial = b_colleague_financial;
    m_b_colleague_financial_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_financial_Set() const{
    return m_b_colleague_financial_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_financial_Valid() const{
    return m_b_colleague_financial_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleagueUsecloneemail() const {
    return m_b_colleague_usecloneemail;
}
void Colleague_ResponseCompoundV2::setBColleagueUsecloneemail(const bool &b_colleague_usecloneemail) {
    m_b_colleague_usecloneemail = b_colleague_usecloneemail;
    m_b_colleague_usecloneemail_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_usecloneemail_Set() const{
    return m_b_colleague_usecloneemail_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_usecloneemail_Valid() const{
    return m_b_colleague_usecloneemail_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleagueAttachment() const {
    return m_b_colleague_attachment;
}
void Colleague_ResponseCompoundV2::setBColleagueAttachment(const bool &b_colleague_attachment) {
    m_b_colleague_attachment = b_colleague_attachment;
    m_b_colleague_attachment_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_attachment_Set() const{
    return m_b_colleague_attachment_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_attachment_Valid() const{
    return m_b_colleague_attachment_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleagueCanafe() const {
    return m_b_colleague_canafe;
}
void Colleague_ResponseCompoundV2::setBColleagueCanafe(const bool &b_colleague_canafe) {
    m_b_colleague_canafe = b_colleague_canafe;
    m_b_colleague_canafe_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_canafe_Set() const{
    return m_b_colleague_canafe_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_canafe_Valid() const{
    return m_b_colleague_canafe_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleaguePermission() const {
    return m_b_colleague_permission;
}
void Colleague_ResponseCompoundV2::setBColleaguePermission(const bool &b_colleague_permission) {
    m_b_colleague_permission = b_colleague_permission;
    m_b_colleague_permission_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_permission_Set() const{
    return m_b_colleague_permission_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_permission_Valid() const{
    return m_b_colleague_permission_isValid;
}

bool Colleague_ResponseCompoundV2::isBColleagueRealestatecompleted() const {
    return m_b_colleague_realestatecompleted;
}
void Colleague_ResponseCompoundV2::setBColleagueRealestatecompleted(const bool &b_colleague_realestatecompleted) {
    m_b_colleague_realestatecompleted = b_colleague_realestatecompleted;
    m_b_colleague_realestatecompleted_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_realestatecompleted_Set() const{
    return m_b_colleague_realestatecompleted_isSet;
}

bool Colleague_ResponseCompoundV2::is_b_colleague_realestatecompleted_Valid() const{
    return m_b_colleague_realestatecompleted_isValid;
}

QString Colleague_ResponseCompoundV2::getDtColleagueFrom() const {
    return m_dt_colleague_from;
}
void Colleague_ResponseCompoundV2::setDtColleagueFrom(const QString &dt_colleague_from) {
    m_dt_colleague_from = dt_colleague_from;
    m_dt_colleague_from_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_dt_colleague_from_Set() const{
    return m_dt_colleague_from_isSet;
}

bool Colleague_ResponseCompoundV2::is_dt_colleague_from_Valid() const{
    return m_dt_colleague_from_isValid;
}

QString Colleague_ResponseCompoundV2::getDtColleagueTo() const {
    return m_dt_colleague_to;
}
void Colleague_ResponseCompoundV2::setDtColleagueTo(const QString &dt_colleague_to) {
    m_dt_colleague_to = dt_colleague_to;
    m_dt_colleague_to_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_dt_colleague_to_Set() const{
    return m_dt_colleague_to_isSet;
}

bool Colleague_ResponseCompoundV2::is_dt_colleague_to_Valid() const{
    return m_dt_colleague_to_isValid;
}

Field_eColleagueEzsign Colleague_ResponseCompoundV2::getEColleagueEzsign() const {
    return m_e_colleague_ezsign;
}
void Colleague_ResponseCompoundV2::setEColleagueEzsign(const Field_eColleagueEzsign &e_colleague_ezsign) {
    m_e_colleague_ezsign = e_colleague_ezsign;
    m_e_colleague_ezsign_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_e_colleague_ezsign_Set() const{
    return m_e_colleague_ezsign_isSet;
}

bool Colleague_ResponseCompoundV2::is_e_colleague_ezsign_Valid() const{
    return m_e_colleague_ezsign_isValid;
}

Field_eColleagueRealestateinprogess Colleague_ResponseCompoundV2::getEColleagueRealestateinprogress() const {
    return m_e_colleague_realestateinprogress;
}
void Colleague_ResponseCompoundV2::setEColleagueRealestateinprogress(const Field_eColleagueRealestateinprogess &e_colleague_realestateinprogress) {
    m_e_colleague_realestateinprogress = e_colleague_realestateinprogress;
    m_e_colleague_realestateinprogress_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_e_colleague_realestateinprogress_Set() const{
    return m_e_colleague_realestateinprogress_isSet;
}

bool Colleague_ResponseCompoundV2::is_e_colleague_realestateinprogress_Valid() const{
    return m_e_colleague_realestateinprogress_isValid;
}

Custom_UserName_Response Colleague_ResponseCompoundV2::getObjUserName() const {
    return m_obj_user_name;
}
void Colleague_ResponseCompoundV2::setObjUserName(const Custom_UserName_Response &obj_user_name) {
    m_obj_user_name = obj_user_name;
    m_obj_user_name_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_obj_user_name_Set() const{
    return m_obj_user_name_isSet;
}

bool Colleague_ResponseCompoundV2::is_obj_user_name_Valid() const{
    return m_obj_user_name_isValid;
}

Common_Audit Colleague_ResponseCompoundV2::getObjAudit() const {
    return m_obj_audit;
}
void Colleague_ResponseCompoundV2::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Colleague_ResponseCompoundV2::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Colleague_ResponseCompoundV2::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool Colleague_ResponseCompoundV2::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_colleague_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_colleague_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_ezsignemail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_financial_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_usecloneemail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_attachment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_canafe_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_permission_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_colleague_realestatecompleted_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_colleague_from_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_colleague_to_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_colleague_ezsign.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_colleague_realestateinprogress.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_user_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Colleague_ResponseCompoundV2::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_colleague_id_isValid && m_fki_user_id_isValid && m_fki_user_id_colleague_isValid && m_b_colleague_ezsignemail_isValid && m_b_colleague_financial_isValid && m_b_colleague_usecloneemail_isValid && m_b_colleague_attachment_isValid && m_b_colleague_canafe_isValid && m_b_colleague_permission_isValid && m_b_colleague_realestatecompleted_isValid && m_e_colleague_ezsign_isValid && m_e_colleague_realestateinprogress_isValid && m_obj_user_name_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi
