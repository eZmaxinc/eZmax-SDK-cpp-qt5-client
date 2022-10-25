/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingcontract_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingcontract_Response::OAIEzmaxinvoicingcontract_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingcontract_Response::OAIEzmaxinvoicingcontract_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingcontract_Response::~OAIEzmaxinvoicingcontract_Response() {}

void OAIEzmaxinvoicingcontract_Response::initializeModel() {

    m_pki_ezmaxinvoicingcontract_id_isSet = false;
    m_pki_ezmaxinvoicingcontract_id_isValid = false;

    m_e_ezmaxinvoicingcontract_paymenttype_isSet = false;
    m_e_ezmaxinvoicingcontract_paymenttype_isValid = false;

    m_i_ezmaxinvoicingcontract_length_isSet = false;
    m_i_ezmaxinvoicingcontract_length_isValid = false;

    m_dt_ezmaxinvoicingcontract_start_isSet = false;
    m_dt_ezmaxinvoicingcontract_start_isValid = false;

    m_dt_ezmaxinvoicingcontract_end_isSet = false;
    m_dt_ezmaxinvoicingcontract_end_isValid = false;

    m_d_ezmaxinvoicingcontract_license_isSet = false;
    m_d_ezmaxinvoicingcontract_license_isValid = false;

    m_d_ezmaxinvoicingcontract121qa_isSet = false;
    m_d_ezmaxinvoicingcontract121qa_isValid = false;

    m_b_ezmaxinvoicingcontract_ezsignallagents_isSet = false;
    m_b_ezmaxinvoicingcontract_ezsignallagents_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIEzmaxinvoicingcontract_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingcontract_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingcontract_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicingcontract_id, json[QString("pkiEzmaxinvoicingcontractID")]);
    m_pki_ezmaxinvoicingcontract_id_isSet = !json[QString("pkiEzmaxinvoicingcontractID")].isNull() && m_pki_ezmaxinvoicingcontract_id_isValid;

    m_e_ezmaxinvoicingcontract_paymenttype_isValid = ::OpenAPI::fromJsonValue(e_ezmaxinvoicingcontract_paymenttype, json[QString("eEzmaxinvoicingcontractPaymenttype")]);
    m_e_ezmaxinvoicingcontract_paymenttype_isSet = !json[QString("eEzmaxinvoicingcontractPaymenttype")].isNull() && m_e_ezmaxinvoicingcontract_paymenttype_isValid;

    m_i_ezmaxinvoicingcontract_length_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingcontract_length, json[QString("iEzmaxinvoicingcontractLength")]);
    m_i_ezmaxinvoicingcontract_length_isSet = !json[QString("iEzmaxinvoicingcontractLength")].isNull() && m_i_ezmaxinvoicingcontract_length_isValid;

    m_dt_ezmaxinvoicingcontract_start_isValid = ::OpenAPI::fromJsonValue(dt_ezmaxinvoicingcontract_start, json[QString("dtEzmaxinvoicingcontractStart")]);
    m_dt_ezmaxinvoicingcontract_start_isSet = !json[QString("dtEzmaxinvoicingcontractStart")].isNull() && m_dt_ezmaxinvoicingcontract_start_isValid;

    m_dt_ezmaxinvoicingcontract_end_isValid = ::OpenAPI::fromJsonValue(dt_ezmaxinvoicingcontract_end, json[QString("dtEzmaxinvoicingcontractEnd")]);
    m_dt_ezmaxinvoicingcontract_end_isSet = !json[QString("dtEzmaxinvoicingcontractEnd")].isNull() && m_dt_ezmaxinvoicingcontract_end_isValid;

    m_d_ezmaxinvoicingcontract_license_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingcontract_license, json[QString("dEzmaxinvoicingcontractLicense")]);
    m_d_ezmaxinvoicingcontract_license_isSet = !json[QString("dEzmaxinvoicingcontractLicense")].isNull() && m_d_ezmaxinvoicingcontract_license_isValid;

    m_d_ezmaxinvoicingcontract121qa_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingcontract121qa, json[QString("dEzmaxinvoicingcontract121qa")]);
    m_d_ezmaxinvoicingcontract121qa_isSet = !json[QString("dEzmaxinvoicingcontract121qa")].isNull() && m_d_ezmaxinvoicingcontract121qa_isValid;

    m_b_ezmaxinvoicingcontract_ezsignallagents_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicingcontract_ezsignallagents, json[QString("bEzmaxinvoicingcontractEzsignallagents")]);
    m_b_ezmaxinvoicingcontract_ezsignallagents_isSet = !json[QString("bEzmaxinvoicingcontractEzsignallagents")].isNull() && m_b_ezmaxinvoicingcontract_ezsignallagents_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIEzmaxinvoicingcontract_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingcontract_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingcontract_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingcontractID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicingcontract_id));
    }
    if (e_ezmaxinvoicingcontract_paymenttype.isSet()) {
        obj.insert(QString("eEzmaxinvoicingcontractPaymenttype"), ::OpenAPI::toJsonValue(e_ezmaxinvoicingcontract_paymenttype));
    }
    if (m_i_ezmaxinvoicingcontract_length_isSet) {
        obj.insert(QString("iEzmaxinvoicingcontractLength"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingcontract_length));
    }
    if (m_dt_ezmaxinvoicingcontract_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcontractStart"), ::OpenAPI::toJsonValue(dt_ezmaxinvoicingcontract_start));
    }
    if (m_dt_ezmaxinvoicingcontract_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcontractEnd"), ::OpenAPI::toJsonValue(dt_ezmaxinvoicingcontract_end));
    }
    if (m_d_ezmaxinvoicingcontract_license_isSet) {
        obj.insert(QString("dEzmaxinvoicingcontractLicense"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingcontract_license));
    }
    if (m_d_ezmaxinvoicingcontract121qa_isSet) {
        obj.insert(QString("dEzmaxinvoicingcontract121qa"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingcontract121qa));
    }
    if (m_b_ezmaxinvoicingcontract_ezsignallagents_isSet) {
        obj.insert(QString("bEzmaxinvoicingcontractEzsignallagents"), ::OpenAPI::toJsonValue(b_ezmaxinvoicingcontract_ezsignallagents));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingcontract_Response::getPkiEzmaxinvoicingcontractId() const {
    return pki_ezmaxinvoicingcontract_id;
}
void OAIEzmaxinvoicingcontract_Response::setPkiEzmaxinvoicingcontractId(const qint32 &pki_ezmaxinvoicingcontract_id) {
    this->pki_ezmaxinvoicingcontract_id = pki_ezmaxinvoicingcontract_id;
    this->m_pki_ezmaxinvoicingcontract_id_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_pki_ezmaxinvoicingcontract_id_Set() const{
    return m_pki_ezmaxinvoicingcontract_id_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_pki_ezmaxinvoicingcontract_id_Valid() const{
    return m_pki_ezmaxinvoicingcontract_id_isValid;
}

OAIField_eEzmaxinvoicingcontractPaymenttype OAIEzmaxinvoicingcontract_Response::getEEzmaxinvoicingcontractPaymenttype() const {
    return e_ezmaxinvoicingcontract_paymenttype;
}
void OAIEzmaxinvoicingcontract_Response::setEEzmaxinvoicingcontractPaymenttype(const OAIField_eEzmaxinvoicingcontractPaymenttype &e_ezmaxinvoicingcontract_paymenttype) {
    this->e_ezmaxinvoicingcontract_paymenttype = e_ezmaxinvoicingcontract_paymenttype;
    this->m_e_ezmaxinvoicingcontract_paymenttype_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_e_ezmaxinvoicingcontract_paymenttype_Set() const{
    return m_e_ezmaxinvoicingcontract_paymenttype_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_e_ezmaxinvoicingcontract_paymenttype_Valid() const{
    return m_e_ezmaxinvoicingcontract_paymenttype_isValid;
}

qint32 OAIEzmaxinvoicingcontract_Response::getIEzmaxinvoicingcontractLength() const {
    return i_ezmaxinvoicingcontract_length;
}
void OAIEzmaxinvoicingcontract_Response::setIEzmaxinvoicingcontractLength(const qint32 &i_ezmaxinvoicingcontract_length) {
    this->i_ezmaxinvoicingcontract_length = i_ezmaxinvoicingcontract_length;
    this->m_i_ezmaxinvoicingcontract_length_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_i_ezmaxinvoicingcontract_length_Set() const{
    return m_i_ezmaxinvoicingcontract_length_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_i_ezmaxinvoicingcontract_length_Valid() const{
    return m_i_ezmaxinvoicingcontract_length_isValid;
}

QString OAIEzmaxinvoicingcontract_Response::getDtEzmaxinvoicingcontractStart() const {
    return dt_ezmaxinvoicingcontract_start;
}
void OAIEzmaxinvoicingcontract_Response::setDtEzmaxinvoicingcontractStart(const QString &dt_ezmaxinvoicingcontract_start) {
    this->dt_ezmaxinvoicingcontract_start = dt_ezmaxinvoicingcontract_start;
    this->m_dt_ezmaxinvoicingcontract_start_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_dt_ezmaxinvoicingcontract_start_Set() const{
    return m_dt_ezmaxinvoicingcontract_start_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_dt_ezmaxinvoicingcontract_start_Valid() const{
    return m_dt_ezmaxinvoicingcontract_start_isValid;
}

QString OAIEzmaxinvoicingcontract_Response::getDtEzmaxinvoicingcontractEnd() const {
    return dt_ezmaxinvoicingcontract_end;
}
void OAIEzmaxinvoicingcontract_Response::setDtEzmaxinvoicingcontractEnd(const QString &dt_ezmaxinvoicingcontract_end) {
    this->dt_ezmaxinvoicingcontract_end = dt_ezmaxinvoicingcontract_end;
    this->m_dt_ezmaxinvoicingcontract_end_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_dt_ezmaxinvoicingcontract_end_Set() const{
    return m_dt_ezmaxinvoicingcontract_end_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_dt_ezmaxinvoicingcontract_end_Valid() const{
    return m_dt_ezmaxinvoicingcontract_end_isValid;
}

QString OAIEzmaxinvoicingcontract_Response::getDEzmaxinvoicingcontractLicense() const {
    return d_ezmaxinvoicingcontract_license;
}
void OAIEzmaxinvoicingcontract_Response::setDEzmaxinvoicingcontractLicense(const QString &d_ezmaxinvoicingcontract_license) {
    this->d_ezmaxinvoicingcontract_license = d_ezmaxinvoicingcontract_license;
    this->m_d_ezmaxinvoicingcontract_license_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_d_ezmaxinvoicingcontract_license_Set() const{
    return m_d_ezmaxinvoicingcontract_license_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_d_ezmaxinvoicingcontract_license_Valid() const{
    return m_d_ezmaxinvoicingcontract_license_isValid;
}

QString OAIEzmaxinvoicingcontract_Response::getDEzmaxinvoicingcontract121qa() const {
    return d_ezmaxinvoicingcontract121qa;
}
void OAIEzmaxinvoicingcontract_Response::setDEzmaxinvoicingcontract121qa(const QString &d_ezmaxinvoicingcontract121qa) {
    this->d_ezmaxinvoicingcontract121qa = d_ezmaxinvoicingcontract121qa;
    this->m_d_ezmaxinvoicingcontract121qa_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_d_ezmaxinvoicingcontract121qa_Set() const{
    return m_d_ezmaxinvoicingcontract121qa_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_d_ezmaxinvoicingcontract121qa_Valid() const{
    return m_d_ezmaxinvoicingcontract121qa_isValid;
}

bool OAIEzmaxinvoicingcontract_Response::isBEzmaxinvoicingcontractEzsignallagents() const {
    return b_ezmaxinvoicingcontract_ezsignallagents;
}
void OAIEzmaxinvoicingcontract_Response::setBEzmaxinvoicingcontractEzsignallagents(const bool &b_ezmaxinvoicingcontract_ezsignallagents) {
    this->b_ezmaxinvoicingcontract_ezsignallagents = b_ezmaxinvoicingcontract_ezsignallagents;
    this->m_b_ezmaxinvoicingcontract_ezsignallagents_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_b_ezmaxinvoicingcontract_ezsignallagents_Set() const{
    return m_b_ezmaxinvoicingcontract_ezsignallagents_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_b_ezmaxinvoicingcontract_ezsignallagents_Valid() const{
    return m_b_ezmaxinvoicingcontract_ezsignallagents_isValid;
}

OAICommon_Audit OAIEzmaxinvoicingcontract_Response::getObjAudit() const {
    return obj_audit;
}
void OAIEzmaxinvoicingcontract_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzmaxinvoicingcontract_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzmaxinvoicingcontract_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIEzmaxinvoicingcontract_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingcontract_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezmaxinvoicingcontract_paymenttype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingcontract_length_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcontract_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcontract_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingcontract_license_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingcontract121qa_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingcontract_ezsignallagents_isSet) {
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

bool OAIEzmaxinvoicingcontract_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezmaxinvoicingcontract_id_isValid && m_e_ezmaxinvoicingcontract_paymenttype_isValid && m_i_ezmaxinvoicingcontract_length_isValid && m_dt_ezmaxinvoicingcontract_start_isValid && m_dt_ezmaxinvoicingcontract_end_isValid && m_d_ezmaxinvoicingcontract_license_isValid && m_d_ezmaxinvoicingcontract121qa_isValid && m_b_ezmaxinvoicingcontract_ezsignallagents_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
