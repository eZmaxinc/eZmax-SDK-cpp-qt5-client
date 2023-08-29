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
 * OAIUsergroup_editPermissions_v1_Response_mPayload.h
 *
 * Payload for PUT /1/object/usergroup/{pkiUsergroupID}/editPermissions
 */

#ifndef OAIUsergroup_editPermissions_v1_Response_mPayload_H
#define OAIUsergroup_editPermissions_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroup_editPermissions_v1_Response_mPayload : public OAIObject {
public:
    OAIUsergroup_editPermissions_v1_Response_mPayload();
    OAIUsergroup_editPermissions_v1_Response_mPayload(QString json);
    ~OAIUsergroup_editPermissions_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiPermissionId() const;
    void setAPkiPermissionId(const QList<qint32> &a_pki_permission_id);
    bool is_a_pki_permission_id_Set() const;
    bool is_a_pki_permission_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_permission_id;
    bool m_a_pki_permission_id_isSet;
    bool m_a_pki_permission_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_editPermissions_v1_Response_mPayload)

#endif // OAIUsergroup_editPermissions_v1_Response_mPayload_H
