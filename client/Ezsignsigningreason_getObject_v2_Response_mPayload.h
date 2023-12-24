/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsigningreason_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignsigningreason/{pkiEzsignsigningreasonID}
 */

#ifndef Ezsignsigningreason_getObject_v2_Response_mPayload_H
#define Ezsignsigningreason_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignsigningreason_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignsigningreason_ResponseCompound;

class Ezsignsigningreason_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignsigningreason_getObject_v2_Response_mPayload();
    Ezsignsigningreason_getObject_v2_Response_mPayload(QString json);
    ~Ezsignsigningreason_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignsigningreason_ResponseCompound getObjEzsignsigningreason() const;
    void setObjEzsignsigningreason(const Ezsignsigningreason_ResponseCompound &obj_ezsignsigningreason);
    bool is_obj_ezsignsigningreason_Set() const;
    bool is_obj_ezsignsigningreason_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignsigningreason_ResponseCompound m_obj_ezsignsigningreason;
    bool m_obj_ezsignsigningreason_isSet;
    bool m_obj_ezsignsigningreason_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsigningreason_getObject_v2_Response_mPayload)

#endif // Ezsignsigningreason_getObject_v2_Response_mPayload_H
