/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIWebhook_Ezsign_DocumentCompleted.h
 *
 * This is the base Webhook object
 */

#ifndef OAIWebhook_Ezsign_DocumentCompleted_H
#define OAIWebhook_Ezsign_DocumentCompleted_H

#include <QJsonObject>

#include "OAIAttempt_Response.h"
#include "OAICommon_Webhook.h"
#include "OAIEzsigndocument_Response.h"
#include "OAIWebhook_Ezsign_DocumentCompleted_allOf.h"
#include "OAIWebhook_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIWebhook_Ezsign_DocumentCompleted : public OAIObject {
public:
    OAIWebhook_Ezsign_DocumentCompleted();
    OAIWebhook_Ezsign_DocumentCompleted(QString json);
    ~OAIWebhook_Ezsign_DocumentCompleted() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_Response getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_Response &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    OAIWebhook_Response getObjWebhook() const;
    void setObjWebhook(const OAIWebhook_Response &obj_webhook);
    bool is_obj_webhook_Set() const;
    bool is_obj_webhook_Valid() const;

    QList<OAIAttempt_Response> getAObjAttempt() const;
    void setAObjAttempt(const QList<OAIAttempt_Response> &a_obj_attempt);
    bool is_a_obj_attempt_Set() const;
    bool is_a_obj_attempt_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_Response obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;

    OAIWebhook_Response obj_webhook;
    bool m_obj_webhook_isSet;
    bool m_obj_webhook_isValid;

    QList<OAIAttempt_Response> a_obj_attempt;
    bool m_a_obj_attempt_isSet;
    bool m_a_obj_attempt_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_Ezsign_DocumentCompleted)

#endif // OAIWebhook_Ezsign_DocumentCompleted_H
