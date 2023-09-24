/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUserstaged_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUserstaged_ListElement::OAIUserstaged_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUserstaged_ListElement::OAIUserstaged_ListElement() {
    this->initializeModel();
}

OAIUserstaged_ListElement::~OAIUserstaged_ListElement() {}

void OAIUserstaged_ListElement::initializeModel() {

    m_pki_userstaged_id_isSet = false;
    m_pki_userstaged_id_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_userstaged_firstname_isSet = false;
    m_s_userstaged_firstname_isValid = false;

    m_s_userstaged_lastname_isSet = false;
    m_s_userstaged_lastname_isValid = false;

    m_s_userstaged_externalid_isSet = false;
    m_s_userstaged_externalid_isValid = false;
}

void OAIUserstaged_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUserstaged_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_userstaged_id_isValid = ::OpenAPI::fromJsonValue(m_pki_userstaged_id, json[QString("pkiUserstagedID")]);
    m_pki_userstaged_id_isSet = !json[QString("pkiUserstagedID")].isNull() && m_pki_userstaged_id_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_userstaged_firstname_isValid = ::OpenAPI::fromJsonValue(m_s_userstaged_firstname, json[QString("sUserstagedFirstname")]);
    m_s_userstaged_firstname_isSet = !json[QString("sUserstagedFirstname")].isNull() && m_s_userstaged_firstname_isValid;

    m_s_userstaged_lastname_isValid = ::OpenAPI::fromJsonValue(m_s_userstaged_lastname, json[QString("sUserstagedLastname")]);
    m_s_userstaged_lastname_isSet = !json[QString("sUserstagedLastname")].isNull() && m_s_userstaged_lastname_isValid;

    m_s_userstaged_externalid_isValid = ::OpenAPI::fromJsonValue(m_s_userstaged_externalid, json[QString("sUserstagedExternalid")]);
    m_s_userstaged_externalid_isSet = !json[QString("sUserstagedExternalid")].isNull() && m_s_userstaged_externalid_isValid;
}

QString OAIUserstaged_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUserstaged_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_userstaged_id_isSet) {
        obj.insert(QString("pkiUserstagedID"), ::OpenAPI::toJsonValue(m_pki_userstaged_id));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(m_s_email_address));
    }
    if (m_s_userstaged_firstname_isSet) {
        obj.insert(QString("sUserstagedFirstname"), ::OpenAPI::toJsonValue(m_s_userstaged_firstname));
    }
    if (m_s_userstaged_lastname_isSet) {
        obj.insert(QString("sUserstagedLastname"), ::OpenAPI::toJsonValue(m_s_userstaged_lastname));
    }
    if (m_s_userstaged_externalid_isSet) {
        obj.insert(QString("sUserstagedExternalid"), ::OpenAPI::toJsonValue(m_s_userstaged_externalid));
    }
    return obj;
}

qint32 OAIUserstaged_ListElement::getPkiUserstagedId() const {
    return m_pki_userstaged_id;
}
void OAIUserstaged_ListElement::setPkiUserstagedId(const qint32 &pki_userstaged_id) {
    m_pki_userstaged_id = pki_userstaged_id;
    m_pki_userstaged_id_isSet = true;
}

bool OAIUserstaged_ListElement::is_pki_userstaged_id_Set() const{
    return m_pki_userstaged_id_isSet;
}

bool OAIUserstaged_ListElement::is_pki_userstaged_id_Valid() const{
    return m_pki_userstaged_id_isValid;
}

QString OAIUserstaged_ListElement::getSEmailAddress() const {
    return m_s_email_address;
}
void OAIUserstaged_ListElement::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool OAIUserstaged_ListElement::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIUserstaged_ListElement::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString OAIUserstaged_ListElement::getSUserstagedFirstname() const {
    return m_s_userstaged_firstname;
}
void OAIUserstaged_ListElement::setSUserstagedFirstname(const QString &s_userstaged_firstname) {
    m_s_userstaged_firstname = s_userstaged_firstname;
    m_s_userstaged_firstname_isSet = true;
}

bool OAIUserstaged_ListElement::is_s_userstaged_firstname_Set() const{
    return m_s_userstaged_firstname_isSet;
}

bool OAIUserstaged_ListElement::is_s_userstaged_firstname_Valid() const{
    return m_s_userstaged_firstname_isValid;
}

QString OAIUserstaged_ListElement::getSUserstagedLastname() const {
    return m_s_userstaged_lastname;
}
void OAIUserstaged_ListElement::setSUserstagedLastname(const QString &s_userstaged_lastname) {
    m_s_userstaged_lastname = s_userstaged_lastname;
    m_s_userstaged_lastname_isSet = true;
}

bool OAIUserstaged_ListElement::is_s_userstaged_lastname_Set() const{
    return m_s_userstaged_lastname_isSet;
}

bool OAIUserstaged_ListElement::is_s_userstaged_lastname_Valid() const{
    return m_s_userstaged_lastname_isValid;
}

QString OAIUserstaged_ListElement::getSUserstagedExternalid() const {
    return m_s_userstaged_externalid;
}
void OAIUserstaged_ListElement::setSUserstagedExternalid(const QString &s_userstaged_externalid) {
    m_s_userstaged_externalid = s_userstaged_externalid;
    m_s_userstaged_externalid_isSet = true;
}

bool OAIUserstaged_ListElement::is_s_userstaged_externalid_Set() const{
    return m_s_userstaged_externalid_isSet;
}

bool OAIUserstaged_ListElement::is_s_userstaged_externalid_Valid() const{
    return m_s_userstaged_externalid_isValid;
}

bool OAIUserstaged_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_userstaged_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userstaged_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userstaged_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_userstaged_externalid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUserstaged_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_userstaged_id_isValid && m_s_email_address_isValid && m_s_userstaged_firstname_isValid && m_s_userstaged_lastname_isValid && m_s_userstaged_externalid_isValid && true;
}

} // namespace OpenAPI
