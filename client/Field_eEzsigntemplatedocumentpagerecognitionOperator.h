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
 * Field_eEzsigntemplatedocumentpagerecognitionOperator.h
 *
 * The operator of the Ezsigntemplatedocumentpagerecognition
 */

#ifndef Field_eEzsigntemplatedocumentpagerecognitionOperator_H
#define Field_eEzsigntemplatedocumentpagerecognitionOperator_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplatedocumentpagerecognitionOperator : public Enum {
public:
    Field_eEzsigntemplatedocumentpagerecognitionOperator();
    Field_eEzsigntemplatedocumentpagerecognitionOperator(QString json);
    ~Field_eEzsigntemplatedocumentpagerecognitionOperator() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplatedocumentpagerecognitionOperator {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EQ, 
        IN, 
        SIMILAR
    };
    Field_eEzsigntemplatedocumentpagerecognitionOperator::eField_eEzsigntemplatedocumentpagerecognitionOperator getValue() const;
    void setValue(const Field_eEzsigntemplatedocumentpagerecognitionOperator::eField_eEzsigntemplatedocumentpagerecognitionOperator& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplatedocumentpagerecognitionOperator m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplatedocumentpagerecognitionOperator)

#endif // Field_eEzsigntemplatedocumentpagerecognitionOperator_H
