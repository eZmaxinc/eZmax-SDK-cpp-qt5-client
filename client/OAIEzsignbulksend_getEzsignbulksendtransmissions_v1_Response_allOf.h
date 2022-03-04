/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf.h
 *
 * 
 */

#ifndef OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf_H
#define OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf_H

#include <QJsonObject>

#include "OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload;

class OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf : public OAIObject {
public:
    OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf();
    OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf(QString json);
    ~OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf)

#endif // OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response_allOf_H
