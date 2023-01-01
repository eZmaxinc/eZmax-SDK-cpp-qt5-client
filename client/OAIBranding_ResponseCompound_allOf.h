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
 * OAIBranding_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIBranding_ResponseCompound_allOf_H
#define OAIBranding_ResponseCompound_allOf_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIBranding_ResponseCompound_allOf : public OAIObject {
public:
    OAIBranding_ResponseCompound_allOf();
    OAIBranding_ResponseCompound_allOf(QString json);
    ~OAIBranding_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSBrandingLogourl() const;
    void setSBrandingLogourl(const QString &s_branding_logourl);
    bool is_s_branding_logourl_Set() const;
    bool is_s_branding_logourl_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_branding_logourl;
    bool m_s_branding_logourl_isSet;
    bool m_s_branding_logourl_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_ResponseCompound_allOf)

#endif // OAIBranding_ResponseCompound_allOf_H
