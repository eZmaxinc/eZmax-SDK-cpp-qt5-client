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
 * Discussionmembership_Request.h
 *
 * A Discussionmembership Object
 */

#ifndef Discussionmembership_Request_H
#define Discussionmembership_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Discussionmembership_Request : public Object {
public:
    Discussionmembership_Request();
    Discussionmembership_Request(QString json);
    ~Discussionmembership_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiDiscussionmembershipId() const;
    void setPkiDiscussionmembershipId(const qint32 &pki_discussionmembership_id);
    bool is_pki_discussionmembership_id_Set() const;
    bool is_pki_discussionmembership_id_Valid() const;

    qint32 getFkiDiscussionId() const;
    void setFkiDiscussionId(const qint32 &fki_discussion_id);
    bool is_fki_discussion_id_Set() const;
    bool is_fki_discussion_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiModulesectionId() const;
    void setFkiModulesectionId(const qint32 &fki_modulesection_id);
    bool is_fki_modulesection_id_Set() const;
    bool is_fki_modulesection_id_Valid() const;

    QString getDtDiscussionmembershipJoined() const;
    void setDtDiscussionmembershipJoined(const QString &dt_discussionmembership_joined);
    bool is_dt_discussionmembership_joined_Set() const;
    bool is_dt_discussionmembership_joined_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_discussionmembership_id;
    bool m_pki_discussionmembership_id_isSet;
    bool m_pki_discussionmembership_id_isValid;

    qint32 m_fki_discussion_id;
    bool m_fki_discussion_id_isSet;
    bool m_fki_discussion_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 m_fki_modulesection_id;
    bool m_fki_modulesection_id_isSet;
    bool m_fki_modulesection_id_isValid;

    QString m_dt_discussionmembership_joined;
    bool m_dt_discussionmembership_joined_isSet;
    bool m_dt_discussionmembership_joined_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Discussionmembership_Request)

#endif // Discussionmembership_Request_H
