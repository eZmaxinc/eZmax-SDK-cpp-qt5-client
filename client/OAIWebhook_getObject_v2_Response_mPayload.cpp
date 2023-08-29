/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_getObject_v2_Response_mPayload::OAIWebhook_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_getObject_v2_Response_mPayload::OAIWebhook_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIWebhook_getObject_v2_Response_mPayload::~OAIWebhook_getObject_v2_Response_mPayload() {}

void OAIWebhook_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;
}

void OAIWebhook_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(m_obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;
}

QString OAIWebhook_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(m_obj_webhook));
    }
    return obj;
}

OAIWebhook_ResponseCompound OAIWebhook_getObject_v2_Response_mPayload::getObjWebhook() const {
    return m_obj_webhook;
}
void OAIWebhook_getObject_v2_Response_mPayload::setObjWebhook(const OAIWebhook_ResponseCompound &obj_webhook) {
    m_obj_webhook = obj_webhook;
    m_obj_webhook_isSet = true;
}

bool OAIWebhook_getObject_v2_Response_mPayload::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAIWebhook_getObject_v2_Response_mPayload::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

bool OAIWebhook_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_webhook.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && true;
}

} // namespace OpenAPI
