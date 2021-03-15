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

#include "OAIEzsignsigner_RequestCompound_Contact.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsigner_RequestCompound_Contact::OAIEzsignsigner_RequestCompound_Contact(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsigner_RequestCompound_Contact::OAIEzsignsigner_RequestCompound_Contact() {
    this->initializeModel();
}

OAIEzsignsigner_RequestCompound_Contact::~OAIEzsignsigner_RequestCompound_Contact() {}

void OAIEzsignsigner_RequestCompound_Contact::initializeModel() {

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_phone_number_isSet = false;
    m_s_phone_number_isValid = false;

    m_s_phone_number_cell_isSet = false;
    m_s_phone_number_cell_isValid = false;
}

void OAIEzsignsigner_RequestCompound_Contact::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsigner_RequestCompound_Contact::fromJsonObject(QJsonObject json) {

    m_s_contact_firstname_isValid = ::OpenAPI::fromJsonValue(s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::OpenAPI::fromJsonValue(s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_phone_number_isValid = ::OpenAPI::fromJsonValue(s_phone_number, json[QString("sPhoneNumber")]);
    m_s_phone_number_isSet = !json[QString("sPhoneNumber")].isNull() && m_s_phone_number_isValid;

    m_s_phone_number_cell_isValid = ::OpenAPI::fromJsonValue(s_phone_number_cell, json[QString("sPhoneNumberCell")]);
    m_s_phone_number_cell_isSet = !json[QString("sPhoneNumberCell")].isNull() && m_s_phone_number_cell_isValid;
}

QString OAIEzsignsigner_RequestCompound_Contact::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsigner_RequestCompound_Contact::asJsonObject() const {
    QJsonObject obj;
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::OpenAPI::toJsonValue(s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::OpenAPI::toJsonValue(s_contact_lastname));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    if (m_s_phone_number_isSet) {
        obj.insert(QString("sPhoneNumber"), ::OpenAPI::toJsonValue(s_phone_number));
    }
    if (m_s_phone_number_cell_isSet) {
        obj.insert(QString("sPhoneNumberCell"), ::OpenAPI::toJsonValue(s_phone_number_cell));
    }
    return obj;
}

QString OAIEzsignsigner_RequestCompound_Contact::getSContactFirstname() const {
    return s_contact_firstname;
}
void OAIEzsignsigner_RequestCompound_Contact::setSContactFirstname(const QString &s_contact_firstname) {
    this->s_contact_firstname = s_contact_firstname;
    this->m_s_contact_firstname_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString OAIEzsignsigner_RequestCompound_Contact::getSContactLastname() const {
    return s_contact_lastname;
}
void OAIEzsignsigner_RequestCompound_Contact::setSContactLastname(const QString &s_contact_lastname) {
    this->s_contact_lastname = s_contact_lastname;
    this->m_s_contact_lastname_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

qint32 OAIEzsignsigner_RequestCompound_Contact::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsignsigner_RequestCompound_Contact::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsignsigner_RequestCompound_Contact::getSEmailAddress() const {
    return s_email_address;
}
void OAIEzsignsigner_RequestCompound_Contact::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString OAIEzsignsigner_RequestCompound_Contact::getSPhoneNumber() const {
    return s_phone_number;
}
void OAIEzsignsigner_RequestCompound_Contact::setSPhoneNumber(const QString &s_phone_number) {
    this->s_phone_number = s_phone_number;
    this->m_s_phone_number_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_phone_number_Set() const{
    return m_s_phone_number_isSet;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_phone_number_Valid() const{
    return m_s_phone_number_isValid;
}

QString OAIEzsignsigner_RequestCompound_Contact::getSPhoneNumberCell() const {
    return s_phone_number_cell;
}
void OAIEzsignsigner_RequestCompound_Contact::setSPhoneNumberCell(const QString &s_phone_number_cell) {
    this->s_phone_number_cell = s_phone_number_cell;
    this->m_s_phone_number_cell_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_phone_number_cell_Set() const{
    return m_s_phone_number_cell_isSet;
}

bool OAIEzsignsigner_RequestCompound_Contact::is_s_phone_number_cell_Valid() const{
    return m_s_phone_number_cell_isValid;
}

bool OAIEzsignsigner_RequestCompound_Contact::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_contact_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_number_cell_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsigner_RequestCompound_Contact::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && m_fki_language_id_isValid && true;
}

} // namespace OpenAPI
