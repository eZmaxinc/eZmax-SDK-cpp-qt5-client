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
 * Field_eEzsigntemplatepublicLimittype.h
 *
 * The limittype of the Ezsigntemplatepublic
 */

#ifndef Field_eEzsigntemplatepublicLimittype_H
#define Field_eEzsigntemplatepublicLimittype_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplatepublicLimittype : public Enum {
public:
    Field_eEzsigntemplatepublicLimittype();
    Field_eEzsigntemplatepublicLimittype(QString json);
    ~Field_eEzsigntemplatepublicLimittype() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplatepublicLimittype {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        HOUR, 
        DAY, 
        MONTH, 
        TOTAL
    };
    Field_eEzsigntemplatepublicLimittype::eField_eEzsigntemplatepublicLimittype getValue() const;
    void setValue(const Field_eEzsigntemplatepublicLimittype::eField_eEzsigntemplatepublicLimittype& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplatepublicLimittype m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplatepublicLimittype)

#endif // Field_eEzsigntemplatepublicLimittype_H
