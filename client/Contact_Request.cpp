/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Contact_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Contact_Request::Contact_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Contact_Request::Contact_Request() {
    this->initializeModel();
}

Contact_Request::~Contact_Request() {}

void Contact_Request::initializeModel() {

    m_fki_contacttitle_id_isSet = false;
    m_fki_contacttitle_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_s_contact_company_isSet = false;
    m_s_contact_company_isValid = false;

    m_dt_contact_birthdate_isSet = false;
    m_dt_contact_birthdate_isValid = false;
}

void Contact_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Contact_Request::fromJsonObject(QJsonObject json) {

    m_fki_contacttitle_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_contacttitle_id, json[QString("fkiContacttitleID")]);
    m_fki_contacttitle_id_isSet = !json[QString("fkiContacttitleID")].isNull() && m_fki_contacttitle_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_contact_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_s_contact_company_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_company, json[QString("sContactCompany")]);
    m_s_contact_company_isSet = !json[QString("sContactCompany")].isNull() && m_s_contact_company_isValid;

    m_dt_contact_birthdate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_contact_birthdate, json[QString("dtContactBirthdate")]);
    m_dt_contact_birthdate_isSet = !json[QString("dtContactBirthdate")].isNull() && m_dt_contact_birthdate_isValid;
}

QString Contact_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Contact_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_contacttitle_id_isSet) {
        obj.insert(QString("fkiContacttitleID"), ::Ezmaxapi::toJsonValue(m_fki_contacttitle_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::Ezmaxapi::toJsonValue(m_s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::Ezmaxapi::toJsonValue(m_s_contact_lastname));
    }
    if (m_s_contact_company_isSet) {
        obj.insert(QString("sContactCompany"), ::Ezmaxapi::toJsonValue(m_s_contact_company));
    }
    if (m_dt_contact_birthdate_isSet) {
        obj.insert(QString("dtContactBirthdate"), ::Ezmaxapi::toJsonValue(m_dt_contact_birthdate));
    }
    return obj;
}

qint32 Contact_Request::getFkiContacttitleId() const {
    return m_fki_contacttitle_id;
}
void Contact_Request::setFkiContacttitleId(const qint32 &fki_contacttitle_id) {
    m_fki_contacttitle_id = fki_contacttitle_id;
    m_fki_contacttitle_id_isSet = true;
}

bool Contact_Request::is_fki_contacttitle_id_Set() const{
    return m_fki_contacttitle_id_isSet;
}

bool Contact_Request::is_fki_contacttitle_id_Valid() const{
    return m_fki_contacttitle_id_isValid;
}

qint32 Contact_Request::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Contact_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Contact_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Contact_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString Contact_Request::getSContactFirstname() const {
    return m_s_contact_firstname;
}
void Contact_Request::setSContactFirstname(const QString &s_contact_firstname) {
    m_s_contact_firstname = s_contact_firstname;
    m_s_contact_firstname_isSet = true;
}

bool Contact_Request::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool Contact_Request::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString Contact_Request::getSContactLastname() const {
    return m_s_contact_lastname;
}
void Contact_Request::setSContactLastname(const QString &s_contact_lastname) {
    m_s_contact_lastname = s_contact_lastname;
    m_s_contact_lastname_isSet = true;
}

bool Contact_Request::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool Contact_Request::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

QString Contact_Request::getSContactCompany() const {
    return m_s_contact_company;
}
void Contact_Request::setSContactCompany(const QString &s_contact_company) {
    m_s_contact_company = s_contact_company;
    m_s_contact_company_isSet = true;
}

bool Contact_Request::is_s_contact_company_Set() const{
    return m_s_contact_company_isSet;
}

bool Contact_Request::is_s_contact_company_Valid() const{
    return m_s_contact_company_isValid;
}

QString Contact_Request::getDtContactBirthdate() const {
    return m_dt_contact_birthdate;
}
void Contact_Request::setDtContactBirthdate(const QString &dt_contact_birthdate) {
    m_dt_contact_birthdate = dt_contact_birthdate;
    m_dt_contact_birthdate_isSet = true;
}

bool Contact_Request::is_dt_contact_birthdate_Set() const{
    return m_dt_contact_birthdate_isSet;
}

bool Contact_Request::is_dt_contact_birthdate_Valid() const{
    return m_dt_contact_birthdate_isValid;
}

bool Contact_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_contacttitle_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_company_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_contact_birthdate_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Contact_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_contacttitle_id_isValid && m_fki_language_id_isValid && m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && m_s_contact_company_isValid && true;
}

} // namespace Ezmaxapi
