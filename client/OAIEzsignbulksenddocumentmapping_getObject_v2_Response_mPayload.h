/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}
 */

#ifndef OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload_H
#define OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignbulksenddocumentmapping_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksenddocumentmapping_ResponseCompound;

class OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload();
    OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksenddocumentmapping_ResponseCompound getObjEzsignbulksenddocumentmapping() const;
    void setObjEzsignbulksenddocumentmapping(const OAIEzsignbulksenddocumentmapping_ResponseCompound &obj_ezsignbulksenddocumentmapping);
    bool is_obj_ezsignbulksenddocumentmapping_Set() const;
    bool is_obj_ezsignbulksenddocumentmapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksenddocumentmapping_ResponseCompound obj_ezsignbulksenddocumentmapping;
    bool m_obj_ezsignbulksenddocumentmapping_isSet;
    bool m_obj_ezsignbulksenddocumentmapping_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload)

#endif // OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload_H
