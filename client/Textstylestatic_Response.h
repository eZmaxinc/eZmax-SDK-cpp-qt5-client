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
 * Textstylestatic_Response.h
 *
 * A Textstylestatic Object
 */

#ifndef Textstylestatic_Response_H
#define Textstylestatic_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Textstylestatic_Response : public Object {
public:
    Textstylestatic_Response();
    Textstylestatic_Response(QString json);
    ~Textstylestatic_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiTextstylestaticId() const;
    void setPkiTextstylestaticId(const qint32 &pki_textstylestatic_id);
    bool is_pki_textstylestatic_id_Set() const;
    bool is_pki_textstylestatic_id_Valid() const;

    qint32 getFkiFontId() const;
    void setFkiFontId(const qint32 &fki_font_id);
    bool is_fki_font_id_Set() const;
    bool is_fki_font_id_Valid() const;

    QString getSFontName() const;
    void setSFontName(const QString &s_font_name);
    bool is_s_font_name_Set() const;
    bool is_s_font_name_Valid() const;

    bool isBTextstylestaticBold() const;
    void setBTextstylestaticBold(const bool &b_textstylestatic_bold);
    bool is_b_textstylestatic_bold_Set() const;
    bool is_b_textstylestatic_bold_Valid() const;

    bool isBTextstylestaticUnderline() const;
    void setBTextstylestaticUnderline(const bool &b_textstylestatic_underline);
    bool is_b_textstylestatic_underline_Set() const;
    bool is_b_textstylestatic_underline_Valid() const;

    bool isBTextstylestaticItalic() const;
    void setBTextstylestaticItalic(const bool &b_textstylestatic_italic);
    bool is_b_textstylestatic_italic_Set() const;
    bool is_b_textstylestatic_italic_Valid() const;

    bool isBTextstylestaticStrikethrough() const;
    void setBTextstylestaticStrikethrough(const bool &b_textstylestatic_strikethrough);
    bool is_b_textstylestatic_strikethrough_Set() const;
    bool is_b_textstylestatic_strikethrough_Valid() const;

    qint32 getITextstylestaticFontcolor() const;
    void setITextstylestaticFontcolor(const qint32 &i_textstylestatic_fontcolor);
    bool is_i_textstylestatic_fontcolor_Set() const;
    bool is_i_textstylestatic_fontcolor_Valid() const;

    qint32 getITextstylestaticSize() const;
    void setITextstylestaticSize(const qint32 &i_textstylestatic_size);
    bool is_i_textstylestatic_size_Set() const;
    bool is_i_textstylestatic_size_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_textstylestatic_id;
    bool m_pki_textstylestatic_id_isSet;
    bool m_pki_textstylestatic_id_isValid;

    qint32 m_fki_font_id;
    bool m_fki_font_id_isSet;
    bool m_fki_font_id_isValid;

    QString m_s_font_name;
    bool m_s_font_name_isSet;
    bool m_s_font_name_isValid;

    bool m_b_textstylestatic_bold;
    bool m_b_textstylestatic_bold_isSet;
    bool m_b_textstylestatic_bold_isValid;

    bool m_b_textstylestatic_underline;
    bool m_b_textstylestatic_underline_isSet;
    bool m_b_textstylestatic_underline_isValid;

    bool m_b_textstylestatic_italic;
    bool m_b_textstylestatic_italic_isSet;
    bool m_b_textstylestatic_italic_isValid;

    bool m_b_textstylestatic_strikethrough;
    bool m_b_textstylestatic_strikethrough_isSet;
    bool m_b_textstylestatic_strikethrough_isValid;

    qint32 m_i_textstylestatic_fontcolor;
    bool m_i_textstylestatic_fontcolor_isSet;
    bool m_i_textstylestatic_fontcolor_isValid;

    qint32 m_i_textstylestatic_size;
    bool m_i_textstylestatic_size_isSet;
    bool m_i_textstylestatic_size_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Textstylestatic_Response)

#endif // Textstylestatic_Response_H
