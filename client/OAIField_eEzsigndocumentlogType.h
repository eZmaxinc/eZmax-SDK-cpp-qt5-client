/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsigndocumentlogType.h
 *
 * The Ezsigndocumentlog Type.
 */

#ifndef OAIField_eEzsigndocumentlogType_H
#define OAIField_eEzsigndocumentlogType_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigndocumentlogType : public OAIEnum {
public:
    OAIField_eEzsigndocumentlogType();
    OAIField_eEzsigndocumentlogType(QString json);
    ~OAIField_eEzsigndocumentlogType() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigndocumentlogType {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        CLONE, 
        LOGIN, 
        SENDCODE, 
        BADCODE, 
        GOODCODE, 
        AUTHENTICATION, 
        CREATEPAGE, 
        DOWNLOAD, 
        SEND, 
        SIGN, 
        UPLOAD, 
        VIEW, 
        COMPLETION, 
        CHANGELIMITDATE, 
        UNSIGN, 
        IMPORTFROMINSTANET, 
        SENDEMAIL, 
        FORMCOMPLETION, 
        SIGNATUREATTACHMENTADD, 
        SIGNATUREATTACHMENTVALIDATION, 
        SIGNATUREATTACHMENTREFUSED, 
        SIGNATUREATTACHMENTDELETED, 
        DECLINEDTOSIGN
    };
    OAIField_eEzsigndocumentlogType::eOAIField_eEzsigndocumentlogType getValue() const;
    void setValue(const OAIField_eEzsigndocumentlogType::eOAIField_eEzsigndocumentlogType& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigndocumentlogType m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigndocumentlogType)

#endif // OAIField_eEzsigndocumentlogType_H
