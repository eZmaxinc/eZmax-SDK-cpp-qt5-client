/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfieldgroup_ResponseCompound.h
 *
 * An Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef OAIEzsignformfieldgroup_ResponseCompound_H
#define OAIEzsignformfieldgroup_ResponseCompound_H

#include <QJsonObject>

#include "OAICustom_DropdownElement_ResponseCompound.h"
#include "OAIEzsignformfield_ResponseCompound.h"
#include "OAIEzsignformfieldgroup_Response.h"
#include "OAIEzsignformfieldgroup_ResponseCompound_allOf.h"
#include "OAIEzsignformfieldgroupsigner_ResponseCompound.h"
#include "OAIField_eEzsignformfieldgroupSignerrequirement.h"
#include "OAIField_eEzsignformfieldgroupTooltipposition.h"
#include "OAIField_eEzsignformfieldgroupType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignformfield_ResponseCompound;
class OAICustom_DropdownElement_ResponseCompound;
class OAIEzsignformfieldgroupsigner_ResponseCompound;

class OAIEzsignformfieldgroup_ResponseCompound : public OAIObject {
public:
    OAIEzsignformfieldgroup_ResponseCompound();
    OAIEzsignformfieldgroup_ResponseCompound(QString json);
    ~OAIEzsignformfieldgroup_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignformfieldgroupId() const;
    void setPkiEzsignformfieldgroupId(const qint32 &pki_ezsignformfieldgroup_id);
    bool is_pki_ezsignformfieldgroup_id_Set() const;
    bool is_pki_ezsignformfieldgroup_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    OAIField_eEzsignformfieldgroupType getEEzsignformfieldgroupType() const;
    void setEEzsignformfieldgroupType(const OAIField_eEzsignformfieldgroupType &e_ezsignformfieldgroup_type);
    bool is_e_ezsignformfieldgroup_type_Set() const;
    bool is_e_ezsignformfieldgroup_type_Valid() const;

    OAIField_eEzsignformfieldgroupSignerrequirement getEEzsignformfieldgroupSignerrequirement() const;
    void setEEzsignformfieldgroupSignerrequirement(const OAIField_eEzsignformfieldgroupSignerrequirement &e_ezsignformfieldgroup_signerrequirement);
    bool is_e_ezsignformfieldgroup_signerrequirement_Set() const;
    bool is_e_ezsignformfieldgroup_signerrequirement_Valid() const;

    QString getSEzsignformfieldgroupLabel() const;
    void setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label);
    bool is_s_ezsignformfieldgroup_label_Set() const;
    bool is_s_ezsignformfieldgroup_label_Valid() const;

    qint32 getIEzsignformfieldgroupStep() const;
    void setIEzsignformfieldgroupStep(const qint32 &i_ezsignformfieldgroup_step);
    bool is_i_ezsignformfieldgroup_step_Set() const;
    bool is_i_ezsignformfieldgroup_step_Valid() const;

    QString getSEzsignformfieldgroupDefaultvalue() const;
    void setSEzsignformfieldgroupDefaultvalue(const QString &s_ezsignformfieldgroup_defaultvalue);
    bool is_s_ezsignformfieldgroup_defaultvalue_Set() const;
    bool is_s_ezsignformfieldgroup_defaultvalue_Valid() const;

    qint32 getIEzsignformfieldgroupFilledmin() const;
    void setIEzsignformfieldgroupFilledmin(const qint32 &i_ezsignformfieldgroup_filledmin);
    bool is_i_ezsignformfieldgroup_filledmin_Set() const;
    bool is_i_ezsignformfieldgroup_filledmin_Valid() const;

    qint32 getIEzsignformfieldgroupFilledmax() const;
    void setIEzsignformfieldgroupFilledmax(const qint32 &i_ezsignformfieldgroup_filledmax);
    bool is_i_ezsignformfieldgroup_filledmax_Set() const;
    bool is_i_ezsignformfieldgroup_filledmax_Valid() const;

    bool isBEzsignformfieldgroupReadonly() const;
    void setBEzsignformfieldgroupReadonly(const bool &b_ezsignformfieldgroup_readonly);
    bool is_b_ezsignformfieldgroup_readonly_Set() const;
    bool is_b_ezsignformfieldgroup_readonly_Valid() const;

    qint32 getIEzsignformfieldgroupMaxlength() const;
    void setIEzsignformfieldgroupMaxlength(const qint32 &i_ezsignformfieldgroup_maxlength);
    bool is_i_ezsignformfieldgroup_maxlength_Set() const;
    bool is_i_ezsignformfieldgroup_maxlength_Valid() const;

    bool isBEzsignformfieldgroupEncrypted() const;
    void setBEzsignformfieldgroupEncrypted(const bool &b_ezsignformfieldgroup_encrypted);
    bool is_b_ezsignformfieldgroup_encrypted_Set() const;
    bool is_b_ezsignformfieldgroup_encrypted_Valid() const;

    QString getSEzsignformfieldgroupRegexp() const;
    void setSEzsignformfieldgroupRegexp(const QString &s_ezsignformfieldgroup_regexp);
    bool is_s_ezsignformfieldgroup_regexp_Set() const;
    bool is_s_ezsignformfieldgroup_regexp_Valid() const;

    QString getTEzsignformfieldgroupTooltip() const;
    void setTEzsignformfieldgroupTooltip(const QString &t_ezsignformfieldgroup_tooltip);
    bool is_t_ezsignformfieldgroup_tooltip_Set() const;
    bool is_t_ezsignformfieldgroup_tooltip_Valid() const;

    OAIField_eEzsignformfieldgroupTooltipposition getEEzsignformfieldgroupTooltipposition() const;
    void setEEzsignformfieldgroupTooltipposition(const OAIField_eEzsignformfieldgroupTooltipposition &e_ezsignformfieldgroup_tooltipposition);
    bool is_e_ezsignformfieldgroup_tooltipposition_Set() const;
    bool is_e_ezsignformfieldgroup_tooltipposition_Valid() const;

    QList<OAIEzsignformfield_ResponseCompound> getAObjEzsignformfield() const;
    void setAObjEzsignformfield(const QList<OAIEzsignformfield_ResponseCompound> &a_obj_ezsignformfield);
    bool is_a_obj_ezsignformfield_Set() const;
    bool is_a_obj_ezsignformfield_Valid() const;

    QList<OAICustom_DropdownElement_ResponseCompound> getAObjDropdownElement() const;
    void setAObjDropdownElement(const QList<OAICustom_DropdownElement_ResponseCompound> &a_obj_dropdown_element);
    bool is_a_obj_dropdown_element_Set() const;
    bool is_a_obj_dropdown_element_Valid() const;

    QList<OAIEzsignformfieldgroupsigner_ResponseCompound> getAObjEzsignformfieldgroupsigner() const;
    void setAObjEzsignformfieldgroupsigner(const QList<OAIEzsignformfieldgroupsigner_ResponseCompound> &a_obj_ezsignformfieldgroupsigner);
    bool is_a_obj_ezsignformfieldgroupsigner_Set() const;
    bool is_a_obj_ezsignformfieldgroupsigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignformfieldgroup_id;
    bool m_pki_ezsignformfieldgroup_id_isSet;
    bool m_pki_ezsignformfieldgroup_id_isValid;

    qint32 fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    OAIField_eEzsignformfieldgroupType e_ezsignformfieldgroup_type;
    bool m_e_ezsignformfieldgroup_type_isSet;
    bool m_e_ezsignformfieldgroup_type_isValid;

    OAIField_eEzsignformfieldgroupSignerrequirement e_ezsignformfieldgroup_signerrequirement;
    bool m_e_ezsignformfieldgroup_signerrequirement_isSet;
    bool m_e_ezsignformfieldgroup_signerrequirement_isValid;

    QString s_ezsignformfieldgroup_label;
    bool m_s_ezsignformfieldgroup_label_isSet;
    bool m_s_ezsignformfieldgroup_label_isValid;

    qint32 i_ezsignformfieldgroup_step;
    bool m_i_ezsignformfieldgroup_step_isSet;
    bool m_i_ezsignformfieldgroup_step_isValid;

    QString s_ezsignformfieldgroup_defaultvalue;
    bool m_s_ezsignformfieldgroup_defaultvalue_isSet;
    bool m_s_ezsignformfieldgroup_defaultvalue_isValid;

    qint32 i_ezsignformfieldgroup_filledmin;
    bool m_i_ezsignformfieldgroup_filledmin_isSet;
    bool m_i_ezsignformfieldgroup_filledmin_isValid;

    qint32 i_ezsignformfieldgroup_filledmax;
    bool m_i_ezsignformfieldgroup_filledmax_isSet;
    bool m_i_ezsignformfieldgroup_filledmax_isValid;

    bool b_ezsignformfieldgroup_readonly;
    bool m_b_ezsignformfieldgroup_readonly_isSet;
    bool m_b_ezsignformfieldgroup_readonly_isValid;

    qint32 i_ezsignformfieldgroup_maxlength;
    bool m_i_ezsignformfieldgroup_maxlength_isSet;
    bool m_i_ezsignformfieldgroup_maxlength_isValid;

    bool b_ezsignformfieldgroup_encrypted;
    bool m_b_ezsignformfieldgroup_encrypted_isSet;
    bool m_b_ezsignformfieldgroup_encrypted_isValid;

    QString s_ezsignformfieldgroup_regexp;
    bool m_s_ezsignformfieldgroup_regexp_isSet;
    bool m_s_ezsignformfieldgroup_regexp_isValid;

    QString t_ezsignformfieldgroup_tooltip;
    bool m_t_ezsignformfieldgroup_tooltip_isSet;
    bool m_t_ezsignformfieldgroup_tooltip_isValid;

    OAIField_eEzsignformfieldgroupTooltipposition e_ezsignformfieldgroup_tooltipposition;
    bool m_e_ezsignformfieldgroup_tooltipposition_isSet;
    bool m_e_ezsignformfieldgroup_tooltipposition_isValid;

    QList<OAIEzsignformfield_ResponseCompound> a_obj_ezsignformfield;
    bool m_a_obj_ezsignformfield_isSet;
    bool m_a_obj_ezsignformfield_isValid;

    QList<OAICustom_DropdownElement_ResponseCompound> a_obj_dropdown_element;
    bool m_a_obj_dropdown_element_isSet;
    bool m_a_obj_dropdown_element_isValid;

    QList<OAIEzsignformfieldgroupsigner_ResponseCompound> a_obj_ezsignformfieldgroupsigner;
    bool m_a_obj_ezsignformfieldgroupsigner_isSet;
    bool m_a_obj_ezsignformfieldgroupsigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroup_ResponseCompound)

#endif // OAIEzsignformfieldgroup_ResponseCompound_H
