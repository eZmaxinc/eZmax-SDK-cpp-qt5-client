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

#include "Ezsignfoldertype_getObject_v4_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignfoldertype_getObject_v4_Response_mPayload::Ezsignfoldertype_getObject_v4_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignfoldertype_getObject_v4_Response_mPayload::Ezsignfoldertype_getObject_v4_Response_mPayload() {
    this->initializeModel();
}

Ezsignfoldertype_getObject_v4_Response_mPayload::~Ezsignfoldertype_getObject_v4_Response_mPayload() {}

void Ezsignfoldertype_getObject_v4_Response_mPayload::initializeModel() {

    m_obj_ezsignfoldertype_isSet = false;
    m_obj_ezsignfoldertype_isValid = false;
}

void Ezsignfoldertype_getObject_v4_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignfoldertype_getObject_v4_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfoldertype_isValid = ::Ezmaxapi::fromJsonValue(m_obj_ezsignfoldertype, json[QString("objEzsignfoldertype")]);
    m_obj_ezsignfoldertype_isSet = !json[QString("objEzsignfoldertype")].isNull() && m_obj_ezsignfoldertype_isValid;
}

QString Ezsignfoldertype_getObject_v4_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignfoldertype_getObject_v4_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_ezsignfoldertype.isSet()) {
        obj.insert(QString("objEzsignfoldertype"), ::Ezmaxapi::toJsonValue(m_obj_ezsignfoldertype));
    }
    return obj;
}

Ezsignfoldertype_ResponseCompoundV4 Ezsignfoldertype_getObject_v4_Response_mPayload::getObjEzsignfoldertype() const {
    return m_obj_ezsignfoldertype;
}
void Ezsignfoldertype_getObject_v4_Response_mPayload::setObjEzsignfoldertype(const Ezsignfoldertype_ResponseCompoundV4 &obj_ezsignfoldertype) {
    m_obj_ezsignfoldertype = obj_ezsignfoldertype;
    m_obj_ezsignfoldertype_isSet = true;
}

bool Ezsignfoldertype_getObject_v4_Response_mPayload::is_obj_ezsignfoldertype_Set() const{
    return m_obj_ezsignfoldertype_isSet;
}

bool Ezsignfoldertype_getObject_v4_Response_mPayload::is_obj_ezsignfoldertype_Valid() const{
    return m_obj_ezsignfoldertype_isValid;
}

bool Ezsignfoldertype_getObject_v4_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_ezsignfoldertype.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignfoldertype_getObject_v4_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfoldertype_isValid && true;
}

} // namespace Ezmaxapi
