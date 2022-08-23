/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_User_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_User_Response::OAICustom_User_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_User_Response::OAICustom_User_Response() {
    this->initializeModel();
}

OAICustom_User_Response::~OAICustom_User_Response() {}

void OAICustom_User_Response::initializeModel() {

    m_pki_user_id_isSet = false;
    m_pki_user_id_isValid = false;

    m_s_user_lastname_isSet = false;
    m_s_user_lastname_isValid = false;

    m_s_user_firstname_isSet = false;
    m_s_user_firstname_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;
}

void OAICustom_User_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_User_Response::fromJsonObject(QJsonObject json) {

    m_pki_user_id_isValid = ::OpenAPI::fromJsonValue(pki_user_id, json[QString("pkiUserID")]);
    m_pki_user_id_isSet = !json[QString("pkiUserID")].isNull() && m_pki_user_id_isValid;

    m_s_user_lastname_isValid = ::OpenAPI::fromJsonValue(s_user_lastname, json[QString("sUserLastname")]);
    m_s_user_lastname_isSet = !json[QString("sUserLastname")].isNull() && m_s_user_lastname_isValid;

    m_s_user_firstname_isValid = ::OpenAPI::fromJsonValue(s_user_firstname, json[QString("sUserFirstname")]);
    m_s_user_firstname_isSet = !json[QString("sUserFirstname")].isNull() && m_s_user_firstname_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;
}

QString OAICustom_User_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_User_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_user_id_isSet) {
        obj.insert(QString("pkiUserID"), ::OpenAPI::toJsonValue(pki_user_id));
    }
    if (m_s_user_lastname_isSet) {
        obj.insert(QString("sUserLastname"), ::OpenAPI::toJsonValue(s_user_lastname));
    }
    if (m_s_user_firstname_isSet) {
        obj.insert(QString("sUserFirstname"), ::OpenAPI::toJsonValue(s_user_firstname));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    return obj;
}

qint32 OAICustom_User_Response::getPkiUserId() const {
    return pki_user_id;
}
void OAICustom_User_Response::setPkiUserId(const qint32 &pki_user_id) {
    this->pki_user_id = pki_user_id;
    this->m_pki_user_id_isSet = true;
}

bool OAICustom_User_Response::is_pki_user_id_Set() const{
    return m_pki_user_id_isSet;
}

bool OAICustom_User_Response::is_pki_user_id_Valid() const{
    return m_pki_user_id_isValid;
}

QString OAICustom_User_Response::getSUserLastname() const {
    return s_user_lastname;
}
void OAICustom_User_Response::setSUserLastname(const QString &s_user_lastname) {
    this->s_user_lastname = s_user_lastname;
    this->m_s_user_lastname_isSet = true;
}

bool OAICustom_User_Response::is_s_user_lastname_Set() const{
    return m_s_user_lastname_isSet;
}

bool OAICustom_User_Response::is_s_user_lastname_Valid() const{
    return m_s_user_lastname_isValid;
}

QString OAICustom_User_Response::getSUserFirstname() const {
    return s_user_firstname;
}
void OAICustom_User_Response::setSUserFirstname(const QString &s_user_firstname) {
    this->s_user_firstname = s_user_firstname;
    this->m_s_user_firstname_isSet = true;
}

bool OAICustom_User_Response::is_s_user_firstname_Set() const{
    return m_s_user_firstname_isSet;
}

bool OAICustom_User_Response::is_s_user_firstname_Valid() const{
    return m_s_user_firstname_isValid;
}

QString OAICustom_User_Response::getSEmailAddress() const {
    return s_email_address;
}
void OAICustom_User_Response::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAICustom_User_Response::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAICustom_User_Response::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool OAICustom_User_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_User_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_user_id_isValid && m_s_user_lastname_isValid && m_s_user_firstname_isValid && m_s_email_address_isValid && true;
}

} // namespace OpenAPI
