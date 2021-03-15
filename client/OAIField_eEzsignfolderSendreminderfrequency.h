/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsignfolderSendreminderfrequency.h
 *
 * Frequency at which reminders will be sent to signers that haven&#39;t signed the documents
 */

#ifndef OAIField_eEzsignfolderSendreminderfrequency_H
#define OAIField_eEzsignfolderSendreminderfrequency_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignfolderSendreminderfrequency : public OAIEnum {
public:
    OAIField_eEzsignfolderSendreminderfrequency();
    OAIField_eEzsignfolderSendreminderfrequency(QString json);
    ~OAIField_eEzsignfolderSendreminderfrequency() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignfolderSendreminderfrequency {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NONE, 
        DAILY, 
        WEEKLY
    };
    OAIField_eEzsignfolderSendreminderfrequency::eOAIField_eEzsignfolderSendreminderfrequency getValue() const;
    void setValue(const OAIField_eEzsignfolderSendreminderfrequency::eOAIField_eEzsignfolderSendreminderfrequency& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignfolderSendreminderfrequency m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignfolderSendreminderfrequency)

#endif // OAIField_eEzsignfolderSendreminderfrequency_H
