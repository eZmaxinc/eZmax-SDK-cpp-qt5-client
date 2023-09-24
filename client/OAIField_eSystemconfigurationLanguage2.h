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
 * OAIField_eSystemconfigurationLanguage2.h
 *
 * The type of the english for the client
 */

#ifndef OAIField_eSystemconfigurationLanguage2_H
#define OAIField_eSystemconfigurationLanguage2_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eSystemconfigurationLanguage2 : public OAIEnum {
public:
    OAIField_eSystemconfigurationLanguage2();
    OAIField_eSystemconfigurationLanguage2(QString json);
    ~OAIField_eSystemconfigurationLanguage2() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eSystemconfigurationLanguage2 {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CA, 
        QC, 
        US
    };
    OAIField_eSystemconfigurationLanguage2::eOAIField_eSystemconfigurationLanguage2 getValue() const;
    void setValue(const OAIField_eSystemconfigurationLanguage2::eOAIField_eSystemconfigurationLanguage2& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eSystemconfigurationLanguage2 m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eSystemconfigurationLanguage2)

#endif // OAIField_eSystemconfigurationLanguage2_H
