/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_Notificationsubsectiongetnotificationtests_Response.h
 *
 * A Notificationsubsection Object in the context of getNotificationtests
 */

#ifndef OAICustom_Notificationsubsectiongetnotificationtests_Response_H
#define OAICustom_Notificationsubsectiongetnotificationtests_Response_H

#include <QJsonObject>

#include "OAICustom_Notificationsubsectiongetnotificationtests_Response_allOf.h"
#include "OAICustom_Notificationtestgetnotificationtests_Response.h"
#include "OAIMultilingual_NotificationsubsectionName.h"
#include "OAINotificationsubsection_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_NotificationsubsectionName;
class OAICustom_Notificationtestgetnotificationtests_Response;

class OAICustom_Notificationsubsectiongetnotificationtests_Response : public OAIObject {
public:
    OAICustom_Notificationsubsectiongetnotificationtests_Response();
    OAICustom_Notificationsubsectiongetnotificationtests_Response(QString json);
    ~OAICustom_Notificationsubsectiongetnotificationtests_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiNotificationsubsectionId() const;
    void setPkiNotificationsubsectionId(const qint32 &pki_notificationsubsection_id);
    bool is_pki_notificationsubsection_id_Set() const;
    bool is_pki_notificationsubsection_id_Valid() const;

    qint32 getFkiNotificationsectionId() const;
    void setFkiNotificationsectionId(const qint32 &fki_notificationsection_id);
    bool is_fki_notificationsection_id_Set() const;
    bool is_fki_notificationsection_id_Valid() const;

    OAIMultilingual_NotificationsubsectionName getObjNotificationsubsectionName() const;
    void setObjNotificationsubsectionName(const OAIMultilingual_NotificationsubsectionName &obj_notificationsubsection_name);
    bool is_obj_notificationsubsection_name_Set() const;
    bool is_obj_notificationsubsection_name_Valid() const;

    QString getSNotificationsectionNameX() const;
    void setSNotificationsectionNameX(const QString &s_notificationsection_name_x);
    bool is_s_notificationsection_name_x_Set() const;
    bool is_s_notificationsection_name_x_Valid() const;

    QString getSNotificationsubsectionNameX() const;
    void setSNotificationsubsectionNameX(const QString &s_notificationsubsection_name_x);
    bool is_s_notificationsubsection_name_x_Set() const;
    bool is_s_notificationsubsection_name_x_Valid() const;

    QList<OAICustom_Notificationtestgetnotificationtests_Response> getAObjNotificationtest() const;
    void setAObjNotificationtest(const QList<OAICustom_Notificationtestgetnotificationtests_Response> &a_obj_notificationtest);
    bool is_a_obj_notificationtest_Set() const;
    bool is_a_obj_notificationtest_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_notificationsubsection_id;
    bool m_pki_notificationsubsection_id_isSet;
    bool m_pki_notificationsubsection_id_isValid;

    qint32 fki_notificationsection_id;
    bool m_fki_notificationsection_id_isSet;
    bool m_fki_notificationsection_id_isValid;

    OAIMultilingual_NotificationsubsectionName obj_notificationsubsection_name;
    bool m_obj_notificationsubsection_name_isSet;
    bool m_obj_notificationsubsection_name_isValid;

    QString s_notificationsection_name_x;
    bool m_s_notificationsection_name_x_isSet;
    bool m_s_notificationsection_name_x_isValid;

    QString s_notificationsubsection_name_x;
    bool m_s_notificationsubsection_name_x_isSet;
    bool m_s_notificationsubsection_name_x_isValid;

    QList<OAICustom_Notificationtestgetnotificationtests_Response> a_obj_notificationtest;
    bool m_a_obj_notificationtest_isSet;
    bool m_a_obj_notificationtest_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Notificationsubsectiongetnotificationtests_Response)

#endif // OAICustom_Notificationsubsectiongetnotificationtests_Response_H
