/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_submitEzsignform_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_submitEzsignform_v1_Request::OAIEzsigndocument_submitEzsignform_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_submitEzsignform_v1_Request::OAIEzsigndocument_submitEzsignform_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_submitEzsignform_v1_Request::~OAIEzsigndocument_submitEzsignform_v1_Request() {}

void OAIEzsigndocument_submitEzsignform_v1_Request::initializeModel() {

    m_b_ezsignform_isdraft_isSet = false;
    m_b_ezsignform_isdraft_isValid = false;

    m_a_obj_ezsignformfieldgroup_isSet = false;
    m_a_obj_ezsignformfieldgroup_isValid = false;
}

void OAIEzsigndocument_submitEzsignform_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_submitEzsignform_v1_Request::fromJsonObject(QJsonObject json) {

    m_b_ezsignform_isdraft_isValid = ::OpenAPI::fromJsonValue(m_b_ezsignform_isdraft, json[QString("bEzsignformIsdraft")]);
    m_b_ezsignform_isdraft_isSet = !json[QString("bEzsignformIsdraft")].isNull() && m_b_ezsignform_isdraft_isValid;

    m_a_obj_ezsignformfieldgroup_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsignformfieldgroup, json[QString("a_objEzsignformfieldgroup")]);
    m_a_obj_ezsignformfieldgroup_isSet = !json[QString("a_objEzsignformfieldgroup")].isNull() && m_a_obj_ezsignformfieldgroup_isValid;
}

QString OAIEzsigndocument_submitEzsignform_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_submitEzsignform_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_b_ezsignform_isdraft_isSet) {
        obj.insert(QString("bEzsignformIsdraft"), ::OpenAPI::toJsonValue(m_b_ezsignform_isdraft));
    }
    if (m_a_obj_ezsignformfieldgroup.size() > 0) {
        obj.insert(QString("a_objEzsignformfieldgroup"), ::OpenAPI::toJsonValue(m_a_obj_ezsignformfieldgroup));
    }
    return obj;
}

bool OAIEzsigndocument_submitEzsignform_v1_Request::isBEzsignformIsdraft() const {
    return m_b_ezsignform_isdraft;
}
void OAIEzsigndocument_submitEzsignform_v1_Request::setBEzsignformIsdraft(const bool &b_ezsignform_isdraft) {
    m_b_ezsignform_isdraft = b_ezsignform_isdraft;
    m_b_ezsignform_isdraft_isSet = true;
}

bool OAIEzsigndocument_submitEzsignform_v1_Request::is_b_ezsignform_isdraft_Set() const{
    return m_b_ezsignform_isdraft_isSet;
}

bool OAIEzsigndocument_submitEzsignform_v1_Request::is_b_ezsignform_isdraft_Valid() const{
    return m_b_ezsignform_isdraft_isValid;
}

QList<OAICustom_Ezsignformfieldgroup_Request> OAIEzsigndocument_submitEzsignform_v1_Request::getAObjEzsignformfieldgroup() const {
    return m_a_obj_ezsignformfieldgroup;
}
void OAIEzsigndocument_submitEzsignform_v1_Request::setAObjEzsignformfieldgroup(const QList<OAICustom_Ezsignformfieldgroup_Request> &a_obj_ezsignformfieldgroup) {
    m_a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;
    m_a_obj_ezsignformfieldgroup_isSet = true;
}

bool OAIEzsigndocument_submitEzsignform_v1_Request::is_a_obj_ezsignformfieldgroup_Set() const{
    return m_a_obj_ezsignformfieldgroup_isSet;
}

bool OAIEzsigndocument_submitEzsignform_v1_Request::is_a_obj_ezsignformfieldgroup_Valid() const{
    return m_a_obj_ezsignformfieldgroup_isValid;
}

bool OAIEzsigndocument_submitEzsignform_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_ezsignform_isdraft_isSet) {
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

bool OAIEzsigndocument_submitEzsignform_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_ezsignform_isdraft_isValid && m_a_obj_ezsignformfieldgroup_isValid && true;
}

} // namespace OpenAPI
