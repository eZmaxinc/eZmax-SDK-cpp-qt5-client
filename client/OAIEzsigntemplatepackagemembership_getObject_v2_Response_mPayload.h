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
 * OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID}
 */

#ifndef OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload_H
#define OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagemembership_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagemembership_ResponseCompound;

class OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload();
    OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatepackagemembership_ResponseCompound getObjEzsigntemplatepackagemembership() const;
    void setObjEzsigntemplatepackagemembership(const OAIEzsigntemplatepackagemembership_ResponseCompound &obj_ezsigntemplatepackagemembership);
    bool is_obj_ezsigntemplatepackagemembership_Set() const;
    bool is_obj_ezsigntemplatepackagemembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatepackagemembership_ResponseCompound obj_ezsigntemplatepackagemembership;
    bool m_obj_ezsigntemplatepackagemembership_isSet;
    bool m_obj_ezsigntemplatepackagemembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload)

#endif // OAIEzsigntemplatepackagemembership_getObject_v2_Response_mPayload_H
