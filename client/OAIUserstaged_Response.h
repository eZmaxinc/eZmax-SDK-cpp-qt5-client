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
 * OAIUserstaged_Response.h
 *
 * A Userstaged Object
 */

#ifndef OAIUserstaged_Response_H
#define OAIUserstaged_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUserstaged_Response : public OAIObject {
public:
    OAIUserstaged_Response();
    OAIUserstaged_Response(QString json);
    ~OAIUserstaged_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserstagedId() const;
    void setPkiUserstagedId(const qint32 &pki_userstaged_id);
    bool is_pki_userstaged_id_Set() const;
    bool is_pki_userstaged_id_Valid() const;

    qint32 getFkiEmailId() const;
    void setFkiEmailId(const qint32 &fki_email_id);
    bool is_fki_email_id_Set() const;
    bool is_fki_email_id_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    QString getSUserstagedFirstname() const;
    void setSUserstagedFirstname(const QString &s_userstaged_firstname);
    bool is_s_userstaged_firstname_Set() const;
    bool is_s_userstaged_firstname_Valid() const;

    QString getSUserstagedLastname() const;
    void setSUserstagedLastname(const QString &s_userstaged_lastname);
    bool is_s_userstaged_lastname_Set() const;
    bool is_s_userstaged_lastname_Valid() const;

    QString getSUserstagedExternalid() const;
    void setSUserstagedExternalid(const QString &s_userstaged_externalid);
    bool is_s_userstaged_externalid_Set() const;
    bool is_s_userstaged_externalid_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_userstaged_id;
    bool m_pki_userstaged_id_isSet;
    bool m_pki_userstaged_id_isValid;

    qint32 m_fki_email_id;
    bool m_fki_email_id_isSet;
    bool m_fki_email_id_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString m_s_userstaged_firstname;
    bool m_s_userstaged_firstname_isSet;
    bool m_s_userstaged_firstname_isValid;

    QString m_s_userstaged_lastname;
    bool m_s_userstaged_lastname_isSet;
    bool m_s_userstaged_lastname_isValid;

    QString m_s_userstaged_externalid;
    bool m_s_userstaged_externalid_isSet;
    bool m_s_userstaged_externalid_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserstaged_Response)

#endif // OAIUserstaged_Response_H
