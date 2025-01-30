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

#include "Ezsignsignature_editObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignature_editObject_v2_Request::Ezsignsignature_editObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignature_editObject_v2_Request::Ezsignsignature_editObject_v2_Request() {
    this->initializeModel();
}

Ezsignsignature_editObject_v2_Request::~Ezsignsignature_editObject_v2_Request() {}

void Ezsignsignature_editObject_v2_Request::initializeModel() {

    m_obj_ezsignsignature_isSet = false;
    m_obj_ezsignsignature_isValid = false;
}

void Ezsignsignature_editObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignature_editObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignsignature_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignsignature, json[QString("objEzsignsignature")]);
    m_obj_ezsignsignature_isSet = !json[QString("objEzsignsignature")].isNull() && m_obj_ezsignsignature_isValid;
}

QString Ezsignsignature_editObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignature_editObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignsignature.isSet()) {
        obj.insert(QString("objEzsignsignature"), ::Ezmaxapi::toJsonValue(m_obj_ezsignsignature));
    }
    return obj;
}

Ezsignsignature_RequestCompoundV2 Ezsignsignature_editObject_v2_Request::getObjEzsignsignature() const {
    return m_obj_ezsignsignature;
}
void Ezsignsignature_editObject_v2_Request::setObjEzsignsignature(const Ezsignsignature_RequestCompoundV2 &obj_ezsignsignature) {
    m_obj_ezsignsignature = obj_ezsignsignature;
    m_obj_ezsignsignature_isSet = true;
}

bool Ezsignsignature_editObject_v2_Request::is_obj_ezsignsignature_Set() const{
    return m_obj_ezsignsignature_isSet;
}

bool Ezsignsignature_editObject_v2_Request::is_obj_ezsignsignature_Valid() const{
    return m_obj_ezsignsignature_isValid;
}

bool Ezsignsignature_editObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignsignature.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignature_editObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignsignature_isValid && true;
}

} // namespace Ezmaxapi
