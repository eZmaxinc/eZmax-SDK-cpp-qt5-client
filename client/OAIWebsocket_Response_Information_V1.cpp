/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebsocket_Response_Information_V1.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebsocket_Response_Information_V1::OAIWebsocket_Response_Information_V1(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebsocket_Response_Information_V1::OAIWebsocket_Response_Information_V1() {
    this->initializeModel();
}

OAIWebsocket_Response_Information_V1::~OAIWebsocket_Response_Information_V1() {}

void OAIWebsocket_Response_Information_V1::initializeModel() {

    m_e_websocket_messagetype_isSet = false;
    m_e_websocket_messagetype_isValid = false;

    m_m_payload_isSet = false;
    m_m_payload_isValid = false;
}

void OAIWebsocket_Response_Information_V1::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebsocket_Response_Information_V1::fromJsonObject(QJsonObject json) {

    m_e_websocket_messagetype_isValid = ::OpenAPI::fromJsonValue(m_e_websocket_messagetype, json[QString("eWebsocketMessagetype")]);
    m_e_websocket_messagetype_isSet = !json[QString("eWebsocketMessagetype")].isNull() && m_e_websocket_messagetype_isValid;

    m_m_payload_isValid = ::OpenAPI::fromJsonValue(m_m_payload, json[QString("mPayload")]);
    m_m_payload_isSet = !json[QString("mPayload")].isNull() && m_m_payload_isValid;
}

QString OAIWebsocket_Response_Information_V1::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebsocket_Response_Information_V1::asJsonObject() const {
    QJsonObject obj;
    if (m_e_websocket_messagetype_isSet) {
        obj.insert(QString("eWebsocketMessagetype"), ::OpenAPI::toJsonValue(m_e_websocket_messagetype));
    }
    if (m_m_payload.isSet()) {
        obj.insert(QString("mPayload"), ::OpenAPI::toJsonValue(m_m_payload));
    }
    return obj;
}

QString OAIWebsocket_Response_Information_V1::getEWebsocketMessagetype() const {
    return m_e_websocket_messagetype;
}
void OAIWebsocket_Response_Information_V1::setEWebsocketMessagetype(const QString &e_websocket_messagetype) {
    m_e_websocket_messagetype = e_websocket_messagetype;
    m_e_websocket_messagetype_isSet = true;
}

bool OAIWebsocket_Response_Information_V1::is_e_websocket_messagetype_Set() const{
    return m_e_websocket_messagetype_isSet;
}

bool OAIWebsocket_Response_Information_V1::is_e_websocket_messagetype_Valid() const{
    return m_e_websocket_messagetype_isValid;
}

OAIWebsocket_Response_Information_V1_mPayload OAIWebsocket_Response_Information_V1::getMPayload() const {
    return m_m_payload;
}
void OAIWebsocket_Response_Information_V1::setMPayload(const OAIWebsocket_Response_Information_V1_mPayload &m_payload) {
    m_m_payload = m_payload;
    m_m_payload_isSet = true;
}

bool OAIWebsocket_Response_Information_V1::is_m_payload_Set() const{
    return m_m_payload_isSet;
}

bool OAIWebsocket_Response_Information_V1::is_m_payload_Valid() const{
    return m_m_payload_isValid;
}

bool OAIWebsocket_Response_Information_V1::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_websocket_messagetype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_m_payload.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebsocket_Response_Information_V1::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_websocket_messagetype_isValid && m_m_payload_isValid && true;
}

} // namespace OpenAPI
