/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignsignatureType.h
 *
 * The type of signature.  1. **Acknowledgement** is for an acknowledgment of receipt. 2. **City** is to request the city where the document is signed. 2. **Handwritten** is for a handwritten kind of signature where users needs to \&quot;draw\&quot; their signature on screen. 3. **Initials** is a simple \&quot;click to add initials\&quot; block. 4. **Name** is a simple \&quot;Click to sign\&quot; block. This is the most common block of signature.
 */

#ifndef OAIField_eEzsignsignatureType_H
#define OAIField_eEzsignsignatureType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignsignatureType : public OAIEnum {
public:
    OAIField_eEzsignsignatureType();
    OAIField_eEzsignsignatureType(QString json);
    ~OAIField_eEzsignsignatureType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignsignatureType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ACKNOWLEDGEMENT, 
        CITY, 
        HANDWRITTEN, 
        INITIALS, 
        NAME
    };
    OAIField_eEzsignsignatureType::eOAIField_eEzsignsignatureType getValue() const;
    void setValue(const OAIField_eEzsignsignatureType::eOAIField_eEzsignsignatureType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignsignatureType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignsignatureType)

#endif // OAIField_eEzsignsignatureType_H
