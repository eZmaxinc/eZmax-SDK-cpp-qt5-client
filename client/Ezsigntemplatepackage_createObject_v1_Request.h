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
 * Ezsigntemplatepackage_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatepackage
 */

#ifndef Ezsigntemplatepackage_createObject_v1_Request_H
#define Ezsigntemplatepackage_createObject_v1_Request_H

#include <QJsonObject>

#include "Ezsigntemplatepackage_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatepackage_RequestCompound;

class Ezsigntemplatepackage_createObject_v1_Request : public Object {
public:
    Ezsigntemplatepackage_createObject_v1_Request();
    Ezsigntemplatepackage_createObject_v1_Request(QString json);
    ~Ezsigntemplatepackage_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatepackage_RequestCompound> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<Ezsigntemplatepackage_RequestCompound> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatepackage_RequestCompound> m_a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepackage_createObject_v1_Request)

#endif // Ezsigntemplatepackage_createObject_v1_Request_H
