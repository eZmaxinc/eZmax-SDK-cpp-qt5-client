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
 * OAIField_eWebhookEzsignevent.h
 *
 * This Ezsign Event. This property will be set only if the Module is \&quot;Ezsign\&quot;
 */

#ifndef OAIField_eWebhookEzsignevent_H
#define OAIField_eWebhookEzsignevent_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eWebhookEzsignevent : public OAIEnum {
public:
    OAIField_eWebhookEzsignevent();
    OAIField_eWebhookEzsignevent(QString json);
    ~OAIField_eWebhookEzsignevent() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eWebhookEzsignevent {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DOCUMENTCOMPLETED, 
        EZSIGNSIGNERACCEPTCLAUSE, 
        EZSIGNSIGNERCONNECT, 
        FOLDERCOMPLETED
    };
    OAIField_eWebhookEzsignevent::eOAIField_eWebhookEzsignevent getValue() const;
    void setValue(const OAIField_eWebhookEzsignevent::eOAIField_eWebhookEzsignevent& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eWebhookEzsignevent m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eWebhookEzsignevent)

#endif // OAIField_eWebhookEzsignevent_H
