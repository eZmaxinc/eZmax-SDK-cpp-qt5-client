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

#include "OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request() {
    this->initializeModel();
}

OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::~OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request() {}

void OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::initializeModel() {

    m_obj_ezsignfoldersignerassociation_isSet = false;
    m_obj_ezsignfoldersignerassociation_isValid = false;
}

void OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfoldersignerassociation, json[QString("objEzsignfoldersignerassociation")]);
    m_obj_ezsignfoldersignerassociation_isSet = !json[QString("objEzsignfoldersignerassociation")].isNull() && m_obj_ezsignfoldersignerassociation_isValid;
}

QString OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfoldersignerassociation.isSet()) {
        obj.insert(QString("objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(obj_ezsignfoldersignerassociation));
    }
    return obj;
}

OAIEzsignfoldersignerassociation_Request OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::getObjEzsignfoldersignerassociation() const {
    return obj_ezsignfoldersignerassociation;
}
void OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_Request &obj_ezsignfoldersignerassociation) {
    this->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    this->m_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::is_obj_ezsignfoldersignerassociation_Set() const{
    return m_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::is_obj_ezsignfoldersignerassociation_Valid() const{
    return m_obj_ezsignfoldersignerassociation_isValid;
}

bool OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfoldersignerassociation.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
