/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIActivesession_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActivesession_Response::OAIActivesession_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActivesession_Response::OAIActivesession_Response() {
    this->initializeModel();
}

OAIActivesession_Response::~OAIActivesession_Response() {}

void OAIActivesession_Response::initializeModel() {

    m_e_activesession_usertype_isSet = false;
    m_e_activesession_usertype_isValid = false;

    m_e_activesession_weekdaystart_isSet = false;
    m_e_activesession_weekdaystart_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_company_name_x_isSet = false;
    m_s_company_name_x_isValid = false;

    m_s_department_name_x_isSet = false;
    m_s_department_name_x_isValid = false;

    m_b_activesession_debug_isSet = false;
    m_b_activesession_debug_isValid = false;

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;
}

void OAIActivesession_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_Response::fromJsonObject(QJsonObject json) {

    m_e_activesession_usertype_isValid = ::OpenAPI::fromJsonValue(e_activesession_usertype, json[QString("eActivesessionUsertype")]);
    m_e_activesession_usertype_isSet = !json[QString("eActivesessionUsertype")].isNull() && m_e_activesession_usertype_isValid;

    m_e_activesession_weekdaystart_isValid = ::OpenAPI::fromJsonValue(e_activesession_weekdaystart, json[QString("eActivesessionWeekdaystart")]);
    m_e_activesession_weekdaystart_isSet = !json[QString("eActivesessionWeekdaystart")].isNull() && m_e_activesession_weekdaystart_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_company_name_x_isValid = ::OpenAPI::fromJsonValue(s_company_name_x, json[QString("sCompanyNameX")]);
    m_s_company_name_x_isSet = !json[QString("sCompanyNameX")].isNull() && m_s_company_name_x_isValid;

    m_s_department_name_x_isValid = ::OpenAPI::fromJsonValue(s_department_name_x, json[QString("sDepartmentNameX")]);
    m_s_department_name_x_isSet = !json[QString("sDepartmentNameX")].isNull() && m_s_department_name_x_isValid;

    m_b_activesession_debug_isValid = ::OpenAPI::fromJsonValue(b_activesession_debug, json[QString("bActivesessionDebug")]);
    m_b_activesession_debug_isSet = !json[QString("bActivesessionDebug")].isNull() && m_b_activesession_debug_isValid;

    m_pks_customer_code_isValid = ::OpenAPI::fromJsonValue(pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;
}

QString OAIActivesession_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_Response::asJsonObject() const {
    QJsonObject obj;
    if (e_activesession_usertype.isSet()) {
        obj.insert(QString("eActivesessionUsertype"), ::OpenAPI::toJsonValue(e_activesession_usertype));
    }
    if (e_activesession_weekdaystart.isSet()) {
        obj.insert(QString("eActivesessionWeekdaystart"), ::OpenAPI::toJsonValue(e_activesession_weekdaystart));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_company_name_x_isSet) {
        obj.insert(QString("sCompanyNameX"), ::OpenAPI::toJsonValue(s_company_name_x));
    }
    if (m_s_department_name_x_isSet) {
        obj.insert(QString("sDepartmentNameX"), ::OpenAPI::toJsonValue(s_department_name_x));
    }
    if (m_b_activesession_debug_isSet) {
        obj.insert(QString("bActivesessionDebug"), ::OpenAPI::toJsonValue(b_activesession_debug));
    }
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::OpenAPI::toJsonValue(pks_customer_code));
    }
    return obj;
}

OAIField_eActivesessionUsertype OAIActivesession_Response::getEActivesessionUsertype() const {
    return e_activesession_usertype;
}
void OAIActivesession_Response::setEActivesessionUsertype(const OAIField_eActivesessionUsertype &e_activesession_usertype) {
    this->e_activesession_usertype = e_activesession_usertype;
    this->m_e_activesession_usertype_isSet = true;
}

bool OAIActivesession_Response::is_e_activesession_usertype_Set() const{
    return m_e_activesession_usertype_isSet;
}

bool OAIActivesession_Response::is_e_activesession_usertype_Valid() const{
    return m_e_activesession_usertype_isValid;
}

OAIField_eActivesessionWeekdaystart OAIActivesession_Response::getEActivesessionWeekdaystart() const {
    return e_activesession_weekdaystart;
}
void OAIActivesession_Response::setEActivesessionWeekdaystart(const OAIField_eActivesessionWeekdaystart &e_activesession_weekdaystart) {
    this->e_activesession_weekdaystart = e_activesession_weekdaystart;
    this->m_e_activesession_weekdaystart_isSet = true;
}

bool OAIActivesession_Response::is_e_activesession_weekdaystart_Set() const{
    return m_e_activesession_weekdaystart_isSet;
}

bool OAIActivesession_Response::is_e_activesession_weekdaystart_Valid() const{
    return m_e_activesession_weekdaystart_isValid;
}

qint32 OAIActivesession_Response::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIActivesession_Response::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIActivesession_Response::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIActivesession_Response::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIActivesession_Response::getSCompanyNameX() const {
    return s_company_name_x;
}
void OAIActivesession_Response::setSCompanyNameX(const QString &s_company_name_x) {
    this->s_company_name_x = s_company_name_x;
    this->m_s_company_name_x_isSet = true;
}

bool OAIActivesession_Response::is_s_company_name_x_Set() const{
    return m_s_company_name_x_isSet;
}

bool OAIActivesession_Response::is_s_company_name_x_Valid() const{
    return m_s_company_name_x_isValid;
}

QString OAIActivesession_Response::getSDepartmentNameX() const {
    return s_department_name_x;
}
void OAIActivesession_Response::setSDepartmentNameX(const QString &s_department_name_x) {
    this->s_department_name_x = s_department_name_x;
    this->m_s_department_name_x_isSet = true;
}

bool OAIActivesession_Response::is_s_department_name_x_Set() const{
    return m_s_department_name_x_isSet;
}

bool OAIActivesession_Response::is_s_department_name_x_Valid() const{
    return m_s_department_name_x_isValid;
}

bool OAIActivesession_Response::isBActivesessionDebug() const {
    return b_activesession_debug;
}
void OAIActivesession_Response::setBActivesessionDebug(const bool &b_activesession_debug) {
    this->b_activesession_debug = b_activesession_debug;
    this->m_b_activesession_debug_isSet = true;
}

bool OAIActivesession_Response::is_b_activesession_debug_Set() const{
    return m_b_activesession_debug_isSet;
}

bool OAIActivesession_Response::is_b_activesession_debug_Valid() const{
    return m_b_activesession_debug_isValid;
}

QString OAIActivesession_Response::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAIActivesession_Response::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAIActivesession_Response::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAIActivesession_Response::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

bool OAIActivesession_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (e_activesession_usertype.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_activesession_weekdaystart.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_company_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_department_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_activesession_debug_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_activesession_usertype_isValid && m_e_activesession_weekdaystart_isValid && m_fki_language_id_isValid && m_s_company_name_x_isValid && m_s_department_name_x_isValid && m_b_activesession_debug_isValid && m_pks_customer_code_isValid && true;
}

} // namespace OpenAPI
