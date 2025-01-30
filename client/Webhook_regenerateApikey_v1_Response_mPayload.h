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

/*
 * Webhook_regenerateApikey_v1_Response_mPayload.h
 *
 * Response for POST /1/object/webhook/{pkiWebhookID}/regenerateApikey
 */

#ifndef Webhook_regenerateApikey_v1_Response_mPayload_H
#define Webhook_regenerateApikey_v1_Response_mPayload_H

#include <QJsonObject>

#include "Webhook_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Webhook_ResponseCompound;

class Webhook_regenerateApikey_v1_Response_mPayload : public Object {
public:
    Webhook_regenerateApikey_v1_Response_mPayload();
    Webhook_regenerateApikey_v1_Response_mPayload(QString json);
    ~Webhook_regenerateApikey_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Webhook_ResponseCompound getObjWebhook() const;
    void setObjWebhook(const Webhook_ResponseCompound &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Webhook_ResponseCompound m_obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_regenerateApikey_v1_Response_mPayload)

#endif // Webhook_regenerateApikey_v1_Response_mPayload_H
