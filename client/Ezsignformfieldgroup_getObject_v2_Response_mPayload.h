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
 * Ezsignformfieldgroup_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignformfieldgroup/{pkiEzsignformfieldgroupID}
 */

#ifndef Ezsignformfieldgroup_getObject_v2_Response_mPayload_H
#define Ezsignformfieldgroup_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignformfieldgroup_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignformfieldgroup_ResponseCompound;

class Ezsignformfieldgroup_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignformfieldgroup_getObject_v2_Response_mPayload();
    Ezsignformfieldgroup_getObject_v2_Response_mPayload(QString json);
    ~Ezsignformfieldgroup_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignformfieldgroup_ResponseCompound getObjEzsignformfieldgroup() const;
    void setObjEzsignformfieldgroup(const Ezsignformfieldgroup_ResponseCompound &obj_ezsignformfieldgroup);
    bool is_obj_ezsignformfieldgroup_Set() const;
    bool is_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignformfieldgroup_ResponseCompound m_obj_ezsignformfieldgroup;
    bool m_obj_ezsignformfieldgroup_isSet;
    bool m_obj_ezsignformfieldgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignformfieldgroup_getObject_v2_Response_mPayload)

#endif // Ezsignformfieldgroup_getObject_v2_Response_mPayload_H
