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
 * Userstaged_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/userstaged/{pkiUserstagedID}
 */

#ifndef Userstaged_getObject_v2_Response_mPayload_H
#define Userstaged_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Userstaged_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Userstaged_ResponseCompound;

class Userstaged_getObject_v2_Response_mPayload : public Object {
public:
    Userstaged_getObject_v2_Response_mPayload();
    Userstaged_getObject_v2_Response_mPayload(QString json);
    ~Userstaged_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Userstaged_ResponseCompound getObjUserstaged() const;
    void setObjUserstaged(const Userstaged_ResponseCompound &obj_userstaged);
    bool is_obj_userstaged_Set() const;
    bool is_obj_userstaged_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Userstaged_ResponseCompound m_obj_userstaged;
    bool m_obj_userstaged_isSet;
    bool m_obj_userstaged_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Userstaged_getObject_v2_Response_mPayload)

#endif // Userstaged_getObject_v2_Response_mPayload_H
