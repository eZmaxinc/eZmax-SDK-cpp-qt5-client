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

/*
 * OAIWebhook_createObject_v1_Request.h
 *
 * Request for POST /1/object/webhook
 */

#ifndef OAIWebhook_createObject_v1_Request_H
#define OAIWebhook_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIWebhook_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIWebhook_RequestCompound;

class OAIWebhook_createObject_v1_Request : public OAIObject {
public:
    OAIWebhook_createObject_v1_Request();
    OAIWebhook_createObject_v1_Request(QString json);
    ~OAIWebhook_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIWebhook_RequestCompound> getAObjWebhook() const;
    void setAObjWebhook(const QList<OAIWebhook_RequestCompound> &a_obj_webhook);
    bool is_a_obj_webhook_Set() const;
    bool is_a_obj_webhook_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIWebhook_RequestCompound> a_obj_webhook;
    bool m_a_obj_webhook_isSet;
    bool m_a_obj_webhook_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_createObject_v1_Request)

#endif // OAIWebhook_createObject_v1_Request_H
