/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Field_eWebhookEzsignevent.h
 *
 * This Ezsign Event. This property will be set only if the Module is \&quot;Ezsign\&quot;
 */

#ifndef Field_eWebhookEzsignevent_H
#define Field_eWebhookEzsignevent_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Field_eWebhookEzsignevent : public Enum {
public:
    Field_eWebhookEzsignevent();
    Field_eWebhookEzsignevent(QString json);
    ~Field_eWebhookEzsignevent() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eField_eWebhookEzsignevent {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DOCUMENTCOMPLETED, 
        DOCUMENTFORMCOMPLETED, 
        DOCUMENTUNSENT, 
        EZSIGNSIGNERACCEPTCLAUSE, 
        EZSIGNSIGNERCONNECT, 
        FOLDERCOMPLETED, 
        FOLDERDISPOSED, 
        FOLDERSENT, 
        FOLDERUNSENT, 
        SIGNATURESIGNED
    };
    Field_eWebhookEzsignevent::eField_eWebhookEzsignevent getValue() const;
    void setValue(const Field_eWebhookEzsignevent::eField_eWebhookEzsignevent& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eField_eWebhookEzsignevent m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Field_eWebhookEzsignevent)

#endif // Field_eWebhookEzsignevent_H
