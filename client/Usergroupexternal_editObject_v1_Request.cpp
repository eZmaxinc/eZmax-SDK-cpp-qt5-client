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

#include "Usergroupexternal_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupexternal_editObject_v1_Request::Usergroupexternal_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupexternal_editObject_v1_Request::Usergroupexternal_editObject_v1_Request() {
    this->initializeModel();
}

Usergroupexternal_editObject_v1_Request::~Usergroupexternal_editObject_v1_Request() {}

void Usergroupexternal_editObject_v1_Request::initializeModel() {

    m_obj_usergroupexternal_isSet = false;
    m_obj_usergroupexternal_isValid = false;
}

void Usergroupexternal_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupexternal_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_usergroupexternal_isValid = ::Ezmaxapi::fromJsonValue(m_obj_usergroupexternal, json[QString("objUsergroupexternal")]);
    m_obj_usergroupexternal_isSet = !json[QString("objUsergroupexternal")].isNull() && m_obj_usergroupexternal_isValid;
}

QString Usergroupexternal_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupexternal_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroupexternal.isSet()) {
        obj.insert(QString("objUsergroupexternal"), ::Ezmaxapi::toJsonValue(m_obj_usergroupexternal));
    }
    return obj;
}

Usergroupexternal_RequestCompound Usergroupexternal_editObject_v1_Request::getObjUsergroupexternal() const {
    return m_obj_usergroupexternal;
}
void Usergroupexternal_editObject_v1_Request::setObjUsergroupexternal(const Usergroupexternal_RequestCompound &obj_usergroupexternal) {
    m_obj_usergroupexternal = obj_usergroupexternal;
    m_obj_usergroupexternal_isSet = true;
}

bool Usergroupexternal_editObject_v1_Request::is_obj_usergroupexternal_Set() const{
    return m_obj_usergroupexternal_isSet;
}

bool Usergroupexternal_editObject_v1_Request::is_obj_usergroupexternal_Valid() const{
    return m_obj_usergroupexternal_isValid;
}

bool Usergroupexternal_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroupexternal.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupexternal_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroupexternal_isValid && true;
}

} // namespace Ezmaxapi
