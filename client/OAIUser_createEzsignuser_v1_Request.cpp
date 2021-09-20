/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.47
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUser_createEzsignuser_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUser_createEzsignuser_v1_Request::OAIUser_createEzsignuser_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUser_createEzsignuser_v1_Request::OAIUser_createEzsignuser_v1_Request() {
    this->initializeModel();
}

OAIUser_createEzsignuser_v1_Request::~OAIUser_createEzsignuser_v1_Request() {}

void OAIUser_createEzsignuser_v1_Request::initializeModel() {

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_phone_region_isSet = false;
    m_s_phone_region_isValid = false;

    m_s_phone_exchange_isSet = false;
    m_s_phone_exchange_isValid = false;

    m_s_phone_number_isSet = false;
    m_s_phone_number_isValid = false;

    m_s_phone_extension_isSet = false;
    m_s_phone_extension_isValid = false;
}

void OAIUser_createEzsignuser_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUser_createEzsignuser_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_user_firstname_isValid = ::OpenAPI::fromJsonValue(s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_user_lastname_isValid = ::OpenAPI::fromJsonValue(s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_phone_region_isValid = ::OpenAPI::fromJsonValue(s_phone_region, json[QString("sPhoneRegion")]);
    m_s_phone_region_isSet = !json[QString("sPhoneRegion")].isNull() && m_s_phone_region_isValid;

    m_s_phone_exchange_isValid = ::OpenAPI::fromJsonValue(s_phone_exchange, json[QString("sPhoneExchange")]);
    m_s_phone_exchange_isSet = !json[QString("sPhoneExchange")].isNull() && m_s_phone_exchange_isValid;

    m_s_phone_number_isValid = ::OpenAPI::fromJsonValue(s_phone_number, json[QString("sPhoneNumber")]);
    m_s_phone_number_isSet = !json[QString("sPhoneNumber")].isNull() && m_s_phone_number_isValid;

    m_s_phone_extension_isValid = ::OpenAPI::fromJsonValue(s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUser_createEzsignuser_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::OpenAPI::toJsonValue(s_user_firstname));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::OpenAPI::toJsonValue(s_user_lastname));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    if (m_s_phone_region_isSet) {
        obj.insert(QString("sPhoneRegion"), ::OpenAPI::toJsonValue(s_phone_region));
    }
    if (m_s_phone_exchange_isSet) {
        obj.insert(QString("sPhoneExchange"), ::OpenAPI::toJsonValue(s_phone_exchange));
    }
    if (m_s_phone_number_isSet) {
        obj.insert(QString("sPhoneNumber"), ::OpenAPI::toJsonValue(s_phone_number));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::OpenAPI::toJsonValue(s_phone_extension));
    }
    return obj;
}

qint32 OAIUser_createEzsignuser_v1_Request::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIUser_createEzsignuser_v1_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSUserFirstname() const {
    return s_user_firstname;
}
void OAIUser_createEzsignuser_v1_Request::setSUserFirstname(const QString &s_user_firstname) {
    this->s_user_firstname = s_user_firstname;
    this->m_s_user_firstname_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSUserLastname() const {
    return s_user_lastname;
}
void OAIUser_createEzsignuser_v1_Request::setSUserLastname(const QString &s_user_lastname) {
    this->s_user_lastname = s_user_lastname;
    this->m_s_user_lastname_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSEmailAddress() const {
    return s_email_address;
}
void OAIUser_createEzsignuser_v1_Request::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSPhoneRegion() const {
    return s_phone_region;
}
void OAIUser_createEzsignuser_v1_Request::setSPhoneRegion(const QString &s_phone_region) {
    this->s_phone_region = s_phone_region;
    this->m_s_phone_region_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_region_Set() const{
    return m_s_phone_region_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_region_Valid() const{
    return m_s_phone_region_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSPhoneExchange() const {
    return s_phone_exchange;
}
void OAIUser_createEzsignuser_v1_Request::setSPhoneExchange(const QString &s_phone_exchange) {
    this->s_phone_exchange = s_phone_exchange;
    this->m_s_phone_exchange_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_exchange_Set() const{
    return m_s_phone_exchange_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_exchange_Valid() const{
    return m_s_phone_exchange_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSPhoneNumber() const {
    return s_phone_number;
}
void OAIUser_createEzsignuser_v1_Request::setSPhoneNumber(const QString &s_phone_number) {
    this->s_phone_number = s_phone_number;
    this->m_s_phone_number_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_number_Set() const{
    return m_s_phone_number_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_number_Valid() const{
    return m_s_phone_number_isValid;
}

QString OAIUser_createEzsignuser_v1_Request::getSPhoneExtension() const {
    return s_phone_extension;
}
void OAIUser_createEzsignuser_v1_Request::setSPhoneExtension(const QString &s_phone_extension) {
    this->s_phone_extension = s_phone_extension;
    this->m_s_phone_extension_isSet = true;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool OAIUser_createEzsignuser_v1_Request::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

bool OAIUser_createEzsignuser_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_region_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_exchange_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_extension_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUser_createEzsignuser_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_language_id_isValid && m_s_user_firstname_isValid && m_s_user_lastname_isValid && m_s_email_address_isValid && m_s_phone_region_isValid && m_s_phone_exchange_isValid && m_s_phone_number_isValid && true;
}

} // namespace OpenAPI
