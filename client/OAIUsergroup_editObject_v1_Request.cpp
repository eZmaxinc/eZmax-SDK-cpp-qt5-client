/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUsergroup_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_editObject_v1_Request::OAIUsergroup_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_editObject_v1_Request::OAIUsergroup_editObject_v1_Request() {
    this->initializeModel();
}

OAIUsergroup_editObject_v1_Request::~OAIUsergroup_editObject_v1_Request() {}

void OAIUsergroup_editObject_v1_Request::initializeModel() {

    m_obj_usergroup_isSet = false;
    m_obj_usergroup_isValid = false;
}

void OAIUsergroup_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_usergroup_isValid = ::OpenAPI::fromJsonValue(m_obj_usergroup, json[QString("objUsergroup")]);
    m_obj_usergroup_isSet = !json[QString("objUsergroup")].isNull() && m_obj_usergroup_isValid;
}

QString OAIUsergroup_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_usergroup.isSet()) {
        obj.insert(QString("objUsergroup"), ::OpenAPI::toJsonValue(m_obj_usergroup));
    }
    return obj;
}

OAIUsergroup_RequestCompound OAIUsergroup_editObject_v1_Request::getObjUsergroup() const {
    return m_obj_usergroup;
}
void OAIUsergroup_editObject_v1_Request::setObjUsergroup(const OAIUsergroup_RequestCompound &obj_usergroup) {
    m_obj_usergroup = obj_usergroup;
    m_obj_usergroup_isSet = true;
}

bool OAIUsergroup_editObject_v1_Request::is_obj_usergroup_Set() const{
    return m_obj_usergroup_isSet;
}

bool OAIUsergroup_editObject_v1_Request::is_obj_usergroup_Valid() const{
    return m_obj_usergroup_isValid;
}

bool OAIUsergroup_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_usergroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_usergroup_isValid && true;
}

} // namespace OpenAPI
