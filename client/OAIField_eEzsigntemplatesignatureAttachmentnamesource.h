/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIField_eEzsigntemplatesignatureAttachmentnamesource.h
 *
 * The source of the name of the attachment added to the Ezsigntemplatesignature
 */

#ifndef OAIField_eEzsigntemplatesignatureAttachmentnamesource_H
#define OAIField_eEzsigntemplatesignatureAttachmentnamesource_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsigntemplatesignatureAttachmentnamesource : public OAIEnum {
public:
    OAIField_eEzsigntemplatesignatureAttachmentnamesource();
    OAIField_eEzsigntemplatesignatureAttachmentnamesource(QString json);
    ~OAIField_eEzsigntemplatesignatureAttachmentnamesource() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsigntemplatesignatureAttachmentnamesource {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        DESCRIPTION, 
        CUSTOMER, 
        DESCRIPTIONCUSTOMER
    };
    OAIField_eEzsigntemplatesignatureAttachmentnamesource::eOAIField_eEzsigntemplatesignatureAttachmentnamesource getValue() const;
    void setValue(const OAIField_eEzsigntemplatesignatureAttachmentnamesource::eOAIField_eEzsigntemplatesignatureAttachmentnamesource& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsigntemplatesignatureAttachmentnamesource m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsigntemplatesignatureAttachmentnamesource)

#endif // OAIField_eEzsigntemplatesignatureAttachmentnamesource_H
