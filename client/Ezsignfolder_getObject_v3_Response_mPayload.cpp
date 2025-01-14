/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignfolder_getObject_v3_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfolder_getObject_v3_Response_mPayload::Ezsignfolder_getObject_v3_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfolder_getObject_v3_Response_mPayload::Ezsignfolder_getObject_v3_Response_mPayload() {
    this->initializeModel();
}

Ezsignfolder_getObject_v3_Response_mPayload::~Ezsignfolder_getObject_v3_Response_mPayload() {}

void Ezsignfolder_getObject_v3_Response_mPayload::initializeModel() {

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;
}

void Ezsignfolder_getObject_v3_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfolder_getObject_v3_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfolder_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;
}

QString Ezsignfolder_getObject_v3_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfolder_getObject_v3_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfolder));
    }
    return obj;
}

Ezsignfolder_ResponseCompoundV3 Ezsignfolder_getObject_v3_Response_mPayload::getObjEzsignfolder() const {
    return m_obj_ezsignfolder;
}
void Ezsignfolder_getObject_v3_Response_mPayload::setObjEzsignfolder(const Ezsignfolder_ResponseCompoundV3 &obj_ezsignfolder) {
    m_obj_ezsignfolder = obj_ezsignfolder;
    m_obj_ezsignfolder_isSet = true;
}

bool Ezsignfolder_getObject_v3_Response_mPayload::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool Ezsignfolder_getObject_v3_Response_mPayload::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

bool Ezsignfolder_getObject_v3_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignfolder.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfolder_getObject_v3_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfolder_isValid && true;
}

} // namespace Ezmaxapi
