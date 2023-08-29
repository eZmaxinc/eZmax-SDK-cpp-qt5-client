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
 * OAIUsergroupdelegation_createObject_v1_Request.h
 *
 * Request for POST /1/object/usergroupdelegation
 */

#ifndef OAIUsergroupdelegation_createObject_v1_Request_H
#define OAIUsergroupdelegation_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIUsergroupdelegation_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIUsergroupdelegation_RequestCompound;

class OAIUsergroupdelegation_createObject_v1_Request : public OAIObject {
public:
    OAIUsergroupdelegation_createObject_v1_Request();
    OAIUsergroupdelegation_createObject_v1_Request(QString json);
    ~OAIUsergroupdelegation_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIUsergroupdelegation_RequestCompound> getAObjUsergroupdelegation() const;
    void setAObjUsergroupdelegation(const QList<OAIUsergroupdelegation_RequestCompound> &a_obj_usergroupdelegation);
    bool is_a_obj_usergroupdelegation_Set() const;
    bool is_a_obj_usergroupdelegation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIUsergroupdelegation_RequestCompound> m_a_obj_usergroupdelegation;
    bool m_a_obj_usergroupdelegation_isSet;
    bool m_a_obj_usergroupdelegation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroupdelegation_createObject_v1_Request)

#endif // OAIUsergroupdelegation_createObject_v1_Request_H
