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
 * OAIBillingentityinternal_ResponseCompound.h
 *
 * A Billingentityinternal Object
 */

#ifndef OAIBillingentityinternal_ResponseCompound_H
#define OAIBillingentityinternal_ResponseCompound_H

#include <QJsonObject>

#include "OAIBillingentityinternalproduct_ResponseCompound.h"
#include "OAIMultilingual_BillingentityinternalDescription.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_BillingentityinternalDescription;
class OAIBillingentityinternalproduct_ResponseCompound;

class OAIBillingentityinternal_ResponseCompound : public OAIObject {
public:
    OAIBillingentityinternal_ResponseCompound();
    OAIBillingentityinternal_ResponseCompound(QString json);
    ~OAIBillingentityinternal_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBillingentityinternalId() const;
    void setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id);
    bool is_pki_billingentityinternal_id_Set() const;
    bool is_pki_billingentityinternal_id_Valid() const;

    OAIMultilingual_BillingentityinternalDescription getObjBillingentityinternalDescription() const;
    void setObjBillingentityinternalDescription(const OAIMultilingual_BillingentityinternalDescription &obj_billingentityinternal_description);
    bool is_obj_billingentityinternal_description_Set() const;
    bool is_obj_billingentityinternal_description_Valid() const;

    QList<OAIBillingentityinternalproduct_ResponseCompound> getAObjBillingentityinternalproduct() const;
    void setAObjBillingentityinternalproduct(const QList<OAIBillingentityinternalproduct_ResponseCompound> &a_obj_billingentityinternalproduct);
    bool is_a_obj_billingentityinternalproduct_Set() const;
    bool is_a_obj_billingentityinternalproduct_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_billingentityinternal_id;
    bool m_pki_billingentityinternal_id_isSet;
    bool m_pki_billingentityinternal_id_isValid;

    OAIMultilingual_BillingentityinternalDescription m_obj_billingentityinternal_description;
    bool m_obj_billingentityinternal_description_isSet;
    bool m_obj_billingentityinternal_description_isValid;

    QList<OAIBillingentityinternalproduct_ResponseCompound> m_a_obj_billingentityinternalproduct;
    bool m_a_obj_billingentityinternalproduct_isSet;
    bool m_a_obj_billingentityinternalproduct_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBillingentityinternal_ResponseCompound)

#endif // OAIBillingentityinternal_ResponseCompound_H
