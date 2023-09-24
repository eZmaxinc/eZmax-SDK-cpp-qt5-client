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
 * OAISubnet_editObject_v1_Request.h
 *
 * Request for PUT /1/object/subnet/{pkiSubnetID}
 */

#ifndef OAISubnet_editObject_v1_Request_H
#define OAISubnet_editObject_v1_Request_H

#include <QJsonObject>

#include "OAISubnet_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISubnet_RequestCompound;

class OAISubnet_editObject_v1_Request : public OAIObject {
public:
    OAISubnet_editObject_v1_Request();
    OAISubnet_editObject_v1_Request(QString json);
    ~OAISubnet_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISubnet_RequestCompound getObjSubnet() const;
    void setObjSubnet(const OAISubnet_RequestCompound &obj_subnet);
    bool is_obj_subnet_Set() const;
    bool is_obj_subnet_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISubnet_RequestCompound m_obj_subnet;
    bool m_obj_subnet_isSet;
    bool m_obj_subnet_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISubnet_editObject_v1_Request)

#endif // OAISubnet_editObject_v1_Request_H
