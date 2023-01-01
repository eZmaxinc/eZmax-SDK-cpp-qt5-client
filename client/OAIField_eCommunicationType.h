/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eCommunicationType.h
 *
 * The Type for the Communication
 */

#ifndef OAIField_eCommunicationType_H
#define OAIField_eCommunicationType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eCommunicationType : public OAIEnum {
public:
    OAIField_eCommunicationType();
    OAIField_eCommunicationType(QString json);
    ~OAIField_eCommunicationType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eCommunicationType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EMAIL, 
        FAX, 
        SMS
    };
    OAIField_eCommunicationType::eOAIField_eCommunicationType getValue() const;
    void setValue(const OAIField_eCommunicationType::eOAIField_eCommunicationType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eCommunicationType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eCommunicationType)

#endif // OAIField_eCommunicationType_H
