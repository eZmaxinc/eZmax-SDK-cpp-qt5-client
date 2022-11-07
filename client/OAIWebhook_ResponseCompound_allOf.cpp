/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_ResponseCompound_allOf::OAIWebhook_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_ResponseCompound_allOf::OAIWebhook_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIWebhook_ResponseCompound_allOf::~OAIWebhook_ResponseCompound_allOf() {}

void OAIWebhook_ResponseCompound_allOf::initializeModel() {

    m_s_webhook_event_isSet = false;
    m_s_webhook_event_isValid = false;
}

void OAIWebhook_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_s_webhook_event_isValid = ::OpenAPI::fromJsonValue(s_webhook_event, json[QString("sWebhookEvent")]);
    m_s_webhook_event_isSet = !json[QString("sWebhookEvent")].isNull() && m_s_webhook_event_isValid;
}

QString OAIWebhook_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_s_webhook_event_isSet) {
        obj.insert(QString("sWebhookEvent"), ::OpenAPI::toJsonValue(s_webhook_event));
    }
    return obj;
}

QString OAIWebhook_ResponseCompound_allOf::getSWebhookEvent() const {
    return s_webhook_event;
}
void OAIWebhook_ResponseCompound_allOf::setSWebhookEvent(const QString &s_webhook_event) {
    this->s_webhook_event = s_webhook_event;
    this->m_s_webhook_event_isSet = true;
}

bool OAIWebhook_ResponseCompound_allOf::is_s_webhook_event_Set() const{
    return m_s_webhook_event_isSet;
}

bool OAIWebhook_ResponseCompound_allOf::is_s_webhook_event_Valid() const{
    return m_s_webhook_event_isValid;
}

bool OAIWebhook_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_webhook_event_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
