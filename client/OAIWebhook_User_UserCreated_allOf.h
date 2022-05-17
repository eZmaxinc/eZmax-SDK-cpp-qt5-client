/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIWebhook_User_UserCreated_allOf.h
 *
 * 
 */

#ifndef OAIWebhook_User_UserCreated_allOf_H
#define OAIWebhook_User_UserCreated_allOf_H

#include <QJsonObject>

#include "OAIUser_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUser_ResponseCompound;

class OAIWebhook_User_UserCreated_allOf : public OAIObject {
public:
    OAIWebhook_User_UserCreated_allOf();
    OAIWebhook_User_UserCreated_allOf(QString json);
    ~OAIWebhook_User_UserCreated_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIUser_ResponseCompound getObjUser() const;
    void setObjUser(const OAIUser_ResponseCompound &obj_user);
    bool is_obj_user_Set() const;
    bool is_obj_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIUser_ResponseCompound obj_user;
    bool m_obj_user_isSet;
    bool m_obj_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebhook_User_UserCreated_allOf)

#endif // OAIWebhook_User_UserCreated_allOf_H
