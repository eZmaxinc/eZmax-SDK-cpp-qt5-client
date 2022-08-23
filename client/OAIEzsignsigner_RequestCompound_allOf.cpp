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

#include "OAIEzsignsigner_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsigner_RequestCompound_allOf::OAIEzsignsigner_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsigner_RequestCompound_allOf::OAIEzsignsigner_RequestCompound_allOf() {
    this->initializeModel();
}

OAIEzsignsigner_RequestCompound_allOf::~OAIEzsignsigner_RequestCompound_allOf() {}

void OAIEzsignsigner_RequestCompound_allOf::initializeModel() {

    m_obj_contact_isSet = false;
    m_obj_contact_isValid = false;
}

void OAIEzsignsigner_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsigner_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_contact_isValid = ::OpenAPI::fromJsonValue(obj_contact, json[QString("objContact")]);
    m_obj_contact_isSet = !json[QString("objContact")].isNull() && m_obj_contact_isValid;
}

QString OAIEzsignsigner_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsigner_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_contact.isSet()) {
        obj.insert(QString("objContact"), ::OpenAPI::toJsonValue(obj_contact));
    }
    return obj;
}

OAIEzsignsigner_RequestCompound_Contact OAIEzsignsigner_RequestCompound_allOf::getObjContact() const {
    return obj_contact;
}
void OAIEzsignsigner_RequestCompound_allOf::setObjContact(const OAIEzsignsigner_RequestCompound_Contact &obj_contact) {
    this->obj_contact = obj_contact;
    this->m_obj_contact_isSet = true;
}

bool OAIEzsignsigner_RequestCompound_allOf::is_obj_contact_Set() const{
    return m_obj_contact_isSet;
}

bool OAIEzsignsigner_RequestCompound_allOf::is_obj_contact_Valid() const{
    return m_obj_contact_isValid;
}

bool OAIEzsignsigner_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_contact.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsigner_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_contact_isValid && true;
}

} // namespace OpenAPI
