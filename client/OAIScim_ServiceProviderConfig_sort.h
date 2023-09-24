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
 * OAIScim_ServiceProviderConfig_sort.h
 *
 * A complex type that specifies Sort configuration options.
 */

#ifndef OAIScim_ServiceProviderConfig_sort_H
#define OAIScim_ServiceProviderConfig_sort_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIScim_ServiceProviderConfig_sort : public OAIObject {
public:
    OAIScim_ServiceProviderConfig_sort();
    OAIScim_ServiceProviderConfig_sort(QString json);
    ~OAIScim_ServiceProviderConfig_sort() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isSupported() const;
    void setSupported(const bool &supported);
    bool is_supported_Set() const;
    bool is_supported_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_supported;
    bool m_supported_isSet;
    bool m_supported_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIScim_ServiceProviderConfig_sort)

#endif // OAIScim_ServiceProviderConfig_sort_H
