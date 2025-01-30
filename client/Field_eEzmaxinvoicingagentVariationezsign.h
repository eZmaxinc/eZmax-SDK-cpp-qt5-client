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
 * Field_eEzmaxinvoicingagentVariationezsign.h
 *
 * Variation type for eZsign
 */

#ifndef Field_eEzmaxinvoicingagentVariationezsign_H
#define Field_eEzmaxinvoicingagentVariationezsign_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzmaxinvoicingagentVariationezsign : public Enum {
public:
    Field_eEzmaxinvoicingagentVariationezsign();
    Field_eEzmaxinvoicingagentVariationezsign(QString json);
    ~Field_eEzmaxinvoicingagentVariationezsign() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzmaxinvoicingagentVariationezsign {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CHARGE, 
        REFUND, 
        SAME
    };
    Field_eEzmaxinvoicingagentVariationezsign::eField_eEzmaxinvoicingagentVariationezsign getValue() const;
    void setValue(const Field_eEzmaxinvoicingagentVariationezsign::eField_eEzmaxinvoicingagentVariationezsign& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzmaxinvoicingagentVariationezsign m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzmaxinvoicingagentVariationezsign)

#endif // Field_eEzmaxinvoicingagentVariationezsign_H
