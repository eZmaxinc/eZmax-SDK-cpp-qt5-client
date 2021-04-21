/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_createObject_v1_Request::OAIEzsigndocument_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_createObject_v1_Request::OAIEzsigndocument_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_createObject_v1_Request::~OAIEzsigndocument_createObject_v1_Request() {}

void OAIEzsigndocument_createObject_v1_Request::initializeModel() {

    m_obj_ezsigndocument_isSet = false;
    m_obj_ezsigndocument_isValid = false;

    m_obj_ezsigndocument_compound_isSet = false;
    m_obj_ezsigndocument_compound_isValid = false;
}

void OAIEzsigndocument_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigndocument, json[QString("objEzsigndocument")]);
    m_obj_ezsigndocument_isSet = !json[QString("objEzsigndocument")].isNull() && m_obj_ezsigndocument_isValid;

    m_obj_ezsigndocument_compound_isValid = ::OpenAPI::fromJsonValue(obj_ezsigndocument_compound, json[QString("objEzsigndocumentCompound")]);
    m_obj_ezsigndocument_compound_isSet = !json[QString("objEzsigndocumentCompound")].isNull() && m_obj_ezsigndocument_compound_isValid;
}

QString OAIEzsigndocument_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigndocument.isSet()) {
        obj.insert(QString("objEzsigndocument"), ::OpenAPI::toJsonValue(obj_ezsigndocument));
    }
    if (obj_ezsigndocument_compound.isSet()) {
        obj.insert(QString("objEzsigndocumentCompound"), ::OpenAPI::toJsonValue(obj_ezsigndocument_compound));
    }
    return obj;
}

OAIEzsigndocument_Request OAIEzsigndocument_createObject_v1_Request::getObjEzsigndocument() const {
    return obj_ezsigndocument;
}
void OAIEzsigndocument_createObject_v1_Request::setObjEzsigndocument(const OAIEzsigndocument_Request &obj_ezsigndocument) {
    this->obj_ezsigndocument = obj_ezsigndocument;
    this->m_obj_ezsigndocument_isSet = true;
}

bool OAIEzsigndocument_createObject_v1_Request::is_obj_ezsigndocument_Set() const{
    return m_obj_ezsigndocument_isSet;
}

bool OAIEzsigndocument_createObject_v1_Request::is_obj_ezsigndocument_Valid() const{
    return m_obj_ezsigndocument_isValid;
}

OAIEzsigndocument_RequestCompound OAIEzsigndocument_createObject_v1_Request::getObjEzsigndocumentCompound() const {
    return obj_ezsigndocument_compound;
}
void OAIEzsigndocument_createObject_v1_Request::setObjEzsigndocumentCompound(const OAIEzsigndocument_RequestCompound &obj_ezsigndocument_compound) {
    this->obj_ezsigndocument_compound = obj_ezsigndocument_compound;
    this->m_obj_ezsigndocument_compound_isSet = true;
}

bool OAIEzsigndocument_createObject_v1_Request::is_obj_ezsigndocument_compound_Set() const{
    return m_obj_ezsigndocument_compound_isSet;
}

bool OAIEzsigndocument_createObject_v1_Request::is_obj_ezsigndocument_compound_Valid() const{
    return m_obj_ezsigndocument_compound_isValid;
}

bool OAIEzsigndocument_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigndocument.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsigndocument_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
