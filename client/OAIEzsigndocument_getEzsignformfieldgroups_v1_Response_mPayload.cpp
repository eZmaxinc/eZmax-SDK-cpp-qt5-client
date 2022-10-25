/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::~OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload() {}

void OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignformfieldgroup_isSet = false;
    m_a_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignformfieldgroup_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfieldgroup, json[QString("a_objEzsignformfieldgroup")]);
    m_a_obj_ezsignformfieldgroup_isSet = !json[QString("a_objEzsignformfieldgroup")].isNull() && m_a_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroup"), ::OpenAPI::toJsonValue(a_obj_ezsignformfieldgroup));
    }
    return obj;
}

QList<OAIEzsignformfieldgroup_ResponseCompound> OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::getAObjEzsignformfieldgroup() const {
    return a_obj_ezsignformfieldgroup;
}
void OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::setAObjEzsignformfieldgroup(const QList<OAIEzsignformfieldgroup_ResponseCompound> &a_obj_ezsignformfieldgroup) {
    this->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    this->m_a_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::is_a_obj_ezsignformfieldgroup_Set() const{
    return m_a_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::is_a_obj_ezsignformfieldgroup_Valid() const{
    return m_a_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getEzsignformfieldgroups_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace OpenAPI
