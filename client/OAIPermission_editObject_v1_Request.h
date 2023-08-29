/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIPermission_editObject_v1_Request.h
 *
 * Request for PUT /1/object/permission/{pkiPermissionID}
 */

#ifndef OAIPermission_editObject_v1_Request_H
#define OAIPermission_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIPermission_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPermission_RequestCompound;

class OAIPermission_editObject_v1_Request : public OAIObject {
public:
    OAIPermission_editObject_v1_Request();
    OAIPermission_editObject_v1_Request(QString json);
    ~OAIPermission_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIPermission_RequestCompound getObjPermission() const;
    void setObjPermission(const OAIPermission_RequestCompound &obj_permission);
    bool is_obj_permission_Set() const;
    bool is_obj_permission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIPermission_RequestCompound m_obj_permission;
    bool m_obj_permission_isSet;
    bool m_obj_permission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIPermission_editObject_v1_Request)

#endif // OAIPermission_editObject_v1_Request_H
