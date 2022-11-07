/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignsignature/{pkiEzsignsignatureID}
 */

#ifndef OAIEzsignsignature_getObject_v2_Response_mPayload_H
#define OAIEzsignsignature_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignsignature_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignature_ResponseCompound;

class OAIEzsignsignature_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignsignature_getObject_v2_Response_mPayload();
    OAIEzsignsignature_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignsignature_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsignature_ResponseCompound getObjEzsignsignature() const;
    void setObjEzsignsignature(const OAIEzsignsignature_ResponseCompound &obj_ezsignsignature);
    bool is_obj_ezsignsignature_Set() const;
    bool is_obj_ezsignsignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsignature_ResponseCompound obj_ezsignsignature;
    bool m_obj_ezsignsignature_isSet;
    bool m_obj_ezsignsignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_getObject_v2_Response_mPayload)

#endif // OAIEzsignsignature_getObject_v2_Response_mPayload_H
