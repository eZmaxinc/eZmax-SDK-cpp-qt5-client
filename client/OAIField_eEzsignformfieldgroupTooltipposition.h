/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignformfieldgroupTooltipposition.h
 *
 * The location of the tooltip relative to the Ezsignformfieldgroup&#39;s location.
 */

#ifndef OAIField_eEzsignformfieldgroupTooltipposition_H
#define OAIField_eEzsignformfieldgroupTooltipposition_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignformfieldgroupTooltipposition : public OAIEnum {
public:
    OAIField_eEzsignformfieldgroupTooltipposition();
    OAIField_eEzsignformfieldgroupTooltipposition(QString json);
    ~OAIField_eEzsignformfieldgroupTooltipposition() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignformfieldgroupTooltipposition {
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
    OAIField_eEzsignformfieldgroupTooltipposition::eOAIField_eEzsignformfieldgroupTooltipposition getValue() const;
    void setValue(const OAIField_eEzsignformfieldgroupTooltipposition::eOAIField_eEzsignformfieldgroupTooltipposition& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignformfieldgroupTooltipposition m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignformfieldgroupTooltipposition)

#endif // OAIField_eEzsignformfieldgroupTooltipposition_H
