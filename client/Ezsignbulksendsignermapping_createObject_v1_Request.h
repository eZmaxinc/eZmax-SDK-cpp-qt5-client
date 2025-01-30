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
 * Ezsignbulksendsignermapping_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsignbulksendsignermapping
 */

#ifndef Ezsignbulksendsignermapping_createObject_v1_Request_H
#define Ezsignbulksendsignermapping_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsignbulksendsignermapping_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignbulksendsignermapping_RequestCompound;

class Ezsignbulksendsignermapping_createObject_v1_Request : public Object {
public:
    Ezsignbulksendsignermapping_createObject_v1_Request();
    Ezsignbulksendsignermapping_createObject_v1_Request(QString json);
    ~Ezsignbulksendsignermapping_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignbulksendsignermapping_RequestCompound> getAObjEzsignbulksendsignermapping() const;
    void setAObjEzsignbulksendsignermapping(const QList<Ezsignbulksendsignermapping_RequestCompound> &a_obj_ezsignbulksendsignermapping);
    bool is_a_obj_ezsignbulksendsignermapping_Set() const;
    bool is_a_obj_ezsignbulksendsignermapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignbulksendsignermapping_RequestCompound> m_a_obj_ezsignbulksendsignermapping;
    bool m_a_obj_ezsignbulksendsignermapping_isSet;
    bool m_a_obj_ezsignbulksendsignermapping_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksendsignermapping_createObject_v1_Request)

#endif // Ezsignbulksendsignermapping_createObject_v1_Request_H
