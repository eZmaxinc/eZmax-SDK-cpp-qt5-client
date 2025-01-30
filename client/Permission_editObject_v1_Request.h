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
 * Permission_editObject_v1_Request.h
 *
 * Request for PUT /1/object/permission/{pkiPermissionID}
 */

#ifndef Permission_editObject_v1_Request_H
#define Permission_editObject_v1_Request_H

#include <QJsonObject>

#include "Permission_RequestCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Permission_RequestCompound;

class Permission_editObject_v1_Request : public Object {
public:
    Permission_editObject_v1_Request();
    Permission_editObject_v1_Request(QString json);
    ~Permission_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Permission_RequestCompound getObjPermission() const;
    void setObjPermission(const Permission_RequestCompound &obj_permission);
    bool is_obj_permission_Set() const;
    bool is_obj_permission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Permission_RequestCompound m_obj_permission;
    bool m_obj_permission_isSet;
    bool m_obj_permission_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Permission_editObject_v1_Request)

#endif // Permission_editObject_v1_Request_H
