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

/*
 * Webhook_Ezsign_DocumentUnsent.h
 *
 * This is the base Webhook object
 */

#ifndef Webhook_Ezsign_DocumentUnsent_H
#define Webhook_Ezsign_DocumentUnsent_H

#include <QJsonObject>

#include "Attempt_ResponseCompound.h"
#include "Custom_Webhook_Response.h"
#include "Ezsigndocument_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Webhook_Response;
class Attempt_ResponseCompound;
class Ezsigndocument_Response;

class Webhook_Ezsign_DocumentUnsent : public Object {
public:
    Webhook_Ezsign_DocumentUnsent();
    Webhook_Ezsign_DocumentUnsent(QString json);
    ~Webhook_Ezsign_DocumentUnsent() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Custom_Webhook_Response getObjWebhook() const;
    void setObjWebhook(const Custom_Webhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<Attempt_ResponseCompound> getAObjAttempt() const;
    void setAObjAttempt(const QList<Attempt_ResponseCompound> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    Ezsigndocument_Response getObjEzsigndocument() const;
    void setObjEzsigndocument(const Ezsigndocument_Response &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Custom_Webhook_Response m_obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<Attempt_ResponseCompound> m_a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;

    Ezsigndocument_Response m_obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Webhook_Ezsign_DocumentUnsent)

#endif // Webhook_Ezsign_DocumentUnsent_H
