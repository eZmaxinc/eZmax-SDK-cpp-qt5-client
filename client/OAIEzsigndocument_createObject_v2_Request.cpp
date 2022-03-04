/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_createObject_v2_Request::OAIEzsigndocument_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_createObject_v2_Request::OAIEzsigndocument_createObject_v2_Request() {
    this->initializeModel();
}

OAIEzsigndocument_createObject_v2_Request::~OAIEzsigndocument_createObject_v2_Request() {}

void OAIEzsigndocument_createObject_v2_Request::initializeModel() {

    m_a_obj_ezsigndocument_isSet = false;
    m_a_obj_ezsigndocument_isValid = false;
}

void OAIEzsigndocument_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigndocument, json[QString("a_objEzsigndocument")]);
    m_a_obj_ezsigndocument_isSet = !json[QString("a_objEzsigndocument")].isNull() && m_a_obj_ezsigndocument_isValid;
}

QString OAIEzsigndocument_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzsigndocument"), ::OpenAPI::toJsonValue(a_obj_ezsigndocument));
    }
    return obj;
}

QList<OAIEzsigndocument_RequestCompound> OAIEzsigndocument_createObject_v2_Request::getAObjEzsigndocument() const {
    return a_obj_ezsigndocument;
}
void OAIEzsigndocument_createObject_v2_Request::setAObjEzsigndocument(const QList<OAIEzsigndocument_RequestCompound> &a_obj_ezsigndocument) {
    this->a_obj_ezsigndocument = a_obj_ezsigndocument;
    this->m_a_obj_ezsigndocument_isSet = true;
}

bool OAIEzsigndocument_createObject_v2_Request::is_a_obj_ezsigndocument_Set() const{
    return m_a_obj_ezsigndocument_isSet;
}

bool OAIEzsigndocument_createObject_v2_Request::is_a_obj_ezsigndocument_Valid() const{
    return m_a_obj_ezsigndocument_isValid;
}

bool OAIEzsigndocument_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndocument_isValid && true;
}

} // namespace OpenAPI
