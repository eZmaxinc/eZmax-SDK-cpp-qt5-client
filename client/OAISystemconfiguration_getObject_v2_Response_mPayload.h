/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAISystemconfiguration_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/systemconfiguration/{pkiSystemconfigurationID}
 */

#ifndef OAISystemconfiguration_getObject_v2_Response_mPayload_H
#define OAISystemconfiguration_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAISystemconfiguration_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAISystemconfiguration_ResponseCompound;

class OAISystemconfiguration_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAISystemconfiguration_getObject_v2_Response_mPayload();
    OAISystemconfiguration_getObject_v2_Response_mPayload(QString json);
    ~OAISystemconfiguration_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAISystemconfiguration_ResponseCompound getObjSystemconfiguration() const;
    void setObjSystemconfiguration(const OAISystemconfiguration_ResponseCompound &obj_systemconfiguration);
    bool is_obj_systemconfiguration_Set() const;
    bool is_obj_systemconfiguration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAISystemconfiguration_ResponseCompound m_obj_systemconfiguration;
    bool m_obj_systemconfiguration_isSet;
    bool m_obj_systemconfiguration_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISystemconfiguration_getObject_v2_Response_mPayload)

#endif // OAISystemconfiguration_getObject_v2_Response_mPayload_H
