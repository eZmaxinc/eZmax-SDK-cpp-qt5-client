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
 * Domain_createObject_v1_Request.h
 *
 * Request for POST /1/object/domain
 */

#ifndef Domain_createObject_v1_Request_H
#define Domain_createObject_v1_Request_H

#include <QJsonObject>

#include "Domain_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Domain_RequestCompound;

class Domain_createObject_v1_Request : public Object {
public:
    Domain_createObject_v1_Request();
    Domain_createObject_v1_Request(QString json);
    ~Domain_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Domain_RequestCompound> getAObjDomain() const;
    void setAObjDomain(const QList<Domain_RequestCompound> &a_obj_domain);
    bool is_a_obj_domain_Set() const;
    bool is_a_obj_domain_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Domain_RequestCompound> m_a_obj_domain;
    bool m_a_obj_domain_isSet;
    bool m_a_obj_domain_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Domain_createObject_v1_Request)

#endif // Domain_createObject_v1_Request_H
