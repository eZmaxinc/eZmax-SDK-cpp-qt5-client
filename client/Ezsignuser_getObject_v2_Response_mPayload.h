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
 * Ezsignuser_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignuser/{pkiEzsignuserID}
 */

#ifndef Ezsignuser_getObject_v2_Response_mPayload_H
#define Ezsignuser_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignuser_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignuser_ResponseCompound;

class Ezsignuser_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignuser_getObject_v2_Response_mPayload();
    Ezsignuser_getObject_v2_Response_mPayload(QString json);
    ~Ezsignuser_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignuser_ResponseCompound getObjEzsignuser() const;
    void setObjEzsignuser(const Ezsignuser_ResponseCompound &obj_ezsignuser);
    bool is_obj_ezsignuser_Set() const;
    bool is_obj_ezsignuser_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignuser_ResponseCompound m_obj_ezsignuser;
    bool m_obj_ezsignuser_isSet;
    bool m_obj_ezsignuser_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignuser_getObject_v2_Response_mPayload)

#endif // Ezsignuser_getObject_v2_Response_mPayload_H
