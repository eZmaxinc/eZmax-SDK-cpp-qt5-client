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
 * Ezsigntemplatepackagesignermembership_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatepackagesignermembership
 */

#ifndef Ezsigntemplatepackagesignermembership_createObject_v1_Request_H
#define Ezsigntemplatepackagesignermembership_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatepackagesignermembership_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackagesignermembership_RequestCompound;

class Ezsigntemplatepackagesignermembership_createObject_v1_Request : public Object {
public:
    Ezsigntemplatepackagesignermembership_createObject_v1_Request();
    Ezsigntemplatepackagesignermembership_createObject_v1_Request(QString json);
    ~Ezsigntemplatepackagesignermembership_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatepackagesignermembership_RequestCompound> getAObjEzsigntemplatepackagesignermembership() const;
    void setAObjEzsigntemplatepackagesignermembership(const QList<Ezsigntemplatepackagesignermembership_RequestCompound> &a_obj_ezsigntemplatepackagesignermembership);
    bool is_a_obj_ezsigntemplatepackagesignermembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagesignermembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatepackagesignermembership_RequestCompound> m_a_obj_ezsigntemplatepackagesignermembership;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isSet;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackagesignermembership_createObject_v1_Request)

#endif // Ezsigntemplatepackagesignermembership_createObject_v1_Request_H
