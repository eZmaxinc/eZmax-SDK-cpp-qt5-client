/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignature_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_createObject_v2_Request::OAIEzsignsignature_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_createObject_v2_Request::OAIEzsignsignature_createObject_v2_Request() {
    this->initializeModel();
}

OAIEzsignsignature_createObject_v2_Request::~OAIEzsignsignature_createObject_v2_Request() {}

void OAIEzsignsignature_createObject_v2_Request::initializeModel() {

    m_a_obj_ezsignsignature_isSet = false;
    m_a_obj_ezsignsignature_isValid = false;
}

void OAIEzsignsignature_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignsignature, json[QString("a_objEzsignsignature")]);
    m_a_obj_ezsignsignature_isSet = !json[QString("a_objEzsignsignature")].isNull() && m_a_obj_ezsignsignature_isValid;
}

QString OAIEzsignsignature_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignsignature.size() > 0) {
        obj.insert(QString("a_objEzsignsignature"), ::OpenAPI::toJsonValue(a_obj_ezsignsignature));
    }
    return obj;
}

QList<OAIEzsignsignature_RequestCompound> OAIEzsignsignature_createObject_v2_Request::getAObjEzsignsignature() const {
    return a_obj_ezsignsignature;
}
void OAIEzsignsignature_createObject_v2_Request::setAObjEzsignsignature(const QList<OAIEzsignsignature_RequestCompound> &a_obj_ezsignsignature) {
    this->a_obj_ezsignsignature = a_obj_ezsignsignature;
    this->m_a_obj_ezsignsignature_isSet = true;
}

bool OAIEzsignsignature_createObject_v2_Request::is_a_obj_ezsignsignature_Set() const{
    return m_a_obj_ezsignsignature_isSet;
}

bool OAIEzsignsignature_createObject_v2_Request::is_a_obj_ezsignsignature_Valid() const{
    return m_a_obj_ezsignsignature_isValid;
}

bool OAIEzsignsignature_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignsignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignsignature_isValid && true;
}

} // namespace OpenAPI
