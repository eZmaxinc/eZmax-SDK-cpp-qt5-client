/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatesigner_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesigner_editObject_v1_Request::OAIEzsigntemplatesigner_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesigner_editObject_v1_Request::OAIEzsigntemplatesigner_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatesigner_editObject_v1_Request::~OAIEzsigntemplatesigner_editObject_v1_Request() {}

void OAIEzsigntemplatesigner_editObject_v1_Request::initializeModel() {

    m_obj_ezsigntemplatesigner_isSet = false;
    m_obj_ezsigntemplatesigner_isValid = false;
}

void OAIEzsigntemplatesigner_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesigner_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatesigner_isValid = ::OpenAPI::fromJsonValue(m_obj_ezsigntemplatesigner, json[QString("objEzsigntemplatesigner")]);
    m_obj_ezsigntemplatesigner_isSet = !json[QString("objEzsigntemplatesigner")].isNull() && m_obj_ezsigntemplatesigner_isValid;
}

QString OAIEzsigntemplatesigner_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesigner_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsigntemplatesigner.isSet()) {
        obj.insert(QString("objEzsigntemplatesigner"), ::OpenAPI::toJsonValue(m_obj_ezsigntemplatesigner));
    }
    return obj;
}

OAIEzsigntemplatesigner_RequestCompound OAIEzsigntemplatesigner_editObject_v1_Request::getObjEzsigntemplatesigner() const {
    return m_obj_ezsigntemplatesigner;
}
void OAIEzsigntemplatesigner_editObject_v1_Request::setObjEzsigntemplatesigner(const OAIEzsigntemplatesigner_RequestCompound &obj_ezsigntemplatesigner) {
    m_obj_ezsigntemplatesigner = obj_ezsigntemplatesigner;
    m_obj_ezsigntemplatesigner_isSet = true;
}

bool OAIEzsigntemplatesigner_editObject_v1_Request::is_obj_ezsigntemplatesigner_Set() const{
    return m_obj_ezsigntemplatesigner_isSet;
}

bool OAIEzsigntemplatesigner_editObject_v1_Request::is_obj_ezsigntemplatesigner_Valid() const{
    return m_obj_ezsigntemplatesigner_isValid;
}

bool OAIEzsigntemplatesigner_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsigntemplatesigner.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesigner_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatesigner_isValid && true;
}

} // namespace OpenAPI
