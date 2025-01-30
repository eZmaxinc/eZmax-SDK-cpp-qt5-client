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
 * Usergroup_editUsergroupdelegations_v1_Request.h
 *
 * Request for PUT /1/object/usergroup/{pkiUsergroupID}/editUsergroupdelegations
 */

#ifndef Usergroup_editUsergroupdelegations_v1_Request_H
#define Usergroup_editUsergroupdelegations_v1_Request_H

#include <QJsonObject>

#include "Usergroupdelegation_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Usergroupdelegation_RequestCompound;

class Usergroup_editUsergroupdelegations_v1_Request : public Object {
public:
    Usergroup_editUsergroupdelegations_v1_Request();
    Usergroup_editUsergroupdelegations_v1_Request(QString json);
    ~Usergroup_editUsergroupdelegations_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Usergroupdelegation_RequestCompound> getAObjUsergroupdelegation() const;
    void setAObjUsergroupdelegation(const QList<Usergroupdelegation_RequestCompound> &a_obj_usergroupdelegation);
    bool is_a_obj_usergroupdelegation_Set() const;
    bool is_a_obj_usergroupdelegation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Usergroupdelegation_RequestCompound> m_a_obj_usergroupdelegation;
    bool m_a_obj_usergroupdelegation_isSet;
    bool m_a_obj_usergroupdelegation_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroup_editUsergroupdelegations_v1_Request)

#endif // Usergroup_editUsergroupdelegations_v1_Request_H
