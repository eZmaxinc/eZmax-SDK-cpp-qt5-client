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

#include "Usergroupmembership_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupmembership_editObject_v1_Request::Usergroupmembership_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupmembership_editObject_v1_Request::Usergroupmembership_editObject_v1_Request() {
    this->initializeModel();
}

Usergroupmembership_editObject_v1_Request::~Usergroupmembership_editObject_v1_Request() {}

void Usergroupmembership_editObject_v1_Request::initializeModel() {

    m_obj_usergroupmembership_isSet = false;
    m_obj_usergroupmembership_isValid = false;
}

void Usergroupmembership_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupmembership_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_usergroupmembership_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroupmembership, json[QString("objUsergroupmembership")]);
    m_obj_usergroupmembership_isSet = !json[QString("objUsergroupmembership")].isNull() && m_obj_usergroupmembership_isValid;
}

QString Usergroupmembership_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupmembership_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroupmembership.isSet()) {
        obj.insert(QString("objUsergroupmembership"), ::Ezmaxapi::toJsonValue(m_obj_usergroupmembership));
    }
    return obj;
}

Usergroupmembership_RequestCompound Usergroupmembership_editObject_v1_Request::getObjUsergroupmembership() const {
    return m_obj_usergroupmembership;
}
void Usergroupmembership_editObject_v1_Request::setObjUsergroupmembership(const Usergroupmembership_RequestCompound &obj_usergroupmembership) {
    m_obj_usergroupmembership = obj_usergroupmembership;
    m_obj_usergroupmembership_isSet = true;
}

bool Usergroupmembership_editObject_v1_Request::is_obj_usergroupmembership_Set() const{
    return m_obj_usergroupmembership_isSet;
}

bool Usergroupmembership_editObject_v1_Request::is_obj_usergroupmembership_Valid() const{
    return m_obj_usergroupmembership_isValid;
}

bool Usergroupmembership_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroupmembership.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupmembership_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroupmembership_isValid && true;
}

} // namespace Ezmaxapi
