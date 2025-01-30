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
 * Ezsignannotation_RequestCompound.h
 *
 * A Ezsignannotation Object and children
 */

#ifndef Ezsignannotation_RequestCompound_H
#define Ezsignannotation_RequestCompound_H

#include <QJsonObject>

#include "Enum_Horizontalalignment.h"
#include "Enum_Verticalalignment.h"
#include "Field_eEzsignannotationType.h"
#include "Textstylestatic_RequestCompound.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Textstylestatic_RequestCompound;

class Ezsignannotation_RequestCompound : public Object {
public:
    Ezsignannotation_RequestCompound();
    Ezsignannotation_RequestCompound(QString json);
    ~Ezsignannotation_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignannotationId() const;
    void setPkiEzsignannotationId(const qint32 &pki_ezsignannotation_id);
    bool is_pki_ezsignannotation_id_Set() const;
    bool is_pki_ezsignannotation_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    Enum_Horizontalalignment getEEzsignannotationHorizontalalignment() const;
    void setEEzsignannotationHorizontalalignment(const Enum_Horizontalalignment &e_ezsignannotation_horizontalalignment);
    bool is_e_ezsignannotation_horizontalalignment_Set() const;
    bool is_e_ezsignannotation_horizontalalignment_Valid() const;

    Enum_Verticalalignment getEEzsignannotationVerticalalignment() const;
    void setEEzsignannotationVerticalalignment(const Enum_Verticalalignment &e_ezsignannotation_verticalalignment);
    bool is_e_ezsignannotation_verticalalignment_Set() const;
    bool is_e_ezsignannotation_verticalalignment_Valid() const;

    Field_eEzsignannotationType getEEzsignannotationType() const;
    void setEEzsignannotationType(const Field_eEzsignannotationType &e_ezsignannotation_type);
    bool is_e_ezsignannotation_type_Set() const;
    bool is_e_ezsignannotation_type_Valid() const;

    qint32 getIEzsignannotationX() const;
    void setIEzsignannotationX(const qint32 &i_ezsignannotation_x);
    bool is_i_ezsignannotation_x_Set() const;
    bool is_i_ezsignannotation_x_Valid() const;

    qint32 getIEzsignannotationY() const;
    void setIEzsignannotationY(const qint32 &i_ezsignannotation_y);
    bool is_i_ezsignannotation_y_Set() const;
    bool is_i_ezsignannotation_y_Valid() const;

    qint32 getIEzsignannotationWidth() const;
    void setIEzsignannotationWidth(const qint32 &i_ezsignannotation_width);
    bool is_i_ezsignannotation_width_Set() const;
    bool is_i_ezsignannotation_width_Valid() const;

    qint32 getIEzsignannotationHeight() const;
    void setIEzsignannotationHeight(const qint32 &i_ezsignannotation_height);
    bool is_i_ezsignannotation_height_Set() const;
    bool is_i_ezsignannotation_height_Valid() const;

    QString getSEzsignannotationText() const;
    void setSEzsignannotationText(const QString &s_ezsignannotation_text);
    bool is_s_ezsignannotation_text_Set() const;
    bool is_s_ezsignannotation_text_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    Textstylestatic_RequestCompound getObjTextstylestatic() const;
    void setObjTextstylestatic(const Textstylestatic_RequestCompound &obj_textstylestatic);
    bool is_obj_textstylestatic_Set() const;
    bool is_obj_textstylestatic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignannotation_id;
    bool m_pki_ezsignannotation_id_isSet;
    bool m_pki_ezsignannotation_id_isValid;

    qint32 m_fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    Enum_Horizontalalignment m_e_ezsignannotation_horizontalalignment;
    bool m_e_ezsignannotation_horizontalalignment_isSet;
    bool m_e_ezsignannotation_horizontalalignment_isValid;

    Enum_Verticalalignment m_e_ezsignannotation_verticalalignment;
    bool m_e_ezsignannotation_verticalalignment_isSet;
    bool m_e_ezsignannotation_verticalalignment_isValid;

    Field_eEzsignannotationType m_e_ezsignannotation_type;
    bool m_e_ezsignannotation_type_isSet;
    bool m_e_ezsignannotation_type_isValid;

    qint32 m_i_ezsignannotation_x;
    bool m_i_ezsignannotation_x_isSet;
    bool m_i_ezsignannotation_x_isValid;

    qint32 m_i_ezsignannotation_y;
    bool m_i_ezsignannotation_y_isSet;
    bool m_i_ezsignannotation_y_isValid;

    qint32 m_i_ezsignannotation_width;
    bool m_i_ezsignannotation_width_isSet;
    bool m_i_ezsignannotation_width_isValid;

    qint32 m_i_ezsignannotation_height;
    bool m_i_ezsignannotation_height_isSet;
    bool m_i_ezsignannotation_height_isValid;

    QString m_s_ezsignannotation_text;
    bool m_s_ezsignannotation_text_isSet;
    bool m_s_ezsignannotation_text_isValid;

    qint32 m_i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    Textstylestatic_RequestCompound m_obj_textstylestatic;
    bool m_obj_textstylestatic_isSet;
    bool m_obj_textstylestatic_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignannotation_RequestCompound)

#endif // Ezsignannotation_RequestCompound_H
