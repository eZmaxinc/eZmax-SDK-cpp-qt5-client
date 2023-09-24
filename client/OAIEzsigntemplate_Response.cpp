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

#include "OAIEzsigntemplate_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_Response::OAIEzsigntemplate_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_Response::OAIEzsigntemplate_Response() {
    this->initializeModel();
}

OAIEzsigntemplate_Response::~OAIEzsigntemplate_Response() {}

void OAIEzsigntemplate_Response::initializeModel() {

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_fki_ezsigntemplatedocument_id_isSet = false;
    m_fki_ezsigntemplatedocument_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_s_ezsigntemplate_description_isSet = false;
    m_s_ezsigntemplate_description_isValid = false;

    m_b_ezsigntemplate_adminonly_isSet = false;
    m_b_ezsigntemplate_adminonly_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIEzsigntemplate_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_fki_ezsigntemplatedocument_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsigntemplatedocument_id, json[QString("fkiEzsigntemplatedocumentID")]);
    m_fki_ezsigntemplatedocument_id_isSet = !json[QString("fkiEzsigntemplatedocumentID")].isNull() && m_fki_ezsigntemplatedocument_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::OpenAPI::fromJsonValue(m_s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_s_ezsigntemplate_description_isValid = ::OpenAPI::fromJsonValue(m_s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_b_ezsigntemplate_adminonly_isValid = ::OpenAPI::fromJsonValue(m_b_ezsigntemplate_adminonly, json[QString("bEzsigntemplateAdminonly")]);
    m_b_ezsigntemplate_adminonly_isSet = !json[QString("bEzsigntemplateAdminonly")].isNull() && m_b_ezsigntemplate_adminonly_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIEzsigntemplate_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::OpenAPI::toJsonValue(m_pki_ezsigntemplate_id));
    }
    if (m_fki_ezsigntemplatedocument_id_isSet) {
        obj.insert(QString("fkiEzsigntemplatedocumentID"), ::OpenAPI::toJsonValue(m_fki_ezsigntemplatedocument_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(m_fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::OpenAPI::toJsonValue(m_s_language_name_x));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::OpenAPI::toJsonValue(m_s_ezsigntemplate_description));
    }
    if (m_b_ezsigntemplate_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplateAdminonly"), ::OpenAPI::toJsonValue(m_b_ezsigntemplate_adminonly));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 OAIEzsigntemplate_Response::getPkiEzsigntemplateId() const {
    return m_pki_ezsigntemplate_id;
}
void OAIEzsigntemplate_Response::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    m_pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    m_pki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplate_Response::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplate_Response::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

qint32 OAIEzsigntemplate_Response::getFkiEzsigntemplatedocumentId() const {
    return m_fki_ezsigntemplatedocument_id;
}
void OAIEzsigntemplate_Response::setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id) {
    m_fki_ezsigntemplatedocument_id = fki_ezsigntemplatedocument_id;
    m_fki_ezsigntemplatedocument_id_isSet = true;
}

bool OAIEzsigntemplate_Response::is_fki_ezsigntemplatedocument_id_Set() const{
    return m_fki_ezsigntemplatedocument_id_isSet;
}

bool OAIEzsigntemplate_Response::is_fki_ezsigntemplatedocument_id_Valid() const{
    return m_fki_ezsigntemplatedocument_id_isValid;
}

qint32 OAIEzsigntemplate_Response::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void OAIEzsigntemplate_Response::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplate_Response::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplate_Response::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplate_Response::getFkiLanguageId() const {
    return m_fki_language_id;
}
void OAIEzsigntemplate_Response::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplate_Response::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplate_Response::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplate_Response::getSLanguageNameX() const {
    return m_s_language_name_x;
}
void OAIEzsigntemplate_Response::setSLanguageNameX(const QString &s_language_name_x) {
    m_s_language_name_x = s_language_name_x;
    m_s_language_name_x_isSet = true;
}

bool OAIEzsigntemplate_Response::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool OAIEzsigntemplate_Response::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

QString OAIEzsigntemplate_Response::getSEzsigntemplateDescription() const {
    return m_s_ezsigntemplate_description;
}
void OAIEzsigntemplate_Response::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    m_s_ezsigntemplate_description = s_ezsigntemplate_description;
    m_s_ezsigntemplate_description_isSet = true;
}

bool OAIEzsigntemplate_Response::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool OAIEzsigntemplate_Response::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

bool OAIEzsigntemplate_Response::isBEzsigntemplateAdminonly() const {
    return m_b_ezsigntemplate_adminonly;
}
void OAIEzsigntemplate_Response::setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly) {
    m_b_ezsigntemplate_adminonly = b_ezsigntemplate_adminonly;
    m_b_ezsigntemplate_adminonly_isSet = true;
}

bool OAIEzsigntemplate_Response::is_b_ezsigntemplate_adminonly_Set() const{
    return m_b_ezsigntemplate_adminonly_isSet;
}

bool OAIEzsigntemplate_Response::is_b_ezsigntemplate_adminonly_Valid() const{
    return m_b_ezsigntemplate_adminonly_isValid;
}

QString OAIEzsigntemplate_Response::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void OAIEzsigntemplate_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsigntemplate_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsigntemplate_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

OAICommon_Audit OAIEzsigntemplate_Response::getObjAudit() const {
    return m_obj_audit;
}
void OAIEzsigntemplate_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool OAIEzsigntemplate_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsigntemplate_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIEzsigntemplate_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntemplatedocument_id_isSet) {
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

        if (m_s_language_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplate_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplate_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
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

bool OAIEzsigntemplate_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplate_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_s_ezsigntemplate_description_isValid && m_b_ezsigntemplate_adminonly_isValid && m_s_ezsignfoldertype_name_x_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
