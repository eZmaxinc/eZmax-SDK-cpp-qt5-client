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
 * Ezsigntemplateformfield_Response.h
 *
 * An Ezsigntemplateformfield Object
 */

#ifndef Ezsigntemplateformfield_Response_H
#define Ezsigntemplateformfield_Response_H

#include <QJsonObject>

#include "Enum_Horizontalalignment.h"
#include "Field_eEzsigntemplateformfieldDependencyrequirement.h"
#include "Field_eEzsigntemplateformfieldPositioning.h"
#include "Field_eEzsigntemplateformfieldPositioningoccurence.h"
#include "Textstylestatic_ResponseCompound.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Textstylestatic_ResponseCompound;

class Ezsigntemplateformfield_Response : public Object {
public:
    Ezsigntemplateformfield_Response();
    Ezsigntemplateformfield_Response(QString json);
    ~Ezsigntemplateformfield_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldId() const;
    void setPkiEzsigntemplateformfieldId(const qint32 &pki_ezsigntemplateformfield_id);
    bool is_pki_ezsigntemplateformfield_id_Set() const;
    bool is_pki_ezsigntemplateformfield_id_Valid() const;

    Field_eEzsigntemplateformfieldPositioning getEEzsigntemplateformfieldPositioning() const;
    void setEEzsigntemplateformfieldPositioning(const Field_eEzsigntemplateformfieldPositioning &e_ezsigntemplateformfield_positioning);
    bool is_e_ezsigntemplateformfield_positioning_Set() const;
    bool is_e_ezsigntemplateformfield_positioning_Valid() const;

    qint32 getIEzsigntemplatedocumentpagePagenumber() const;
    void setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber);
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Set() const;
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const;

    QString getSEzsigntemplateformfieldLabel() const;
    void setSEzsigntemplateformfieldLabel(const QString &s_ezsigntemplateformfield_label);
    bool is_s_ezsigntemplateformfield_label_Set() const;
    bool is_s_ezsigntemplateformfield_label_Valid() const;

    QString getSEzsigntemplateformfieldValue() const;
    void setSEzsigntemplateformfieldValue(const QString &s_ezsigntemplateformfield_value);
    bool is_s_ezsigntemplateformfield_value_Set() const;
    bool is_s_ezsigntemplateformfield_value_Valid() const;

    qint32 getIEzsigntemplateformfieldX() const;
    void setIEzsigntemplateformfieldX(const qint32 &i_ezsigntemplateformfield_x);
    bool is_i_ezsigntemplateformfield_x_Set() const;
    bool is_i_ezsigntemplateformfield_x_Valid() const;

    qint32 getIEzsigntemplateformfieldY() const;
    void setIEzsigntemplateformfieldY(const qint32 &i_ezsigntemplateformfield_y);
    bool is_i_ezsigntemplateformfield_y_Set() const;
    bool is_i_ezsigntemplateformfield_y_Valid() const;

    qint32 getIEzsigntemplateformfieldWidth() const;
    void setIEzsigntemplateformfieldWidth(const qint32 &i_ezsigntemplateformfield_width);
    bool is_i_ezsigntemplateformfield_width_Set() const;
    bool is_i_ezsigntemplateformfield_width_Valid() const;

    qint32 getIEzsigntemplateformfieldHeight() const;
    void setIEzsigntemplateformfieldHeight(const qint32 &i_ezsigntemplateformfield_height);
    bool is_i_ezsigntemplateformfield_height_Set() const;
    bool is_i_ezsigntemplateformfield_height_Valid() const;

    bool isBEzsigntemplateformfieldAutocomplete() const;
    void setBEzsigntemplateformfieldAutocomplete(const bool &b_ezsigntemplateformfield_autocomplete);
    bool is_b_ezsigntemplateformfield_autocomplete_Set() const;
    bool is_b_ezsigntemplateformfield_autocomplete_Valid() const;

    bool isBEzsigntemplateformfieldSelected() const;
    void setBEzsigntemplateformfieldSelected(const bool &b_ezsigntemplateformfield_selected);
    bool is_b_ezsigntemplateformfield_selected_Set() const;
    bool is_b_ezsigntemplateformfield_selected_Valid() const;

    Field_eEzsigntemplateformfieldDependencyrequirement getEEzsigntemplateformfieldDependencyrequirement() const;
    void setEEzsigntemplateformfieldDependencyrequirement(const Field_eEzsigntemplateformfieldDependencyrequirement &e_ezsigntemplateformfield_dependencyrequirement);
    bool is_e_ezsigntemplateformfield_dependencyrequirement_Set() const;
    bool is_e_ezsigntemplateformfield_dependencyrequirement_Valid() const;

    QString getSEzsigntemplateformfieldPositioningpattern() const;
    void setSEzsigntemplateformfieldPositioningpattern(const QString &s_ezsigntemplateformfield_positioningpattern);
    bool is_s_ezsigntemplateformfield_positioningpattern_Set() const;
    bool is_s_ezsigntemplateformfield_positioningpattern_Valid() const;

    qint32 getIEzsigntemplateformfieldPositioningoffsetx() const;
    void setIEzsigntemplateformfieldPositioningoffsetx(const qint32 &i_ezsigntemplateformfield_positioningoffsetx);
    bool is_i_ezsigntemplateformfield_positioningoffsetx_Set() const;
    bool is_i_ezsigntemplateformfield_positioningoffsetx_Valid() const;

    qint32 getIEzsigntemplateformfieldPositioningoffsety() const;
    void setIEzsigntemplateformfieldPositioningoffsety(const qint32 &i_ezsigntemplateformfield_positioningoffsety);
    bool is_i_ezsigntemplateformfield_positioningoffsety_Set() const;
    bool is_i_ezsigntemplateformfield_positioningoffsety_Valid() const;

    Field_eEzsigntemplateformfieldPositioningoccurence getEEzsigntemplateformfieldPositioningoccurence() const;
    void setEEzsigntemplateformfieldPositioningoccurence(const Field_eEzsigntemplateformfieldPositioningoccurence &e_ezsigntemplateformfield_positioningoccurence);
    bool is_e_ezsigntemplateformfield_positioningoccurence_Set() const;
    bool is_e_ezsigntemplateformfield_positioningoccurence_Valid() const;

    Enum_Horizontalalignment getEEzsigntemplateformfieldHorizontalalignment() const;
    void setEEzsigntemplateformfieldHorizontalalignment(const Enum_Horizontalalignment &e_ezsigntemplateformfield_horizontalalignment);
    bool is_e_ezsigntemplateformfield_horizontalalignment_Set() const;
    bool is_e_ezsigntemplateformfield_horizontalalignment_Valid() const;

    Textstylestatic_ResponseCompound getObjTextstylestatic() const;
    void setObjTextstylestatic(const Textstylestatic_ResponseCompound &obj_textstylestatic);
    bool is_obj_textstylestatic_Set() const;
    bool is_obj_textstylestatic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplateformfield_id;
    bool m_pki_ezsigntemplateformfield_id_isSet;
    bool m_pki_ezsigntemplateformfield_id_isValid;

    Field_eEzsigntemplateformfieldPositioning m_e_ezsigntemplateformfield_positioning;
    bool m_e_ezsigntemplateformfield_positioning_isSet;
    bool m_e_ezsigntemplateformfield_positioning_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_pagenumber;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    QString m_s_ezsigntemplateformfield_label;
    bool m_s_ezsigntemplateformfield_label_isSet;
    bool m_s_ezsigntemplateformfield_label_isValid;

    QString m_s_ezsigntemplateformfield_value;
    bool m_s_ezsigntemplateformfield_value_isSet;
    bool m_s_ezsigntemplateformfield_value_isValid;

    qint32 m_i_ezsigntemplateformfield_x;
    bool m_i_ezsigntemplateformfield_x_isSet;
    bool m_i_ezsigntemplateformfield_x_isValid;

    qint32 m_i_ezsigntemplateformfield_y;
    bool m_i_ezsigntemplateformfield_y_isSet;
    bool m_i_ezsigntemplateformfield_y_isValid;

    qint32 m_i_ezsigntemplateformfield_width;
    bool m_i_ezsigntemplateformfield_width_isSet;
    bool m_i_ezsigntemplateformfield_width_isValid;

    qint32 m_i_ezsigntemplateformfield_height;
    bool m_i_ezsigntemplateformfield_height_isSet;
    bool m_i_ezsigntemplateformfield_height_isValid;

    bool m_b_ezsigntemplateformfield_autocomplete;
    bool m_b_ezsigntemplateformfield_autocomplete_isSet;
    bool m_b_ezsigntemplateformfield_autocomplete_isValid;

    bool m_b_ezsigntemplateformfield_selected;
    bool m_b_ezsigntemplateformfield_selected_isSet;
    bool m_b_ezsigntemplateformfield_selected_isValid;

    Field_eEzsigntemplateformfieldDependencyrequirement m_e_ezsigntemplateformfield_dependencyrequirement;
    bool m_e_ezsigntemplateformfield_dependencyrequirement_isSet;
    bool m_e_ezsigntemplateformfield_dependencyrequirement_isValid;

    QString m_s_ezsigntemplateformfield_positioningpattern;
    bool m_s_ezsigntemplateformfield_positioningpattern_isSet;
    bool m_s_ezsigntemplateformfield_positioningpattern_isValid;

    qint32 m_i_ezsigntemplateformfield_positioningoffsetx;
    bool m_i_ezsigntemplateformfield_positioningoffsetx_isSet;
    bool m_i_ezsigntemplateformfield_positioningoffsetx_isValid;

    qint32 m_i_ezsigntemplateformfield_positioningoffsety;
    bool m_i_ezsigntemplateformfield_positioningoffsety_isSet;
    bool m_i_ezsigntemplateformfield_positioningoffsety_isValid;

    Field_eEzsigntemplateformfieldPositioningoccurence m_e_ezsigntemplateformfield_positioningoccurence;
    bool m_e_ezsigntemplateformfield_positioningoccurence_isSet;
    bool m_e_ezsigntemplateformfield_positioningoccurence_isValid;

    Enum_Horizontalalignment m_e_ezsigntemplateformfield_horizontalalignment;
    bool m_e_ezsigntemplateformfield_horizontalalignment_isSet;
    bool m_e_ezsigntemplateformfield_horizontalalignment_isValid;

    Textstylestatic_ResponseCompound m_obj_textstylestatic;
    bool m_obj_textstylestatic_isSet;
    bool m_obj_textstylestatic_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateformfield_Response)

#endif // Ezsigntemplateformfield_Response_H
