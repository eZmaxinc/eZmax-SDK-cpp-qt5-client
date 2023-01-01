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
 * OAIBillingentityinternal_AutocompleteElement_Response.h
 *
 * A Billingentityinternal AutocompleteElement Response
 */

#ifndef OAIBillingentityinternal_AutocompleteElement_Response_H
#define OAIBillingentityinternal_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBillingentityinternal_AutocompleteElement_Response : public OAIObject {
public:
    OAIBillingentityinternal_AutocompleteElement_Response();
    OAIBillingentityinternal_AutocompleteElement_Response(QString json);
    ~OAIBillingentityinternal_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSBillingentityinternalDescriptionX() const;
    void setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x);
    bool is_s_billingentityinternal_description_x_Set() const;
    bool is_s_billingentityinternal_description_x_Valid() const;

    qint32 getPkiBillingentityinternalId() const;
    void setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id);
    bool is_pki_billingentityinternal_id_Set() const;
    bool is_pki_billingentityinternal_id_Valid() const;

    bool isBBillingentityinternalIsactive() const;
    void setBBillingentityinternalIsactive(const bool &b_billingentityinternal_isactive);
    bool is_b_billingentityinternal_isactive_Set() const;
    bool is_b_billingentityinternal_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    qint32 pki_billingentityinternal_id;
    bool m_pki_billingentityinternal_id_isSet;
    bool m_pki_billingentityinternal_id_isValid;

    bool b_billingentityinternal_isactive;
    bool m_b_billingentityinternal_isactive_isSet;
    bool m_b_billingentityinternal_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBillingentityinternal_AutocompleteElement_Response)

#endif // OAIBillingentityinternal_AutocompleteElement_Response_H
