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

#include "OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::~OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request() {}

void OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::initializeModel() {

    m_a_obj_ezsigntemplatesignature_isSet = false;
    m_a_obj_ezsigntemplatesignature_isValid = false;
}

void OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatesignature_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatesignature, json[QString("a_objEzsigntemplatesignature")]);
    m_a_obj_ezsigntemplatesignature_isSet = !json[QString("a_objEzsigntemplatesignature")].isNull() && m_a_obj_ezsigntemplatesignature_isValid;
}

QString OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatesignature.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatesignature"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatesignature));
    }
    return obj;
}

QList<OAIEzsigntemplatesignature_RequestCompound> OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::getAObjEzsigntemplatesignature() const {
    return a_obj_ezsigntemplatesignature;
}
void OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::setAObjEzsigntemplatesignature(const QList<OAIEzsigntemplatesignature_RequestCompound> &a_obj_ezsigntemplatesignature) {
    this->a_obj_ezsigntemplatesignature = a_obj_ezsigntemplatesignature;
    this->m_a_obj_ezsigntemplatesignature_isSet = true;
}

bool OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::is_a_obj_ezsigntemplatesignature_Set() const{
    return m_a_obj_ezsigntemplatesignature_isSet;
}

bool OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::is_a_obj_ezsigntemplatesignature_Valid() const{
    return m_a_obj_ezsigntemplatesignature_isValid;
}

bool OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatesignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatesignature_isValid && true;
}

} // namespace OpenAPI
