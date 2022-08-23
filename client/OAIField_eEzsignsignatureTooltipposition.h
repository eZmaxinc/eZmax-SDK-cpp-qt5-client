/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignsignatureTooltipposition.h
 *
 * The location of the tooltip relative to the Ezsignsignature&#39;s location.
 */

#ifndef OAIField_eEzsignsignatureTooltipposition_H
#define OAIField_eEzsignsignatureTooltipposition_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignsignatureTooltipposition : public OAIEnum {
public:
    OAIField_eEzsignsignatureTooltipposition();
    OAIField_eEzsignsignatureTooltipposition(QString json);
    ~OAIField_eEzsignsignatureTooltipposition() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignsignatureTooltipposition {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TOPLEFT, 
        TOPCENTER, 
        TOPRIGHT, 
        MIDDLELEFT, 
        MIDDLERIGHT, 
        BOTTOMLEFT, 
        BOTTOMCENTER, 
        BOTTOMRIGHT
    };
    OAIField_eEzsignsignatureTooltipposition::eOAIField_eEzsignsignatureTooltipposition getValue() const;
    void setValue(const OAIField_eEzsignsignatureTooltipposition::eOAIField_eEzsignsignatureTooltipposition& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignsignatureTooltipposition m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignsignatureTooltipposition)

#endif // OAIField_eEzsignsignatureTooltipposition_H
