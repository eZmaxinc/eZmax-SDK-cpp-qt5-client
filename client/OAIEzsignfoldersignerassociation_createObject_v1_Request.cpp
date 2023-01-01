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

#include "OAIEzsignfoldersignerassociation_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_createObject_v1_Request::OAIEzsignfoldersignerassociation_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_createObject_v1_Request::OAIEzsignfoldersignerassociation_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_createObject_v1_Request::~OAIEzsignfoldersignerassociation_createObject_v1_Request() {}

void OAIEzsignfoldersignerassociation_createObject_v1_Request::initializeModel() {

    m_obj_ezsignfoldersignerassociation_isSet = false;
    m_obj_ezsignfoldersignerassociation_isValid = false;

    m_obj_ezsignfoldersignerassociation_compound_isSet = false;
    m_obj_ezsignfoldersignerassociation_compound_isValid = false;
}

void OAIEzsignfoldersignerassociation_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfoldersignerassociation, json[QString("objEzsignfoldersignerassociation")]);
    m_obj_ezsignfoldersignerassociation_isSet = !json[QString("objEzsignfoldersignerassociation")].isNull() && m_obj_ezsignfoldersignerassociation_isValid;

    m_obj_ezsignfoldersignerassociation_compound_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfoldersignerassociation_compound, json[QString("objEzsignfoldersignerassociationCompound")]);
    m_obj_ezsignfoldersignerassociation_compound_isSet = !json[QString("objEzsignfoldersignerassociationCompound")].isNull() && m_obj_ezsignfoldersignerassociation_compound_isValid;
}

QString OAIEzsignfoldersignerassociation_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfoldersignerassociation.isSet()) {
        obj.insert(QString("objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(obj_ezsignfoldersignerassociation));
    }
    if (obj_ezsignfoldersignerassociation_compound.isSet()) {
        obj.insert(QString("objEzsignfoldersignerassociationCompound"), ::OpenAPI::toJsonValue(obj_ezsignfoldersignerassociation_compound));
    }
    return obj;
}

OAIEzsignfoldersignerassociation_Request OAIEzsignfoldersignerassociation_createObject_v1_Request::getObjEzsignfoldersignerassociation() const {
    return obj_ezsignfoldersignerassociation;
}
void OAIEzsignfoldersignerassociation_createObject_v1_Request::setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_Request &obj_ezsignfoldersignerassociation) {
    this->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    this->m_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsignfoldersignerassociation_createObject_v1_Request::is_obj_ezsignfoldersignerassociation_Set() const{
    return m_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsignfoldersignerassociation_createObject_v1_Request::is_obj_ezsignfoldersignerassociation_Valid() const{
    return m_obj_ezsignfoldersignerassociation_isValid;
}

OAIEzsignfoldersignerassociation_RequestCompound OAIEzsignfoldersignerassociation_createObject_v1_Request::getObjEzsignfoldersignerassociationCompound() const {
    return obj_ezsignfoldersignerassociation_compound;
}
void OAIEzsignfoldersignerassociation_createObject_v1_Request::setObjEzsignfoldersignerassociationCompound(const OAIEzsignfoldersignerassociation_RequestCompound &obj_ezsignfoldersignerassociation_compound) {
    this->obj_ezsignfoldersignerassociation_compound = obj_ezsignfoldersignerassociation_compound;
    this->m_obj_ezsignfoldersignerassociation_compound_isSet = true;
}

bool OAIEzsignfoldersignerassociation_createObject_v1_Request::is_obj_ezsignfoldersignerassociation_compound_Set() const{
    return m_obj_ezsignfoldersignerassociation_compound_isSet;
}

bool OAIEzsignfoldersignerassociation_createObject_v1_Request::is_obj_ezsignfoldersignerassociation_compound_Valid() const{
    return m_obj_ezsignfoldersignerassociation_compound_isValid;
}

bool OAIEzsignfoldersignerassociation_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfoldersignerassociation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsignfoldersignerassociation_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
