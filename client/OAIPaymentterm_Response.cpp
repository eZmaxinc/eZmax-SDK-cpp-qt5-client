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

#include "OAIPaymentterm_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPaymentterm_Response::OAIPaymentterm_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaymentterm_Response::OAIPaymentterm_Response() {
    this->initializeModel();
}

OAIPaymentterm_Response::~OAIPaymentterm_Response() {}

void OAIPaymentterm_Response::initializeModel() {

    m_pki_paymentterm_id_isSet = false;
    m_pki_paymentterm_id_isValid = false;

    m_s_paymentterm_code_isSet = false;
    m_s_paymentterm_code_isValid = false;

    m_e_paymentterm_type_isSet = false;
    m_e_paymentterm_type_isValid = false;

    m_i_paymentterm_day_isSet = false;
    m_i_paymentterm_day_isValid = false;

    m_obj_paymentterm_description_isSet = false;
    m_obj_paymentterm_description_isValid = false;

    m_b_paymentterm_isactive_isSet = false;
    m_b_paymentterm_isactive_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIPaymentterm_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaymentterm_Response::fromJsonObject(QJsonObject json) {

    m_pki_paymentterm_id_isValid = ::OpenAPI::fromJsonValue(m_pki_paymentterm_id, json[QString("pkiPaymenttermID")]);
    m_pki_paymentterm_id_isSet = !json[QString("pkiPaymenttermID")].isNull() && m_pki_paymentterm_id_isValid;

    m_s_paymentterm_code_isValid = ::OpenAPI::fromJsonValue(m_s_paymentterm_code, json[QString("sPaymenttermCode")]);
    m_s_paymentterm_code_isSet = !json[QString("sPaymenttermCode")].isNull() && m_s_paymentterm_code_isValid;

    m_e_paymentterm_type_isValid = ::OpenAPI::fromJsonValue(m_e_paymentterm_type, json[QString("ePaymenttermType")]);
    m_e_paymentterm_type_isSet = !json[QString("ePaymenttermType")].isNull() && m_e_paymentterm_type_isValid;

    m_i_paymentterm_day_isValid = ::OpenAPI::fromJsonValue(m_i_paymentterm_day, json[QString("iPaymenttermDay")]);
    m_i_paymentterm_day_isSet = !json[QString("iPaymenttermDay")].isNull() && m_i_paymentterm_day_isValid;

    m_obj_paymentterm_description_isValid = ::OpenAPI::fromJsonValue(m_obj_paymentterm_description, json[QString("objPaymenttermDescription")]);
    m_obj_paymentterm_description_isSet = !json[QString("objPaymenttermDescription")].isNull() && m_obj_paymentterm_description_isValid;

    m_b_paymentterm_isactive_isValid = ::OpenAPI::fromJsonValue(m_b_paymentterm_isactive, json[QString("bPaymenttermIsactive")]);
    m_b_paymentterm_isactive_isSet = !json[QString("bPaymenttermIsactive")].isNull() && m_b_paymentterm_isactive_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIPaymentterm_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaymentterm_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_paymentterm_id_isSet) {
        obj.insert(QString("pkiPaymenttermID"), ::OpenAPI::toJsonValue(m_pki_paymentterm_id));
    }
    if (m_s_paymentterm_code_isSet) {
        obj.insert(QString("sPaymenttermCode"), ::OpenAPI::toJsonValue(m_s_paymentterm_code));
    }
    if (m_e_paymentterm_type.isSet()) {
        obj.insert(QString("ePaymenttermType"), ::OpenAPI::toJsonValue(m_e_paymentterm_type));
    }
    if (m_i_paymentterm_day_isSet) {
        obj.insert(QString("iPaymenttermDay"), ::OpenAPI::toJsonValue(m_i_paymentterm_day));
    }
    if (m_obj_paymentterm_description.isSet()) {
        obj.insert(QString("objPaymenttermDescription"), ::OpenAPI::toJsonValue(m_obj_paymentterm_description));
    }
    if (m_b_paymentterm_isactive_isSet) {
        obj.insert(QString("bPaymenttermIsactive"), ::OpenAPI::toJsonValue(m_b_paymentterm_isactive));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 OAIPaymentterm_Response::getPkiPaymenttermId() const {
    return m_pki_paymentterm_id;
}
void OAIPaymentterm_Response::setPkiPaymenttermId(const qint32 &pki_paymentterm_id) {
    m_pki_paymentterm_id = pki_paymentterm_id;
    m_pki_paymentterm_id_isSet = true;
}

bool OAIPaymentterm_Response::is_pki_paymentterm_id_Set() const{
    return m_pki_paymentterm_id_isSet;
}

bool OAIPaymentterm_Response::is_pki_paymentterm_id_Valid() const{
    return m_pki_paymentterm_id_isValid;
}

QString OAIPaymentterm_Response::getSPaymenttermCode() const {
    return m_s_paymentterm_code;
}
void OAIPaymentterm_Response::setSPaymenttermCode(const QString &s_paymentterm_code) {
    m_s_paymentterm_code = s_paymentterm_code;
    m_s_paymentterm_code_isSet = true;
}

bool OAIPaymentterm_Response::is_s_paymentterm_code_Set() const{
    return m_s_paymentterm_code_isSet;
}

bool OAIPaymentterm_Response::is_s_paymentterm_code_Valid() const{
    return m_s_paymentterm_code_isValid;
}

OAIField_ePaymenttermType OAIPaymentterm_Response::getEPaymenttermType() const {
    return m_e_paymentterm_type;
}
void OAIPaymentterm_Response::setEPaymenttermType(const OAIField_ePaymenttermType &e_paymentterm_type) {
    m_e_paymentterm_type = e_paymentterm_type;
    m_e_paymentterm_type_isSet = true;
}

bool OAIPaymentterm_Response::is_e_paymentterm_type_Set() const{
    return m_e_paymentterm_type_isSet;
}

bool OAIPaymentterm_Response::is_e_paymentterm_type_Valid() const{
    return m_e_paymentterm_type_isValid;
}

qint32 OAIPaymentterm_Response::getIPaymenttermDay() const {
    return m_i_paymentterm_day;
}
void OAIPaymentterm_Response::setIPaymenttermDay(const qint32 &i_paymentterm_day) {
    m_i_paymentterm_day = i_paymentterm_day;
    m_i_paymentterm_day_isSet = true;
}

bool OAIPaymentterm_Response::is_i_paymentterm_day_Set() const{
    return m_i_paymentterm_day_isSet;
}

bool OAIPaymentterm_Response::is_i_paymentterm_day_Valid() const{
    return m_i_paymentterm_day_isValid;
}

OAIMultilingual_PaymenttermDescription OAIPaymentterm_Response::getObjPaymenttermDescription() const {
    return m_obj_paymentterm_description;
}
void OAIPaymentterm_Response::setObjPaymenttermDescription(const OAIMultilingual_PaymenttermDescription &obj_paymentterm_description) {
    m_obj_paymentterm_description = obj_paymentterm_description;
    m_obj_paymentterm_description_isSet = true;
}

bool OAIPaymentterm_Response::is_obj_paymentterm_description_Set() const{
    return m_obj_paymentterm_description_isSet;
}

bool OAIPaymentterm_Response::is_obj_paymentterm_description_Valid() const{
    return m_obj_paymentterm_description_isValid;
}

bool OAIPaymentterm_Response::isBPaymenttermIsactive() const {
    return m_b_paymentterm_isactive;
}
void OAIPaymentterm_Response::setBPaymenttermIsactive(const bool &b_paymentterm_isactive) {
    m_b_paymentterm_isactive = b_paymentterm_isactive;
    m_b_paymentterm_isactive_isSet = true;
}

bool OAIPaymentterm_Response::is_b_paymentterm_isactive_Set() const{
    return m_b_paymentterm_isactive_isSet;
}

bool OAIPaymentterm_Response::is_b_paymentterm_isactive_Valid() const{
    return m_b_paymentterm_isactive_isValid;
}

OAICommon_Audit OAIPaymentterm_Response::getObjAudit() const {
    return m_obj_audit;
}
void OAIPaymentterm_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool OAIPaymentterm_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIPaymentterm_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIPaymentterm_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_paymentterm_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_paymentterm_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_paymentterm_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_paymentterm_day_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_paymentterm_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_paymentterm_isactive_isSet) {
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

bool OAIPaymentterm_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_paymentterm_id_isValid && m_s_paymentterm_code_isValid && m_e_paymentterm_type_isValid && m_i_paymentterm_day_isValid && m_obj_paymentterm_description_isValid && m_b_paymentterm_isactive_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
