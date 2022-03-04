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

#include "OAIEzsignformfieldgroup_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfieldgroup_editObject_v1_Request::OAIEzsignformfieldgroup_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfieldgroup_editObject_v1_Request::OAIEzsignformfieldgroup_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignformfieldgroup_editObject_v1_Request::~OAIEzsignformfieldgroup_editObject_v1_Request() {}

void OAIEzsignformfieldgroup_editObject_v1_Request::initializeModel() {

    m_obj_ezsignformfieldgroup_isSet = false;
    m_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsignformfieldgroup_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfieldgroup_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignformfieldgroup_isValid = ::OpenAPI::fromJsonValue(obj_ezsignformfieldgroup, json[QString("objEzsignformfieldgroup")]);
    m_obj_ezsignformfieldgroup_isSet = !json[QString("objEzsignformfieldgroup")].isNull() && m_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsignformfieldgroup_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfieldgroup_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignformfieldgroup.isSet()) {
        obj.insert(QString("objEzsignformfieldgroup"), ::OpenAPI::toJsonValue(obj_ezsignformfieldgroup));
    }
    return obj;
}

OAIEzsignformfieldgroup_RequestCompound OAIEzsignformfieldgroup_editObject_v1_Request::getObjEzsignformfieldgroup() const {
    return obj_ezsignformfieldgroup;
}
void OAIEzsignformfieldgroup_editObject_v1_Request::setObjEzsignformfieldgroup(const OAIEzsignformfieldgroup_RequestCompound &obj_ezsignformfieldgroup) {
    this->obj_ezsignformfieldgroup = obj_ezsignformfieldgroup;
    this->m_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsignformfieldgroup_editObject_v1_Request::is_obj_ezsignformfieldgroup_Set() const{
    return m_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsignformfieldgroup_editObject_v1_Request::is_obj_ezsignformfieldgroup_Valid() const{
    return m_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsignformfieldgroup_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignformfieldgroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfieldgroup_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace OpenAPI
