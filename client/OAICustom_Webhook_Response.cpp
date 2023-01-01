/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_Webhook_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Webhook_Response::OAICustom_Webhook_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Webhook_Response::OAICustom_Webhook_Response() {
    this->initializeModel();
}

OAICustom_Webhook_Response::~OAICustom_Webhook_Response() {}

void OAICustom_Webhook_Response::initializeModel() {

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;

    m_b_webhook_test_isSet = false;
    m_b_webhook_test_isValid = false;

    m_pki_webhook_id_isSet = false;
    m_pki_webhook_id_isValid = false;

    m_s_webhook_description_isSet = false;
    m_s_webhook_description_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;

    m_e_webhook_module_isSet = false;
    m_e_webhook_module_isValid = false;

    m_e_webhook_ezsignevent_isSet = false;
    m_e_webhook_ezsignevent_isValid = false;

    m_e_webhook_managementevent_isSet = false;
    m_e_webhook_managementevent_isValid = false;

    m_s_webhook_url_isSet = false;
    m_s_webhook_url_isValid = false;

    m_s_webhook_emailfailed_isSet = false;
    m_s_webhook_emailfailed_isValid = false;

    m_b_webhook_isactive_isSet = false;
    m_b_webhook_isactive_isValid = false;

    m_b_webhook_skipsslvalidation_isSet = false;
    m_b_webhook_skipsslvalidation_isValid = false;
}

void OAICustom_Webhook_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Webhook_Response::fromJsonObject(QJsonObject json) {

    m_pks_customer_code_isValid = ::OpenAPI::fromJsonValue(pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;

    m_b_webhook_test_isValid = ::OpenAPI::fromJsonValue(b_webhook_test, json[QString("bWebhookTest")]);
    m_b_webhook_test_isSet = !json[QString("bWebhookTest")].isNull() && m_b_webhook_test_isValid;

    m_pki_webhook_id_isValid = ::OpenAPI::fromJsonValue(pki_webhook_id, json[QString("pkiWebhookID")]);
    m_pki_webhook_id_isSet = !json[QString("pkiWebhookID")].isNull() && m_pki_webhook_id_isValid;

    m_s_webhook_description_isValid = ::OpenAPI::fromJsonValue(s_webhook_description, json[QString("sWebhookDescription")]);
    m_s_webhook_description_isSet = !json[QString("sWebhookDescription")].isNull() && m_s_webhook_description_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;

    m_e_webhook_module_isValid = ::OpenAPI::fromJsonValue(e_webhook_module, json[QString("eWebhookModule")]);
    m_e_webhook_module_isSet = !json[QString("eWebhookModule")].isNull() && m_e_webhook_module_isValid;

    m_e_webhook_ezsignevent_isValid = ::OpenAPI::fromJsonValue(e_webhook_ezsignevent, json[QString("eWebhookEzsignevent")]);
    m_e_webhook_ezsignevent_isSet = !json[QString("eWebhookEzsignevent")].isNull() && m_e_webhook_ezsignevent_isValid;

    m_e_webhook_managementevent_isValid = ::OpenAPI::fromJsonValue(e_webhook_managementevent, json[QString("eWebhookManagementevent")]);
    m_e_webhook_managementevent_isSet = !json[QString("eWebhookManagementevent")].isNull() && m_e_webhook_managementevent_isValid;

    m_s_webhook_url_isValid = ::OpenAPI::fromJsonValue(s_webhook_url, json[QString("sWebhookUrl")]);
    m_s_webhook_url_isSet = !json[QString("sWebhookUrl")].isNull() && m_s_webhook_url_isValid;

    m_s_webhook_emailfailed_isValid = ::OpenAPI::fromJsonValue(s_webhook_emailfailed, json[QString("sWebhookEmailfailed")]);
    m_s_webhook_emailfailed_isSet = !json[QString("sWebhookEmailfailed")].isNull() && m_s_webhook_emailfailed_isValid;

    m_b_webhook_isactive_isValid = ::OpenAPI::fromJsonValue(b_webhook_isactive, json[QString("bWebhookIsactive")]);
    m_b_webhook_isactive_isSet = !json[QString("bWebhookIsactive")].isNull() && m_b_webhook_isactive_isValid;

    m_b_webhook_skipsslvalidation_isValid = ::OpenAPI::fromJsonValue(b_webhook_skipsslvalidation, json[QString("bWebhookSkipsslvalidation")]);
    m_b_webhook_skipsslvalidation_isSet = !json[QString("bWebhookSkipsslvalidation")].isNull() && m_b_webhook_skipsslvalidation_isValid;
}

QString OAICustom_Webhook_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Webhook_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::OpenAPI::toJsonValue(pks_customer_code));
    }
    if (m_b_webhook_test_isSet) {
        obj.insert(QString("bWebhookTest"), ::OpenAPI::toJsonValue(b_webhook_test));
    }
    if (m_pki_webhook_id_isSet) {
        obj.insert(QString("pkiWebhookID"), ::OpenAPI::toJsonValue(pki_webhook_id));
    }
    if (m_s_webhook_description_isSet) {
        obj.insert(QString("sWebhookDescription"), ::OpenAPI::toJsonValue(s_webhook_description));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(s_ezsignfoldertype_name_x));
    }
    if (e_webhook_module.isSet()) {
        obj.insert(QString("eWebhookModule"), ::OpenAPI::toJsonValue(e_webhook_module));
    }
    if (e_webhook_ezsignevent.isSet()) {
        obj.insert(QString("eWebhookEzsignevent"), ::OpenAPI::toJsonValue(e_webhook_ezsignevent));
    }
    if (e_webhook_managementevent.isSet()) {
        obj.insert(QString("eWebhookManagementevent"), ::OpenAPI::toJsonValue(e_webhook_managementevent));
    }
    if (m_s_webhook_url_isSet) {
        obj.insert(QString("sWebhookUrl"), ::OpenAPI::toJsonValue(s_webhook_url));
    }
    if (m_s_webhook_emailfailed_isSet) {
        obj.insert(QString("sWebhookEmailfailed"), ::OpenAPI::toJsonValue(s_webhook_emailfailed));
    }
    if (m_b_webhook_isactive_isSet) {
        obj.insert(QString("bWebhookIsactive"), ::OpenAPI::toJsonValue(b_webhook_isactive));
    }
    if (m_b_webhook_skipsslvalidation_isSet) {
        obj.insert(QString("bWebhookSkipsslvalidation"), ::OpenAPI::toJsonValue(b_webhook_skipsslvalidation));
    }
    return obj;
}

QString OAICustom_Webhook_Response::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAICustom_Webhook_Response::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAICustom_Webhook_Response::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAICustom_Webhook_Response::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

bool OAICustom_Webhook_Response::isBWebhookTest() const {
    return b_webhook_test;
}
void OAICustom_Webhook_Response::setBWebhookTest(const bool &b_webhook_test) {
    this->b_webhook_test = b_webhook_test;
    this->m_b_webhook_test_isSet = true;
}

bool OAICustom_Webhook_Response::is_b_webhook_test_Set() const{
    return m_b_webhook_test_isSet;
}

bool OAICustom_Webhook_Response::is_b_webhook_test_Valid() const{
    return m_b_webhook_test_isValid;
}

qint32 OAICustom_Webhook_Response::getPkiWebhookId() const {
    return pki_webhook_id;
}
void OAICustom_Webhook_Response::setPkiWebhookId(const qint32 &pki_webhook_id) {
    this->pki_webhook_id = pki_webhook_id;
    this->m_pki_webhook_id_isSet = true;
}

bool OAICustom_Webhook_Response::is_pki_webhook_id_Set() const{
    return m_pki_webhook_id_isSet;
}

bool OAICustom_Webhook_Response::is_pki_webhook_id_Valid() const{
    return m_pki_webhook_id_isValid;
}

QString OAICustom_Webhook_Response::getSWebhookDescription() const {
    return s_webhook_description;
}
void OAICustom_Webhook_Response::setSWebhookDescription(const QString &s_webhook_description) {
    this->s_webhook_description = s_webhook_description;
    this->m_s_webhook_description_isSet = true;
}

bool OAICustom_Webhook_Response::is_s_webhook_description_Set() const{
    return m_s_webhook_description_isSet;
}

bool OAICustom_Webhook_Response::is_s_webhook_description_Valid() const{
    return m_s_webhook_description_isValid;
}

qint32 OAICustom_Webhook_Response::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAICustom_Webhook_Response::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAICustom_Webhook_Response::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAICustom_Webhook_Response::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

QString OAICustom_Webhook_Response::getSEzsignfoldertypeNameX() const {
    return s_ezsignfoldertype_name_x;
}
void OAICustom_Webhook_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    this->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    this->m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAICustom_Webhook_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAICustom_Webhook_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

OAIField_eWebhookModule OAICustom_Webhook_Response::getEWebhookModule() const {
    return e_webhook_module;
}
void OAICustom_Webhook_Response::setEWebhookModule(const OAIField_eWebhookModule &e_webhook_module) {
    this->e_webhook_module = e_webhook_module;
    this->m_e_webhook_module_isSet = true;
}

bool OAICustom_Webhook_Response::is_e_webhook_module_Set() const{
    return m_e_webhook_module_isSet;
}

bool OAICustom_Webhook_Response::is_e_webhook_module_Valid() const{
    return m_e_webhook_module_isValid;
}

OAIField_eWebhookEzsignevent OAICustom_Webhook_Response::getEWebhookEzsignevent() const {
    return e_webhook_ezsignevent;
}
void OAICustom_Webhook_Response::setEWebhookEzsignevent(const OAIField_eWebhookEzsignevent &e_webhook_ezsignevent) {
    this->e_webhook_ezsignevent = e_webhook_ezsignevent;
    this->m_e_webhook_ezsignevent_isSet = true;
}

bool OAICustom_Webhook_Response::is_e_webhook_ezsignevent_Set() const{
    return m_e_webhook_ezsignevent_isSet;
}

bool OAICustom_Webhook_Response::is_e_webhook_ezsignevent_Valid() const{
    return m_e_webhook_ezsignevent_isValid;
}

OAIField_eWebhookManagementevent OAICustom_Webhook_Response::getEWebhookManagementevent() const {
    return e_webhook_managementevent;
}
void OAICustom_Webhook_Response::setEWebhookManagementevent(const OAIField_eWebhookManagementevent &e_webhook_managementevent) {
    this->e_webhook_managementevent = e_webhook_managementevent;
    this->m_e_webhook_managementevent_isSet = true;
}

bool OAICustom_Webhook_Response::is_e_webhook_managementevent_Set() const{
    return m_e_webhook_managementevent_isSet;
}

bool OAICustom_Webhook_Response::is_e_webhook_managementevent_Valid() const{
    return m_e_webhook_managementevent_isValid;
}

QString OAICustom_Webhook_Response::getSWebhookUrl() const {
    return s_webhook_url;
}
void OAICustom_Webhook_Response::setSWebhookUrl(const QString &s_webhook_url) {
    this->s_webhook_url = s_webhook_url;
    this->m_s_webhook_url_isSet = true;
}

bool OAICustom_Webhook_Response::is_s_webhook_url_Set() const{
    return m_s_webhook_url_isSet;
}

bool OAICustom_Webhook_Response::is_s_webhook_url_Valid() const{
    return m_s_webhook_url_isValid;
}

QString OAICustom_Webhook_Response::getSWebhookEmailfailed() const {
    return s_webhook_emailfailed;
}
void OAICustom_Webhook_Response::setSWebhookEmailfailed(const QString &s_webhook_emailfailed) {
    this->s_webhook_emailfailed = s_webhook_emailfailed;
    this->m_s_webhook_emailfailed_isSet = true;
}

bool OAICustom_Webhook_Response::is_s_webhook_emailfailed_Set() const{
    return m_s_webhook_emailfailed_isSet;
}

bool OAICustom_Webhook_Response::is_s_webhook_emailfailed_Valid() const{
    return m_s_webhook_emailfailed_isValid;
}

bool OAICustom_Webhook_Response::isBWebhookIsactive() const {
    return b_webhook_isactive;
}
void OAICustom_Webhook_Response::setBWebhookIsactive(const bool &b_webhook_isactive) {
    this->b_webhook_isactive = b_webhook_isactive;
    this->m_b_webhook_isactive_isSet = true;
}

bool OAICustom_Webhook_Response::is_b_webhook_isactive_Set() const{
    return m_b_webhook_isactive_isSet;
}

bool OAICustom_Webhook_Response::is_b_webhook_isactive_Valid() const{
    return m_b_webhook_isactive_isValid;
}

bool OAICustom_Webhook_Response::isBWebhookSkipsslvalidation() const {
    return b_webhook_skipsslvalidation;
}
void OAICustom_Webhook_Response::setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation) {
    this->b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    this->m_b_webhook_skipsslvalidation_isSet = true;
}

bool OAICustom_Webhook_Response::is_b_webhook_skipsslvalidation_Set() const{
    return m_b_webhook_skipsslvalidation_isSet;
}

bool OAICustom_Webhook_Response::is_b_webhook_skipsslvalidation_Valid() const{
    return m_b_webhook_skipsslvalidation_isValid;
}

bool OAICustom_Webhook_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_test_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_webhook_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_webhook_module.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_webhook_ezsignevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_webhook_managementevent.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_webhook_emailfailed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_webhook_skipsslvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Webhook_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pks_customer_code_isValid && m_b_webhook_test_isValid && m_pki_webhook_id_isValid && m_s_webhook_description_isValid && m_e_webhook_module_isValid && m_s_webhook_url_isValid && m_s_webhook_emailfailed_isValid && m_b_webhook_skipsslvalidation_isValid && true;
}

} // namespace OpenAPI
