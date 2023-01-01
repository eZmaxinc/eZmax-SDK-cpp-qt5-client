/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_editObject_v1_Request::OAIEzsigntemplatedocument_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_editObject_v1_Request::OAIEzsigntemplatedocument_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_editObject_v1_Request::~OAIEzsigntemplatedocument_editObject_v1_Request() {}

void OAIEzsigntemplatedocument_editObject_v1_Request::initializeModel() {

    m_obj_ezsigntemplatedocument_isSet = false;
    m_obj_ezsigntemplatedocument_isValid = false;
}

void OAIEzsigntemplatedocument_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatedocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatedocument, json[QString("objEzsigntemplatedocument")]);
    m_obj_ezsigntemplatedocument_isSet = !json[QString("objEzsigntemplatedocument")].isNull() && m_obj_ezsigntemplatedocument_isValid;
}

QString OAIEzsigntemplatedocument_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatedocument.isSet()) {
        obj.insert(QString("objEzsigntemplatedocument"), ::OpenAPI::toJsonValue(obj_ezsigntemplatedocument));
    }
    return obj;
}

OAIEzsigntemplatedocument_RequestCompound OAIEzsigntemplatedocument_editObject_v1_Request::getObjEzsigntemplatedocument() const {
    return obj_ezsigntemplatedocument;
}
void OAIEzsigntemplatedocument_editObject_v1_Request::setObjEzsigntemplatedocument(const OAIEzsigntemplatedocument_RequestCompound &obj_ezsigntemplatedocument) {
    this->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    this->m_obj_ezsigntemplatedocument_isSet = true;
}

bool OAIEzsigntemplatedocument_editObject_v1_Request::is_obj_ezsigntemplatedocument_Set() const{
    return m_obj_ezsigntemplatedocument_isSet;
}

bool OAIEzsigntemplatedocument_editObject_v1_Request::is_obj_ezsigntemplatedocument_Valid() const{
    return m_obj_ezsigntemplatedocument_isValid;
}

bool OAIEzsigntemplatedocument_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatedocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatedocument_isValid && true;
}

} // namespace OpenAPI
