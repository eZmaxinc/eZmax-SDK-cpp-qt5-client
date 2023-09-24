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

#include "OAIEzsignsignergroup_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignergroup_editObject_v1_Request::OAIEzsignsignergroup_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignergroup_editObject_v1_Request::OAIEzsignsignergroup_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignsignergroup_editObject_v1_Request::~OAIEzsignsignergroup_editObject_v1_Request() {}

void OAIEzsignsignergroup_editObject_v1_Request::initializeModel() {

    m_obj_ezsignsignergroup_isSet = false;
    m_obj_ezsignsignergroup_isValid = false;
}

void OAIEzsignsignergroup_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignergroup_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignsignergroup_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsignsignergroup, json[QString("objEzsignsignergroup")]);
    m_obj_ezsignsignergroup_isSet = !json[QString("objEzsignsignergroup")].isNull() && m_obj_ezsignsignergroup_isValid;
}

QString OAIEzsignsignergroup_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignergroup_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignsignergroup.isSet()) {
        obj.insert(QString("objEzsignsignergroup"), ::OpenAPI::toJsonValue(m_obj_ezsignsignergroup));
    }
    return obj;
}

OAIEzsignsignergroup_RequestCompound OAIEzsignsignergroup_editObject_v1_Request::getObjEzsignsignergroup() const {
    return m_obj_ezsignsignergroup;
}
void OAIEzsignsignergroup_editObject_v1_Request::setObjEzsignsignergroup(const OAIEzsignsignergroup_RequestCompound &obj_ezsignsignergroup) {
    m_obj_ezsignsignergroup = obj_ezsignsignergroup;
    m_obj_ezsignsignergroup_isSet = true;
}

bool OAIEzsignsignergroup_editObject_v1_Request::is_obj_ezsignsignergroup_Set() const{
    return m_obj_ezsignsignergroup_isSet;
}

bool OAIEzsignsignergroup_editObject_v1_Request::is_obj_ezsignsignergroup_Valid() const{
    return m_obj_ezsignsignergroup_isValid;
}

bool OAIEzsignsignergroup_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignsignergroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignergroup_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsignergroup_isValid && true;
}

} // namespace OpenAPI
