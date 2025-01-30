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
 * Usergroupexternal_getUsergroups_v1_Response_mPayload.h
 *
 * Response for GET /1/object/usergroupexternal/{pkiUsergroupexternalID}/getUsergroups
 */

#ifndef Usergroupexternal_getUsergroups_v1_Response_mPayload_H
#define Usergroupexternal_getUsergroups_v1_Response_mPayload_H

#include <QJsonObject>

#include "Usergroup_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroup_ResponseCompound;

class Usergroupexternal_getUsergroups_v1_Response_mPayload : public Object {
public:
    Usergroupexternal_getUsergroups_v1_Response_mPayload();
    Usergroupexternal_getUsergroups_v1_Response_mPayload(QString json);
    ~Usergroupexternal_getUsergroups_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Usergroup_ResponseCompound> getAObjUsergroup() const;
    void setAObjUsergroup(const QList<Usergroup_ResponseCompound> &a_obj_usergroup);
    bool is_a_obj_usergroup_Set() const;
    bool is_a_obj_usergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Usergroup_ResponseCompound> m_a_obj_usergroup;
    bool m_a_obj_usergroup_isSet;
    bool m_a_obj_usergroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupexternal_getUsergroups_v1_Response_mPayload)

#endif // Usergroupexternal_getUsergroups_v1_Response_mPayload_H
