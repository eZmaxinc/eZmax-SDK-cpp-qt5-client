/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIActivesession_getCurrent_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActivesession_getCurrent_v1_Response_mPayload::OAIActivesession_getCurrent_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActivesession_getCurrent_v1_Response_mPayload::OAIActivesession_getCurrent_v1_Response_mPayload() {
    this->initializeModel();
}

OAIActivesession_getCurrent_v1_Response_mPayload::~OAIActivesession_getCurrent_v1_Response_mPayload() {}

void OAIActivesession_getCurrent_v1_Response_mPayload::initializeModel() {

    m_s_customer_code_isSet = false;
    m_s_customer_code_isValid = false;

    m_e_activesession_sessiontype_isSet = false;
    m_e_activesession_sessiontype_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_company_name_x_isSet = false;
    m_s_company_name_x_isValid = false;

    m_s_department_name_x_isSet = false;
    m_s_department_name_x_isValid = false;

    m_a_registered_modules_isSet = false;
    m_a_registered_modules_isValid = false;

    m_a_permissions_isSet = false;
    m_a_permissions_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_apikey_id_isSet = false;
    m_fki_apikey_id_isValid = false;
}

void OAIActivesession_getCurrent_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_getCurrent_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_s_customer_code_isValid = ::OpenAPI::fromJsonValue(s_customer_code, json[QString("sCustomerCode")]);
    m_s_customer_code_isSet = !json[QString("sCustomerCode")].isNull() && m_s_customer_code_isValid;

    m_e_activesession_sessiontype_isValid = ::OpenAPI::fromJsonValue(e_activesession_sessiontype, json[QString("eActivesessionSessiontype")]);
    m_e_activesession_sessiontype_isSet = !json[QString("eActivesessionSessiontype")].isNull() && m_e_activesession_sessiontype_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_company_name_x_isValid = ::OpenAPI::fromJsonValue(s_company_name_x, json[QString("sCompanyNameX")]);
    m_s_company_name_x_isSet = !json[QString("sCompanyNameX")].isNull() && m_s_company_name_x_isValid;

    m_s_department_name_x_isValid = ::OpenAPI::fromJsonValue(s_department_name_x, json[QString("sDepartmentNameX")]);
    m_s_department_name_x_isSet = !json[QString("sDepartmentNameX")].isNull() && m_s_department_name_x_isValid;

    m_a_registered_modules_isValid = ::OpenAPI::fromJsonValue(a_registered_modules, json[QString("a_RegisteredModules")]);
    m_a_registered_modules_isSet = !json[QString("a_RegisteredModules")].isNull() && m_a_registered_modules_isValid;

    m_a_permissions_isValid = ::OpenAPI::fromJsonValue(a_permissions, json[QString("a_Permissions")]);
    m_a_permissions_isSet = !json[QString("a_Permissions")].isNull() && m_a_permissions_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_apikey_id_isValid = ::OpenAPI::fromJsonValue(fki_apikey_id, json[QString("fkiApikeyID")]);
    m_fki_apikey_id_isSet = !json[QString("fkiApikeyID")].isNull() && m_fki_apikey_id_isValid;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_getCurrent_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_s_customer_code_isSet) {
        obj.insert(QString("sCustomerCode"), ::OpenAPI::toJsonValue(s_customer_code));
    }
    if (m_e_activesession_sessiontype_isSet) {
        obj.insert(QString("eActivesessionSessiontype"), ::OpenAPI::toJsonValue(e_activesession_sessiontype));
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
    if (a_registered_modules.size() > 0) {
        obj.insert(QString("a_RegisteredModules"), ::OpenAPI::toJsonValue(a_registered_modules));
    }
    if (a_permissions.size() > 0) {
        obj.insert(QString("a_Permissions"), ::OpenAPI::toJsonValue(a_permissions));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_fki_apikey_id_isSet) {
        obj.insert(QString("fkiApikeyID"), ::OpenAPI::toJsonValue(fki_apikey_id));
    }
    return obj;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::getSCustomerCode() const {
    return s_customer_code;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setSCustomerCode(const QString &s_customer_code) {
    this->s_customer_code = s_customer_code;
    this->m_s_customer_code_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_s_customer_code_Set() const{
    return m_s_customer_code_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_s_customer_code_Valid() const{
    return m_s_customer_code_isValid;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::getEActivesessionSessiontype() const {
    return e_activesession_sessiontype;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setEActivesessionSessiontype(const QString &e_activesession_sessiontype) {
    this->e_activesession_sessiontype = e_activesession_sessiontype;
    this->m_e_activesession_sessiontype_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_e_activesession_sessiontype_Set() const{
    return m_e_activesession_sessiontype_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_e_activesession_sessiontype_Valid() const{
    return m_e_activesession_sessiontype_isValid;
}

qint32 OAIActivesession_getCurrent_v1_Response_mPayload::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::getSCompanyNameX() const {
    return s_company_name_x;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setSCompanyNameX(const QString &s_company_name_x) {
    this->s_company_name_x = s_company_name_x;
    this->m_s_company_name_x_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_s_company_name_x_Set() const{
    return m_s_company_name_x_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_s_company_name_x_Valid() const{
    return m_s_company_name_x_isValid;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::getSDepartmentNameX() const {
    return s_department_name_x;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setSDepartmentNameX(const QString &s_department_name_x) {
    this->s_department_name_x = s_department_name_x;
    this->m_s_department_name_x_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_s_department_name_x_Set() const{
    return m_s_department_name_x_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_s_department_name_x_Valid() const{
    return m_s_department_name_x_isValid;
}

QList<QString> OAIActivesession_getCurrent_v1_Response_mPayload::getARegisteredModules() const {
    return a_registered_modules;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setARegisteredModules(const QList<QString> &a_registered_modules) {
    this->a_registered_modules = a_registered_modules;
    this->m_a_registered_modules_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_registered_modules_Set() const{
    return m_a_registered_modules_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_registered_modules_Valid() const{
    return m_a_registered_modules_isValid;
}

QList<qint32> OAIActivesession_getCurrent_v1_Response_mPayload::getAPermissions() const {
    return a_permissions;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setAPermissions(const QList<qint32> &a_permissions) {
    this->a_permissions = a_permissions;
    this->m_a_permissions_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_permissions_Set() const{
    return m_a_permissions_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_permissions_Valid() const{
    return m_a_permissions_isValid;
}

qint32 OAIActivesession_getCurrent_v1_Response_mPayload::getFkiUserId() const {
    return fki_user_id;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIActivesession_getCurrent_v1_Response_mPayload::getFkiApikeyId() const {
    return fki_apikey_id;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setFkiApikeyId(const qint32 &fki_apikey_id) {
    this->fki_apikey_id = fki_apikey_id;
    this->m_fki_apikey_id_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_fki_apikey_id_Set() const{
    return m_fki_apikey_id_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_fki_apikey_id_Valid() const{
    return m_fki_apikey_id_isValid;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_activesession_sessiontype_isSet) {
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

        if (a_registered_modules.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_customer_code_isValid && m_e_activesession_sessiontype_isValid && m_fki_language_id_isValid && m_s_company_name_x_isValid && m_s_department_name_x_isValid && m_a_registered_modules_isValid && m_a_permissions_isValid && m_fki_user_id_isValid && m_fki_apikey_id_isValid && true;
}

} // namespace OpenAPI
