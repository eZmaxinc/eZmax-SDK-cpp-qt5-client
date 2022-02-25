/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_getFormData_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getFormData_v1_Response_mPayload::OAIEzsigndocument_getFormData_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getFormData_v1_Response_mPayload::OAIEzsigndocument_getFormData_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getFormData_v1_Response_mPayload::~OAIEzsigndocument_getFormData_v1_Response_mPayload() {}

void OAIEzsigndocument_getFormData_v1_Response_mPayload::initializeModel() {

    m_pki_ezsigndocument_id_isSet = false;
    m_pki_ezsigndocument_id_isValid = false;

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_s_ezsigndocument_name_isSet = false;
    m_s_ezsigndocument_name_isValid = false;

    m_dt_modified_date_isSet = false;
    m_dt_modified_date_isValid = false;

    m_a_obj_form_data_signer_isSet = false;
    m_a_obj_form_data_signer_isValid = false;
}

void OAIEzsigndocument_getFormData_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getFormData_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_pki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigndocument_id, json[QString("pkiEzsigndocumentID")]);
    m_pki_ezsigndocument_id_isSet = !json[QString("pkiEzsigndocumentID")].isNull() && m_pki_ezsigndocument_id_isValid;

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_s_ezsigndocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_name, json[QString("sEzsigndocumentName")]);
    m_s_ezsigndocument_name_isSet = !json[QString("sEzsigndocumentName")].isNull() && m_s_ezsigndocument_name_isValid;

    m_dt_modified_date_isValid = ::OpenAPI::fromJsonValue(dt_modified_date, json[QString("dtModifiedDate")]);
    m_dt_modified_date_isSet = !json[QString("dtModifiedDate")].isNull() && m_dt_modified_date_isValid;

    m_a_obj_form_data_signer_isValid = ::OpenAPI::fromJsonValue(a_obj_form_data_signer, json[QString("a_objFormDataSigner")]);
    m_a_obj_form_data_signer_isSet = !json[QString("a_objFormDataSigner")].isNull() && m_a_obj_form_data_signer_isValid;
}

QString OAIEzsigndocument_getFormData_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getFormData_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigndocument_id_isSet) {
        obj.insert(QString("pkiEzsigndocumentID"), ::OpenAPI::toJsonValue(pki_ezsigndocument_id));
    }
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_s_ezsigndocument_name_isSet) {
        obj.insert(QString("sEzsigndocumentName"), ::OpenAPI::toJsonValue(s_ezsigndocument_name));
    }
    if (m_dt_modified_date_isSet) {
        obj.insert(QString("dtModifiedDate"), ::OpenAPI::toJsonValue(dt_modified_date));
    }
    if (a_obj_form_data_signer.size() > 0) {
        obj.insert(QString("a_objFormDataSigner"), ::OpenAPI::toJsonValue(a_obj_form_data_signer));
    }
    return obj;
}

qint32 OAIEzsigndocument_getFormData_v1_Response_mPayload::getPkiEzsigndocumentId() const {
    return pki_ezsigndocument_id;
}
void OAIEzsigndocument_getFormData_v1_Response_mPayload::setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id) {
    this->pki_ezsigndocument_id = pki_ezsigndocument_id;
    this->m_pki_ezsigndocument_id_isSet = true;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_pki_ezsigndocument_id_Set() const{
    return m_pki_ezsigndocument_id_isSet;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_pki_ezsigndocument_id_Valid() const{
    return m_pki_ezsigndocument_id_isValid;
}

qint32 OAIEzsigndocument_getFormData_v1_Response_mPayload::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAIEzsigndocument_getFormData_v1_Response_mPayload::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

QString OAIEzsigndocument_getFormData_v1_Response_mPayload::getSEzsigndocumentName() const {
    return s_ezsigndocument_name;
}
void OAIEzsigndocument_getFormData_v1_Response_mPayload::setSEzsigndocumentName(const QString &s_ezsigndocument_name) {
    this->s_ezsigndocument_name = s_ezsigndocument_name;
    this->m_s_ezsigndocument_name_isSet = true;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_s_ezsigndocument_name_Set() const{
    return m_s_ezsigndocument_name_isSet;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_s_ezsigndocument_name_Valid() const{
    return m_s_ezsigndocument_name_isValid;
}

QString OAIEzsigndocument_getFormData_v1_Response_mPayload::getDtModifiedDate() const {
    return dt_modified_date;
}
void OAIEzsigndocument_getFormData_v1_Response_mPayload::setDtModifiedDate(const QString &dt_modified_date) {
    this->dt_modified_date = dt_modified_date;
    this->m_dt_modified_date_isSet = true;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_dt_modified_date_Set() const{
    return m_dt_modified_date_isSet;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_dt_modified_date_Valid() const{
    return m_dt_modified_date_isValid;
}

QList<OAICustom_FormDataSigner_Response> OAIEzsigndocument_getFormData_v1_Response_mPayload::getAObjFormDataSigner() const {
    return a_obj_form_data_signer;
}
void OAIEzsigndocument_getFormData_v1_Response_mPayload::setAObjFormDataSigner(const QList<OAICustom_FormDataSigner_Response> &a_obj_form_data_signer) {
    this->a_obj_form_data_signer = a_obj_form_data_signer;
    this->m_a_obj_form_data_signer_isSet = true;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_a_obj_form_data_signer_Set() const{
    return m_a_obj_form_data_signer_isSet;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::is_a_obj_form_data_signer_Valid() const{
    return m_a_obj_form_data_signer_isValid;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_modified_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_form_data_signer.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getFormData_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigndocument_id_isValid && m_fki_ezsignfolder_id_isValid && m_s_ezsigndocument_name_isValid && m_dt_modified_date_isValid && m_a_obj_form_data_signer_isValid && true;
}

} // namespace OpenAPI
