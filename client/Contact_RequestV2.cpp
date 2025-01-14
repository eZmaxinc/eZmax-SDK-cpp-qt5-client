/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Contact_RequestV2.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Contact_RequestV2::Contact_RequestV2(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Contact_RequestV2::Contact_RequestV2() {
    this->initializeModel();
}

Contact_RequestV2::~Contact_RequestV2() {}

void Contact_RequestV2::initializeModel() {

    m_fki_contacttitle_id_isSet = false;
    m_fki_contacttitle_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_e_contact_type_isSet = false;
    m_e_contact_type_isValid = false;

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;

    m_s_contact_company_isSet = false;
    m_s_contact_company_isValid = false;

    m_dt_contact_birthdate_isSet = false;
    m_dt_contact_birthdate_isValid = false;

    m_s_contact_occupation_isSet = false;
    m_s_contact_occupation_isValid = false;

    m_t_contact_note_isSet = false;
    m_t_contact_note_isValid = false;

    m_b_contact_isactive_isSet = false;
    m_b_contact_isactive_isValid = false;

    m_obj_contactinformations_isSet = false;
    m_obj_contactinformations_isValid = false;
}

void Contact_RequestV2::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Contact_RequestV2::fromJsonObject(QJsonObject json) {

    m_fki_contacttitle_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_contacttitle_id, json[QString("fkiContacttitleID")]);
    m_fki_contacttitle_id_isSet = !json[QString("fkiContacttitleID")].isNull() && m_fki_contacttitle_id_isValid;

    m_fki_language_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_e_contact_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_contact_type, json[QString("eContactType")]);
    m_e_contact_type_isSet = !json[QString("eContactType")].isNull() && m_e_contact_type_isValid;

    m_s_contact_firstname_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;

    m_s_contact_company_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_company, json[QString("sContactCompany")]);
    m_s_contact_company_isSet = !json[QString("sContactCompany")].isNull() && m_s_contact_company_isValid;

    m_dt_contact_birthdate_isValid = ::Ezmaxapi::fromJsonValue(m_dt_contact_birthdate, json[QString("dtContactBirthdate")]);
    m_dt_contact_birthdate_isSet = !json[QString("dtContactBirthdate")].isNull() && m_dt_contact_birthdate_isValid;

    m_s_contact_occupation_isValid = ::Ezmaxapi::fromJsonValue(m_s_contact_occupation, json[QString("sContactOccupation")]);
    m_s_contact_occupation_isSet = !json[QString("sContactOccupation")].isNull() && m_s_contact_occupation_isValid;

    m_t_contact_note_isValid = ::Ezmaxapi::fromJsonValue(m_t_contact_note, json[QString("tContactNote")]);
    m_t_contact_note_isSet = !json[QString("tContactNote")].isNull() && m_t_contact_note_isValid;

    m_b_contact_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_contact_isactive, json[QString("bContactIsactive")]);
    m_b_contact_isactive_isSet = !json[QString("bContactIsactive")].isNull() && m_b_contact_isactive_isValid;

    m_obj_contactinformations_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contactinformations, json[QString("objContactinformations")]);
    m_obj_contactinformations_isSet = !json[QString("objContactinformations")].isNull() && m_obj_contactinformations_isValid;
}

QString Contact_RequestV2::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Contact_RequestV2::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_contacttitle_id_isSet) {
        obj.insert(QString("fkiContacttitleID"), ::Ezmaxapi::toJsonValue(m_fki_contacttitle_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::Ezmaxapi::toJsonValue(m_fki_language_id));
    }
    if (m_e_contact_type.isSet()) {
        obj.insert(QString("eContactType"), ::Ezmaxapi::toJsonValue(m_e_contact_type));
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
    if (m_s_contact_occupation_isSet) {
        obj.insert(QString("sContactOccupation"), ::Ezmaxapi::toJsonValue(m_s_contact_occupation));
    }
    if (m_t_contact_note_isSet) {
        obj.insert(QString("tContactNote"), ::Ezmaxapi::toJsonValue(m_t_contact_note));
    }
    if (m_b_contact_isactive_isSet) {
        obj.insert(QString("bContactIsactive"), ::Ezmaxapi::toJsonValue(m_b_contact_isactive));
    }
    if (m_obj_contactinformations.isSet()) {
        obj.insert(QString("objContactinformations"), ::Ezmaxapi::toJsonValue(m_obj_contactinformations));
    }
    return obj;
}

qint32 Contact_RequestV2::getFkiContacttitleId() const {
    return m_fki_contacttitle_id;
}
void Contact_RequestV2::setFkiContacttitleId(const qint32 &fki_contacttitle_id) {
    m_fki_contacttitle_id = fki_contacttitle_id;
    m_fki_contacttitle_id_isSet = true;
}

bool Contact_RequestV2::is_fki_contacttitle_id_Set() const{
    return m_fki_contacttitle_id_isSet;
}

bool Contact_RequestV2::is_fki_contacttitle_id_Valid() const{
    return m_fki_contacttitle_id_isValid;
}

qint32 Contact_RequestV2::getFkiLanguageId() const {
    return m_fki_language_id;
}
void Contact_RequestV2::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool Contact_RequestV2::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool Contact_RequestV2::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

Field_eContactType Contact_RequestV2::getEContactType() const {
    return m_e_contact_type;
}
void Contact_RequestV2::setEContactType(const Field_eContactType &e_contact_type) {
    m_e_contact_type = e_contact_type;
    m_e_contact_type_isSet = true;
}

bool Contact_RequestV2::is_e_contact_type_Set() const{
    return m_e_contact_type_isSet;
}

bool Contact_RequestV2::is_e_contact_type_Valid() const{
    return m_e_contact_type_isValid;
}

QString Contact_RequestV2::getSContactFirstname() const {
    return m_s_contact_firstname;
}
void Contact_RequestV2::setSContactFirstname(const QString &s_contact_firstname) {
    m_s_contact_firstname = s_contact_firstname;
    m_s_contact_firstname_isSet = true;
}

bool Contact_RequestV2::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool Contact_RequestV2::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString Contact_RequestV2::getSContactLastname() const {
    return m_s_contact_lastname;
}
void Contact_RequestV2::setSContactLastname(const QString &s_contact_lastname) {
    m_s_contact_lastname = s_contact_lastname;
    m_s_contact_lastname_isSet = true;
}

bool Contact_RequestV2::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool Contact_RequestV2::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

QString Contact_RequestV2::getSContactCompany() const {
    return m_s_contact_company;
}
void Contact_RequestV2::setSContactCompany(const QString &s_contact_company) {
    m_s_contact_company = s_contact_company;
    m_s_contact_company_isSet = true;
}

bool Contact_RequestV2::is_s_contact_company_Set() const{
    return m_s_contact_company_isSet;
}

bool Contact_RequestV2::is_s_contact_company_Valid() const{
    return m_s_contact_company_isValid;
}

QString Contact_RequestV2::getDtContactBirthdate() const {
    return m_dt_contact_birthdate;
}
void Contact_RequestV2::setDtContactBirthdate(const QString &dt_contact_birthdate) {
    m_dt_contact_birthdate = dt_contact_birthdate;
    m_dt_contact_birthdate_isSet = true;
}

bool Contact_RequestV2::is_dt_contact_birthdate_Set() const{
    return m_dt_contact_birthdate_isSet;
}

bool Contact_RequestV2::is_dt_contact_birthdate_Valid() const{
    return m_dt_contact_birthdate_isValid;
}

QString Contact_RequestV2::getSContactOccupation() const {
    return m_s_contact_occupation;
}
void Contact_RequestV2::setSContactOccupation(const QString &s_contact_occupation) {
    m_s_contact_occupation = s_contact_occupation;
    m_s_contact_occupation_isSet = true;
}

bool Contact_RequestV2::is_s_contact_occupation_Set() const{
    return m_s_contact_occupation_isSet;
}

bool Contact_RequestV2::is_s_contact_occupation_Valid() const{
    return m_s_contact_occupation_isValid;
}

QString Contact_RequestV2::getTContactNote() const {
    return m_t_contact_note;
}
void Contact_RequestV2::setTContactNote(const QString &t_contact_note) {
    m_t_contact_note = t_contact_note;
    m_t_contact_note_isSet = true;
}

bool Contact_RequestV2::is_t_contact_note_Set() const{
    return m_t_contact_note_isSet;
}

bool Contact_RequestV2::is_t_contact_note_Valid() const{
    return m_t_contact_note_isValid;
}

bool Contact_RequestV2::isBContactIsactive() const {
    return m_b_contact_isactive;
}
void Contact_RequestV2::setBContactIsactive(const bool &b_contact_isactive) {
    m_b_contact_isactive = b_contact_isactive;
    m_b_contact_isactive_isSet = true;
}

bool Contact_RequestV2::is_b_contact_isactive_Set() const{
    return m_b_contact_isactive_isSet;
}

bool Contact_RequestV2::is_b_contact_isactive_Valid() const{
    return m_b_contact_isactive_isValid;
}

Contactinformations_RequestCompound Contact_RequestV2::getObjContactinformations() const {
    return m_obj_contactinformations;
}
void Contact_RequestV2::setObjContactinformations(const Contactinformations_RequestCompound &obj_contactinformations) {
    m_obj_contactinformations = obj_contactinformations;
    m_obj_contactinformations_isSet = true;
}

bool Contact_RequestV2::is_obj_contactinformations_Set() const{
    return m_obj_contactinformations_isSet;
}

bool Contact_RequestV2::is_obj_contactinformations_Valid() const{
    return m_obj_contactinformations_isValid;
}

bool Contact_RequestV2::isSet() const {
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

        if (m_e_contact_type.isSet()) {
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

        if (m_s_contact_occupation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_contact_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_contact_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_contactinformations.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Contact_RequestV2::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_contacttitle_id_isValid && m_fki_language_id_isValid && m_e_contact_type_isValid && m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && m_obj_contactinformations_isValid && true;
}

} // namespace Ezmaxapi
