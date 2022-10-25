/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf.h
 *
 * 
 */

#ifndef OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf_H
#define OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf_H

#include <QJsonObject>

#include "OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload;

class OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf : public OAIObject {
public:
    OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf();
    OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf(QString json);
    ~OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksendsignermapping_getObject_v1_Response_mPayload m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf)

#endif // OAIEzsignbulksendsignermapping_getObject_v1_Response_allOf_H
