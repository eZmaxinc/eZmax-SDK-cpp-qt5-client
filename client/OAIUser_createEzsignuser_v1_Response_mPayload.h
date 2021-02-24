/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser_createEzsignuser_v1_Response_mPayload.h
 *
 * Payload for the /1/module/user/createEzsignuser API Request
 */

#ifndef OAIUser_createEzsignuser_v1_Response_mPayload_H
#define OAIUser_createEzsignuser_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUser_createEzsignuser_v1_Response_mPayload : public OAIObject {
public:
    OAIUser_createEzsignuser_v1_Response_mPayload();
    OAIUser_createEzsignuser_v1_Response_mPayload(QString json);
    ~OAIUser_createEzsignuser_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<QString> getASEmailAddressSuccess() const;
    void setASEmailAddressSuccess(const QList<QString> &a_s_email_address_success);
    bool is_a_s_email_address_success_Set() const;
    bool is_a_s_email_address_success_Valid() const;

    QList<QString> getASEmailAddressFailure() const;
    void setASEmailAddressFailure(const QList<QString> &a_s_email_address_failure);
    bool is_a_s_email_address_failure_Set() const;
    bool is_a_s_email_address_failure_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<QString> a_s_email_address_success;
    bool m_a_s_email_address_success_isSet;
    bool m_a_s_email_address_success_isValid;

    QList<QString> a_s_email_address_failure;
    bool m_a_s_email_address_failure_isSet;
    bool m_a_s_email_address_failure_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_createEzsignuser_v1_Response_mPayload)

#endif // OAIUser_createEzsignuser_v1_Response_mPayload_H
