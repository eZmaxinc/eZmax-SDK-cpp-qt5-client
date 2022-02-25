/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_ResponseCompound::OAIEzsignbulksend_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_ResponseCompound::OAIEzsignbulksend_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignbulksend_ResponseCompound::~OAIEzsignbulksend_ResponseCompound() {}

void OAIEzsignbulksend_ResponseCompound::initializeModel() {

    m_pki_ezsignbulksend_id_isSet = false;
    m_pki_ezsignbulksend_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsignbulksend_description_isSet = false;
    m_s_ezsignbulksend_description_isValid = false;

    m_t_ezsignbulksend_note_isSet = false;
    m_t_ezsignbulksend_note_isValid = false;

    m_b_ezsignbulksend_isactive_isSet = false;
    m_b_ezsignbulksend_isactive_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIEzsignbulksend_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksend_id, json[QString("pkiEzsignbulksendID")]);
    m_pki_ezsignbulksend_id_isSet = !json[QString("pkiEzsignbulksendID")].isNull() && m_pki_ezsignbulksend_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsignbulksend_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignbulksend_description, json[QString("sEzsignbulksendDescription")]);
    m_s_ezsignbulksend_description_isSet = !json[QString("sEzsignbulksendDescription")].isNull() && m_s_ezsignbulksend_description_isValid;

    m_t_ezsignbulksend_note_isValid = ::OpenAPI::fromJsonValue(t_ezsignbulksend_note, json[QString("tEzsignbulksendNote")]);
    m_t_ezsignbulksend_note_isSet = !json[QString("tEzsignbulksendNote")].isNull() && m_t_ezsignbulksend_note_isValid;

    m_b_ezsignbulksend_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_isactive, json[QString("bEzsignbulksendIsactive")]);
    m_b_ezsignbulksend_isactive_isSet = !json[QString("bEzsignbulksendIsactive")].isNull() && m_b_ezsignbulksend_isactive_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksend_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendID"), ::OpenAPI::toJsonValue(pki_ezsignbulksend_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsignbulksend_description_isSet) {
        obj.insert(QString("sEzsignbulksendDescription"), ::OpenAPI::toJsonValue(s_ezsignbulksend_description));
    }
    if (m_t_ezsignbulksend_note_isSet) {
        obj.insert(QString("tEzsignbulksendNote"), ::OpenAPI::toJsonValue(t_ezsignbulksend_note));
    }
    if (m_b_ezsignbulksend_isactive_isSet) {
        obj.insert(QString("bEzsignbulksendIsactive"), ::OpenAPI::toJsonValue(b_ezsignbulksend_isactive));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    return obj;
}

qint32 OAIEzsignbulksend_ResponseCompound::getPkiEzsignbulksendId() const {
    return pki_ezsignbulksend_id;
}
void OAIEzsignbulksend_ResponseCompound::setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id) {
    this->pki_ezsignbulksend_id = pki_ezsignbulksend_id;
    this->m_pki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_pki_ezsignbulksend_id_Set() const{
    return m_pki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_pki_ezsignbulksend_id_Valid() const{
    return m_pki_ezsignbulksend_id_isValid;
}

qint32 OAIEzsignbulksend_ResponseCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignbulksend_ResponseCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsignbulksend_ResponseCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsignbulksend_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::getSEzsignbulksendDescription() const {
    return s_ezsignbulksend_description;
}
void OAIEzsignbulksend_ResponseCompound::setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description) {
    this->s_ezsignbulksend_description = s_ezsignbulksend_description;
    this->m_s_ezsignbulksend_description_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_ezsignbulksend_description_Set() const{
    return m_s_ezsignbulksend_description_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_s_ezsignbulksend_description_Valid() const{
    return m_s_ezsignbulksend_description_isValid;
}

QString OAIEzsignbulksend_ResponseCompound::getTEzsignbulksendNote() const {
    return t_ezsignbulksend_note;
}
void OAIEzsignbulksend_ResponseCompound::setTEzsignbulksendNote(const QString &t_ezsignbulksend_note) {
    this->t_ezsignbulksend_note = t_ezsignbulksend_note;
    this->m_t_ezsignbulksend_note_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_t_ezsignbulksend_note_Set() const{
    return m_t_ezsignbulksend_note_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_t_ezsignbulksend_note_Valid() const{
    return m_t_ezsignbulksend_note_isValid;
}

bool OAIEzsignbulksend_ResponseCompound::isBEzsignbulksendIsactive() const {
    return b_ezsignbulksend_isactive;
}
void OAIEzsignbulksend_ResponseCompound::setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive) {
    this->b_ezsignbulksend_isactive = b_ezsignbulksend_isactive;
    this->m_b_ezsignbulksend_isactive_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_b_ezsignbulksend_isactive_Set() const{
    return m_b_ezsignbulksend_isactive_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_b_ezsignbulksend_isactive_Valid() const{
    return m_b_ezsignbulksend_isactive_isValid;
}

OAICommon_Audit OAIEzsignbulksend_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAIEzsignbulksend_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzsignbulksend_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsignbulksend_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIEzsignbulksend_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksend_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignbulksend_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksend_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsignbulksend_description_isValid && m_t_ezsignbulksend_note_isValid && m_b_ezsignbulksend_isactive_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
