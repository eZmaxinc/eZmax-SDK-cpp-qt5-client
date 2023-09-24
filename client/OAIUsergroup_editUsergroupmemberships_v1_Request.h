/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUsergroup_editUsergroupmemberships_v1_Request.h
 *
 * Request for PUT /1/object/usergroup/{pkiUsergroupID}/editUsergroupmemberships
 */

#ifndef OAIUsergroup_editUsergroupmemberships_v1_Request_H
#define OAIUsergroup_editUsergroupmemberships_v1_Request_H

#include <QJsonObject>

#include "OAIUsergroupmembership_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroupmembership_RequestCompound;

class OAIUsergroup_editUsergroupmemberships_v1_Request : public OAIObject {
public:
    OAIUsergroup_editUsergroupmemberships_v1_Request();
    OAIUsergroup_editUsergroupmemberships_v1_Request(QString json);
    ~OAIUsergroup_editUsergroupmemberships_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUsergroupmembership_RequestCompound> getAObjUsergroupmembership() const;
    void setAObjUsergroupmembership(const QList<OAIUsergroupmembership_RequestCompound> &a_obj_usergroupmembership);
    bool is_a_obj_usergroupmembership_Set() const;
    bool is_a_obj_usergroupmembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUsergroupmembership_RequestCompound> m_a_obj_usergroupmembership;
    bool m_a_obj_usergroupmembership_isSet;
    bool m_a_obj_usergroupmembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_editUsergroupmemberships_v1_Request)

#endif // OAIUsergroup_editUsergroupmemberships_v1_Request_H
