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
 * Ezsignsignature_createObject_v2_Request.h
 *
 * Request for POST /2/object/ezsignsignature
 */

#ifndef Ezsignsignature_createObject_v2_Request_H
#define Ezsignsignature_createObject_v2_Request_H

#include <QJsonObject>

#include "Ezsignsignature_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsignature_RequestCompound;

class Ezsignsignature_createObject_v2_Request : public Object {
public:
    Ezsignsignature_createObject_v2_Request();
    Ezsignsignature_createObject_v2_Request(QString json);
    ~Ezsignsignature_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignsignature_RequestCompound> getAObjEzsignsignature() const;
    void setAObjEzsignsignature(const QList<Ezsignsignature_RequestCompound> &a_obj_ezsignsignature);
    bool is_a_obj_ezsignsignature_Set() const;
    bool is_a_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignsignature_RequestCompound> m_a_obj_ezsignsignature;
    bool m_a_obj_ezsignsignature_isSet;
    bool m_a_obj_ezsignsignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignature_createObject_v2_Request)

#endif // Ezsignsignature_createObject_v2_Request_H
