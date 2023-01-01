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
 * OAIField_eUserEzsignsendreminderfrequency.h
 *
 * Frequency at which reminders will be sent to signers that haven&#39;t signed the documents
 */

#ifndef OAIField_eUserEzsignsendreminderfrequency_H
#define OAIField_eUserEzsignsendreminderfrequency_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eUserEzsignsendreminderfrequency : public OAIEnum {
public:
    OAIField_eUserEzsignsendreminderfrequency();
    OAIField_eUserEzsignsendreminderfrequency(QString json);
    ~OAIField_eUserEzsignsendreminderfrequency() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eUserEzsignsendreminderfrequency {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        NONE, 
        DAILY, 
        WEEKLY
    };
    OAIField_eUserEzsignsendreminderfrequency::eOAIField_eUserEzsignsendreminderfrequency getValue() const;
    void setValue(const OAIField_eUserEzsignsendreminderfrequency::eOAIField_eUserEzsignsendreminderfrequency& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eUserEzsignsendreminderfrequency m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eUserEzsignsendreminderfrequency)

#endif // OAIField_eUserEzsignsendreminderfrequency_H
