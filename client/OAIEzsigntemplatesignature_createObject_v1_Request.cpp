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

#include "OAIEzsigntemplatesignature_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesignature_createObject_v1_Request::OAIEzsigntemplatesignature_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesignature_createObject_v1_Request::OAIEzsigntemplatesignature_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatesignature_createObject_v1_Request::~OAIEzsigntemplatesignature_createObject_v1_Request() {}

void OAIEzsigntemplatesignature_createObject_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatesignature_isSet = false;
    m_a_obj_ezsigntemplatesignature_isValid = false;
}

void OAIEzsigntemplatesignature_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesignature_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatesignature_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsigntemplatesignature, json[QString("a_objEzsigntemplatesignature")]);
    m_a_obj_ezsigntemplatesignature_isSet = !json[QString("a_objEzsigntemplatesignature")].isNull() && m_a_obj_ezsigntemplatesignature_isValid;
}

QString OAIEzsigntemplatesignature_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesignature_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplatesignature.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesignature"), ::OpenAPI::toJsonValue(m_a_obj_ezsigntemplatesignature));
    }
    return obj;
}

QList<OAIEzsigntemplatesignature_RequestCompound> OAIEzsigntemplatesignature_createObject_v1_Request::getAObjEzsigntemplatesignature() const {
    return m_a_obj_ezsigntemplatesignature;
}
void OAIEzsigntemplatesignature_createObject_v1_Request::setAObjEzsigntemplatesignature(const QList<OAIEzsigntemplatesignature_RequestCompound> &a_obj_ezsigntemplatesignature) {
    m_a_obj_ezsigntemplatesignature = a_obj_ezsigntemplatesignature;
    m_a_obj_ezsigntemplatesignature_isSet = true;
}

bool OAIEzsigntemplatesignature_createObject_v1_Request::is_a_obj_ezsigntemplatesignature_Set() const{
    return m_a_obj_ezsigntemplatesignature_isSet;
}

bool OAIEzsigntemplatesignature_createObject_v1_Request::is_a_obj_ezsigntemplatesignature_Valid() const{
    return m_a_obj_ezsigntemplatesignature_isValid;
}

bool OAIEzsigntemplatesignature_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplatesignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesignature_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatesignature_isValid && true;
}

} // namespace OpenAPI
