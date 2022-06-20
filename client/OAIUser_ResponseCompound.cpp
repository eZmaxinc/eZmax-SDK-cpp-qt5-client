/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUser_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_ResponseCompound::OAIUser_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_ResponseCompound::OAIUser_ResponseCompound() {
    this->initializeModel();
}

OAIUser_ResponseCompound::~OAIUser_ResponseCompound() {}

void OAIUser_ResponseCompound::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_e_user_type_isSet = false;
    m_e_user_type_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIUser_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::OpenAPI::fromJsonValue(pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_e_user_type_isValid = ::OpenAPI::fromJsonValue(e_user_type, json[QString("eUserType")]);
    m_e_user_type_isSet = !json[QString("eUserType")].isNull() && m_e_user_type_isValid;

    m_s_user_firstname_isValid = ::OpenAPI::fromJsonValue(s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::OpenAPI::fromJsonValue(s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_user_loginname_isValid = ::OpenAPI::fromJsonValue(s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIUser_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::OpenAPI::toJsonValue(pki_user_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (e_user_type.isSet()) {
        obj.insert(QString("eUserType"), ::OpenAPI::toJsonValue(e_user_type));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::OpenAPI::toJsonValue(s_user_firstname));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::OpenAPI::toJsonValue(s_user_lastname));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::OpenAPI::toJsonValue(s_user_loginname));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    return obj;
}

qint32 OAIUser_ResponseCompound::getPkiUserId() const {
    return pki_user_id;
}
void OAIUser_ResponseCompound::setPkiUserId(const qint32 &pki_user_id) {
    this->pki_user_id = pki_user_id;
    this->m_pki_user_id_isSet = true;
}

bool OAIUser_ResponseCompound::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool OAIUser_ResponseCompound::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

qint32 OAIUser_ResponseCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIUser_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIUser_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIUser_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

OAIField_eUserType OAIUser_ResponseCompound::getEUserType() const {
    return e_user_type;
}
void OAIUser_ResponseCompound::setEUserType(const OAIField_eUserType &e_user_type) {
    this->e_user_type = e_user_type;
    this->m_e_user_type_isSet = true;
}

bool OAIUser_ResponseCompound::is_e_user_type_Set() const{
    return m_e_user_type_isSet;
}

bool OAIUser_ResponseCompound::is_e_user_type_Valid() const{
    return m_e_user_type_isValid;
}

QString OAIUser_ResponseCompound::getSUserFirstname() const {
    return s_user_firstname;
}
void OAIUser_ResponseCompound::setSUserFirstname(const QString &s_user_firstname) {
    this->s_user_firstname = s_user_firstname;
    this->m_s_user_firstname_isSet = true;
}

bool OAIUser_ResponseCompound::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool OAIUser_ResponseCompound::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString OAIUser_ResponseCompound::getSUserLastname() const {
    return s_user_lastname;
}
void OAIUser_ResponseCompound::setSUserLastname(const QString &s_user_lastname) {
    this->s_user_lastname = s_user_lastname;
    this->m_s_user_lastname_isSet = true;
}

bool OAIUser_ResponseCompound::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool OAIUser_ResponseCompound::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString OAIUser_ResponseCompound::getSUserLoginname() const {
    return s_user_loginname;
}
void OAIUser_ResponseCompound::setSUserLoginname(const QString &s_user_loginname) {
    this->s_user_loginname = s_user_loginname;
    this->m_s_user_loginname_isSet = true;
}

bool OAIUser_ResponseCompound::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool OAIUser_ResponseCompound::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

OAICommon_Audit OAIUser_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAIUser_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIUser_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIUser_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIUser_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_isSet) {
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

bool OAIUser_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_user_id_isValid && m_fki_language_id_isValid && m_e_user_type_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_user_loginname_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
