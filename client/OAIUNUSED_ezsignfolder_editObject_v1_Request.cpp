/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUNUSED_ezsignfolder_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUNUSED_ezsignfolder_editObject_v1_Request::OAIUNUSED_ezsignfolder_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUNUSED_ezsignfolder_editObject_v1_Request::OAIUNUSED_ezsignfolder_editObject_v1_Request() {
    this->initializeModel();
}

OAIUNUSED_ezsignfolder_editObject_v1_Request::~OAIUNUSED_ezsignfolder_editObject_v1_Request() {}

void OAIUNUSED_ezsignfolder_editObject_v1_Request::initializeModel() {

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;
}

void OAIUNUSED_ezsignfolder_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUNUSED_ezsignfolder_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;
}

QString OAIUNUSED_ezsignfolder_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUNUSED_ezsignfolder_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::OpenAPI::toJsonValue(obj_ezsignfolder));
    }
    return obj;
}

OAIEzsignfolder_Request OAIUNUSED_ezsignfolder_editObject_v1_Request::getObjEzsignfolder() const {
    return obj_ezsignfolder;
}
void OAIUNUSED_ezsignfolder_editObject_v1_Request::setObjEzsignfolder(const OAIEzsignfolder_Request &obj_ezsignfolder) {
    this->obj_ezsignfolder = obj_ezsignfolder;
    this->m_obj_ezsignfolder_isSet = true;
}

bool OAIUNUSED_ezsignfolder_editObject_v1_Request::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool OAIUNUSED_ezsignfolder_editObject_v1_Request::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

bool OAIUNUSED_ezsignfolder_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfolder.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUNUSED_ezsignfolder_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
