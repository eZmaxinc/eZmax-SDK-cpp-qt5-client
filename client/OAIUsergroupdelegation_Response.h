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
 * OAIUsergroupdelegation_Response.h
 *
 * A Usergroupdelegation Object
 */

#ifndef OAIUsergroupdelegation_Response_H
#define OAIUsergroupdelegation_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroupdelegation_Response : public OAIObject {
public:
    OAIUsergroupdelegation_Response();
    OAIUsergroupdelegation_Response(QString json);
    ~OAIUsergroupdelegation_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupdelegationId() const;
    void setPkiUsergroupdelegationId(const qint32 &pki_usergroupdelegation_id);
    bool is_pki_usergroupdelegation_id_Set() const;
    bool is_pki_usergroupdelegation_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    QString getSUsergroupNameX() const;
    void setSUsergroupNameX(const QString &s_usergroup_name_x);
    bool is_s_usergroup_name_x_Set() const;
    bool is_s_usergroup_name_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroupdelegation_id;
    bool m_pki_usergroupdelegation_id_isSet;
    bool m_pki_usergroupdelegation_id_isValid;

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    QString m_s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString m_s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString m_s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString m_s_usergroup_name_x;
    bool m_s_usergroup_name_x_isSet;
    bool m_s_usergroup_name_x_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroupdelegation_Response)

#endif // OAIUsergroupdelegation_Response_H
