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

#include "OAIEzsignfoldersignerassociation_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_createObject_v2_Request::OAIEzsignfoldersignerassociation_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_createObject_v2_Request::OAIEzsignfoldersignerassociation_createObject_v2_Request() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_createObject_v2_Request::~OAIEzsignfoldersignerassociation_createObject_v2_Request() {}

void OAIEzsignfoldersignerassociation_createObject_v2_Request::initializeModel() {

    m_a_obj_ezsignfoldersignerassociation_isSet = false;
    m_a_obj_ezsignfoldersignerassociation_isValid = false;
}

void OAIEzsignfoldersignerassociation_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldersignerassociation, json[QString("a_objEzsignfoldersignerassociation")]);
    m_a_obj_ezsignfoldersignerassociation_isSet = !json[QString("a_objEzsignfoldersignerassociation")].isNull() && m_a_obj_ezsignfoldersignerassociation_isValid;
}

QString OAIEzsignfoldersignerassociation_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfoldersignerassociation.size() > 0) {
        obj.insert(QString("a_objEzsignfoldersignerassociation"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldersignerassociation));
    }
    return obj;
}

QList<OAIEzsignfoldersignerassociation_RequestCompound> OAIEzsignfoldersignerassociation_createObject_v2_Request::getAObjEzsignfoldersignerassociation() const {
    return a_obj_ezsignfoldersignerassociation;
}
void OAIEzsignfoldersignerassociation_createObject_v2_Request::setAObjEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_RequestCompound> &a_obj_ezsignfoldersignerassociation) {
    this->a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;
    this->m_a_obj_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsignfoldersignerassociation_createObject_v2_Request::is_a_obj_ezsignfoldersignerassociation_Set() const{
    return m_a_obj_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsignfoldersignerassociation_createObject_v2_Request::is_a_obj_ezsignfoldersignerassociation_Valid() const{
    return m_a_obj_ezsignfoldersignerassociation_isValid;
}

bool OAIEzsignfoldersignerassociation_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfoldersignerassociation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldersignerassociation_isValid && true;
}

} // namespace OpenAPI
