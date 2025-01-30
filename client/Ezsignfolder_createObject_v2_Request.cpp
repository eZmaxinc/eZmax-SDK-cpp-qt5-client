/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignfolder_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_createObject_v2_Request::Ezsignfolder_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_createObject_v2_Request::Ezsignfolder_createObject_v2_Request() {
    this->initializeModel();
}

Ezsignfolder_createObject_v2_Request::~Ezsignfolder_createObject_v2_Request() {}

void Ezsignfolder_createObject_v2_Request::initializeModel() {

    m_a_obj_ezsignfolder_isSet = false;
    m_a_obj_ezsignfolder_isValid = false;
}

void Ezsignfolder_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignfolder, json[QString("a_objEzsignfolder")]);
    m_a_obj_ezsignfolder_isSet = !json[QString("a_objEzsignfolder")].isNull() && m_a_obj_ezsignfolder_isValid;
}

QString Ezsignfolder_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignfolder.size() > 0) {
        obj.insert(QString("a_objEzsignfolder"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignfolder));
    }
    return obj;
}

QList<Ezsignfolder_RequestCompound> Ezsignfolder_createObject_v2_Request::getAObjEzsignfolder() const {
    return m_a_obj_ezsignfolder;
}
void Ezsignfolder_createObject_v2_Request::setAObjEzsignfolder(const QList<Ezsignfolder_RequestCompound> &a_obj_ezsignfolder) {
    m_a_obj_ezsignfolder = a_obj_ezsignfolder;
    m_a_obj_ezsignfolder_isSet = true;
}

bool Ezsignfolder_createObject_v2_Request::is_a_obj_ezsignfolder_Set() const{
    return m_a_obj_ezsignfolder_isSet;
}

bool Ezsignfolder_createObject_v2_Request::is_a_obj_ezsignfolder_Valid() const{
    return m_a_obj_ezsignfolder_isValid;
}

bool Ezsignfolder_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignfolder.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfolder_isValid && true;
}

} // namespace Ezmaxapi
