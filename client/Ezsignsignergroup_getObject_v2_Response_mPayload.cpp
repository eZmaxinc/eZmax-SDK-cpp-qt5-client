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

#include "Ezsignsignergroup_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignergroup_getObject_v2_Response_mPayload::Ezsignsignergroup_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignergroup_getObject_v2_Response_mPayload::Ezsignsignergroup_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsignsignergroup_getObject_v2_Response_mPayload::~Ezsignsignergroup_getObject_v2_Response_mPayload() {}

void Ezsignsignergroup_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignsignergroup_isSet = false;
    m_obj_ezsignsignergroup_isValid = false;
}

void Ezsignsignergroup_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignergroup_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignsignergroup_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsignergroup, json[QString("objEzsignsignergroup")]);
    m_obj_ezsignsignergroup_isSet = !json[QString("objEzsignsignergroup")].isNull() && m_obj_ezsignsignergroup_isValid;
}

QString Ezsignsignergroup_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignergroup_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignsignergroup.isSet()) {
        obj.insert(QString("objEzsignsignergroup"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsignergroup));
    }
    return obj;
}

Ezsignsignergroup_ResponseCompound Ezsignsignergroup_getObject_v2_Response_mPayload::getObjEzsignsignergroup() const {
    return m_obj_ezsignsignergroup;
}
void Ezsignsignergroup_getObject_v2_Response_mPayload::setObjEzsignsignergroup(const Ezsignsignergroup_ResponseCompound &obj_ezsignsignergroup) {
    m_obj_ezsignsignergroup = obj_ezsignsignergroup;
    m_obj_ezsignsignergroup_isSet = true;
}

bool Ezsignsignergroup_getObject_v2_Response_mPayload::is_obj_ezsignsignergroup_Set() const{
    return m_obj_ezsignsignergroup_isSet;
}

bool Ezsignsignergroup_getObject_v2_Response_mPayload::is_obj_ezsignsignergroup_Valid() const{
    return m_obj_ezsignsignergroup_isValid;
}

bool Ezsignsignergroup_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignsignergroup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignergroup_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsignergroup_isValid && true;
}

} // namespace Ezmaxapi
