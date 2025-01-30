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

#include "Ezsignsigningreason_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsigningreason_editObject_v1_Request::Ezsignsigningreason_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsigningreason_editObject_v1_Request::Ezsignsigningreason_editObject_v1_Request() {
    this->initializeModel();
}

Ezsignsigningreason_editObject_v1_Request::~Ezsignsigningreason_editObject_v1_Request() {}

void Ezsignsigningreason_editObject_v1_Request::initializeModel() {

    m_obj_ezsignsigningreason_isSet = false;
    m_obj_ezsignsigningreason_isValid = false;
}

void Ezsignsigningreason_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsigningreason_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignsigningreason_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsigningreason, json[QString("objEzsignsigningreason")]);
    m_obj_ezsignsigningreason_isSet = !json[QString("objEzsignsigningreason")].isNull() && m_obj_ezsignsigningreason_isValid;
}

QString Ezsignsigningreason_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsigningreason_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignsigningreason.isSet()) {
        obj.insert(QString("objEzsignsigningreason"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsigningreason));
    }
    return obj;
}

Ezsignsigningreason_RequestCompound Ezsignsigningreason_editObject_v1_Request::getObjEzsignsigningreason() const {
    return m_obj_ezsignsigningreason;
}
void Ezsignsigningreason_editObject_v1_Request::setObjEzsignsigningreason(const Ezsignsigningreason_RequestCompound &obj_ezsignsigningreason) {
    m_obj_ezsignsigningreason = obj_ezsignsigningreason;
    m_obj_ezsignsigningreason_isSet = true;
}

bool Ezsignsigningreason_editObject_v1_Request::is_obj_ezsignsigningreason_Set() const{
    return m_obj_ezsignsigningreason_isSet;
}

bool Ezsignsigningreason_editObject_v1_Request::is_obj_ezsignsigningreason_Valid() const{
    return m_obj_ezsignsigningreason_isValid;
}

bool Ezsignsigningreason_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignsigningreason.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsigningreason_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsigningreason_isValid && true;
}

} // namespace Ezmaxapi
