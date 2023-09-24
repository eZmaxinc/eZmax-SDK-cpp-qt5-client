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
 * OAIApikey_getCors_v1_Response_mPayload.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/getCors
 */

#ifndef OAIApikey_getCors_v1_Response_mPayload_H
#define OAIApikey_getCors_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICors_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICors_ResponseCompound;

class OAIApikey_getCors_v1_Response_mPayload : public OAIObject {
public:
    OAIApikey_getCors_v1_Response_mPayload();
    OAIApikey_getCors_v1_Response_mPayload(QString json);
    ~OAIApikey_getCors_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICors_ResponseCompound> getAObjCors() const;
    void setAObjCors(const QList<OAICors_ResponseCompound> &a_obj_cors);
    bool is_a_obj_cors_Set() const;
    bool is_a_obj_cors_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICors_ResponseCompound> m_a_obj_cors;
    bool m_a_obj_cors_isSet;
    bool m_a_obj_cors_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_getCors_v1_Response_mPayload)

#endif // OAIApikey_getCors_v1_Response_mPayload_H
