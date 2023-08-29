/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eSessionhistoryEndby.h
 *
 * The Type of the Sessionhistory
 */

#ifndef OAIField_eSessionhistoryEndby_H
#define OAIField_eSessionhistoryEndby_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eSessionhistoryEndby : public OAIEnum {
public:
    OAIField_eSessionhistoryEndby();
    OAIField_eSessionhistoryEndby(QString json);
    ~OAIField_eSessionhistoryEndby() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eSessionhistoryEndby {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DECRYPTION, 
        HACK, 
        EXPIRED, 
        HIJACK, 
        DOUBLELOGON, 
        GARBAGE, 
        LOGOFF, 
        BADAUTH, 
        LOCKED, 
        INACTIVE, 
        INVALIDUSER, 
        BADUSERTYPE, 
        BADIP, 
        FORCEDLOGOFF
    };
    OAIField_eSessionhistoryEndby::eOAIField_eSessionhistoryEndby getValue() const;
    void setValue(const OAIField_eSessionhistoryEndby::eOAIField_eSessionhistoryEndby& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eSessionhistoryEndby m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eSessionhistoryEndby)

#endif // OAIField_eSessionhistoryEndby_H
