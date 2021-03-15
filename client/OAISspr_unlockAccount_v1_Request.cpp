/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISspr_unlockAccount_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISspr_unlockAccount_v1_Request::OAISspr_unlockAccount_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISspr_unlockAccount_v1_Request::OAISspr_unlockAccount_v1_Request() {
    this->initializeModel();
}

OAISspr_unlockAccount_v1_Request::~OAISspr_unlockAccount_v1_Request() {}

void OAISspr_unlockAccount_v1_Request::initializeModel() {

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_e_user_type_sspr_isSet = false;
    m_e_user_type_sspr_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;

    m_bin_user_ssp_rtoken_isSet = false;
    m_bin_user_ssp_rtoken_isValid = false;
}

void OAISspr_unlockAccount_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISspr_unlockAccount_v1_Request::fromJsonObject(QJsonObject json) {

    m_pks_customer_code_isValid = ::OpenAPI::fromJsonValue(pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_e_user_type_sspr_isValid = ::OpenAPI::fromJsonValue(e_user_type_sspr, json[QString("eUserTypeSSPR")]);
    m_e_user_type_sspr_isSet = !json[QString("eUserTypeSSPR")].isNull() && m_e_user_type_sspr_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_user_loginname_isValid = ::OpenAPI::fromJsonValue(s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;

    m_bin_user_ssp_rtoken_isValid = ::OpenAPI::fromJsonValue(bin_user_ssp_rtoken, json[QString("binUserSSPRtoken")]);
    m_bin_user_ssp_rtoken_isSet = !json[QString("binUserSSPRtoken")].isNull() && m_bin_user_ssp_rtoken_isValid;
}

QString OAISspr_unlockAccount_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISspr_unlockAccount_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::OpenAPI::toJsonValue(pks_customer_code));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (e_user_type_sspr.isSet()) {
        obj.insert(QString("eUserTypeSSPR"), ::OpenAPI::toJsonValue(e_user_type_sspr));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::OpenAPI::toJsonValue(s_user_loginname));
    }
    if (m_bin_user_ssp_rtoken_isSet) {
        obj.insert(QString("binUserSSPRtoken"), ::OpenAPI::toJsonValue(bin_user_ssp_rtoken));
    }
    return obj;
}

QString OAISspr_unlockAccount_v1_Request::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAISspr_unlockAccount_v1_Request::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAISspr_unlockAccount_v1_Request::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAISspr_unlockAccount_v1_Request::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

qint32 OAISspr_unlockAccount_v1_Request::getFkiLanguageId() const {
    return fki_language_id;
}
void OAISspr_unlockAccount_v1_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAISspr_unlockAccount_v1_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAISspr_unlockAccount_v1_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

OAIField_eUserTypeSSPR OAISspr_unlockAccount_v1_Request::getEUserTypeSspr() const {
    return e_user_type_sspr;
}
void OAISspr_unlockAccount_v1_Request::setEUserTypeSspr(const OAIField_eUserTypeSSPR &e_user_type_sspr) {
    this->e_user_type_sspr = e_user_type_sspr;
    this->m_e_user_type_sspr_isSet = true;
}

bool OAISspr_unlockAccount_v1_Request::is_e_user_type_sspr_Set() const{
    return m_e_user_type_sspr_isSet;
}

bool OAISspr_unlockAccount_v1_Request::is_e_user_type_sspr_Valid() const{
    return m_e_user_type_sspr_isValid;
}

QString OAISspr_unlockAccount_v1_Request::getSEmailAddress() const {
    return s_email_address;
}
void OAISspr_unlockAccount_v1_Request::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAISspr_unlockAccount_v1_Request::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAISspr_unlockAccount_v1_Request::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString OAISspr_unlockAccount_v1_Request::getSUserLoginname() const {
    return s_user_loginname;
}
void OAISspr_unlockAccount_v1_Request::setSUserLoginname(const QString &s_user_loginname) {
    this->s_user_loginname = s_user_loginname;
    this->m_s_user_loginname_isSet = true;
}

bool OAISspr_unlockAccount_v1_Request::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool OAISspr_unlockAccount_v1_Request::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

QString OAISspr_unlockAccount_v1_Request::getBinUserSspRtoken() const {
    return bin_user_ssp_rtoken;
}
void OAISspr_unlockAccount_v1_Request::setBinUserSspRtoken(const QString &bin_user_ssp_rtoken) {
    this->bin_user_ssp_rtoken = bin_user_ssp_rtoken;
    this->m_bin_user_ssp_rtoken_isSet = true;
}

bool OAISspr_unlockAccount_v1_Request::is_bin_user_ssp_rtoken_Set() const{
    return m_bin_user_ssp_rtoken_isSet;
}

bool OAISspr_unlockAccount_v1_Request::is_bin_user_ssp_rtoken_Valid() const{
    return m_bin_user_ssp_rtoken_isValid;
}

bool OAISspr_unlockAccount_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_user_type_sspr.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bin_user_ssp_rtoken_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISspr_unlockAccount_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pks_customer_code_isValid && m_fki_language_id_isValid && m_e_user_type_sspr_isValid && m_bin_user_ssp_rtoken_isValid && true;
}

} // namespace OpenAPI
