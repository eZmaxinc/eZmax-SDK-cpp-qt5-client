/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Billingentityinternal_RequestCompound.h
 *
 * A Billingentityinternal Object and children
 */

#ifndef Billingentityinternal_RequestCompound_H
#define Billingentityinternal_RequestCompound_H

#include <QJsonObject>

#include "Billingentityinternalproduct_RequestCompound.h"
#include "Multilingual_BillingentityinternalDescription.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_BillingentityinternalDescription;
class Billingentityinternalproduct_RequestCompound;

class Billingentityinternal_RequestCompound : public Object {
public:
    Billingentityinternal_RequestCompound();
    Billingentityinternal_RequestCompound(QString json);
    ~Billingentityinternal_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBillingentityinternalId() const;
    void setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id);
    bool is_pki_billingentityinternal_id_Set() const;
    bool is_pki_billingentityinternal_id_Valid() const;

    Multilingual_BillingentityinternalDescription getObjBillingentityinternalDescription() const;
    void setObjBillingentityinternalDescription(const Multilingual_BillingentityinternalDescription &obj_billingentityinternal_description);
    bool is_obj_billingentityinternal_description_Set() const;
    bool is_obj_billingentityinternal_description_Valid() const;

    QList<Billingentityinternalproduct_RequestCompound> getAObjBillingentityinternalproduct() const;
    void setAObjBillingentityinternalproduct(const QList<Billingentityinternalproduct_RequestCompound> &a_obj_billingentityinternalproduct);
    bool is_a_obj_billingentityinternalproduct_Set() const;
    bool is_a_obj_billingentityinternalproduct_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_billingentityinternal_id;
    bool m_pki_billingentityinternal_id_isSet;
    bool m_pki_billingentityinternal_id_isValid;

    Multilingual_BillingentityinternalDescription m_obj_billingentityinternal_description;
    bool m_obj_billingentityinternal_description_isSet;
    bool m_obj_billingentityinternal_description_isValid;

    QList<Billingentityinternalproduct_RequestCompound> m_a_obj_billingentityinternalproduct;
    bool m_a_obj_billingentityinternalproduct_isSet;
    bool m_a_obj_billingentityinternalproduct_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Billingentityinternal_RequestCompound)

#endif // Billingentityinternal_RequestCompound_H
