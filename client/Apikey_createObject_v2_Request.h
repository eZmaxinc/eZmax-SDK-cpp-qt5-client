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
 * Apikey_createObject_v2_Request.h
 *
 * Request for POST /2/object/apikey
 */

#ifndef Apikey_createObject_v2_Request_H
#define Apikey_createObject_v2_Request_H

#include <QJsonObject>

#include "Apikey_RequestCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Apikey_RequestCompound;

class Apikey_createObject_v2_Request : public Object {
public:
    Apikey_createObject_v2_Request();
    Apikey_createObject_v2_Request(QString json);
    ~Apikey_createObject_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Apikey_RequestCompound> getAObjApikey() const;
    void setAObjApikey(const QList<Apikey_RequestCompound> &a_obj_apikey);
    bool is_a_obj_apikey_Set() const;
    bool is_a_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Apikey_RequestCompound> m_a_obj_apikey;
    bool m_a_obj_apikey_isSet;
    bool m_a_obj_apikey_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_createObject_v2_Request)

#endif // Apikey_createObject_v2_Request_H
