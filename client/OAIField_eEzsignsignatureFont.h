/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignsignatureFont.h
 *
 * The font of the signature. This can only be set if eEzsignsignatureType is **Name** or **Initials**
 */

#ifndef OAIField_eEzsignsignatureFont_H
#define OAIField_eEzsignsignatureFont_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignsignatureFont : public OAIEnum {
public:
    OAIField_eEzsignsignatureFont();
    OAIField_eEzsignsignatureFont(QString json);
    ~OAIField_eEzsignsignatureFont() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignsignatureFont {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NORMAL, 
        CURSIVE
    };
    OAIField_eEzsignsignatureFont::eOAIField_eEzsignsignatureFont getValue() const;
    void setValue(const OAIField_eEzsignsignatureFont::eOAIField_eEzsignsignatureFont& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignsignatureFont m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignsignatureFont)

#endif // OAIField_eEzsignsignatureFont_H
