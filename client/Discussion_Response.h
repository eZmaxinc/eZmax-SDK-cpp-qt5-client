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
 * Discussion_Response.h
 *
 * A Discussion Object
 */

#ifndef Discussion_Response_H
#define Discussion_Response_H

#include <QJsonObject>

#include "Custom_Discussionconfiguration_Response.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Discussionconfiguration_Response;

class Discussion_Response : public Object {
public:
    Discussion_Response();
    Discussion_Response(QString json);
    ~Discussion_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiDiscussionId() const;
    void setPkiDiscussionId(const qint32 &pki_discussion_id);
    bool is_pki_discussion_id_Set() const;
    bool is_pki_discussion_id_Valid() const;

    QString getSDiscussionDescription() const;
    void setSDiscussionDescription(const QString &s_discussion_description);
    bool is_s_discussion_description_Set() const;
    bool is_s_discussion_description_Valid() const;

    bool isBDiscussionClosed() const;
    void setBDiscussionClosed(const bool &b_discussion_closed);
    bool is_b_discussion_closed_Set() const;
    bool is_b_discussion_closed_Valid() const;

    QString getDtDiscussionLastread() const;
    void setDtDiscussionLastread(const QString &dt_discussion_lastread);
    bool is_dt_discussion_lastread_Set() const;
    bool is_dt_discussion_lastread_Valid() const;

    qint32 getIDiscussionmessageCount() const;
    void setIDiscussionmessageCount(const qint32 &i_discussionmessage_count);
    bool is_i_discussionmessage_count_Set() const;
    bool is_i_discussionmessage_count_Valid() const;

    qint32 getIDiscussionmessageCountunread() const;
    void setIDiscussionmessageCountunread(const qint32 &i_discussionmessage_countunread);
    bool is_i_discussionmessage_countunread_Set() const;
    bool is_i_discussionmessage_countunread_Valid() const;

    Custom_Discussionconfiguration_Response getObjDiscussionconfiguration() const;
    void setObjDiscussionconfiguration(const Custom_Discussionconfiguration_Response &obj_discussionconfiguration);
    bool is_obj_discussionconfiguration_Set() const;
    bool is_obj_discussionconfiguration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_discussion_id;
    bool m_pki_discussion_id_isSet;
    bool m_pki_discussion_id_isValid;

    QString m_s_discussion_description;
    bool m_s_discussion_description_isSet;
    bool m_s_discussion_description_isValid;

    bool m_b_discussion_closed;
    bool m_b_discussion_closed_isSet;
    bool m_b_discussion_closed_isValid;

    QString m_dt_discussion_lastread;
    bool m_dt_discussion_lastread_isSet;
    bool m_dt_discussion_lastread_isValid;

    qint32 m_i_discussionmessage_count;
    bool m_i_discussionmessage_count_isSet;
    bool m_i_discussionmessage_count_isValid;

    qint32 m_i_discussionmessage_countunread;
    bool m_i_discussionmessage_countunread_isSet;
    bool m_i_discussionmessage_countunread_isValid;

    Custom_Discussionconfiguration_Response m_obj_discussionconfiguration;
    bool m_obj_discussionconfiguration_isSet;
    bool m_obj_discussionconfiguration_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Discussion_Response)

#endif // Discussion_Response_H
