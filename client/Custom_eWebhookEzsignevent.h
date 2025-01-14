/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Custom_eWebhookEzsignevent.h
 *
 * This Ezsign Event. This property will be set only if the Module is \&quot;Ezsign\&quot;
 */

#ifndef Custom_eWebhookEzsignevent_H
#define Custom_eWebhookEzsignevent_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_eWebhookEzsignevent : public Enum {
public:
    Custom_eWebhookEzsignevent();
    Custom_eWebhookEzsignevent(QString json);
    ~Custom_eWebhookEzsignevent() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eCustom_eWebhookEzsignevent {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DOCUMENTCOMPLETED, 
        DOCUMENTFORMCOMPLETED, 
        DOCUMENTUNSENT, 
        EZSIGNSIGNERACCEPTCLAUSE, 
        EZSIGNSIGNERCONNECT, 
        FOLDERCOMPLETED, 
        FOLDERDISPOSED, 
        FOLDERSENT, 
        FOLDERUNSENT
    };
    Custom_eWebhookEzsignevent::eCustom_eWebhookEzsignevent getValue() const;
    void setValue(const Custom_eWebhookEzsignevent::eCustom_eWebhookEzsignevent& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eCustom_eWebhookEzsignevent m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_eWebhookEzsignevent)

#endif // Custom_eWebhookEzsignevent_H
