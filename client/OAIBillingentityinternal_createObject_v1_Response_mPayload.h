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
 * OAIBillingentityinternal_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/billingentityinternal
 */

#ifndef OAIBillingentityinternal_createObject_v1_Response_mPayload_H
#define OAIBillingentityinternal_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBillingentityinternal_createObject_v1_Response_mPayload : public OAIObject {
public:
    OAIBillingentityinternal_createObject_v1_Response_mPayload();
    OAIBillingentityinternal_createObject_v1_Response_mPayload(QString json);
    ~OAIBillingentityinternal_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiBillingentityinternalId() const;
    void setAPkiBillingentityinternalId(const QList<qint32> &a_pki_billingentityinternal_id);
    bool is_a_pki_billingentityinternal_id_Set() const;
    bool is_a_pki_billingentityinternal_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_billingentityinternal_id;
    bool m_a_pki_billingentityinternal_id_isSet;
    bool m_a_pki_billingentityinternal_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBillingentityinternal_createObject_v1_Response_mPayload)

#endif // OAIBillingentityinternal_createObject_v1_Response_mPayload_H
