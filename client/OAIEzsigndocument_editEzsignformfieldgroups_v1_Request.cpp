/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_editEzsignformfieldgroups_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::OAIEzsigndocument_editEzsignformfieldgroups_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::OAIEzsigndocument_editEzsignformfieldgroups_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::~OAIEzsigndocument_editEzsignformfieldgroups_v1_Request() {}

void OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::initializeModel() {

    m_a_obj_ezsignformfieldgroup_isSet = false;
    m_a_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignformfieldgroup_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfieldgroup, json[QString("a_objEzsignformfieldgroup")]);
    m_a_obj_ezsignformfieldgroup_isSet = !json[QString("a_objEzsignformfieldgroup")].isNull() && m_a_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroup"), ::OpenAPI::toJsonValue(a_obj_ezsignformfieldgroup));
    }
    return obj;
}

QList<OAIEzsignformfieldgroup_RequestCompound> OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::getAObjEzsignformfieldgroup() const {
    return a_obj_ezsignformfieldgroup;
}
void OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::setAObjEzsignformfieldgroup(const QList<OAIEzsignformfieldgroup_RequestCompound> &a_obj_ezsignformfieldgroup) {
    this->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    this->m_a_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::is_a_obj_ezsignformfieldgroup_Set() const{
    return m_a_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::is_a_obj_ezsignformfieldgroup_Valid() const{
    return m_a_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_editEzsignformfieldgroups_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace OpenAPI
