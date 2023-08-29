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
 * OAIApikey_editPermissions_v1_Request.h
 *
 * Request for PUT /1/object/apikey/{pkiApikeyID}/editPermissions
 */

#ifndef OAIApikey_editPermissions_v1_Request_H
#define OAIApikey_editPermissions_v1_Request_H

#include <QJsonObject>

#include "OAIPermission_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIPermission_RequestCompound;

class OAIApikey_editPermissions_v1_Request : public OAIObject {
public:
    OAIApikey_editPermissions_v1_Request();
    OAIApikey_editPermissions_v1_Request(QString json);
    ~OAIApikey_editPermissions_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIPermission_RequestCompound> getAObjPermission() const;
    void setAObjPermission(const QList<OAIPermission_RequestCompound> &a_obj_permission);
    bool is_a_obj_permission_Set() const;
    bool is_a_obj_permission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIPermission_RequestCompound> m_a_obj_permission;
    bool m_a_obj_permission_isSet;
    bool m_a_obj_permission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_editPermissions_v1_Request)

#endif // OAIApikey_editPermissions_v1_Request_H
