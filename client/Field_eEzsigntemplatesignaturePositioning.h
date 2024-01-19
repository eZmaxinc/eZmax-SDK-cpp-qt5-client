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
 * Field_eEzsigntemplatesignaturePositioning.h
 *
 * How the positioning of the Ezsigntemplatesignature will be done
 */

#ifndef Field_eEzsigntemplatesignaturePositioning_H
#define Field_eEzsigntemplatesignaturePositioning_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eEzsigntemplatesignaturePositioning : public Enum {
public:
    Field_eEzsigntemplatesignaturePositioning();
    Field_eEzsigntemplatesignaturePositioning(QString json);
    ~Field_eEzsigntemplatesignaturePositioning() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eEzsigntemplatesignaturePositioning {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        PERCOORDINATES, 
        PERPOSITIONINGPATTERN
    };
    Field_eEzsigntemplatesignaturePositioning::eField_eEzsigntemplatesignaturePositioning getValue() const;
    void setValue(const Field_eEzsigntemplatesignaturePositioning::eField_eEzsigntemplatesignaturePositioning& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eEzsigntemplatesignaturePositioning m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eEzsigntemplatesignaturePositioning)

#endif // Field_eEzsigntemplatesignaturePositioning_H
