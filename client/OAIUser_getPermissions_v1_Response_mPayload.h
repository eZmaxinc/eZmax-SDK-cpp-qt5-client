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
 * OAIUser_getPermissions_v1_Response_mPayload.h
 *
 * Response for GET /1/object/user/{pkiUserID}/getPermissions
 */

#ifndef OAIUser_getPermissions_v1_Response_mPayload_H
#define OAIUser_getPermissions_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIModulegroup_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIModulegroup_ResponseCompound;

class OAIUser_getPermissions_v1_Response_mPayload : public OAIObject {
public:
    OAIUser_getPermissions_v1_Response_mPayload();
    OAIUser_getPermissions_v1_Response_mPayload(QString json);
    ~OAIUser_getPermissions_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIModulegroup_ResponseCompound> getAObjModulegroup() const;
    void setAObjModulegroup(const QList<OAIModulegroup_ResponseCompound> &a_obj_modulegroup);
    bool is_a_obj_modulegroup_Set() const;
    bool is_a_obj_modulegroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIModulegroup_ResponseCompound> m_a_obj_modulegroup;
    bool m_a_obj_modulegroup_isSet;
    bool m_a_obj_modulegroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_getPermissions_v1_Response_mPayload)

#endif // OAIUser_getPermissions_v1_Response_mPayload_H
