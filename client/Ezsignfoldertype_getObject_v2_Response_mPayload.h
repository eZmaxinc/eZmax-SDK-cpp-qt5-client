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
 * Ezsignfoldertype_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef Ezsignfoldertype_getObject_v2_Response_mPayload_H
#define Ezsignfoldertype_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignfoldertype_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfoldertype_ResponseCompound;

class Ezsignfoldertype_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignfoldertype_getObject_v2_Response_mPayload();
    Ezsignfoldertype_getObject_v2_Response_mPayload(QString json);
    ~Ezsignfoldertype_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignfoldertype_ResponseCompound getObjEzsignfoldertype() const;
    void setObjEzsignfoldertype(const Ezsignfoldertype_ResponseCompound &obj_ezsignfoldertype);
    bool is_obj_ezsignfoldertype_Set() const;
    bool is_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignfoldertype_ResponseCompound m_obj_ezsignfoldertype;
    bool m_obj_ezsignfoldertype_isSet;
    bool m_obj_ezsignfoldertype_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_getObject_v2_Response_mPayload)

#endif // Ezsignfoldertype_getObject_v2_Response_mPayload_H
