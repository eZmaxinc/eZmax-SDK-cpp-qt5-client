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

/*
 * OAINotificationsection_getNotificationtests_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/notificationsection/{pkiNotificationsectionID}/getNotificationtests
 */

#ifndef OAINotificationsection_getNotificationtests_v1_Response_mPayload_H
#define OAINotificationsection_getNotificationtests_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_Notificationsubsectiongetnotificationtests_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_Notificationsubsectiongetnotificationtests_Response;

class OAINotificationsection_getNotificationtests_v1_Response_mPayload : public OAIObject {
public:
    OAINotificationsection_getNotificationtests_v1_Response_mPayload();
    OAINotificationsection_getNotificationtests_v1_Response_mPayload(QString json);
    ~OAINotificationsection_getNotificationtests_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICustom_Notificationsubsectiongetnotificationtests_Response> getAObjNotificationsubsection() const;
    void setAObjNotificationsubsection(const QList<OAICustom_Notificationsubsectiongetnotificationtests_Response> &a_obj_notificationsubsection);
    bool is_a_obj_notificationsubsection_Set() const;
    bool is_a_obj_notificationsubsection_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICustom_Notificationsubsectiongetnotificationtests_Response> m_a_obj_notificationsubsection;
    bool m_a_obj_notificationsubsection_isSet;
    bool m_a_obj_notificationsubsection_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINotificationsection_getNotificationtests_v1_Response_mPayload)

#endif // OAINotificationsection_getNotificationtests_v1_Response_mPayload_H
