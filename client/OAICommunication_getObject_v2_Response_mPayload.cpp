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

#include "OAICommunication_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommunication_getObject_v2_Response_mPayload::OAICommunication_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunication_getObject_v2_Response_mPayload::OAICommunication_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAICommunication_getObject_v2_Response_mPayload::~OAICommunication_getObject_v2_Response_mPayload() {}

void OAICommunication_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_communication_isSet = false;
    m_obj_communication_isValid = false;
}

void OAICommunication_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunication_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_communication_isValid = ::OpenAPI::fromJsonValue(obj_communication, json[QString("objCommunication")]);
    m_obj_communication_isSet = !json[QString("objCommunication")].isNull() && m_obj_communication_isValid;
}

QString OAICommunication_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunication_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_communication.isSet()) {
        obj.insert(QString("objCommunication"), ::OpenAPI::toJsonValue(obj_communication));
    }
    return obj;
}

OAICommunication_ResponseCompound OAICommunication_getObject_v2_Response_mPayload::getObjCommunication() const {
    return obj_communication;
}
void OAICommunication_getObject_v2_Response_mPayload::setObjCommunication(const OAICommunication_ResponseCompound &obj_communication) {
    this->obj_communication = obj_communication;
    this->m_obj_communication_isSet = true;
}

bool OAICommunication_getObject_v2_Response_mPayload::is_obj_communication_Set() const{
    return m_obj_communication_isSet;
}

bool OAICommunication_getObject_v2_Response_mPayload::is_obj_communication_Valid() const{
    return m_obj_communication_isValid;
}

bool OAICommunication_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_communication.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunication_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_communication_isValid && true;
}

} // namespace OpenAPI
