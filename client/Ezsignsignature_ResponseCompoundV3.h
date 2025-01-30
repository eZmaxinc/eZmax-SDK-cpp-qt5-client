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
 * Ezsignsignature_ResponseCompoundV3.h
 *
 * An Ezsignsignature Object and children to create a complete structure
 */

#ifndef Ezsignsignature_ResponseCompoundV3_H
#define Ezsignsignature_ResponseCompoundV3_H

#include <QJsonObject>

#include "Custom_ContactName_Response.h"
#include "Custom_Creditcardtransaction_Response.h"
#include "Enum_Textvalidation.h"
#include "Ezsignelementdependency_ResponseCompound.h"
#include "Ezsignsignaturecustomdate_ResponseCompoundV2.h"
#include "Field_eEzsignsignatureAttachmentnamesource.h"
#include "Field_eEzsignsignatureConsultationtrigger.h"
#include "Field_eEzsignsignatureDependencyrequirement.h"
#include "Field_eEzsignsignatureFont.h"
#include "Field_eEzsignsignatureTooltipposition.h"
#include "Field_eEzsignsignatureType.h"
#include "Signature_ResponseCompound.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_ContactName_Response;
class Signature_ResponseCompound;
class Ezsignsignaturecustomdate_ResponseCompoundV2;
class Custom_Creditcardtransaction_Response;
class Ezsignelementdependency_ResponseCompound;

class Ezsignsignature_ResponseCompoundV3 : public Object {
public:
    Ezsignsignature_ResponseCompoundV3();
    Ezsignsignature_ResponseCompoundV3(QString json);
    ~Ezsignsignature_ResponseCompoundV3() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignatureId() const;
    void setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id);
    bool is_pki_ezsignsignature_id_Set() const;
    bool is_pki_ezsignsignature_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getFkiEzsignsigningreasonId() const;
    void setFkiEzsignsigningreasonId(const qint32 &fki_ezsignsigningreason_id);
    bool is_fki_ezsignsigningreason_id_Set() const;
    bool is_fki_ezsignsigningreason_id_Valid() const;

    qint32 getFkiFontId() const;
    void setFkiFontId(const qint32 &fki_font_id);
    bool is_fki_font_id_Set() const;
    bool is_fki_font_id_Valid() const;

    QString getSEzsignsigningreasonDescriptionX() const;
    void setSEzsignsigningreasonDescriptionX(const QString &s_ezsignsigningreason_description_x);
    bool is_s_ezsignsigningreason_description_x_Set() const;
    bool is_s_ezsignsigningreason_description_x_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    qint32 getIEzsignsignatureX() const;
    void setIEzsignsignatureX(const qint32 &i_ezsignsignature_x);
    bool is_i_ezsignsignature_x_Set() const;
    bool is_i_ezsignsignature_x_Valid() const;

    qint32 getIEzsignsignatureY() const;
    void setIEzsignsignatureY(const qint32 &i_ezsignsignature_y);
    bool is_i_ezsignsignature_y_Set() const;
    bool is_i_ezsignsignature_y_Valid() const;

    qint32 getIEzsignsignatureHeight() const;
    void setIEzsignsignatureHeight(const qint32 &i_ezsignsignature_height);
    bool is_i_ezsignsignature_height_Set() const;
    bool is_i_ezsignsignature_height_Valid() const;

    qint32 getIEzsignsignatureWidth() const;
    void setIEzsignsignatureWidth(const qint32 &i_ezsignsignature_width);
    bool is_i_ezsignsignature_width_Set() const;
    bool is_i_ezsignsignature_width_Valid() const;

    qint32 getIEzsignsignatureStep() const;
    void setIEzsignsignatureStep(const qint32 &i_ezsignsignature_step);
    bool is_i_ezsignsignature_step_Set() const;
    bool is_i_ezsignsignature_step_Valid() const;

    qint32 getIEzsignsignatureStepadjusted() const;
    void setIEzsignsignatureStepadjusted(const qint32 &i_ezsignsignature_stepadjusted);
    bool is_i_ezsignsignature_stepadjusted_Set() const;
    bool is_i_ezsignsignature_stepadjusted_Valid() const;

    Field_eEzsignsignatureType getEEzsignsignatureType() const;
    void setEEzsignsignatureType(const Field_eEzsignsignatureType &e_ezsignsignature_type);
    bool is_e_ezsignsignature_type_Set() const;
    bool is_e_ezsignsignature_type_Valid() const;

    QString getTEzsignsignatureTooltip() const;
    void setTEzsignsignatureTooltip(const QString &t_ezsignsignature_tooltip);
    bool is_t_ezsignsignature_tooltip_Set() const;
    bool is_t_ezsignsignature_tooltip_Valid() const;

    Field_eEzsignsignatureTooltipposition getEEzsignsignatureTooltipposition() const;
    void setEEzsignsignatureTooltipposition(const Field_eEzsignsignatureTooltipposition &e_ezsignsignature_tooltipposition);
    bool is_e_ezsignsignature_tooltipposition_Set() const;
    bool is_e_ezsignsignature_tooltipposition_Valid() const;

    Field_eEzsignsignatureFont getEEzsignsignatureFont() const;
    void setEEzsignsignatureFont(const Field_eEzsignsignatureFont &e_ezsignsignature_font);
    bool is_e_ezsignsignature_font_Set() const;
    bool is_e_ezsignsignature_font_Valid() const;

    qint32 getIEzsignsignatureValidationstep() const;
    void setIEzsignsignatureValidationstep(const qint32 &i_ezsignsignature_validationstep);
    bool is_i_ezsignsignature_validationstep_Set() const;
    bool is_i_ezsignsignature_validationstep_Valid() const;

    QString getSEzsignsignatureAttachmentdescription() const;
    void setSEzsignsignatureAttachmentdescription(const QString &s_ezsignsignature_attachmentdescription);
    bool is_s_ezsignsignature_attachmentdescription_Set() const;
    bool is_s_ezsignsignature_attachmentdescription_Valid() const;

    Field_eEzsignsignatureAttachmentnamesource getEEzsignsignatureAttachmentnamesource() const;
    void setEEzsignsignatureAttachmentnamesource(const Field_eEzsignsignatureAttachmentnamesource &e_ezsignsignature_attachmentnamesource);
    bool is_e_ezsignsignature_attachmentnamesource_Set() const;
    bool is_e_ezsignsignature_attachmentnamesource_Valid() const;

    Field_eEzsignsignatureConsultationtrigger getEEzsignsignatureConsultationtrigger() const;
    void setEEzsignsignatureConsultationtrigger(const Field_eEzsignsignatureConsultationtrigger &e_ezsignsignature_consultationtrigger);
    bool is_e_ezsignsignature_consultationtrigger_Set() const;
    bool is_e_ezsignsignature_consultationtrigger_Valid() const;

    bool isBEzsignsignatureHandwritten() const;
    void setBEzsignsignatureHandwritten(const bool &b_ezsignsignature_handwritten);
    bool is_b_ezsignsignature_handwritten_Set() const;
    bool is_b_ezsignsignature_handwritten_Valid() const;

    bool isBEzsignsignatureReason() const;
    void setBEzsignsignatureReason(const bool &b_ezsignsignature_reason);
    bool is_b_ezsignsignature_reason_Set() const;
    bool is_b_ezsignsignature_reason_Valid() const;

    bool isBEzsignsignatureRequired() const;
    void setBEzsignsignatureRequired(const bool &b_ezsignsignature_required);
    bool is_b_ezsignsignature_required_Set() const;
    bool is_b_ezsignsignature_required_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationIdValidation() const;
    void setFkiEzsignfoldersignerassociationIdValidation(const qint32 &fki_ezsignfoldersignerassociation_id_validation);
    bool is_fki_ezsignfoldersignerassociation_id_validation_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_validation_Valid() const;

    QString getDtEzsignsignatureDate() const;
    void setDtEzsignsignatureDate(const QString &dt_ezsignsignature_date);
    bool is_dt_ezsignsignature_date_Set() const;
    bool is_dt_ezsignsignature_date_Valid() const;

    qint32 getIEzsignsignatureattachmentCount() const;
    void setIEzsignsignatureattachmentCount(const qint32 &i_ezsignsignatureattachment_count);
    bool is_i_ezsignsignatureattachment_count_Set() const;
    bool is_i_ezsignsignatureattachment_count_Valid() const;

    QString getSEzsignsignatureDescription() const;
    void setSEzsignsignatureDescription(const QString &s_ezsignsignature_description);
    bool is_s_ezsignsignature_description_Set() const;
    bool is_s_ezsignsignature_description_Valid() const;

    qint32 getIEzsignsignatureMaxlength() const;
    void setIEzsignsignatureMaxlength(const qint32 &i_ezsignsignature_maxlength);
    bool is_i_ezsignsignature_maxlength_Set() const;
    bool is_i_ezsignsignature_maxlength_Valid() const;

    Enum_Textvalidation getEEzsignsignatureTextvalidation() const;
    void setEEzsignsignatureTextvalidation(const Enum_Textvalidation &e_ezsignsignature_textvalidation);
    bool is_e_ezsignsignature_textvalidation_Set() const;
    bool is_e_ezsignsignature_textvalidation_Valid() const;

    QString getSEzsignsignatureTextvalidationcustommessage() const;
    void setSEzsignsignatureTextvalidationcustommessage(const QString &s_ezsignsignature_textvalidationcustommessage);
    bool is_s_ezsignsignature_textvalidationcustommessage_Set() const;
    bool is_s_ezsignsignature_textvalidationcustommessage_Valid() const;

    Field_eEzsignsignatureDependencyrequirement getEEzsignsignatureDependencyrequirement() const;
    void setEEzsignsignatureDependencyrequirement(const Field_eEzsignsignatureDependencyrequirement &e_ezsignsignature_dependencyrequirement);
    bool is_e_ezsignsignature_dependencyrequirement_Set() const;
    bool is_e_ezsignsignature_dependencyrequirement_Valid() const;

    QString getSEzsignsignatureDefaultvalue() const;
    void setSEzsignsignatureDefaultvalue(const QString &s_ezsignsignature_defaultvalue);
    bool is_s_ezsignsignature_defaultvalue_Set() const;
    bool is_s_ezsignsignature_defaultvalue_Valid() const;

    QString getSEzsignsignatureRegexp() const;
    void setSEzsignsignatureRegexp(const QString &s_ezsignsignature_regexp);
    bool is_s_ezsignsignature_regexp_Set() const;
    bool is_s_ezsignsignature_regexp_Valid() const;

    Custom_ContactName_Response getObjContactName() const;
    void setObjContactName(const Custom_ContactName_Response &obj_contact_name);
    bool is_obj_contact_name_Set() const;
    bool is_obj_contact_name_Valid() const;

    Custom_ContactName_Response getObjContactNameDelegation() const;
    void setObjContactNameDelegation(const Custom_ContactName_Response &obj_contact_name_delegation);
    bool is_obj_contact_name_delegation_Set() const;
    bool is_obj_contact_name_delegation_Valid() const;

    Signature_ResponseCompound getObjSignature() const;
    void setObjSignature(const Signature_ResponseCompound &obj_signature);
    bool is_obj_signature_Set() const;
    bool is_obj_signature_Valid() const;

    QString getSEzsignsignergroupDescriptionX() const;
    void setSEzsignsignergroupDescriptionX(const QString &s_ezsignsignergroup_description_x);
    bool is_s_ezsignsignergroup_description_x_Set() const;
    bool is_s_ezsignsignergroup_description_x_Valid() const;

    bool isBEzsignsignatureCustomdate() const;
    void setBEzsignsignatureCustomdate(const bool &b_ezsignsignature_customdate);
    bool is_b_ezsignsignature_customdate_Set() const;
    bool is_b_ezsignsignature_customdate_Valid() const;

    QList<Ezsignsignaturecustomdate_ResponseCompoundV2> getAObjEzsignsignaturecustomdate() const;
    void setAObjEzsignsignaturecustomdate(const QList<Ezsignsignaturecustomdate_ResponseCompoundV2> &a_obj_ezsignsignaturecustomdate);
    bool is_a_obj_ezsignsignaturecustomdate_Set() const;
    bool is_a_obj_ezsignsignaturecustomdate_Valid() const;

    Custom_Creditcardtransaction_Response getObjCreditcardtransaction() const;
    void setObjCreditcardtransaction(const Custom_Creditcardtransaction_Response &obj_creditcardtransaction);
    bool is_obj_creditcardtransaction_Set() const;
    bool is_obj_creditcardtransaction_Valid() const;

    QList<Ezsignelementdependency_ResponseCompound> getAObjEzsignelementdependency() const;
    void setAObjEzsignelementdependency(const QList<Ezsignelementdependency_ResponseCompound> &a_obj_ezsignelementdependency);
    bool is_a_obj_ezsignelementdependency_Set() const;
    bool is_a_obj_ezsignelementdependency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsignature_id;
    bool m_pki_ezsignsignature_id_isSet;
    bool m_pki_ezsignsignature_id_isValid;

    qint32 m_fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    qint32 m_fki_ezsignsigningreason_id;
    bool m_fki_ezsignsigningreason_id_isSet;
    bool m_fki_ezsignsigningreason_id_isValid;

    qint32 m_fki_font_id;
    bool m_fki_font_id_isSet;
    bool m_fki_font_id_isValid;

    QString m_s_ezsignsigningreason_description_x;
    bool m_s_ezsignsigningreason_description_x_isSet;
    bool m_s_ezsignsigningreason_description_x_isValid;

    qint32 m_i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    qint32 m_i_ezsignsignature_x;
    bool m_i_ezsignsignature_x_isSet;
    bool m_i_ezsignsignature_x_isValid;

    qint32 m_i_ezsignsignature_y;
    bool m_i_ezsignsignature_y_isSet;
    bool m_i_ezsignsignature_y_isValid;

    qint32 m_i_ezsignsignature_height;
    bool m_i_ezsignsignature_height_isSet;
    bool m_i_ezsignsignature_height_isValid;

    qint32 m_i_ezsignsignature_width;
    bool m_i_ezsignsignature_width_isSet;
    bool m_i_ezsignsignature_width_isValid;

    qint32 m_i_ezsignsignature_step;
    bool m_i_ezsignsignature_step_isSet;
    bool m_i_ezsignsignature_step_isValid;

    qint32 m_i_ezsignsignature_stepadjusted;
    bool m_i_ezsignsignature_stepadjusted_isSet;
    bool m_i_ezsignsignature_stepadjusted_isValid;

    Field_eEzsignsignatureType m_e_ezsignsignature_type;
    bool m_e_ezsignsignature_type_isSet;
    bool m_e_ezsignsignature_type_isValid;

    QString m_t_ezsignsignature_tooltip;
    bool m_t_ezsignsignature_tooltip_isSet;
    bool m_t_ezsignsignature_tooltip_isValid;

    Field_eEzsignsignatureTooltipposition m_e_ezsignsignature_tooltipposition;
    bool m_e_ezsignsignature_tooltipposition_isSet;
    bool m_e_ezsignsignature_tooltipposition_isValid;

    Field_eEzsignsignatureFont m_e_ezsignsignature_font;
    bool m_e_ezsignsignature_font_isSet;
    bool m_e_ezsignsignature_font_isValid;

    qint32 m_i_ezsignsignature_validationstep;
    bool m_i_ezsignsignature_validationstep_isSet;
    bool m_i_ezsignsignature_validationstep_isValid;

    QString m_s_ezsignsignature_attachmentdescription;
    bool m_s_ezsignsignature_attachmentdescription_isSet;
    bool m_s_ezsignsignature_attachmentdescription_isValid;

    Field_eEzsignsignatureAttachmentnamesource m_e_ezsignsignature_attachmentnamesource;
    bool m_e_ezsignsignature_attachmentnamesource_isSet;
    bool m_e_ezsignsignature_attachmentnamesource_isValid;

    Field_eEzsignsignatureConsultationtrigger m_e_ezsignsignature_consultationtrigger;
    bool m_e_ezsignsignature_consultationtrigger_isSet;
    bool m_e_ezsignsignature_consultationtrigger_isValid;

    bool m_b_ezsignsignature_handwritten;
    bool m_b_ezsignsignature_handwritten_isSet;
    bool m_b_ezsignsignature_handwritten_isValid;

    bool m_b_ezsignsignature_reason;
    bool m_b_ezsignsignature_reason_isSet;
    bool m_b_ezsignsignature_reason_isValid;

    bool m_b_ezsignsignature_required;
    bool m_b_ezsignsignature_required_isSet;
    bool m_b_ezsignsignature_required_isValid;

    qint32 m_fki_ezsignfoldersignerassociation_id_validation;
    bool m_fki_ezsignfoldersignerassociation_id_validation_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_validation_isValid;

    QString m_dt_ezsignsignature_date;
    bool m_dt_ezsignsignature_date_isSet;
    bool m_dt_ezsignsignature_date_isValid;

    qint32 m_i_ezsignsignatureattachment_count;
    bool m_i_ezsignsignatureattachment_count_isSet;
    bool m_i_ezsignsignatureattachment_count_isValid;

    QString m_s_ezsignsignature_description;
    bool m_s_ezsignsignature_description_isSet;
    bool m_s_ezsignsignature_description_isValid;

    qint32 m_i_ezsignsignature_maxlength;
    bool m_i_ezsignsignature_maxlength_isSet;
    bool m_i_ezsignsignature_maxlength_isValid;

    Enum_Textvalidation m_e_ezsignsignature_textvalidation;
    bool m_e_ezsignsignature_textvalidation_isSet;
    bool m_e_ezsignsignature_textvalidation_isValid;

    QString m_s_ezsignsignature_textvalidationcustommessage;
    bool m_s_ezsignsignature_textvalidationcustommessage_isSet;
    bool m_s_ezsignsignature_textvalidationcustommessage_isValid;

    Field_eEzsignsignatureDependencyrequirement m_e_ezsignsignature_dependencyrequirement;
    bool m_e_ezsignsignature_dependencyrequirement_isSet;
    bool m_e_ezsignsignature_dependencyrequirement_isValid;

    QString m_s_ezsignsignature_defaultvalue;
    bool m_s_ezsignsignature_defaultvalue_isSet;
    bool m_s_ezsignsignature_defaultvalue_isValid;

    QString m_s_ezsignsignature_regexp;
    bool m_s_ezsignsignature_regexp_isSet;
    bool m_s_ezsignsignature_regexp_isValid;

    Custom_ContactName_Response m_obj_contact_name;
    bool m_obj_contact_name_isSet;
    bool m_obj_contact_name_isValid;

    Custom_ContactName_Response m_obj_contact_name_delegation;
    bool m_obj_contact_name_delegation_isSet;
    bool m_obj_contact_name_delegation_isValid;

    Signature_ResponseCompound m_obj_signature;
    bool m_obj_signature_isSet;
    bool m_obj_signature_isValid;

    QString m_s_ezsignsignergroup_description_x;
    bool m_s_ezsignsignergroup_description_x_isSet;
    bool m_s_ezsignsignergroup_description_x_isValid;

    bool m_b_ezsignsignature_customdate;
    bool m_b_ezsignsignature_customdate_isSet;
    bool m_b_ezsignsignature_customdate_isValid;

    QList<Ezsignsignaturecustomdate_ResponseCompoundV2> m_a_obj_ezsignsignaturecustomdate;
    bool m_a_obj_ezsignsignaturecustomdate_isSet;
    bool m_a_obj_ezsignsignaturecustomdate_isValid;

    Custom_Creditcardtransaction_Response m_obj_creditcardtransaction;
    bool m_obj_creditcardtransaction_isSet;
    bool m_obj_creditcardtransaction_isValid;

    QList<Ezsignelementdependency_ResponseCompound> m_a_obj_ezsignelementdependency;
    bool m_a_obj_ezsignelementdependency_isSet;
    bool m_a_obj_ezsignelementdependency_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignature_ResponseCompoundV3)

#endif // Ezsignsignature_ResponseCompoundV3_H
