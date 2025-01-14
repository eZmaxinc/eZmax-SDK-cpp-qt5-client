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
 * Branding_RequestV2.h
 *
 * A Branding Object
 */

#ifndef Branding_RequestV2_H
#define Branding_RequestV2_H

#include <QJsonObject>

#include "Field_eBrandingAlignlogo.h"
#include "Field_eBrandingLogo.h"
#include "Multilingual_BrandingDescription.h"
#include <QByteArray>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_BrandingDescription;

class Branding_RequestV2 : public Object {
public:
    Branding_RequestV2();
    Branding_RequestV2(QString json);
    ~Branding_RequestV2() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiBrandingId() const;
    void setPkiBrandingId(const qint32 &pki_branding_id);
    bool is_pki_branding_id_Set() const;
    bool is_pki_branding_id_Valid() const;

    Multilingual_BrandingDescription getObjBrandingDescription() const;
    void setObjBrandingDescription(const Multilingual_BrandingDescription &obj_branding_description);
    bool is_obj_branding_description_Set() const;
    bool is_obj_branding_description_Valid() const;

    Field_eBrandingLogo getEBrandingLogo() const;
    void setEBrandingLogo(const Field_eBrandingLogo &e_branding_logo);
    bool is_e_branding_logo_Set() const;
    bool is_e_branding_logo_Valid() const;

    Field_eBrandingAlignlogo getEBrandingAlignlogo() const;
    void setEBrandingAlignlogo(const Field_eBrandingAlignlogo &e_branding_alignlogo);
    bool is_e_branding_alignlogo_Set() const;
    bool is_e_branding_alignlogo_Valid() const;

    QByteArray getSBrandingBase64() const;
    void setSBrandingBase64(const QByteArray &s_branding_base64);
    bool is_s_branding_base64_Set() const;
    bool is_s_branding_base64_Valid() const;

    qint32 getIBrandingColor() const;
    void setIBrandingColor(const qint32 &i_branding_color);
    bool is_i_branding_color_Set() const;
    bool is_i_branding_color_Valid() const;

    QString getSBrandingName() const;
    void setSBrandingName(const QString &s_branding_name);
    bool is_s_branding_name_Set() const;
    bool is_s_branding_name_Valid() const;

    QString getSEmailAddress() const;
    void setSEmailAddress(const QString &s_email_address);
    bool is_s_email_address_Set() const;
    bool is_s_email_address_Valid() const;

    bool isBBrandingIsactive() const;
    void setBBrandingIsactive(const bool &b_branding_isactive);
    bool is_b_branding_isactive_Set() const;
    bool is_b_branding_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_branding_id;
    bool m_pki_branding_id_isSet;
    bool m_pki_branding_id_isValid;

    Multilingual_BrandingDescription m_obj_branding_description;
    bool m_obj_branding_description_isSet;
    bool m_obj_branding_description_isValid;

    Field_eBrandingLogo m_e_branding_logo;
    bool m_e_branding_logo_isSet;
    bool m_e_branding_logo_isValid;

    Field_eBrandingAlignlogo m_e_branding_alignlogo;
    bool m_e_branding_alignlogo_isSet;
    bool m_e_branding_alignlogo_isValid;

    QByteArray m_s_branding_base64;
    bool m_s_branding_base64_isSet;
    bool m_s_branding_base64_isValid;

    qint32 m_i_branding_color;
    bool m_i_branding_color_isSet;
    bool m_i_branding_color_isValid;

    QString m_s_branding_name;
    bool m_s_branding_name_isSet;
    bool m_s_branding_name_isValid;

    QString m_s_email_address;
    bool m_s_email_address_isSet;
    bool m_s_email_address_isValid;

    bool m_b_branding_isactive;
    bool m_b_branding_isactive_isSet;
    bool m_b_branding_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Branding_RequestV2)

#endif // Branding_RequestV2_H
