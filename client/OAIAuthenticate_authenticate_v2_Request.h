/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAuthenticate_authenticate_v2_Request.h
 *
 * Request for the /2/module/authenticate/authenticate API Request
 */

#ifndef OAIAuthenticate_authenticate_v2_Request_H
#define OAIAuthenticate_authenticate_v2_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAuthenticate_authenticate_v2_Request : public OAIObject {
public:
    OAIAuthenticate_authenticate_v2_Request();
    OAIAuthenticate_authenticate_v2_Request(QString json);
    ~OAIAuthenticate_authenticate_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    QString getSPassword() const;
    void setSPassword(const QString &s_password);
    bool is_s_password_Set() const;
    bool is_s_password_Valid() const;

    QString getSPasswordEncrypted() const;
    void setSPasswordEncrypted(const QString &s_password_encrypted);
    bool is_s_password_encrypted_Set() const;
    bool is_s_password_encrypted_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    QString s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    QString s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    QString s_password;
    bool m_s_password_isSet;
    bool m_s_password_isValid;

    QString s_password_encrypted;
    bool m_s_password_encrypted_isSet;
    bool m_s_password_encrypted_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAuthenticate_authenticate_v2_Request)

#endif // OAIAuthenticate_authenticate_v2_Request_H
