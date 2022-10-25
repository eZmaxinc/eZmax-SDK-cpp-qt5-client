/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAINotificationtest_Response.h
 *
 * A Notificationtest Object
 */

#ifndef OAINotificationtest_Response_H
#define OAINotificationtest_Response_H

#include <QJsonObject>

#include "OAIMultilingual_NotificationtestName.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_NotificationtestName;

class OAINotificationtest_Response : public OAIObject {
public:
    OAINotificationtest_Response();
    OAINotificationtest_Response(QString json);
    ~OAINotificationtest_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiNotificationtestId() const;
    void setPkiNotificationtestId(const qint32 &pki_notificationtest_id);
    bool is_pki_notificationtest_id_Set() const;
    bool is_pki_notificationtest_id_Valid() const;

    OAIMultilingual_NotificationtestName getObjNotificationtestName() const;
    void setObjNotificationtestName(const OAIMultilingual_NotificationtestName &obj_notificationtest_name);
    bool is_obj_notificationtest_name_Set() const;
    bool is_obj_notificationtest_name_Valid() const;

    qint32 getFkiNotificationsubsectionId() const;
    void setFkiNotificationsubsectionId(const qint32 &fki_notificationsubsection_id);
    bool is_fki_notificationsubsection_id_Set() const;
    bool is_fki_notificationsubsection_id_Valid() const;

    QString getSNotificationtestFunction() const;
    void setSNotificationtestFunction(const QString &s_notificationtest_function);
    bool is_s_notificationtest_function_Set() const;
    bool is_s_notificationtest_function_Valid() const;

    QString getSNotificationtestNameX() const;
    void setSNotificationtestNameX(const QString &s_notificationtest_name_x);
    bool is_s_notificationtest_name_x_Set() const;
    bool is_s_notificationtest_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_notificationtest_id;
    bool m_pki_notificationtest_id_isSet;
    bool m_pki_notificationtest_id_isValid;

    OAIMultilingual_NotificationtestName obj_notificationtest_name;
    bool m_obj_notificationtest_name_isSet;
    bool m_obj_notificationtest_name_isValid;

    qint32 fki_notificationsubsection_id;
    bool m_fki_notificationsubsection_id_isSet;
    bool m_fki_notificationsubsection_id_isValid;

    QString s_notificationtest_function;
    bool m_s_notificationtest_function_isSet;
    bool m_s_notificationtest_function_isValid;

    QString s_notificationtest_name_x;
    bool m_s_notificationtest_name_x_isSet;
    bool m_s_notificationtest_name_x_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAINotificationtest_Response)

#endif // OAINotificationtest_Response_H
