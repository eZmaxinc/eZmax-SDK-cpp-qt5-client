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
 * User_editObject_v1_Request.h
 *
 * Request for PUT /1/object/user/{pkiUserID}
 */

#ifndef User_editObject_v1_Request_H
#define User_editObject_v1_Request_H

#include <QJsonObject>

#include "User_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class User_RequestCompound;

class User_editObject_v1_Request : public Object {
public:
    User_editObject_v1_Request();
    User_editObject_v1_Request(QString json);
    ~User_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    User_RequestCompound getObjUser() const;
    void setObjUser(const User_RequestCompound &obj_user);
    bool is_obj_user_Set() const;
    bool is_obj_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    User_RequestCompound m_obj_user;
    bool m_obj_user_isSet;
    bool m_obj_user_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::User_editObject_v1_Request)

#endif // User_editObject_v1_Request_H
