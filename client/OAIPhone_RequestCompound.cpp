/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIPhone_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPhone_RequestCompound::OAIPhone_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPhone_RequestCompound::OAIPhone_RequestCompound() {
    this->initializeModel();
}

OAIPhone_RequestCompound::~OAIPhone_RequestCompound() {}

void OAIPhone_RequestCompound::initializeModel() {

    m_fki_phonetype_id_isSet = false;
    m_fki_phonetype_id_isValid = false;

    m_e_phone_type_isSet = false;
    m_e_phone_type_isValid = false;

    m_s_phone_region_isSet = false;
    m_s_phone_region_isValid = false;

    m_s_phone_exchange_isSet = false;
    m_s_phone_exchange_isValid = false;

    m_s_phone_number_isSet = false;
    m_s_phone_number_isValid = false;

    m_s_phone_international_isSet = false;
    m_s_phone_international_isValid = false;

    m_s_phone_extension_isSet = false;
    m_s_phone_extension_isValid = false;
}

void OAIPhone_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPhone_RequestCompound::fromJsonObject(QJsonObject json) {

    m_fki_phonetype_id_isValid = ::OpenAPI::fromJsonValue(fki_phonetype_id, json[QString("fkiPhonetypeID")]);
    m_fki_phonetype_id_isSet = !json[QString("fkiPhonetypeID")].isNull() && m_fki_phonetype_id_isValid;

    m_e_phone_type_isValid = ::OpenAPI::fromJsonValue(e_phone_type, json[QString("ePhoneType")]);
    m_e_phone_type_isSet = !json[QString("ePhoneType")].isNull() && m_e_phone_type_isValid;

    m_s_phone_region_isValid = ::OpenAPI::fromJsonValue(s_phone_region, json[QString("sPhoneRegion")]);
    m_s_phone_region_isSet = !json[QString("sPhoneRegion")].isNull() && m_s_phone_region_isValid;

    m_s_phone_exchange_isValid = ::OpenAPI::fromJsonValue(s_phone_exchange, json[QString("sPhoneExchange")]);
    m_s_phone_exchange_isSet = !json[QString("sPhoneExchange")].isNull() && m_s_phone_exchange_isValid;

    m_s_phone_number_isValid = ::OpenAPI::fromJsonValue(s_phone_number, json[QString("sPhoneNumber")]);
    m_s_phone_number_isSet = !json[QString("sPhoneNumber")].isNull() && m_s_phone_number_isValid;

    m_s_phone_international_isValid = ::OpenAPI::fromJsonValue(s_phone_international, json[QString("sPhoneInternational")]);
    m_s_phone_international_isSet = !json[QString("sPhoneInternational")].isNull() && m_s_phone_international_isValid;

    m_s_phone_extension_isValid = ::OpenAPI::fromJsonValue(s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;
}

QString OAIPhone_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPhone_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_phonetype_id_isSet) {
        obj.insert(QString("fkiPhonetypeID"), ::OpenAPI::toJsonValue(fki_phonetype_id));
    }
    if (e_phone_type.isSet()) {
        obj.insert(QString("ePhoneType"), ::OpenAPI::toJsonValue(e_phone_type));
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
    if (m_s_phone_international_isSet) {
        obj.insert(QString("sPhoneInternational"), ::OpenAPI::toJsonValue(s_phone_international));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::OpenAPI::toJsonValue(s_phone_extension));
    }
    return obj;
}

qint32 OAIPhone_RequestCompound::getFkiPhonetypeId() const {
    return fki_phonetype_id;
}
void OAIPhone_RequestCompound::setFkiPhonetypeId(const qint32 &fki_phonetype_id) {
    this->fki_phonetype_id = fki_phonetype_id;
    this->m_fki_phonetype_id_isSet = true;
}

bool OAIPhone_RequestCompound::is_fki_phonetype_id_Set() const{
    return m_fki_phonetype_id_isSet;
}

bool OAIPhone_RequestCompound::is_fki_phonetype_id_Valid() const{
    return m_fki_phonetype_id_isValid;
}

OAIField_ePhoneType OAIPhone_RequestCompound::getEPhoneType() const {
    return e_phone_type;
}
void OAIPhone_RequestCompound::setEPhoneType(const OAIField_ePhoneType &e_phone_type) {
    this->e_phone_type = e_phone_type;
    this->m_e_phone_type_isSet = true;
}

bool OAIPhone_RequestCompound::is_e_phone_type_Set() const{
    return m_e_phone_type_isSet;
}

bool OAIPhone_RequestCompound::is_e_phone_type_Valid() const{
    return m_e_phone_type_isValid;
}

QString OAIPhone_RequestCompound::getSPhoneRegion() const {
    return s_phone_region;
}
void OAIPhone_RequestCompound::setSPhoneRegion(const QString &s_phone_region) {
    this->s_phone_region = s_phone_region;
    this->m_s_phone_region_isSet = true;
}

bool OAIPhone_RequestCompound::is_s_phone_region_Set() const{
    return m_s_phone_region_isSet;
}

bool OAIPhone_RequestCompound::is_s_phone_region_Valid() const{
    return m_s_phone_region_isValid;
}

QString OAIPhone_RequestCompound::getSPhoneExchange() const {
    return s_phone_exchange;
}
void OAIPhone_RequestCompound::setSPhoneExchange(const QString &s_phone_exchange) {
    this->s_phone_exchange = s_phone_exchange;
    this->m_s_phone_exchange_isSet = true;
}

bool OAIPhone_RequestCompound::is_s_phone_exchange_Set() const{
    return m_s_phone_exchange_isSet;
}

bool OAIPhone_RequestCompound::is_s_phone_exchange_Valid() const{
    return m_s_phone_exchange_isValid;
}

QString OAIPhone_RequestCompound::getSPhoneNumber() const {
    return s_phone_number;
}
void OAIPhone_RequestCompound::setSPhoneNumber(const QString &s_phone_number) {
    this->s_phone_number = s_phone_number;
    this->m_s_phone_number_isSet = true;
}

bool OAIPhone_RequestCompound::is_s_phone_number_Set() const{
    return m_s_phone_number_isSet;
}

bool OAIPhone_RequestCompound::is_s_phone_number_Valid() const{
    return m_s_phone_number_isValid;
}

QString OAIPhone_RequestCompound::getSPhoneInternational() const {
    return s_phone_international;
}
void OAIPhone_RequestCompound::setSPhoneInternational(const QString &s_phone_international) {
    this->s_phone_international = s_phone_international;
    this->m_s_phone_international_isSet = true;
}

bool OAIPhone_RequestCompound::is_s_phone_international_Set() const{
    return m_s_phone_international_isSet;
}

bool OAIPhone_RequestCompound::is_s_phone_international_Valid() const{
    return m_s_phone_international_isValid;
}

QString OAIPhone_RequestCompound::getSPhoneExtension() const {
    return s_phone_extension;
}
void OAIPhone_RequestCompound::setSPhoneExtension(const QString &s_phone_extension) {
    this->s_phone_extension = s_phone_extension;
    this->m_s_phone_extension_isSet = true;
}

bool OAIPhone_RequestCompound::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool OAIPhone_RequestCompound::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

bool OAIPhone_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_phonetype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_phone_type.isSet()) {
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

        if (m_s_phone_international_isSet) {
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

bool OAIPhone_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_phonetype_id_isValid && m_e_phone_type_isValid && true;
}

} // namespace OpenAPI
