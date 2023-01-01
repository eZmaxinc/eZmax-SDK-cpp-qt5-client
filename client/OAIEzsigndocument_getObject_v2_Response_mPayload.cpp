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

#include "OAIEzsigndocument_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getObject_v2_Response_mPayload::OAIEzsigndocument_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getObject_v2_Response_mPayload::OAIEzsigndocument_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getObject_v2_Response_mPayload::~OAIEzsigndocument_getObject_v2_Response_mPayload() {}

void OAIEzsigndocument_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigndocument_isSet = false;
    m_obj_ezsigndocument_isValid = false;
}

void OAIEzsigndocument_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigndocument, json[QString("objEzsigndocument")]);
    m_obj_ezsigndocument_isSet = !json[QString("objEzsigndocument")].isNull() && m_obj_ezsigndocument_isValid;
}

QString OAIEzsigndocument_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigndocument.isSet()) {
        obj.insert(QString("objEzsigndocument"), ::OpenAPI::toJsonValue(obj_ezsigndocument));
    }
    return obj;
}

OAIEzsigndocument_ResponseCompound OAIEzsigndocument_getObject_v2_Response_mPayload::getObjEzsigndocument() const {
    return obj_ezsigndocument;
}
void OAIEzsigndocument_getObject_v2_Response_mPayload::setObjEzsigndocument(const OAIEzsigndocument_ResponseCompound &obj_ezsigndocument) {
    this->obj_ezsigndocument = obj_ezsigndocument;
    this->m_obj_ezsigndocument_isSet = true;
}

bool OAIEzsigndocument_getObject_v2_Response_mPayload::is_obj_ezsigndocument_Set() const{
    return m_obj_ezsigndocument_isSet;
}

bool OAIEzsigndocument_getObject_v2_Response_mPayload::is_obj_ezsigndocument_Valid() const{
    return m_obj_ezsigndocument_isValid;
}

bool OAIEzsigndocument_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigndocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigndocument_isValid && true;
}

} // namespace OpenAPI
