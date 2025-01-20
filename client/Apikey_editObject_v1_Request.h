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
 * Apikey_editObject_v1_Request.h
 *
 * Request for PUT /1/object/apikey/{pkiApikeyID}
 */

#ifndef Apikey_editObject_v1_Request_H
#define Apikey_editObject_v1_Request_H

#include <QJsonObject>

#include "Apikey_Request.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Apikey_Request;

class Apikey_editObject_v1_Request : public Object {
public:
    Apikey_editObject_v1_Request();
    Apikey_editObject_v1_Request(QString json);
    ~Apikey_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Apikey_Request getObjApikey() const;
    void setObjApikey(const Apikey_Request &obj_apikey);
    bool is_obj_apikey_Set() const;
    bool is_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Apikey_Request m_obj_apikey;
    bool m_obj_apikey_isSet;
    bool m_obj_apikey_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_editObject_v1_Request)

#endif // Apikey_editObject_v1_Request_H
