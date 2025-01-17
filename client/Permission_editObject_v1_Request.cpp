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

#include "Permission_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Permission_editObject_v1_Request::Permission_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Permission_editObject_v1_Request::Permission_editObject_v1_Request() {
    this->initializeModel();
}

Permission_editObject_v1_Request::~Permission_editObject_v1_Request() {}

void Permission_editObject_v1_Request::initializeModel() {

    m_obj_permission_isSet = false;
    m_obj_permission_isValid = false;
}

void Permission_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Permission_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_permission_isValid = ::Ezmaxapi::fromJsonValue(m_obj_permission, json[QString("objPermission")]);
    m_obj_permission_isSet = !json[QString("objPermission")].isNull() && m_obj_permission_isValid;
}

QString Permission_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Permission_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_permission.isSet()) {
        obj.insert(QString("objPermission"), ::Ezmaxapi::toJsonValue(m_obj_permission));
    }
    return obj;
}

Permission_RequestCompound Permission_editObject_v1_Request::getObjPermission() const {
    return m_obj_permission;
}
void Permission_editObject_v1_Request::setObjPermission(const Permission_RequestCompound &obj_permission) {
    m_obj_permission = obj_permission;
    m_obj_permission_isSet = true;
}

bool Permission_editObject_v1_Request::is_obj_permission_Set() const{
    return m_obj_permission_isSet;
}

bool Permission_editObject_v1_Request::is_obj_permission_Valid() const{
    return m_obj_permission_isValid;
}

bool Permission_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_permission.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Permission_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_permission_isValid && true;
}

} // namespace Ezmaxapi
