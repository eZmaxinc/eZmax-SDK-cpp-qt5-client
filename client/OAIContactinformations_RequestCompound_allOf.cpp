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

#include "OAIContactinformations_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIContactinformations_RequestCompound_allOf::OAIContactinformations_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContactinformations_RequestCompound_allOf::OAIContactinformations_RequestCompound_allOf() {
    this->initializeModel();
}

OAIContactinformations_RequestCompound_allOf::~OAIContactinformations_RequestCompound_allOf() {}

void OAIContactinformations_RequestCompound_allOf::initializeModel() {

    m_a_obj_address_isSet = false;
    m_a_obj_address_isValid = false;

    m_a_obj_phone_isSet = false;
    m_a_obj_phone_isValid = false;

    m_a_obj_email_isSet = false;
    m_a_obj_email_isValid = false;

    m_a_obj_website_isSet = false;
    m_a_obj_website_isValid = false;
}

void OAIContactinformations_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContactinformations_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_address_isValid = ::OpenAPI::fromJsonValue(a_obj_address, json[QString("a_objAddress")]);
    m_a_obj_address_isSet = !json[QString("a_objAddress")].isNull() && m_a_obj_address_isValid;

    m_a_obj_phone_isValid = ::OpenAPI::fromJsonValue(a_obj_phone, json[QString("a_objPhone")]);
    m_a_obj_phone_isSet = !json[QString("a_objPhone")].isNull() && m_a_obj_phone_isValid;

    m_a_obj_email_isValid = ::OpenAPI::fromJsonValue(a_obj_email, json[QString("a_objEmail")]);
    m_a_obj_email_isSet = !json[QString("a_objEmail")].isNull() && m_a_obj_email_isValid;

    m_a_obj_website_isValid = ::OpenAPI::fromJsonValue(a_obj_website, json[QString("a_objWebsite")]);
    m_a_obj_website_isSet = !json[QString("a_objWebsite")].isNull() && m_a_obj_website_isValid;
}

QString OAIContactinformations_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContactinformations_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_address.size() > 0) {
        obj.insert(QString("a_objAddress"), ::OpenAPI::toJsonValue(a_obj_address));
    }
    if (a_obj_phone.size() > 0) {
        obj.insert(QString("a_objPhone"), ::OpenAPI::toJsonValue(a_obj_phone));
    }
    if (a_obj_email.size() > 0) {
        obj.insert(QString("a_objEmail"), ::OpenAPI::toJsonValue(a_obj_email));
    }
    if (a_obj_website.size() > 0) {
        obj.insert(QString("a_objWebsite"), ::OpenAPI::toJsonValue(a_obj_website));
    }
    return obj;
}

QList<OAIAddress_RequestCompound> OAIContactinformations_RequestCompound_allOf::getAObjAddress() const {
    return a_obj_address;
}
void OAIContactinformations_RequestCompound_allOf::setAObjAddress(const QList<OAIAddress_RequestCompound> &a_obj_address) {
    this->a_obj_address = a_obj_address;
    this->m_a_obj_address_isSet = true;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_address_Set() const{
    return m_a_obj_address_isSet;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_address_Valid() const{
    return m_a_obj_address_isValid;
}

QList<OAIPhone_RequestCompound> OAIContactinformations_RequestCompound_allOf::getAObjPhone() const {
    return a_obj_phone;
}
void OAIContactinformations_RequestCompound_allOf::setAObjPhone(const QList<OAIPhone_RequestCompound> &a_obj_phone) {
    this->a_obj_phone = a_obj_phone;
    this->m_a_obj_phone_isSet = true;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_phone_Set() const{
    return m_a_obj_phone_isSet;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_phone_Valid() const{
    return m_a_obj_phone_isValid;
}

QList<OAIEmail_RequestCompound> OAIContactinformations_RequestCompound_allOf::getAObjEmail() const {
    return a_obj_email;
}
void OAIContactinformations_RequestCompound_allOf::setAObjEmail(const QList<OAIEmail_RequestCompound> &a_obj_email) {
    this->a_obj_email = a_obj_email;
    this->m_a_obj_email_isSet = true;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_email_Set() const{
    return m_a_obj_email_isSet;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_email_Valid() const{
    return m_a_obj_email_isValid;
}

QList<OAIWebsite_RequestCompound> OAIContactinformations_RequestCompound_allOf::getAObjWebsite() const {
    return a_obj_website;
}
void OAIContactinformations_RequestCompound_allOf::setAObjWebsite(const QList<OAIWebsite_RequestCompound> &a_obj_website) {
    this->a_obj_website = a_obj_website;
    this->m_a_obj_website_isSet = true;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_website_Set() const{
    return m_a_obj_website_isSet;
}

bool OAIContactinformations_RequestCompound_allOf::is_a_obj_website_Valid() const{
    return m_a_obj_website_isValid;
}

bool OAIContactinformations_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_address.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_phone.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_email.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_website.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContactinformations_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_address_isValid && m_a_obj_phone_isValid && m_a_obj_email_isValid && m_a_obj_website_isValid && true;
}

} // namespace OpenAPI
