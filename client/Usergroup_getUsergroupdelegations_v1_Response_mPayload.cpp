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

#include "Usergroup_getUsergroupdelegations_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroup_getUsergroupdelegations_v1_Response_mPayload::Usergroup_getUsergroupdelegations_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroup_getUsergroupdelegations_v1_Response_mPayload::Usergroup_getUsergroupdelegations_v1_Response_mPayload() {
    this->initializeModel();
}

Usergroup_getUsergroupdelegations_v1_Response_mPayload::~Usergroup_getUsergroupdelegations_v1_Response_mPayload() {}

void Usergroup_getUsergroupdelegations_v1_Response_mPayload::initializeModel() {

    m_a_obj_usergroupdelegation_isSet = false;
    m_a_obj_usergroupdelegation_isValid = false;
}

void Usergroup_getUsergroupdelegations_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroup_getUsergroupdelegations_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroupdelegation_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_usergroupdelegation, json[QString("a_objUsergroupdelegation")]);
    m_a_obj_usergroupdelegation_isSet = !json[QString("a_objUsergroupdelegation")].isNull() && m_a_obj_usergroupdelegation_isValid;
}

QString Usergroup_getUsergroupdelegations_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroup_getUsergroupdelegations_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_usergroupdelegation.size() > 0) {
        obj.insert(QString("a_objUsergroupdelegation"), ::Ezmaxapi::toJsonValue(m_a_obj_usergroupdelegation));
    }
    return obj;
}

QList<Usergroupdelegation_ResponseCompound> Usergroup_getUsergroupdelegations_v1_Response_mPayload::getAObjUsergroupdelegation() const {
    return m_a_obj_usergroupdelegation;
}
void Usergroup_getUsergroupdelegations_v1_Response_mPayload::setAObjUsergroupdelegation(const QList<Usergroupdelegation_ResponseCompound> &a_obj_usergroupdelegation) {
    m_a_obj_usergroupdelegation = a_obj_usergroupdelegation;
    m_a_obj_usergroupdelegation_isSet = true;
}

bool Usergroup_getUsergroupdelegations_v1_Response_mPayload::is_a_obj_usergroupdelegation_Set() const{
    return m_a_obj_usergroupdelegation_isSet;
}

bool Usergroup_getUsergroupdelegations_v1_Response_mPayload::is_a_obj_usergroupdelegation_Valid() const{
    return m_a_obj_usergroupdelegation_isValid;
}

bool Usergroup_getUsergroupdelegations_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_usergroupdelegation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroup_getUsergroupdelegations_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroupdelegation_isValid && true;
}

} // namespace Ezmaxapi
