/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatesignature_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef OAIEzsigntemplatesignature_getObject_v2_Response_mPayload_H
#define OAIEzsigntemplatesignature_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatesignature_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesignature_ResponseCompound;

class OAIEzsigntemplatesignature_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatesignature_getObject_v2_Response_mPayload();
    OAIEzsigntemplatesignature_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplatesignature_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatesignature_ResponseCompound getObjEzsigntemplatesignature() const;
    void setObjEzsigntemplatesignature(const OAIEzsigntemplatesignature_ResponseCompound &obj_ezsigntemplatesignature);
    bool is_obj_ezsigntemplatesignature_Set() const;
    bool is_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatesignature_ResponseCompound m_obj_ezsigntemplatesignature;
    bool m_obj_ezsigntemplatesignature_isSet;
    bool m_obj_ezsigntemplatesignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesignature_getObject_v2_Response_mPayload)

#endif // OAIEzsigntemplatesignature_getObject_v2_Response_mPayload_H
