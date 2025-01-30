/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eEzmaxinvoicingPaymenttype.h
 *
 * The Ezmaxinvoicing payment type
 */

#ifndef Field_eEzmaxinvoicingPaymenttype_H
#define Field_eEzmaxinvoicingPaymenttype_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzmaxinvoicingPaymenttype : public Enum {
public:
    Field_eEzmaxinvoicingPaymenttype();
    Field_eEzmaxinvoicingPaymenttype(QString json);
    ~Field_eEzmaxinvoicingPaymenttype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzmaxinvoicingPaymenttype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CHEQUE, 
        CREDITCARD, 
        DIRECTDEBIT
    };
    Field_eEzmaxinvoicingPaymenttype::eField_eEzmaxinvoicingPaymenttype getValue() const;
    void setValue(const Field_eEzmaxinvoicingPaymenttype::eField_eEzmaxinvoicingPaymenttype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzmaxinvoicingPaymenttype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzmaxinvoicingPaymenttype)

#endif // Field_eEzmaxinvoicingPaymenttype_H
