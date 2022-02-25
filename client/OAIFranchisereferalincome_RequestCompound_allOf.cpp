/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFranchisereferalincome_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFranchisereferalincome_RequestCompound_allOf::OAIFranchisereferalincome_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFranchisereferalincome_RequestCompound_allOf::OAIFranchisereferalincome_RequestCompound_allOf() {
    this->initializeModel();
}

OAIFranchisereferalincome_RequestCompound_allOf::~OAIFranchisereferalincome_RequestCompound_allOf() {}

void OAIFranchisereferalincome_RequestCompound_allOf::initializeModel() {

    m_obj_address_isSet = false;
    m_obj_address_isValid = false;

    m_a_obj_contact_isSet = false;
    m_a_obj_contact_isValid = false;
}

void OAIFranchisereferalincome_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFranchisereferalincome_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_address_isValid = ::OpenAPI::fromJsonValue(obj_address, json[QString("objAddress")]);
    m_obj_address_isSet = !json[QString("objAddress")].isNull() && m_obj_address_isValid;

    m_a_obj_contact_isValid = ::OpenAPI::fromJsonValue(a_obj_contact, json[QString("a_objContact")]);
    m_a_obj_contact_isSet = !json[QString("a_objContact")].isNull() && m_a_obj_contact_isValid;
}

QString OAIFranchisereferalincome_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFranchisereferalincome_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_address.isSet()) {
        obj.insert(QString("objAddress"), ::OpenAPI::toJsonValue(obj_address));
    }
    if (a_obj_contact.size() > 0) {
        obj.insert(QString("a_objContact"), ::OpenAPI::toJsonValue(a_obj_contact));
    }
    return obj;
}

OAIAddress_Request OAIFranchisereferalincome_RequestCompound_allOf::getObjAddress() const {
    return obj_address;
}
void OAIFranchisereferalincome_RequestCompound_allOf::setObjAddress(const OAIAddress_Request &obj_address) {
    this->obj_address = obj_address;
    this->m_obj_address_isSet = true;
}

bool OAIFranchisereferalincome_RequestCompound_allOf::is_obj_address_Set() const{
    return m_obj_address_isSet;
}

bool OAIFranchisereferalincome_RequestCompound_allOf::is_obj_address_Valid() const{
    return m_obj_address_isValid;
}

QList<OAIContact_RequestCompound> OAIFranchisereferalincome_RequestCompound_allOf::getAObjContact() const {
    return a_obj_contact;
}
void OAIFranchisereferalincome_RequestCompound_allOf::setAObjContact(const QList<OAIContact_RequestCompound> &a_obj_contact) {
    this->a_obj_contact = a_obj_contact;
    this->m_a_obj_contact_isSet = true;
}

bool OAIFranchisereferalincome_RequestCompound_allOf::is_a_obj_contact_Set() const{
    return m_a_obj_contact_isSet;
}

bool OAIFranchisereferalincome_RequestCompound_allOf::is_a_obj_contact_Valid() const{
    return m_a_obj_contact_isValid;
}

bool OAIFranchisereferalincome_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_address.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_contact.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFranchisereferalincome_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_contact_isValid && true;
}

} // namespace OpenAPI
