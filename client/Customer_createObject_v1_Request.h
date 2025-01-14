/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Customer_createObject_v1_Request.h
 *
 * Request for POST /1/object/customer
 */

#ifndef Customer_createObject_v1_Request_H
#define Customer_createObject_v1_Request_H

#include <QJsonObject>

#include "Customer_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Customer_RequestCompound;

class Customer_createObject_v1_Request : public Object {
public:
    Customer_createObject_v1_Request();
    Customer_createObject_v1_Request(QString json);
    ~Customer_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Customer_RequestCompound> getAObjCustomer() const;
    void setAObjCustomer(const QList<Customer_RequestCompound> &a_obj_customer);
    bool is_a_obj_customer_Set() const;
    bool is_a_obj_customer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Customer_RequestCompound> m_a_obj_customer;
    bool m_a_obj_customer_isSet;
    bool m_a_obj_customer_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Customer_createObject_v1_Request)

#endif // Customer_createObject_v1_Request_H
