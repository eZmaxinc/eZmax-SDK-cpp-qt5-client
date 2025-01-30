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

#include "Usergroup_getPermissions_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroup_getPermissions_v1_Response_mPayload::Usergroup_getPermissions_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroup_getPermissions_v1_Response_mPayload::Usergroup_getPermissions_v1_Response_mPayload() {
    this->initializeModel();
}

Usergroup_getPermissions_v1_Response_mPayload::~Usergroup_getPermissions_v1_Response_mPayload() {}

void Usergroup_getPermissions_v1_Response_mPayload::initializeModel() {

    m_a_obj_modulegroup_isSet = false;
    m_a_obj_modulegroup_isValid = false;
}

void Usergroup_getPermissions_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroup_getPermissions_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_modulegroup_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_modulegroup, json[QString("a_objModulegroup")]);
    m_a_obj_modulegroup_isSet = !json[QString("a_objModulegroup")].isNull() && m_a_obj_modulegroup_isValid;
}

QString Usergroup_getPermissions_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroup_getPermissions_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_modulegroup.size() > 0) {
        obj.insert(QString("a_objModulegroup"), ::Ezmaxapi::toJsonValue(m_a_obj_modulegroup));
    }
    return obj;
}

QList<Modulegroup_ResponseCompound> Usergroup_getPermissions_v1_Response_mPayload::getAObjModulegroup() const {
    return m_a_obj_modulegroup;
}
void Usergroup_getPermissions_v1_Response_mPayload::setAObjModulegroup(const QList<Modulegroup_ResponseCompound> &a_obj_modulegroup) {
    m_a_obj_modulegroup = a_obj_modulegroup;
    m_a_obj_modulegroup_isSet = true;
}

bool Usergroup_getPermissions_v1_Response_mPayload::is_a_obj_modulegroup_Set() const{
    return m_a_obj_modulegroup_isSet;
}

bool Usergroup_getPermissions_v1_Response_mPayload::is_a_obj_modulegroup_Valid() const{
    return m_a_obj_modulegroup_isValid;
}

bool Usergroup_getPermissions_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_modulegroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroup_getPermissions_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_modulegroup_isValid && true;
}

} // namespace Ezmaxapi
