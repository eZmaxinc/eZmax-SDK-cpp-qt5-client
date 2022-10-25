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
 * OAIField_eEzsigntemplatesignatureType.h
 *
 * The type of signature.  1. **Acknowledgement** is for an acknowledgment of receipt. 2. **City** is to request the city where the document is signed. 3. **Handwritten** is for a handwritten kind of signature where users needs to \&quot;draw\&quot; their signature on screen. 4. **Initials** is a simple \&quot;click to add initials\&quot; block. 5. **Name** is a simple \&quot;Click to sign\&quot; block. This is the most common block of signature. 6. **Attachments** is to ask for files as attachment that may be validate in another step.    
 */

#ifndef OAIField_eEzsigntemplatesignatureType_H
#define OAIField_eEzsigntemplatesignatureType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigntemplatesignatureType : public OAIEnum {
public:
    OAIField_eEzsigntemplatesignatureType();
    OAIField_eEzsigntemplatesignatureType(QString json);
    ~OAIField_eEzsigntemplatesignatureType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigntemplatesignatureType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        ACKNOWLEDGEMENT, 
        CITY, 
        HANDWRITTEN, 
        INITIALS, 
        NAME, 
        ATTACHMENTS
    };
    OAIField_eEzsigntemplatesignatureType::eOAIField_eEzsigntemplatesignatureType getValue() const;
    void setValue(const OAIField_eEzsigntemplatesignatureType::eOAIField_eEzsigntemplatesignatureType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigntemplatesignatureType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigntemplatesignatureType)

#endif // OAIField_eEzsigntemplatesignatureType_H
