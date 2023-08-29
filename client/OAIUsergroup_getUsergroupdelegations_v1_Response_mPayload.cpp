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

#include "OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::~OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload() {}

void OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::initializeModel() {

    m_a_obj_usergroupdelegation_isSet = false;
    m_a_obj_usergroupdelegation_isValid = false;
}

void OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroupdelegation_isValid = ::OpenAPI::fromJsonValue(m_a_obj_usergroupdelegation, json[QString("a_objUsergroupdelegation")]);
    m_a_obj_usergroupdelegation_isSet = !json[QString("a_objUsergroupdelegation")].isNull() && m_a_obj_usergroupdelegation_isValid;
}

QString OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_usergroupdelegation.size() > 0) {
        obj.insert(QString("a_objUsergroupdelegation"), ::OpenAPI::toJsonValue(m_a_obj_usergroupdelegation));
    }
    return obj;
}

QList<OAIUsergroupdelegation_ResponseCompound> OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::getAObjUsergroupdelegation() const {
    return m_a_obj_usergroupdelegation;
}
void OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::setAObjUsergroupdelegation(const QList<OAIUsergroupdelegation_ResponseCompound> &a_obj_usergroupdelegation) {
    m_a_obj_usergroupdelegation = a_obj_usergroupdelegation;
    m_a_obj_usergroupdelegation_isSet = true;
}

bool OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::is_a_obj_usergroupdelegation_Set() const{
    return m_a_obj_usergroupdelegation_isSet;
}

bool OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::is_a_obj_usergroupdelegation_Valid() const{
    return m_a_obj_usergroupdelegation_isValid;
}

bool OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_usergroupdelegation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_getUsergroupdelegations_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroupdelegation_isValid && true;
}

} // namespace OpenAPI
