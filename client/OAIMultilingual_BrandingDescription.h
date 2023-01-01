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
 * OAIMultilingual_BrandingDescription.h
 *
 * Description of the Branding
 */

#ifndef OAIMultilingual_BrandingDescription_H
#define OAIMultilingual_BrandingDescription_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_BrandingDescription : public OAIObject {
public:
    OAIMultilingual_BrandingDescription();
    OAIMultilingual_BrandingDescription(QString json);
    ~OAIMultilingual_BrandingDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSBrandingDescription1() const;
    void setSBrandingDescription1(const QString &s_branding_description1);
    bool is_s_branding_description1_Set() const;
    bool is_s_branding_description1_Valid() const;

    QString getSBrandingDescription2() const;
    void setSBrandingDescription2(const QString &s_branding_description2);
    bool is_s_branding_description2_Set() const;
    bool is_s_branding_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_branding_description1;
    bool m_s_branding_description1_isSet;
    bool m_s_branding_description1_isValid;

    QString s_branding_description2;
    bool m_s_branding_description2_isSet;
    bool m_s_branding_description2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_BrandingDescription)

#endif // OAIMultilingual_BrandingDescription_H
