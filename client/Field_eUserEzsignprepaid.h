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
 * Field_eUserEzsignprepaid.h
 *
 * Subscription level when a user has a Prepaid subscription.
 */

#ifndef Field_eUserEzsignprepaid_H
#define Field_eUserEzsignprepaid_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eUserEzsignprepaid : public Enum {
public:
    Field_eUserEzsignprepaid();
    Field_eUserEzsignprepaid(QString json);
    ~Field_eUserEzsignprepaid() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eUserEzsignprepaid {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        BASIC, 
        UNLIMITED, 
        PRO
    };
    Field_eUserEzsignprepaid::eField_eUserEzsignprepaid getValue() const;
    void setValue(const Field_eUserEzsignprepaid::eField_eUserEzsignprepaid& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eUserEzsignprepaid m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eUserEzsignprepaid)

#endif // Field_eUserEzsignprepaid_H
