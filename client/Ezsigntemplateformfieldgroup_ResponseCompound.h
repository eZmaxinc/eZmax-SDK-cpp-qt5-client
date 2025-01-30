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
 * Ezsigntemplateformfieldgroup_ResponseCompound.h
 *
 * A Ezsigntemplateformfieldgroup Object and children
 */

#ifndef Ezsigntemplateformfieldgroup_ResponseCompound_H
#define Ezsigntemplateformfieldgroup_ResponseCompound_H

#include <QJsonObject>

#include "Custom_DropdownElement_ResponseCompound.h"
#include "Enum_Textvalidation.h"
#include "Ezsigntemplateformfield_ResponseCompound.h"
#include "Ezsigntemplateformfieldgroupsigner_ResponseCompound.h"
#include "Field_eEzsigntemplateformfieldgroupSignerrequirement.h"
#include "Field_eEzsigntemplateformfieldgroupTooltipposition.h"
#include "Field_eEzsigntemplateformfieldgroupType.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplateformfieldgroupsigner_ResponseCompound;
class Custom_DropdownElement_ResponseCompound;
class Ezsigntemplateformfield_ResponseCompound;

class Ezsigntemplateformfieldgroup_ResponseCompound : public Object {
public:
    Ezsigntemplateformfieldgroup_ResponseCompound();
    Ezsigntemplateformfieldgroup_ResponseCompound(QString json);
    ~Ezsigntemplateformfieldgroup_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateformfieldgroupId() const;
    void setPkiEzsigntemplateformfieldgroupId(const qint32 &pki_ezsigntemplateformfieldgroup_id);
    bool is_pki_ezsigntemplateformfieldgroup_id_Set() const;
    bool is_pki_ezsigntemplateformfieldgroup_id_Valid() const;

    qint32 getFkiEzsigntemplatedocumentId() const;
    void setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id);
    bool is_fki_ezsigntemplatedocument_id_Set() const;
    bool is_fki_ezsigntemplatedocument_id_Valid() const;

    Field_eEzsigntemplateformfieldgroupType getEEzsigntemplateformfieldgroupType() const;
    void setEEzsigntemplateformfieldgroupType(const Field_eEzsigntemplateformfieldgroupType &e_ezsigntemplateformfieldgroup_type);
    bool is_e_ezsigntemplateformfieldgroup_type_Set() const;
    bool is_e_ezsigntemplateformfieldgroup_type_Valid() const;

    Q_DECL_DEPRECATED Field_eEzsigntemplateformfieldgroupSignerrequirement getEEzsigntemplateformfieldgroupSignerrequirement() const;
    Q_DECL_DEPRECATED void setEEzsigntemplateformfieldgroupSignerrequirement(const Field_eEzsigntemplateformfieldgroupSignerrequirement &e_ezsigntemplateformfieldgroup_signerrequirement);
    Q_DECL_DEPRECATED bool is_e_ezsigntemplateformfieldgroup_signerrequirement_Set() const;
    Q_DECL_DEPRECATED bool is_e_ezsigntemplateformfieldgroup_signerrequirement_Valid() const;

    QString getSEzsigntemplateformfieldgroupLabel() const;
    void setSEzsigntemplateformfieldgroupLabel(const QString &s_ezsigntemplateformfieldgroup_label);
    bool is_s_ezsigntemplateformfieldgroup_label_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_label_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupStep() const;
    void setIEzsigntemplateformfieldgroupStep(const qint32 &i_ezsigntemplateformfieldgroup_step);
    bool is_i_ezsigntemplateformfieldgroup_step_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_step_Valid() const;

    QString getSEzsigntemplateformfieldgroupDefaultvalue() const;
    void setSEzsigntemplateformfieldgroupDefaultvalue(const QString &s_ezsigntemplateformfieldgroup_defaultvalue);
    bool is_s_ezsigntemplateformfieldgroup_defaultvalue_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_defaultvalue_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupFilledmin() const;
    void setIEzsigntemplateformfieldgroupFilledmin(const qint32 &i_ezsigntemplateformfieldgroup_filledmin);
    bool is_i_ezsigntemplateformfieldgroup_filledmin_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_filledmin_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupFilledmax() const;
    void setIEzsigntemplateformfieldgroupFilledmax(const qint32 &i_ezsigntemplateformfieldgroup_filledmax);
    bool is_i_ezsigntemplateformfieldgroup_filledmax_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_filledmax_Valid() const;

    bool isBEzsigntemplateformfieldgroupReadonly() const;
    void setBEzsigntemplateformfieldgroupReadonly(const bool &b_ezsigntemplateformfieldgroup_readonly);
    bool is_b_ezsigntemplateformfieldgroup_readonly_Set() const;
    bool is_b_ezsigntemplateformfieldgroup_readonly_Valid() const;

    qint32 getIEzsigntemplateformfieldgroupMaxlength() const;
    void setIEzsigntemplateformfieldgroupMaxlength(const qint32 &i_ezsigntemplateformfieldgroup_maxlength);
    bool is_i_ezsigntemplateformfieldgroup_maxlength_Set() const;
    bool is_i_ezsigntemplateformfieldgroup_maxlength_Valid() const;

    bool isBEzsigntemplateformfieldgroupEncrypted() const;
    void setBEzsigntemplateformfieldgroupEncrypted(const bool &b_ezsigntemplateformfieldgroup_encrypted);
    bool is_b_ezsigntemplateformfieldgroup_encrypted_Set() const;
    bool is_b_ezsigntemplateformfieldgroup_encrypted_Valid() const;

    QString getSEzsigntemplateformfieldgroupRegexp() const;
    void setSEzsigntemplateformfieldgroupRegexp(const QString &s_ezsigntemplateformfieldgroup_regexp);
    bool is_s_ezsigntemplateformfieldgroup_regexp_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_regexp_Valid() const;

    QString getSEzsigntemplateformfieldgroupTextvalidationcustommessage() const;
    void setSEzsigntemplateformfieldgroupTextvalidationcustommessage(const QString &s_ezsigntemplateformfieldgroup_textvalidationcustommessage);
    bool is_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_Set() const;
    bool is_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_Valid() const;

    Enum_Textvalidation getEEzsigntemplateformfieldgroupTextvalidation() const;
    void setEEzsigntemplateformfieldgroupTextvalidation(const Enum_Textvalidation &e_ezsigntemplateformfieldgroup_textvalidation);
    bool is_e_ezsigntemplateformfieldgroup_textvalidation_Set() const;
    bool is_e_ezsigntemplateformfieldgroup_textvalidation_Valid() const;

    QString getTEzsigntemplateformfieldgroupTooltip() const;
    void setTEzsigntemplateformfieldgroupTooltip(const QString &t_ezsigntemplateformfieldgroup_tooltip);
    bool is_t_ezsigntemplateformfieldgroup_tooltip_Set() const;
    bool is_t_ezsigntemplateformfieldgroup_tooltip_Valid() const;

    Field_eEzsigntemplateformfieldgroupTooltipposition getEEzsigntemplateformfieldgroupTooltipposition() const;
    void setEEzsigntemplateformfieldgroupTooltipposition(const Field_eEzsigntemplateformfieldgroupTooltipposition &e_ezsigntemplateformfieldgroup_tooltipposition);
    bool is_e_ezsigntemplateformfieldgroup_tooltipposition_Set() const;
    bool is_e_ezsigntemplateformfieldgroup_tooltipposition_Valid() const;

    QList<Ezsigntemplateformfieldgroupsigner_ResponseCompound> getAObjEzsigntemplateformfieldgroupsigner() const;
    void setAObjEzsigntemplateformfieldgroupsigner(const QList<Ezsigntemplateformfieldgroupsigner_ResponseCompound> &a_obj_ezsigntemplateformfieldgroupsigner);
    bool is_a_obj_ezsigntemplateformfieldgroupsigner_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroupsigner_Valid() const;

    QList<Custom_DropdownElement_ResponseCompound> getAObjDropdownElement() const;
    void setAObjDropdownElement(const QList<Custom_DropdownElement_ResponseCompound> &a_obj_dropdown_element);
    bool is_a_obj_dropdown_element_Set() const;
    bool is_a_obj_dropdown_element_Valid() const;

    QList<Ezsigntemplateformfield_ResponseCompound> getAObjEzsigntemplateformfield() const;
    void setAObjEzsigntemplateformfield(const QList<Ezsigntemplateformfield_ResponseCompound> &a_obj_ezsigntemplateformfield);
    bool is_a_obj_ezsigntemplateformfield_Set() const;
    bool is_a_obj_ezsigntemplateformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplateformfieldgroup_id;
    bool m_pki_ezsigntemplateformfieldgroup_id_isSet;
    bool m_pki_ezsigntemplateformfieldgroup_id_isValid;

    qint32 m_fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    Field_eEzsigntemplateformfieldgroupType m_e_ezsigntemplateformfieldgroup_type;
    bool m_e_ezsigntemplateformfieldgroup_type_isSet;
    bool m_e_ezsigntemplateformfieldgroup_type_isValid;

    Field_eEzsigntemplateformfieldgroupSignerrequirement m_e_ezsigntemplateformfieldgroup_signerrequirement;
    bool m_e_ezsigntemplateformfieldgroup_signerrequirement_isSet;
    bool m_e_ezsigntemplateformfieldgroup_signerrequirement_isValid;

    QString m_s_ezsigntemplateformfieldgroup_label;
    bool m_s_ezsigntemplateformfieldgroup_label_isSet;
    bool m_s_ezsigntemplateformfieldgroup_label_isValid;

    qint32 m_i_ezsigntemplateformfieldgroup_step;
    bool m_i_ezsigntemplateformfieldgroup_step_isSet;
    bool m_i_ezsigntemplateformfieldgroup_step_isValid;

    QString m_s_ezsigntemplateformfieldgroup_defaultvalue;
    bool m_s_ezsigntemplateformfieldgroup_defaultvalue_isSet;
    bool m_s_ezsigntemplateformfieldgroup_defaultvalue_isValid;

    qint32 m_i_ezsigntemplateformfieldgroup_filledmin;
    bool m_i_ezsigntemplateformfieldgroup_filledmin_isSet;
    bool m_i_ezsigntemplateformfieldgroup_filledmin_isValid;

    qint32 m_i_ezsigntemplateformfieldgroup_filledmax;
    bool m_i_ezsigntemplateformfieldgroup_filledmax_isSet;
    bool m_i_ezsigntemplateformfieldgroup_filledmax_isValid;

    bool m_b_ezsigntemplateformfieldgroup_readonly;
    bool m_b_ezsigntemplateformfieldgroup_readonly_isSet;
    bool m_b_ezsigntemplateformfieldgroup_readonly_isValid;

    qint32 m_i_ezsigntemplateformfieldgroup_maxlength;
    bool m_i_ezsigntemplateformfieldgroup_maxlength_isSet;
    bool m_i_ezsigntemplateformfieldgroup_maxlength_isValid;

    bool m_b_ezsigntemplateformfieldgroup_encrypted;
    bool m_b_ezsigntemplateformfieldgroup_encrypted_isSet;
    bool m_b_ezsigntemplateformfieldgroup_encrypted_isValid;

    QString m_s_ezsigntemplateformfieldgroup_regexp;
    bool m_s_ezsigntemplateformfieldgroup_regexp_isSet;
    bool m_s_ezsigntemplateformfieldgroup_regexp_isValid;

    QString m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage;
    bool m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isSet;
    bool m_s_ezsigntemplateformfieldgroup_textvalidationcustommessage_isValid;

    Enum_Textvalidation m_e_ezsigntemplateformfieldgroup_textvalidation;
    bool m_e_ezsigntemplateformfieldgroup_textvalidation_isSet;
    bool m_e_ezsigntemplateformfieldgroup_textvalidation_isValid;

    QString m_t_ezsigntemplateformfieldgroup_tooltip;
    bool m_t_ezsigntemplateformfieldgroup_tooltip_isSet;
    bool m_t_ezsigntemplateformfieldgroup_tooltip_isValid;

    Field_eEzsigntemplateformfieldgroupTooltipposition m_e_ezsigntemplateformfieldgroup_tooltipposition;
    bool m_e_ezsigntemplateformfieldgroup_tooltipposition_isSet;
    bool m_e_ezsigntemplateformfieldgroup_tooltipposition_isValid;

    QList<Ezsigntemplateformfieldgroupsigner_ResponseCompound> m_a_obj_ezsigntemplateformfieldgroupsigner;
    bool m_a_obj_ezsigntemplateformfieldgroupsigner_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;

    QList<Custom_DropdownElement_ResponseCompound> m_a_obj_dropdown_element;
    bool m_a_obj_dropdown_element_isSet;
    bool m_a_obj_dropdown_element_isValid;

    QList<Ezsigntemplateformfield_ResponseCompound> m_a_obj_ezsigntemplateformfield;
    bool m_a_obj_ezsigntemplateformfield_isSet;
    bool m_a_obj_ezsigntemplateformfield_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateformfieldgroup_ResponseCompound)

#endif // Ezsigntemplateformfieldgroup_ResponseCompound_H
