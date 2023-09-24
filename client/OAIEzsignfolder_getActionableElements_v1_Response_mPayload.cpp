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

#include "OAIEzsignfolder_getActionableElements_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_getActionableElements_v1_Response_mPayload::OAIEzsignfolder_getActionableElements_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getActionableElements_v1_Response_mPayload::OAIEzsignfolder_getActionableElements_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_getActionableElements_v1_Response_mPayload::~OAIEzsignfolder_getActionableElements_v1_Response_mPayload() {}

void OAIEzsignfolder_getActionableElements_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignsignature_isSet = false;
    m_a_obj_ezsignsignature_isValid = false;

    m_a_obj_ezsignformfieldgroup_isSet = false;
    m_a_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsignfolder_getActionableElements_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getActionableElements_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsignsignature, json[QString("a_objEzsignsignature")]);
    m_a_obj_ezsignsignature_isSet = !json[QString("a_objEzsignsignature")].isNull() && m_a_obj_ezsignsignature_isValid;

    m_a_obj_ezsignformfieldgroup_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsignformfieldgroup, json[QString("a_objEzsignformfieldgroup")]);
    m_a_obj_ezsignformfieldgroup_isSet = !json[QString("a_objEzsignformfieldgroup")].isNull() && m_a_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsignfolder_getActionableElements_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getActionableElements_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignsignature.size() > 0) {
        obj.insert(QString("a_objEzsignsignature"), ::OpenAPI::toJsonValue(m_a_obj_ezsignsignature));
    }
    if (m_a_obj_ezsignformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroup"), ::OpenAPI::toJsonValue(m_a_obj_ezsignformfieldgroup));
    }
    return obj;
}

QList<OAIEzsignsignature_ResponseCompound> OAIEzsignfolder_getActionableElements_v1_Response_mPayload::getAObjEzsignsignature() const {
    return m_a_obj_ezsignsignature;
}
void OAIEzsignfolder_getActionableElements_v1_Response_mPayload::setAObjEzsignsignature(const QList<OAIEzsignsignature_ResponseCompound> &a_obj_ezsignsignature) {
    m_a_obj_ezsignsignature = a_obj_ezsignsignature;
    m_a_obj_ezsignsignature_isSet = true;
}

bool OAIEzsignfolder_getActionableElements_v1_Response_mPayload::is_a_obj_ezsignsignature_Set() const{
    return m_a_obj_ezsignsignature_isSet;
}

bool OAIEzsignfolder_getActionableElements_v1_Response_mPayload::is_a_obj_ezsignsignature_Valid() const{
    return m_a_obj_ezsignsignature_isValid;
}

QList<OAIEzsignformfieldgroup_ResponseCompound> OAIEzsignfolder_getActionableElements_v1_Response_mPayload::getAObjEzsignformfieldgroup() const {
    return m_a_obj_ezsignformfieldgroup;
}
void OAIEzsignfolder_getActionableElements_v1_Response_mPayload::setAObjEzsignformfieldgroup(const QList<OAIEzsignformfieldgroup_ResponseCompound> &a_obj_ezsignformfieldgroup) {
    m_a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    m_a_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsignfolder_getActionableElements_v1_Response_mPayload::is_a_obj_ezsignformfieldgroup_Set() const{
    return m_a_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsignfolder_getActionableElements_v1_Response_mPayload::is_a_obj_ezsignformfieldgroup_Valid() const{
    return m_a_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsignfolder_getActionableElements_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignsignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfieldgroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getActionableElements_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignsignature_isValid && m_a_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace OpenAPI
