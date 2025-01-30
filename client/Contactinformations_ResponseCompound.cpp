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

#include "Contactinformations_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Contactinformations_ResponseCompound::Contactinformations_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Contactinformations_ResponseCompound::Contactinformations_ResponseCompound() {
    this->initializeModel();
}

Contactinformations_ResponseCompound::~Contactinformations_ResponseCompound() {}

void Contactinformations_ResponseCompound::initializeModel() {

    m_pki_contactinformations_id_isSet = false;
    m_pki_contactinformations_id_isValid = false;

    m_fki_address_id_default_isSet = false;
    m_fki_address_id_default_isValid = false;

    m_fki_phone_id_default_isSet = false;
    m_fki_phone_id_default_isValid = false;

    m_fki_email_id_default_isSet = false;
    m_fki_email_id_default_isValid = false;

    m_fki_website_id_default_isSet = false;
    m_fki_website_id_default_isValid = false;

    m_e_contactinformations_type_isSet = false;
    m_e_contactinformations_type_isValid = false;

    m_s_contactinformations_url_isSet = false;
    m_s_contactinformations_url_isValid = false;

    m_obj_address_default_isSet = false;
    m_obj_address_default_isValid = false;

    m_obj_phone_default_isSet = false;
    m_obj_phone_default_isValid = false;

    m_obj_email_default_isSet = false;
    m_obj_email_default_isValid = false;

    m_obj_website_default_isSet = false;
    m_obj_website_default_isValid = false;

    m_a_obj_address_isSet = false;
    m_a_obj_address_isValid = false;

    m_a_obj_phone_isSet = false;
    m_a_obj_phone_isValid = false;

    m_a_obj_email_isSet = false;
    m_a_obj_email_isValid = false;

    m_a_obj_website_isSet = false;
    m_a_obj_website_isValid = false;
}

void Contactinformations_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Contactinformations_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_contactinformations_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_contactinformations_id, json[QString("pkiContactinformationsID")]);
    m_pki_contactinformations_id_isSet = !json[QString("pkiContactinformationsID")].isNull() && m_pki_contactinformations_id_isValid;

    m_fki_address_id_default_isValid = ::Ezmaxapi::fromJsonValue(m_fki_address_id_default, json[QString("fkiAddressIDDefault")]);
    m_fki_address_id_default_isSet = !json[QString("fkiAddressIDDefault")].isNull() && m_fki_address_id_default_isValid;

    m_fki_phone_id_default_isValid = ::Ezmaxapi::fromJsonValue(m_fki_phone_id_default, json[QString("fkiPhoneIDDefault")]);
    m_fki_phone_id_default_isSet = !json[QString("fkiPhoneIDDefault")].isNull() && m_fki_phone_id_default_isValid;

    m_fki_email_id_default_isValid = ::Ezmaxapi::fromJsonValue(m_fki_email_id_default, json[QString("fkiEmailIDDefault")]);
    m_fki_email_id_default_isSet = !json[QString("fkiEmailIDDefault")].isNull() && m_fki_email_id_default_isValid;

    m_fki_website_id_default_isValid = ::Ezmaxapi::fromJsonValue(m_fki_website_id_default, json[QString("fkiWebsiteIDDefault")]);
    m_fki_website_id_default_isSet = !json[QString("fkiWebsiteIDDefault")].isNull() && m_fki_website_id_default_isValid;

    m_e_contactinformations_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_contactinformations_type, json[QString("eContactinformationsType")]);
    m_e_contactinformations_type_isSet = !json[QString("eContactinformationsType")].isNull() && m_e_contactinformations_type_isValid;

    m_s_contactinformations_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_contactinformations_url, json[QString("sContactinformationsUrl")]);
    m_s_contactinformations_url_isSet = !json[QString("sContactinformationsUrl")].isNull() && m_s_contactinformations_url_isValid;

    m_obj_address_default_isValid = ::Ezmaxapi::fromJsonValue(m_obj_address_default, json[QString("objAddressDefault")]);
    m_obj_address_default_isSet = !json[QString("objAddressDefault")].isNull() && m_obj_address_default_isValid;

    m_obj_phone_default_isValid = ::Ezmaxapi::fromJsonValue(m_obj_phone_default, json[QString("objPhoneDefault")]);
    m_obj_phone_default_isSet = !json[QString("objPhoneDefault")].isNull() && m_obj_phone_default_isValid;

    m_obj_email_default_isValid = ::Ezmaxapi::fromJsonValue(m_obj_email_default, json[QString("objEmailDefault")]);
    m_obj_email_default_isSet = !json[QString("objEmailDefault")].isNull() && m_obj_email_default_isValid;

    m_obj_website_default_isValid = ::Ezmaxapi::fromJsonValue(m_obj_website_default, json[QString("objWebsiteDefault")]);
    m_obj_website_default_isSet = !json[QString("objWebsiteDefault")].isNull() && m_obj_website_default_isValid;

    m_a_obj_address_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_address, json[QString("a_objAddress")]);
    m_a_obj_address_isSet = !json[QString("a_objAddress")].isNull() && m_a_obj_address_isValid;

    m_a_obj_phone_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_phone, json[QString("a_objPhone")]);
    m_a_obj_phone_isSet = !json[QString("a_objPhone")].isNull() && m_a_obj_phone_isValid;

    m_a_obj_email_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_email, json[QString("a_objEmail")]);
    m_a_obj_email_isSet = !json[QString("a_objEmail")].isNull() && m_a_obj_email_isValid;

    m_a_obj_website_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_website, json[QString("a_objWebsite")]);
    m_a_obj_website_isSet = !json[QString("a_objWebsite")].isNull() && m_a_obj_website_isValid;
}

QString Contactinformations_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Contactinformations_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_contactinformations_id_isSet) {
        obj.insert(QString("pkiContactinformationsID"), ::Ezmaxapi::toJsonValue(m_pki_contactinformations_id));
    }
    if (m_fki_address_id_default_isSet) {
        obj.insert(QString("fkiAddressIDDefault"), ::Ezmaxapi::toJsonValue(m_fki_address_id_default));
    }
    if (m_fki_phone_id_default_isSet) {
        obj.insert(QString("fkiPhoneIDDefault"), ::Ezmaxapi::toJsonValue(m_fki_phone_id_default));
    }
    if (m_fki_email_id_default_isSet) {
        obj.insert(QString("fkiEmailIDDefault"), ::Ezmaxapi::toJsonValue(m_fki_email_id_default));
    }
    if (m_fki_website_id_default_isSet) {
        obj.insert(QString("fkiWebsiteIDDefault"), ::Ezmaxapi::toJsonValue(m_fki_website_id_default));
    }
    if (m_e_contactinformations_type.isSet()) {
        obj.insert(QString("eContactinformationsType"), ::Ezmaxapi::toJsonValue(m_e_contactinformations_type));
    }
    if (m_s_contactinformations_url_isSet) {
        obj.insert(QString("sContactinformationsUrl"), ::Ezmaxapi::toJsonValue(m_s_contactinformations_url));
    }
    if (m_obj_address_default.isSet()) {
        obj.insert(QString("objAddressDefault"), ::Ezmaxapi::toJsonValue(m_obj_address_default));
    }
    if (m_obj_phone_default.isSet()) {
        obj.insert(QString("objPhoneDefault"), ::Ezmaxapi::toJsonValue(m_obj_phone_default));
    }
    if (m_obj_email_default.isSet()) {
        obj.insert(QString("objEmailDefault"), ::Ezmaxapi::toJsonValue(m_obj_email_default));
    }
    if (m_obj_website_default.isSet()) {
        obj.insert(QString("objWebsiteDefault"), ::Ezmaxapi::toJsonValue(m_obj_website_default));
    }
    if (m_a_obj_address.size() > 0) {
        obj.insert(QString("a_objAddress"), ::Ezmaxapi::toJsonValue(m_a_obj_address));
    }
    if (m_a_obj_phone.size() > 0) {
        obj.insert(QString("a_objPhone"), ::Ezmaxapi::toJsonValue(m_a_obj_phone));
    }
    if (m_a_obj_email.size() > 0) {
        obj.insert(QString("a_objEmail"), ::Ezmaxapi::toJsonValue(m_a_obj_email));
    }
    if (m_a_obj_website.size() > 0) {
        obj.insert(QString("a_objWebsite"), ::Ezmaxapi::toJsonValue(m_a_obj_website));
    }
    return obj;
}

qint32 Contactinformations_ResponseCompound::getPkiContactinformationsId() const {
    return m_pki_contactinformations_id;
}
void Contactinformations_ResponseCompound::setPkiContactinformationsId(const qint32 &pki_contactinformations_id) {
    m_pki_contactinformations_id = pki_contactinformations_id;
    m_pki_contactinformations_id_isSet = true;
}

bool Contactinformations_ResponseCompound::is_pki_contactinformations_id_Set() const{
    return m_pki_contactinformations_id_isSet;
}

bool Contactinformations_ResponseCompound::is_pki_contactinformations_id_Valid() const{
    return m_pki_contactinformations_id_isValid;
}

qint32 Contactinformations_ResponseCompound::getFkiAddressIdDefault() const {
    return m_fki_address_id_default;
}
void Contactinformations_ResponseCompound::setFkiAddressIdDefault(const qint32 &fki_address_id_default) {
    m_fki_address_id_default = fki_address_id_default;
    m_fki_address_id_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_fki_address_id_default_Set() const{
    return m_fki_address_id_default_isSet;
}

bool Contactinformations_ResponseCompound::is_fki_address_id_default_Valid() const{
    return m_fki_address_id_default_isValid;
}

qint32 Contactinformations_ResponseCompound::getFkiPhoneIdDefault() const {
    return m_fki_phone_id_default;
}
void Contactinformations_ResponseCompound::setFkiPhoneIdDefault(const qint32 &fki_phone_id_default) {
    m_fki_phone_id_default = fki_phone_id_default;
    m_fki_phone_id_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_fki_phone_id_default_Set() const{
    return m_fki_phone_id_default_isSet;
}

bool Contactinformations_ResponseCompound::is_fki_phone_id_default_Valid() const{
    return m_fki_phone_id_default_isValid;
}

qint32 Contactinformations_ResponseCompound::getFkiEmailIdDefault() const {
    return m_fki_email_id_default;
}
void Contactinformations_ResponseCompound::setFkiEmailIdDefault(const qint32 &fki_email_id_default) {
    m_fki_email_id_default = fki_email_id_default;
    m_fki_email_id_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_fki_email_id_default_Set() const{
    return m_fki_email_id_default_isSet;
}

bool Contactinformations_ResponseCompound::is_fki_email_id_default_Valid() const{
    return m_fki_email_id_default_isValid;
}

qint32 Contactinformations_ResponseCompound::getFkiWebsiteIdDefault() const {
    return m_fki_website_id_default;
}
void Contactinformations_ResponseCompound::setFkiWebsiteIdDefault(const qint32 &fki_website_id_default) {
    m_fki_website_id_default = fki_website_id_default;
    m_fki_website_id_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_fki_website_id_default_Set() const{
    return m_fki_website_id_default_isSet;
}

bool Contactinformations_ResponseCompound::is_fki_website_id_default_Valid() const{
    return m_fki_website_id_default_isValid;
}

Field_eContactinformationsType Contactinformations_ResponseCompound::getEContactinformationsType() const {
    return m_e_contactinformations_type;
}
void Contactinformations_ResponseCompound::setEContactinformationsType(const Field_eContactinformationsType &e_contactinformations_type) {
    m_e_contactinformations_type = e_contactinformations_type;
    m_e_contactinformations_type_isSet = true;
}

bool Contactinformations_ResponseCompound::is_e_contactinformations_type_Set() const{
    return m_e_contactinformations_type_isSet;
}

bool Contactinformations_ResponseCompound::is_e_contactinformations_type_Valid() const{
    return m_e_contactinformations_type_isValid;
}

QString Contactinformations_ResponseCompound::getSContactinformationsUrl() const {
    return m_s_contactinformations_url;
}
void Contactinformations_ResponseCompound::setSContactinformationsUrl(const QString &s_contactinformations_url) {
    m_s_contactinformations_url = s_contactinformations_url;
    m_s_contactinformations_url_isSet = true;
}

bool Contactinformations_ResponseCompound::is_s_contactinformations_url_Set() const{
    return m_s_contactinformations_url_isSet;
}

bool Contactinformations_ResponseCompound::is_s_contactinformations_url_Valid() const{
    return m_s_contactinformations_url_isValid;
}

Address_ResponseCompound Contactinformations_ResponseCompound::getObjAddressDefault() const {
    return m_obj_address_default;
}
void Contactinformations_ResponseCompound::setObjAddressDefault(const Address_ResponseCompound &obj_address_default) {
    m_obj_address_default = obj_address_default;
    m_obj_address_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_obj_address_default_Set() const{
    return m_obj_address_default_isSet;
}

bool Contactinformations_ResponseCompound::is_obj_address_default_Valid() const{
    return m_obj_address_default_isValid;
}

Phone_ResponseCompound Contactinformations_ResponseCompound::getObjPhoneDefault() const {
    return m_obj_phone_default;
}
void Contactinformations_ResponseCompound::setObjPhoneDefault(const Phone_ResponseCompound &obj_phone_default) {
    m_obj_phone_default = obj_phone_default;
    m_obj_phone_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_obj_phone_default_Set() const{
    return m_obj_phone_default_isSet;
}

bool Contactinformations_ResponseCompound::is_obj_phone_default_Valid() const{
    return m_obj_phone_default_isValid;
}

Email_ResponseCompound Contactinformations_ResponseCompound::getObjEmailDefault() const {
    return m_obj_email_default;
}
void Contactinformations_ResponseCompound::setObjEmailDefault(const Email_ResponseCompound &obj_email_default) {
    m_obj_email_default = obj_email_default;
    m_obj_email_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_obj_email_default_Set() const{
    return m_obj_email_default_isSet;
}

bool Contactinformations_ResponseCompound::is_obj_email_default_Valid() const{
    return m_obj_email_default_isValid;
}

Website_ResponseCompound Contactinformations_ResponseCompound::getObjWebsiteDefault() const {
    return m_obj_website_default;
}
void Contactinformations_ResponseCompound::setObjWebsiteDefault(const Website_ResponseCompound &obj_website_default) {
    m_obj_website_default = obj_website_default;
    m_obj_website_default_isSet = true;
}

bool Contactinformations_ResponseCompound::is_obj_website_default_Set() const{
    return m_obj_website_default_isSet;
}

bool Contactinformations_ResponseCompound::is_obj_website_default_Valid() const{
    return m_obj_website_default_isValid;
}

QList<Address_ResponseCompound> Contactinformations_ResponseCompound::getAObjAddress() const {
    return m_a_obj_address;
}
void Contactinformations_ResponseCompound::setAObjAddress(const QList<Address_ResponseCompound> &a_obj_address) {
    m_a_obj_address = a_obj_address;
    m_a_obj_address_isSet = true;
}

bool Contactinformations_ResponseCompound::is_a_obj_address_Set() const{
    return m_a_obj_address_isSet;
}

bool Contactinformations_ResponseCompound::is_a_obj_address_Valid() const{
    return m_a_obj_address_isValid;
}

QList<Phone_ResponseCompound> Contactinformations_ResponseCompound::getAObjPhone() const {
    return m_a_obj_phone;
}
void Contactinformations_ResponseCompound::setAObjPhone(const QList<Phone_ResponseCompound> &a_obj_phone) {
    m_a_obj_phone = a_obj_phone;
    m_a_obj_phone_isSet = true;
}

bool Contactinformations_ResponseCompound::is_a_obj_phone_Set() const{
    return m_a_obj_phone_isSet;
}

bool Contactinformations_ResponseCompound::is_a_obj_phone_Valid() const{
    return m_a_obj_phone_isValid;
}

QList<Email_ResponseCompound> Contactinformations_ResponseCompound::getAObjEmail() const {
    return m_a_obj_email;
}
void Contactinformations_ResponseCompound::setAObjEmail(const QList<Email_ResponseCompound> &a_obj_email) {
    m_a_obj_email = a_obj_email;
    m_a_obj_email_isSet = true;
}

bool Contactinformations_ResponseCompound::is_a_obj_email_Set() const{
    return m_a_obj_email_isSet;
}

bool Contactinformations_ResponseCompound::is_a_obj_email_Valid() const{
    return m_a_obj_email_isValid;
}

QList<Website_ResponseCompound> Contactinformations_ResponseCompound::getAObjWebsite() const {
    return m_a_obj_website;
}
void Contactinformations_ResponseCompound::setAObjWebsite(const QList<Website_ResponseCompound> &a_obj_website) {
    m_a_obj_website = a_obj_website;
    m_a_obj_website_isSet = true;
}

bool Contactinformations_ResponseCompound::is_a_obj_website_Set() const{
    return m_a_obj_website_isSet;
}

bool Contactinformations_ResponseCompound::is_a_obj_website_Valid() const{
    return m_a_obj_website_isValid;
}

bool Contactinformations_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_contactinformations_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_address_id_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_phone_id_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_email_id_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_website_id_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_contactinformations_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contactinformations_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_address_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_phone_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_email_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_website_default.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_address.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_phone.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_email.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_website.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Contactinformations_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_contactinformations_id_isValid && m_e_contactinformations_type_isValid && m_a_obj_address_isValid && m_a_obj_phone_isValid && m_a_obj_email_isValid && m_a_obj_website_isValid && true;
}

} // namespace Ezmaxapi
