/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksendtransmission_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksendtransmission_ResponseCompound::OAIEzsignbulksendtransmission_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendtransmission_ResponseCompound::OAIEzsignbulksendtransmission_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignbulksendtransmission_ResponseCompound::~OAIEzsignbulksendtransmission_ResponseCompound() {}

void OAIEzsignbulksendtransmission_ResponseCompound::initializeModel() {

    m_pki_ezsignbulksendtransmission_id_isSet = false;
    m_pki_ezsignbulksendtransmission_id_isValid = false;

    m_fki_ezsignbulksend_id_isSet = false;
    m_fki_ezsignbulksend_id_isValid = false;

    m_s_ezsignbulksendtransmission_description_isSet = false;
    m_s_ezsignbulksendtransmission_description_isValid = false;

    m_i_ezsignbulksendtransmission_errors_isSet = false;
    m_i_ezsignbulksendtransmission_errors_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;

    m_a_obj_ezsignfoldertransmission_isSet = false;
    m_a_obj_ezsignfoldertransmission_isValid = false;
}

void OAIEzsignbulksendtransmission_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendtransmission_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignbulksendtransmission_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignbulksendtransmission_id, json[QString("pkiEzsignbulksendtransmissionID")]);
    m_pki_ezsignbulksendtransmission_id_isSet = !json[QString("pkiEzsignbulksendtransmissionID")].isNull() && m_pki_ezsignbulksendtransmission_id_isValid;

    m_fki_ezsignbulksend_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignbulksend_id, json[QString("fkiEzsignbulksendID")]);
    m_fki_ezsignbulksend_id_isSet = !json[QString("fkiEzsignbulksendID")].isNull() && m_fki_ezsignbulksend_id_isValid;

    m_s_ezsignbulksendtransmission_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignbulksendtransmission_description, json[QString("sEzsignbulksendtransmissionDescription")]);
    m_s_ezsignbulksendtransmission_description_isSet = !json[QString("sEzsignbulksendtransmissionDescription")].isNull() && m_s_ezsignbulksendtransmission_description_isValid;

    m_i_ezsignbulksendtransmission_errors_isValid = ::OpenAPI::fromJsonValue(i_ezsignbulksendtransmission_errors, json[QString("iEzsignbulksendtransmissionErrors")]);
    m_i_ezsignbulksendtransmission_errors_isSet = !json[QString("iEzsignbulksendtransmissionErrors")].isNull() && m_i_ezsignbulksendtransmission_errors_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;

    m_a_obj_ezsignfoldertransmission_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldertransmission, json[QString("a_objEzsignfoldertransmission")]);
    m_a_obj_ezsignfoldertransmission_isSet = !json[QString("a_objEzsignfoldertransmission")].isNull() && m_a_obj_ezsignfoldertransmission_isValid;
}

QString OAIEzsignbulksendtransmission_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendtransmission_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignbulksendtransmission_id_isSet) {
        obj.insert(QString("pkiEzsignbulksendtransmissionID"), ::OpenAPI::toJsonValue(pki_ezsignbulksendtransmission_id));
    }
    if (m_fki_ezsignbulksend_id_isSet) {
        obj.insert(QString("fkiEzsignbulksendID"), ::OpenAPI::toJsonValue(fki_ezsignbulksend_id));
    }
    if (m_s_ezsignbulksendtransmission_description_isSet) {
        obj.insert(QString("sEzsignbulksendtransmissionDescription"), ::OpenAPI::toJsonValue(s_ezsignbulksendtransmission_description));
    }
    if (m_i_ezsignbulksendtransmission_errors_isSet) {
        obj.insert(QString("iEzsignbulksendtransmissionErrors"), ::OpenAPI::toJsonValue(i_ezsignbulksendtransmission_errors));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    if (a_obj_ezsignfoldertransmission.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertransmission"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldertransmission));
    }
    return obj;
}

qint32 OAIEzsignbulksendtransmission_ResponseCompound::getPkiEzsignbulksendtransmissionId() const {
    return pki_ezsignbulksendtransmission_id;
}
void OAIEzsignbulksendtransmission_ResponseCompound::setPkiEzsignbulksendtransmissionId(const qint32 &pki_ezsignbulksendtransmission_id) {
    this->pki_ezsignbulksendtransmission_id = pki_ezsignbulksendtransmission_id;
    this->m_pki_ezsignbulksendtransmission_id_isSet = true;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_pki_ezsignbulksendtransmission_id_Set() const{
    return m_pki_ezsignbulksendtransmission_id_isSet;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_pki_ezsignbulksendtransmission_id_Valid() const{
    return m_pki_ezsignbulksendtransmission_id_isValid;
}

qint32 OAIEzsignbulksendtransmission_ResponseCompound::getFkiEzsignbulksendId() const {
    return fki_ezsignbulksend_id;
}
void OAIEzsignbulksendtransmission_ResponseCompound::setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id) {
    this->fki_ezsignbulksend_id = fki_ezsignbulksend_id;
    this->m_fki_ezsignbulksend_id_isSet = true;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_fki_ezsignbulksend_id_Set() const{
    return m_fki_ezsignbulksend_id_isSet;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_fki_ezsignbulksend_id_Valid() const{
    return m_fki_ezsignbulksend_id_isValid;
}

QString OAIEzsignbulksendtransmission_ResponseCompound::getSEzsignbulksendtransmissionDescription() const {
    return s_ezsignbulksendtransmission_description;
}
void OAIEzsignbulksendtransmission_ResponseCompound::setSEzsignbulksendtransmissionDescription(const QString &s_ezsignbulksendtransmission_description) {
    this->s_ezsignbulksendtransmission_description = s_ezsignbulksendtransmission_description;
    this->m_s_ezsignbulksendtransmission_description_isSet = true;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_s_ezsignbulksendtransmission_description_Set() const{
    return m_s_ezsignbulksendtransmission_description_isSet;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_s_ezsignbulksendtransmission_description_Valid() const{
    return m_s_ezsignbulksendtransmission_description_isValid;
}

qint32 OAIEzsignbulksendtransmission_ResponseCompound::getIEzsignbulksendtransmissionErrors() const {
    return i_ezsignbulksendtransmission_errors;
}
void OAIEzsignbulksendtransmission_ResponseCompound::setIEzsignbulksendtransmissionErrors(const qint32 &i_ezsignbulksendtransmission_errors) {
    this->i_ezsignbulksendtransmission_errors = i_ezsignbulksendtransmission_errors;
    this->m_i_ezsignbulksendtransmission_errors_isSet = true;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_i_ezsignbulksendtransmission_errors_Set() const{
    return m_i_ezsignbulksendtransmission_errors_isSet;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_i_ezsignbulksendtransmission_errors_Valid() const{
    return m_i_ezsignbulksendtransmission_errors_isValid;
}

OAICommon_Audit OAIEzsignbulksendtransmission_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAIEzsignbulksendtransmission_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

QList<OAICustom_Ezsignfoldertransmission_Response> OAIEzsignbulksendtransmission_ResponseCompound::getAObjEzsignfoldertransmission() const {
    return a_obj_ezsignfoldertransmission;
}
void OAIEzsignbulksendtransmission_ResponseCompound::setAObjEzsignfoldertransmission(const QList<OAICustom_Ezsignfoldertransmission_Response> &a_obj_ezsignfoldertransmission) {
    this->a_obj_ezsignfoldertransmission = a_obj_ezsignfoldertransmission;
    this->m_a_obj_ezsignfoldertransmission_isSet = true;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_a_obj_ezsignfoldertransmission_Set() const{
    return m_a_obj_ezsignfoldertransmission_isSet;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::is_a_obj_ezsignfoldertransmission_Valid() const{
    return m_a_obj_ezsignfoldertransmission_isValid;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignbulksendtransmission_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignbulksend_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignbulksendtransmission_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignbulksendtransmission_errors_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignfoldertransmission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendtransmission_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignbulksendtransmission_id_isValid && m_fki_ezsignbulksend_id_isValid && m_s_ezsignbulksendtransmission_description_isValid && m_i_ezsignbulksendtransmission_errors_isValid && m_obj_audit_isValid && m_a_obj_ezsignfoldertransmission_isValid && true;
}

} // namespace OpenAPI
