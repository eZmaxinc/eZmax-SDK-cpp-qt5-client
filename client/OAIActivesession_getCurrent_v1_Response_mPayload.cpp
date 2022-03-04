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

    m_e_activesession_sessiontype_isSet = false;
    m_e_activesession_sessiontype_isValid = false;

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

    m_a_pki_permission_id_isSet = false;
    m_a_pki_permission_id_isValid = false;

    m_obj_user_real_isSet = false;
    m_obj_user_real_isValid = false;

    m_obj_user_cloned_isSet = false;
    m_obj_user_cloned_isValid = false;

    m_obj_apikey_isSet = false;
    m_obj_apikey_isValid = false;

    m_a_e_module_internalname_isSet = false;
    m_a_e_module_internalname_isValid = false;
}

void OAIActivesession_getCurrent_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_getCurrent_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_e_activesession_sessiontype_isValid = ::OpenAPI::fromJsonValue(e_activesession_sessiontype, json[QString("eActivesessionSessiontype")]);
    m_e_activesession_sessiontype_isSet = !json[QString("eActivesessionSessiontype")].isNull() && m_e_activesession_sessiontype_isValid;

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

    m_a_pki_permission_id_isValid = ::OpenAPI::fromJsonValue(a_pki_permission_id, json[QString("a_pkiPermissionID")]);
    m_a_pki_permission_id_isSet = !json[QString("a_pkiPermissionID")].isNull() && m_a_pki_permission_id_isValid;

    m_obj_user_real_isValid = ::OpenAPI::fromJsonValue(obj_user_real, json[QString("objUserReal")]);
    m_obj_user_real_isSet = !json[QString("objUserReal")].isNull() && m_obj_user_real_isValid;

    m_obj_user_cloned_isValid = ::OpenAPI::fromJsonValue(obj_user_cloned, json[QString("objUserCloned")]);
    m_obj_user_cloned_isSet = !json[QString("objUserCloned")].isNull() && m_obj_user_cloned_isValid;

    m_obj_apikey_isValid = ::OpenAPI::fromJsonValue(obj_apikey, json[QString("objApikey")]);
    m_obj_apikey_isSet = !json[QString("objApikey")].isNull() && m_obj_apikey_isValid;

    m_a_e_module_internalname_isValid = ::OpenAPI::fromJsonValue(a_e_module_internalname, json[QString("a_eModuleInternalname")]);
    m_a_e_module_internalname_isSet = !json[QString("a_eModuleInternalname")].isNull() && m_a_e_module_internalname_isValid;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_getCurrent_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (e_activesession_sessiontype.isSet()) {
        obj.insert(QString("eActivesessionSessiontype"), ::OpenAPI::toJsonValue(e_activesession_sessiontype));
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
    if (a_pki_permission_id.size() > 0) {
        obj.insert(QString("a_pkiPermissionID"), ::OpenAPI::toJsonValue(a_pki_permission_id));
    }
    if (obj_user_real.isSet()) {
        obj.insert(QString("objUserReal"), ::OpenAPI::toJsonValue(obj_user_real));
    }
    if (obj_user_cloned.isSet()) {
        obj.insert(QString("objUserCloned"), ::OpenAPI::toJsonValue(obj_user_cloned));
    }
    if (obj_apikey.isSet()) {
        obj.insert(QString("objApikey"), ::OpenAPI::toJsonValue(obj_apikey));
    }
    if (a_e_module_internalname.size() > 0) {
        obj.insert(QString("a_eModuleInternalname"), ::OpenAPI::toJsonValue(a_e_module_internalname));
    }
    return obj;
}

OAIField_eActivesessionSessiontype OAIActivesession_getCurrent_v1_Response_mPayload::getEActivesessionSessiontype() const {
    return e_activesession_sessiontype;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setEActivesessionSessiontype(const OAIField_eActivesessionSessiontype &e_activesession_sessiontype) {
    this->e_activesession_sessiontype = e_activesession_sessiontype;
    this->m_e_activesession_sessiontype_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_e_activesession_sessiontype_Set() const{
    return m_e_activesession_sessiontype_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_e_activesession_sessiontype_Valid() const{
    return m_e_activesession_sessiontype_isValid;
}

OAIField_eActivesessionWeekdaystart OAIActivesession_getCurrent_v1_Response_mPayload::getEActivesessionWeekdaystart() const {
    return e_activesession_weekdaystart;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setEActivesessionWeekdaystart(const OAIField_eActivesessionWeekdaystart &e_activesession_weekdaystart) {
    this->e_activesession_weekdaystart = e_activesession_weekdaystart;
    this->m_e_activesession_weekdaystart_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_e_activesession_weekdaystart_Set() const{
    return m_e_activesession_weekdaystart_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_e_activesession_weekdaystart_Valid() const{
    return m_e_activesession_weekdaystart_isValid;
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

bool OAIActivesession_getCurrent_v1_Response_mPayload::isBActivesessionDebug() const {
    return b_activesession_debug;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setBActivesessionDebug(const bool &b_activesession_debug) {
    this->b_activesession_debug = b_activesession_debug;
    this->m_b_activesession_debug_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_b_activesession_debug_Set() const{
    return m_b_activesession_debug_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_b_activesession_debug_Valid() const{
    return m_b_activesession_debug_isValid;
}

QString OAIActivesession_getCurrent_v1_Response_mPayload::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

QList<qint32> OAIActivesession_getCurrent_v1_Response_mPayload::getAPkiPermissionId() const {
    return a_pki_permission_id;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setAPkiPermissionId(const QList<qint32> &a_pki_permission_id) {
    this->a_pki_permission_id = a_pki_permission_id;
    this->m_a_pki_permission_id_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_pki_permission_id_Set() const{
    return m_a_pki_permission_id_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_pki_permission_id_Valid() const{
    return m_a_pki_permission_id_isValid;
}

OAIActivesession_ResponseCompound_User OAIActivesession_getCurrent_v1_Response_mPayload::getObjUserReal() const {
    return obj_user_real;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setObjUserReal(const OAIActivesession_ResponseCompound_User &obj_user_real) {
    this->obj_user_real = obj_user_real;
    this->m_obj_user_real_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_obj_user_real_Set() const{
    return m_obj_user_real_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_obj_user_real_Valid() const{
    return m_obj_user_real_isValid;
}

OAIActivesession_ResponseCompound_User OAIActivesession_getCurrent_v1_Response_mPayload::getObjUserCloned() const {
    return obj_user_cloned;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setObjUserCloned(const OAIActivesession_ResponseCompound_User &obj_user_cloned) {
    this->obj_user_cloned = obj_user_cloned;
    this->m_obj_user_cloned_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_obj_user_cloned_Set() const{
    return m_obj_user_cloned_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_obj_user_cloned_Valid() const{
    return m_obj_user_cloned_isValid;
}

OAIActivesession_ResponseCompound_Apikey OAIActivesession_getCurrent_v1_Response_mPayload::getObjApikey() const {
    return obj_apikey;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setObjApikey(const OAIActivesession_ResponseCompound_Apikey &obj_apikey) {
    this->obj_apikey = obj_apikey;
    this->m_obj_apikey_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_obj_apikey_Set() const{
    return m_obj_apikey_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_obj_apikey_Valid() const{
    return m_obj_apikey_isValid;
}

QList<QString> OAIActivesession_getCurrent_v1_Response_mPayload::getAEModuleInternalname() const {
    return a_e_module_internalname;
}
void OAIActivesession_getCurrent_v1_Response_mPayload::setAEModuleInternalname(const QList<QString> &a_e_module_internalname) {
    this->a_e_module_internalname = a_e_module_internalname;
    this->m_a_e_module_internalname_isSet = true;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_e_module_internalname_Set() const{
    return m_a_e_module_internalname_isSet;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::is_a_e_module_internalname_Valid() const{
    return m_a_e_module_internalname_isValid;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (e_activesession_sessiontype.isSet()) {
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

        if (a_pki_permission_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (obj_user_real.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_user_cloned.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_apikey.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_e_module_internalname.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_getCurrent_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_activesession_sessiontype_isValid && m_e_activesession_weekdaystart_isValid && m_fki_language_id_isValid && m_s_company_name_x_isValid && m_s_department_name_x_isValid && m_b_activesession_debug_isValid && m_pks_customer_code_isValid && m_a_pki_permission_id_isValid && m_obj_user_real_isValid && m_a_e_module_internalname_isValid && true;
}

} // namespace OpenAPI
