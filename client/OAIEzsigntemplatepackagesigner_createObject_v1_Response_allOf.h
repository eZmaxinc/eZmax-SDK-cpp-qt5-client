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
 * OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf_H
#define OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagesigner_createObject_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesigner_createObject_v1_Response_mPayload;

class OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf : public OAIObject {
public:
    OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf();
    OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf(QString json);
    ~OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatepackagesigner_createObject_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIEzsigntemplatepackagesigner_createObject_v1_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatepackagesigner_createObject_v1_Response_mPayload m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf)

#endif // OAIEzsigntemplatepackagesigner_createObject_v1_Response_allOf_H
