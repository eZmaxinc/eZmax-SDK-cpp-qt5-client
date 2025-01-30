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
 * Ezsignfolder_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignfolder/{pkiEzsignfolderID}
 */

#ifndef Ezsignfolder_getObject_v2_Response_mPayload_H
#define Ezsignfolder_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignfolder_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignfolder_ResponseCompound;

class Ezsignfolder_getObject_v2_Response_mPayload : public Object {
public:
    Ezsignfolder_getObject_v2_Response_mPayload();
    Ezsignfolder_getObject_v2_Response_mPayload(QString json);
    ~Ezsignfolder_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Ezsignfolder_ResponseCompound getObjEzsignfolder() const;
    void setObjEzsignfolder(const Ezsignfolder_ResponseCompound &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Ezsignfolder_ResponseCompound m_obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_getObject_v2_Response_mPayload)

#endif // Ezsignfolder_getObject_v2_Response_mPayload_H
