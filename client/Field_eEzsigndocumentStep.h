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
 * Field_eEzsigndocumentStep.h
 *
 * The signature step of the Ezsigndocument.
 */

#ifndef Field_eEzsigndocumentStep_H
#define Field_eEzsigndocumentStep_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigndocumentStep : public Enum {
public:
    Field_eEzsigndocumentStep();
    Field_eEzsigndocumentStep(QString json);
    ~Field_eEzsigndocumentStep() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigndocumentStep {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        UNSENT, 
        UNSIGNED, 
        PARTIALLYSIGNED, 
        DECLINEDTOSIGN, 
        PREMATURELYENDED, 
        PENDINGCOMPLETION, 
        COMPLETED, 
        DISPOSED
    };
    Field_eEzsigndocumentStep::eField_eEzsigndocumentStep getValue() const;
    void setValue(const Field_eEzsigndocumentStep::eField_eEzsigndocumentStep& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigndocumentStep m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigndocumentStep)

#endif // Field_eEzsigndocumentStep_H
