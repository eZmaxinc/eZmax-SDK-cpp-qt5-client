/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIContactinformations_Request.h
 *
 * A Contactinformations Object
 */

#ifndef OAIContactinformations_Request_H
#define OAIContactinformations_Request_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIContactinformations_Request : public OAIObject {
public:
    OAIContactinformations_Request();
    OAIContactinformations_Request(QString json);
    ~OAIContactinformations_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIAddressDefault() const;
    void setIAddressDefault(const qint32 &i_address_default);
    bool is_i_address_default_Set() const;
    bool is_i_address_default_Valid() const;

    qint32 getIPhoneDefault() const;
    void setIPhoneDefault(const qint32 &i_phone_default);
    bool is_i_phone_default_Set() const;
    bool is_i_phone_default_Valid() const;

    qint32 getIEmailDefault() const;
    void setIEmailDefault(const qint32 &i_email_default);
    bool is_i_email_default_Set() const;
    bool is_i_email_default_Valid() const;

    qint32 getIWebsiteDefault() const;
    void setIWebsiteDefault(const qint32 &i_website_default);
    bool is_i_website_default_Set() const;
    bool is_i_website_default_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 i_address_default;
    bool m_i_address_default_isSet;
    bool m_i_address_default_isValid;

    qint32 i_phone_default;
    bool m_i_phone_default_isSet;
    bool m_i_phone_default_isValid;

    qint32 i_email_default;
    bool m_i_email_default_isSet;
    bool m_i_email_default_isValid;

    qint32 i_website_default;
    bool m_i_website_default_isSet;
    bool m_i_website_default_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIContactinformations_Request)

#endif // OAIContactinformations_Request_H
