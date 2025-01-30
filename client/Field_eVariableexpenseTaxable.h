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
 * Field_eVariableexpenseTaxable.h
 *
 * The taxable of the Variableexpense
 */

#ifndef Field_eVariableexpenseTaxable_H
#define Field_eVariableexpenseTaxable_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eVariableexpenseTaxable : public Enum {
public:
    Field_eVariableexpenseTaxable();
    Field_eVariableexpenseTaxable(QString json);
    ~Field_eVariableexpenseTaxable() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eVariableexpenseTaxable {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        YES, 
        NO, 
        INCLUDED
    };
    Field_eVariableexpenseTaxable::eField_eVariableexpenseTaxable getValue() const;
    void setValue(const Field_eVariableexpenseTaxable::eField_eVariableexpenseTaxable& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eVariableexpenseTaxable m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eVariableexpenseTaxable)

#endif // Field_eVariableexpenseTaxable_H
