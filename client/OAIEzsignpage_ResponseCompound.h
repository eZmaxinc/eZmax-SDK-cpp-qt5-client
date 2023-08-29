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
 * OAIEzsignpage_ResponseCompound.h
 *
 * An Ezsignpage Object and children to create a complete structure
 */

#ifndef OAIEzsignpage_ResponseCompound_H
#define OAIEzsignpage_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignpage_ResponseCompound : public OAIObject {
public:
    OAIEzsignpage_ResponseCompound();
    OAIEzsignpage_ResponseCompound(QString json);
    ~OAIEzsignpage_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignpageId() const;
    void setPkiEzsignpageId(const qint32 &pki_ezsignpage_id);
    bool is_pki_ezsignpage_id_Set() const;
    bool is_pki_ezsignpage_id_Valid() const;

    qint32 getIEzsignpageWidthimage() const;
    void setIEzsignpageWidthimage(const qint32 &i_ezsignpage_widthimage);
    bool is_i_ezsignpage_widthimage_Set() const;
    bool is_i_ezsignpage_widthimage_Valid() const;

    qint32 getIEzsignpageHeightimage() const;
    void setIEzsignpageHeightimage(const qint32 &i_ezsignpage_heightimage);
    bool is_i_ezsignpage_heightimage_Set() const;
    bool is_i_ezsignpage_heightimage_Valid() const;

    qint32 getIEzsignpageWidthpdf() const;
    void setIEzsignpageWidthpdf(const qint32 &i_ezsignpage_widthpdf);
    bool is_i_ezsignpage_widthpdf_Set() const;
    bool is_i_ezsignpage_widthpdf_Valid() const;

    qint32 getIEzsignpageHeightpdf() const;
    void setIEzsignpageHeightpdf(const qint32 &i_ezsignpage_heightpdf);
    bool is_i_ezsignpage_heightpdf_Set() const;
    bool is_i_ezsignpage_heightpdf_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    QString getSComputedImageurl() const;
    void setSComputedImageurl(const QString &s_computed_imageurl);
    bool is_s_computed_imageurl_Set() const;
    bool is_s_computed_imageurl_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignpage_id;
    bool m_pki_ezsignpage_id_isSet;
    bool m_pki_ezsignpage_id_isValid;

    qint32 m_i_ezsignpage_widthimage;
    bool m_i_ezsignpage_widthimage_isSet;
    bool m_i_ezsignpage_widthimage_isValid;

    qint32 m_i_ezsignpage_heightimage;
    bool m_i_ezsignpage_heightimage_isSet;
    bool m_i_ezsignpage_heightimage_isValid;

    qint32 m_i_ezsignpage_widthpdf;
    bool m_i_ezsignpage_widthpdf_isSet;
    bool m_i_ezsignpage_widthpdf_isValid;

    qint32 m_i_ezsignpage_heightpdf;
    bool m_i_ezsignpage_heightpdf_isSet;
    bool m_i_ezsignpage_heightpdf_isValid;

    qint32 m_i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    QString m_s_computed_imageurl;
    bool m_s_computed_imageurl_isSet;
    bool m_s_computed_imageurl_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignpage_ResponseCompound)

#endif // OAIEzsignpage_ResponseCompound_H
