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
 * Subnet_createObject_v1_Request.h
 *
 * Request for POST /1/object/subnet
 */

#ifndef Subnet_createObject_v1_Request_H
#define Subnet_createObject_v1_Request_H

#include <QJsonObject>

#include "Subnet_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Subnet_RequestCompound;

class Subnet_createObject_v1_Request : public Object {
public:
    Subnet_createObject_v1_Request();
    Subnet_createObject_v1_Request(QString json);
    ~Subnet_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Subnet_RequestCompound> getAObjSubnet() const;
    void setAObjSubnet(const QList<Subnet_RequestCompound> &a_obj_subnet);
    bool is_a_obj_subnet_Set() const;
    bool is_a_obj_subnet_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Subnet_RequestCompound> m_a_obj_subnet;
    bool m_a_obj_subnet_isSet;
    bool m_a_obj_subnet_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Subnet_createObject_v1_Request)

#endif // Subnet_createObject_v1_Request_H
