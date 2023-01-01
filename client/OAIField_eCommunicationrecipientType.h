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
 * OAIField_eCommunicationrecipientType.h
 *
 * The Type for the Communicationrecipient
 */

#ifndef OAIField_eCommunicationrecipientType_H
#define OAIField_eCommunicationrecipientType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eCommunicationrecipientType : public OAIEnum {
public:
    OAIField_eCommunicationrecipientType();
    OAIField_eCommunicationrecipientType(QString json);
    ~OAIField_eCommunicationrecipientType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eCommunicationrecipientType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        TO, 
        CC, 
        BCC
    };
    OAIField_eCommunicationrecipientType::eOAIField_eCommunicationrecipientType getValue() const;
    void setValue(const OAIField_eCommunicationrecipientType::eOAIField_eCommunicationrecipientType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eCommunicationrecipientType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eCommunicationrecipientType)

#endif // OAIField_eCommunicationrecipientType_H
