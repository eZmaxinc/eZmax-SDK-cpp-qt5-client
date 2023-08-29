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

#include "OAIPaymentterm_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPaymentterm_Request::OAIPaymentterm_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaymentterm_Request::OAIPaymentterm_Request() {
    this->initializeModel();
}

OAIPaymentterm_Request::~OAIPaymentterm_Request() {}

void OAIPaymentterm_Request::initializeModel() {

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
}

void OAIPaymentterm_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaymentterm_Request::fromJsonObject(QJsonObject json) {

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
}

QString OAIPaymentterm_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaymentterm_Request::asJsonObject() const {
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
    return obj;
}

qint32 OAIPaymentterm_Request::getPkiPaymenttermId() const {
    return m_pki_paymentterm_id;
}
void OAIPaymentterm_Request::setPkiPaymenttermId(const qint32 &pki_paymentterm_id) {
    m_pki_paymentterm_id = pki_paymentterm_id;
    m_pki_paymentterm_id_isSet = true;
}

bool OAIPaymentterm_Request::is_pki_paymentterm_id_Set() const{
    return m_pki_paymentterm_id_isSet;
}

bool OAIPaymentterm_Request::is_pki_paymentterm_id_Valid() const{
    return m_pki_paymentterm_id_isValid;
}

QString OAIPaymentterm_Request::getSPaymenttermCode() const {
    return m_s_paymentterm_code;
}
void OAIPaymentterm_Request::setSPaymenttermCode(const QString &s_paymentterm_code) {
    m_s_paymentterm_code = s_paymentterm_code;
    m_s_paymentterm_code_isSet = true;
}

bool OAIPaymentterm_Request::is_s_paymentterm_code_Set() const{
    return m_s_paymentterm_code_isSet;
}

bool OAIPaymentterm_Request::is_s_paymentterm_code_Valid() const{
    return m_s_paymentterm_code_isValid;
}

OAIField_ePaymenttermType OAIPaymentterm_Request::getEPaymenttermType() const {
    return m_e_paymentterm_type;
}
void OAIPaymentterm_Request::setEPaymenttermType(const OAIField_ePaymenttermType &e_paymentterm_type) {
    m_e_paymentterm_type = e_paymentterm_type;
    m_e_paymentterm_type_isSet = true;
}

bool OAIPaymentterm_Request::is_e_paymentterm_type_Set() const{
    return m_e_paymentterm_type_isSet;
}

bool OAIPaymentterm_Request::is_e_paymentterm_type_Valid() const{
    return m_e_paymentterm_type_isValid;
}

qint32 OAIPaymentterm_Request::getIPaymenttermDay() const {
    return m_i_paymentterm_day;
}
void OAIPaymentterm_Request::setIPaymenttermDay(const qint32 &i_paymentterm_day) {
    m_i_paymentterm_day = i_paymentterm_day;
    m_i_paymentterm_day_isSet = true;
}

bool OAIPaymentterm_Request::is_i_paymentterm_day_Set() const{
    return m_i_paymentterm_day_isSet;
}

bool OAIPaymentterm_Request::is_i_paymentterm_day_Valid() const{
    return m_i_paymentterm_day_isValid;
}

OAIMultilingual_PaymenttermDescription OAIPaymentterm_Request::getObjPaymenttermDescription() const {
    return m_obj_paymentterm_description;
}
void OAIPaymentterm_Request::setObjPaymenttermDescription(const OAIMultilingual_PaymenttermDescription &obj_paymentterm_description) {
    m_obj_paymentterm_description = obj_paymentterm_description;
    m_obj_paymentterm_description_isSet = true;
}

bool OAIPaymentterm_Request::is_obj_paymentterm_description_Set() const{
    return m_obj_paymentterm_description_isSet;
}

bool OAIPaymentterm_Request::is_obj_paymentterm_description_Valid() const{
    return m_obj_paymentterm_description_isValid;
}

bool OAIPaymentterm_Request::isBPaymenttermIsactive() const {
    return m_b_paymentterm_isactive;
}
void OAIPaymentterm_Request::setBPaymenttermIsactive(const bool &b_paymentterm_isactive) {
    m_b_paymentterm_isactive = b_paymentterm_isactive;
    m_b_paymentterm_isactive_isSet = true;
}

bool OAIPaymentterm_Request::is_b_paymentterm_isactive_Set() const{
    return m_b_paymentterm_isactive_isSet;
}

bool OAIPaymentterm_Request::is_b_paymentterm_isactive_Valid() const{
    return m_b_paymentterm_isactive_isValid;
}

bool OAIPaymentterm_Request::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIPaymentterm_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_paymentterm_code_isValid && m_e_paymentterm_type_isValid && m_i_paymentterm_day_isValid && m_obj_paymentterm_description_isValid && m_b_paymentterm_isactive_isValid && true;
}

} // namespace OpenAPI
