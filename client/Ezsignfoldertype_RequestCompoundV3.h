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
 * Ezsignfoldertype_RequestCompoundV3.h
 *
 * A Ezsignfoldertype Object and children
 */

#ifndef Ezsignfoldertype_RequestCompoundV3_H
#define Ezsignfoldertype_RequestCompoundV3_H

#include <QJsonObject>

#include "Field_eEzsignfoldertypeCompletion.h"
#include "Field_eEzsignfoldertypeDisposal.h"
#include "Field_eEzsignfoldertypeDocumentdependency.h"
#include "Field_eEzsignfoldertypePdfanoncompliantaction.h"
#include "Field_eEzsignfoldertypePdfarequirement.h"
#include "Field_eEzsignfoldertypePrivacylevel.h"
#include "Field_eEzsignfoldertypeSigneraccess.h"
#include "Multilingual_EzsignfoldertypeName.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_EzsignfoldertypeName;

class Ezsignfoldertype_RequestCompoundV3 : public Object {
public:
    Ezsignfoldertype_RequestCompoundV3();
    Ezsignfoldertype_RequestCompoundV3(QString json);
    ~Ezsignfoldertype_RequestCompoundV3() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfoldertypeId() const;
    void setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id);
    bool is_pki_ezsignfoldertype_id_Set() const;
    bool is_pki_ezsignfoldertype_id_Valid() const;

    Multilingual_EzsignfoldertypeName getObjEzsignfoldertypeName() const;
    void setObjEzsignfoldertypeName(const Multilingual_EzsignfoldertypeName &obj_ezsignfoldertype_name);
    bool is_obj_ezsignfoldertype_name_Set() const;
    bool is_obj_ezsignfoldertype_name_Valid() const;

    qint32 getFkiBrandingId() const;
    void setFkiBrandingId(const qint32 &fki_branding_id);
    bool is_fki_branding_id_Set() const;
    bool is_fki_branding_id_Valid() const;

    qint32 getFkiBillingentityinternalId() const;
    void setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id);
    bool is_fki_billingentityinternal_id_Set() const;
    bool is_fki_billingentityinternal_id_Valid() const;

    qint32 getFkiEzsigntsarequirementId() const;
    void setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id);
    bool is_fki_ezsigntsarequirement_id_Set() const;
    bool is_fki_ezsigntsarequirement_id_Valid() const;

    qint32 getFkiFontIdAnnotation() const;
    void setFkiFontIdAnnotation(const qint32 &fki_font_id_annotation);
    bool is_fki_font_id_annotation_Set() const;
    bool is_fki_font_id_annotation_Valid() const;

    qint32 getFkiFontIdFormfield() const;
    void setFkiFontIdFormfield(const qint32 &fki_font_id_formfield);
    bool is_fki_font_id_formfield_Set() const;
    bool is_fki_font_id_formfield_Valid() const;

    qint32 getFkiFontIdSignature() const;
    void setFkiFontIdSignature(const qint32 &fki_font_id_signature);
    bool is_fki_font_id_signature_Set() const;
    bool is_fki_font_id_signature_Valid() const;

    qint32 getFkiPdfalevelIdConvert() const;
    void setFkiPdfalevelIdConvert(const qint32 &fki_pdfalevel_id_convert);
    bool is_fki_pdfalevel_id_convert_Set() const;
    bool is_fki_pdfalevel_id_convert_Valid() const;

    QList<qint32> getAFkiPdfalevelId() const;
    void setAFkiPdfalevelId(const QList<qint32> &a_fki_pdfalevel_id);
    bool is_a_fki_pdfalevel_id_Set() const;
    bool is_a_fki_pdfalevel_id_Valid() const;

    QList<qint32> getAFkiUserlogintypeId() const;
    void setAFkiUserlogintypeId(const QList<qint32> &a_fki_userlogintype_id);
    bool is_a_fki_userlogintype_id_Set() const;
    bool is_a_fki_userlogintype_id_Valid() const;

    QList<qint32> getAFkiUsergroupIdAll() const;
    void setAFkiUsergroupIdAll(const QList<qint32> &a_fki_usergroup_id_all);
    bool is_a_fki_usergroup_id_all_Set() const;
    bool is_a_fki_usergroup_id_all_Valid() const;

    QList<qint32> getAFkiUsergroupIdRestricted() const;
    void setAFkiUsergroupIdRestricted(const QList<qint32> &a_fki_usergroup_id_restricted);
    bool is_a_fki_usergroup_id_restricted_Set() const;
    bool is_a_fki_usergroup_id_restricted_Valid() const;

    QList<qint32> getAFkiUsergroupIdTemplate() const;
    void setAFkiUsergroupIdTemplate(const QList<qint32> &a_fki_usergroup_id_template);
    bool is_a_fki_usergroup_id_template_Set() const;
    bool is_a_fki_usergroup_id_template_Valid() const;

    Field_eEzsignfoldertypeDocumentdependency getEEzsignfoldertypeDocumentdependency() const;
    void setEEzsignfoldertypeDocumentdependency(const Field_eEzsignfoldertypeDocumentdependency &e_ezsignfoldertype_documentdependency);
    bool is_e_ezsignfoldertype_documentdependency_Set() const;
    bool is_e_ezsignfoldertype_documentdependency_Valid() const;

    QString getSEmailAddressSigned() const;
    void setSEmailAddressSigned(const QString &s_email_address_signed);
    bool is_s_email_address_signed_Set() const;
    bool is_s_email_address_signed_Valid() const;

    QString getSEmailAddressSummary() const;
    void setSEmailAddressSummary(const QString &s_email_address_summary);
    bool is_s_email_address_summary_Set() const;
    bool is_s_email_address_summary_Valid() const;

    Field_eEzsignfoldertypePdfarequirement getEEzsignfoldertypePdfarequirement() const;
    void setEEzsignfoldertypePdfarequirement(const Field_eEzsignfoldertypePdfarequirement &e_ezsignfoldertype_pdfarequirement);
    bool is_e_ezsignfoldertype_pdfarequirement_Set() const;
    bool is_e_ezsignfoldertype_pdfarequirement_Valid() const;

    Field_eEzsignfoldertypePdfanoncompliantaction getEEzsignfoldertypePdfanoncompliantaction() const;
    void setEEzsignfoldertypePdfanoncompliantaction(const Field_eEzsignfoldertypePdfanoncompliantaction &e_ezsignfoldertype_pdfanoncompliantaction);
    bool is_e_ezsignfoldertype_pdfanoncompliantaction_Set() const;
    bool is_e_ezsignfoldertype_pdfanoncompliantaction_Valid() const;

    Field_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const Field_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
    bool is_e_ezsignfoldertype_privacylevel_Set() const;
    bool is_e_ezsignfoldertype_privacylevel_Valid() const;

    qint32 getIEzsignfoldertypeFontsizeannotation() const;
    void setIEzsignfoldertypeFontsizeannotation(const qint32 &i_ezsignfoldertype_fontsizeannotation);
    bool is_i_ezsignfoldertype_fontsizeannotation_Set() const;
    bool is_i_ezsignfoldertype_fontsizeannotation_Valid() const;

    qint32 getIEzsignfoldertypeFontsizeformfield() const;
    void setIEzsignfoldertypeFontsizeformfield(const qint32 &i_ezsignfoldertype_fontsizeformfield);
    bool is_i_ezsignfoldertype_fontsizeformfield_Set() const;
    bool is_i_ezsignfoldertype_fontsizeformfield_Valid() const;

    qint32 getIEzsignfoldertypeSendreminderfirstdays() const;
    void setIEzsignfoldertypeSendreminderfirstdays(const qint32 &i_ezsignfoldertype_sendreminderfirstdays);
    bool is_i_ezsignfoldertype_sendreminderfirstdays_Set() const;
    bool is_i_ezsignfoldertype_sendreminderfirstdays_Valid() const;

    qint32 getIEzsignfoldertypeSendreminderotherdays() const;
    void setIEzsignfoldertypeSendreminderotherdays(const qint32 &i_ezsignfoldertype_sendreminderotherdays);
    bool is_i_ezsignfoldertype_sendreminderotherdays_Set() const;
    bool is_i_ezsignfoldertype_sendreminderotherdays_Valid() const;

    qint32 getIEzsignfoldertypeArchivaldays() const;
    void setIEzsignfoldertypeArchivaldays(const qint32 &i_ezsignfoldertype_archivaldays);
    bool is_i_ezsignfoldertype_archivaldays_Set() const;
    bool is_i_ezsignfoldertype_archivaldays_Valid() const;

    Field_eEzsignfoldertypeDisposal getEEzsignfoldertypeDisposal() const;
    void setEEzsignfoldertypeDisposal(const Field_eEzsignfoldertypeDisposal &e_ezsignfoldertype_disposal);
    bool is_e_ezsignfoldertype_disposal_Set() const;
    bool is_e_ezsignfoldertype_disposal_Valid() const;

    Field_eEzsignfoldertypeCompletion getEEzsignfoldertypeCompletion() const;
    void setEEzsignfoldertypeCompletion(const Field_eEzsignfoldertypeCompletion &e_ezsignfoldertype_completion);
    bool is_e_ezsignfoldertype_completion_Set() const;
    bool is_e_ezsignfoldertype_completion_Valid() const;

    qint32 getIEzsignfoldertypeDisposaldays() const;
    void setIEzsignfoldertypeDisposaldays(const qint32 &i_ezsignfoldertype_disposaldays);
    bool is_i_ezsignfoldertype_disposaldays_Set() const;
    bool is_i_ezsignfoldertype_disposaldays_Valid() const;

    qint32 getIEzsignfoldertypeDeadlinedays() const;
    void setIEzsignfoldertypeDeadlinedays(const qint32 &i_ezsignfoldertype_deadlinedays);
    bool is_i_ezsignfoldertype_deadlinedays_Set() const;
    bool is_i_ezsignfoldertype_deadlinedays_Valid() const;

    bool isBEzsignfoldertypePrematurelyendautomatically() const;
    void setBEzsignfoldertypePrematurelyendautomatically(const bool &b_ezsignfoldertype_prematurelyendautomatically);
    bool is_b_ezsignfoldertype_prematurelyendautomatically_Set() const;
    bool is_b_ezsignfoldertype_prematurelyendautomatically_Valid() const;

    qint32 getIEzsignfoldertypePrematurelyendautomaticallydays() const;
    void setIEzsignfoldertypePrematurelyendautomaticallydays(const qint32 &i_ezsignfoldertype_prematurelyendautomaticallydays);
    bool is_i_ezsignfoldertype_prematurelyendautomaticallydays_Set() const;
    bool is_i_ezsignfoldertype_prematurelyendautomaticallydays_Valid() const;

    bool isBEzsignfoldertypeAutomaticsignature() const;
    void setBEzsignfoldertypeAutomaticsignature(const bool &b_ezsignfoldertype_automaticsignature);
    bool is_b_ezsignfoldertype_automaticsignature_Set() const;
    bool is_b_ezsignfoldertype_automaticsignature_Valid() const;

    bool isBEzsignfoldertypeDelegate() const;
    void setBEzsignfoldertypeDelegate(const bool &b_ezsignfoldertype_delegate);
    bool is_b_ezsignfoldertype_delegate_Set() const;
    bool is_b_ezsignfoldertype_delegate_Valid() const;

    bool isBEzsignfoldertypeDiscussion() const;
    void setBEzsignfoldertypeDiscussion(const bool &b_ezsignfoldertype_discussion);
    bool is_b_ezsignfoldertype_discussion_Set() const;
    bool is_b_ezsignfoldertype_discussion_Valid() const;

    bool isBEzsignfoldertypeLogrecipientinproof() const;
    void setBEzsignfoldertypeLogrecipientinproof(const bool &b_ezsignfoldertype_logrecipientinproof);
    bool is_b_ezsignfoldertype_logrecipientinproof_Set() const;
    bool is_b_ezsignfoldertype_logrecipientinproof_Valid() const;

    bool isBEzsignfoldertypeReassignezsignsigner() const;
    void setBEzsignfoldertypeReassignezsignsigner(const bool &b_ezsignfoldertype_reassignezsignsigner);
    bool is_b_ezsignfoldertype_reassignezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_reassignezsignsigner_Valid() const;

    bool isBEzsignfoldertypeReassignuser() const;
    void setBEzsignfoldertypeReassignuser(const bool &b_ezsignfoldertype_reassignuser);
    bool is_b_ezsignfoldertype_reassignuser_Set() const;
    bool is_b_ezsignfoldertype_reassignuser_Valid() const;

    bool isBEzsignfoldertypeReassigngroup() const;
    void setBEzsignfoldertypeReassigngroup(const bool &b_ezsignfoldertype_reassigngroup);
    bool is_b_ezsignfoldertype_reassigngroup_Set() const;
    bool is_b_ezsignfoldertype_reassigngroup_Valid() const;

    bool isBEzsignfoldertypeSendsignedtoezsignsigner() const;
    void setBEzsignfoldertypeSendsignedtoezsignsigner(const bool &b_ezsignfoldertype_sendsignedtoezsignsigner);
    bool is_b_ezsignfoldertype_sendsignedtoezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtoezsignsigner_Valid() const;

    bool isBEzsignfoldertypeSendsignedtouser() const;
    void setBEzsignfoldertypeSendsignedtouser(const bool &b_ezsignfoldertype_sendsignedtouser);
    bool is_b_ezsignfoldertype_sendsignedtouser_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtouser_Valid() const;

    bool isBEzsignfoldertypeSendattachmentezsignsigner() const;
    void setBEzsignfoldertypeSendattachmentezsignsigner(const bool &b_ezsignfoldertype_sendattachmentezsignsigner);
    bool is_b_ezsignfoldertype_sendattachmentezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_sendattachmentezsignsigner_Valid() const;

    bool isBEzsignfoldertypeSendproofezsignsigner() const;
    void setBEzsignfoldertypeSendproofezsignsigner(const bool &b_ezsignfoldertype_sendproofezsignsigner);
    bool is_b_ezsignfoldertype_sendproofezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_sendproofezsignsigner_Valid() const;

    bool isBEzsignfoldertypeSendattachmentuser() const;
    void setBEzsignfoldertypeSendattachmentuser(const bool &b_ezsignfoldertype_sendattachmentuser);
    bool is_b_ezsignfoldertype_sendattachmentuser_Set() const;
    bool is_b_ezsignfoldertype_sendattachmentuser_Valid() const;

    bool isBEzsignfoldertypeSendproofuser() const;
    void setBEzsignfoldertypeSendproofuser(const bool &b_ezsignfoldertype_sendproofuser);
    bool is_b_ezsignfoldertype_sendproofuser_Set() const;
    bool is_b_ezsignfoldertype_sendproofuser_Valid() const;

    bool isBEzsignfoldertypeSendproofemail() const;
    void setBEzsignfoldertypeSendproofemail(const bool &b_ezsignfoldertype_sendproofemail);
    bool is_b_ezsignfoldertype_sendproofemail_Set() const;
    bool is_b_ezsignfoldertype_sendproofemail_Valid() const;

    bool isBEzsignfoldertypeAllowdownloadattachmentezsignsigner() const;
    void setBEzsignfoldertypeAllowdownloadattachmentezsignsigner(const bool &b_ezsignfoldertype_allowdownloadattachmentezsignsigner);
    bool is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Valid() const;

    bool isBEzsignfoldertypeAllowdownloadproofezsignsigner() const;
    void setBEzsignfoldertypeAllowdownloadproofezsignsigner(const bool &b_ezsignfoldertype_allowdownloadproofezsignsigner);
    bool is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Valid() const;

    bool isBEzsignfoldertypeSendproofreceivealldocument() const;
    void setBEzsignfoldertypeSendproofreceivealldocument(const bool &b_ezsignfoldertype_sendproofreceivealldocument);
    bool is_b_ezsignfoldertype_sendproofreceivealldocument_Set() const;
    bool is_b_ezsignfoldertype_sendproofreceivealldocument_Valid() const;

    bool isBEzsignfoldertypeSendsignedtodocumentowner() const;
    void setBEzsignfoldertypeSendsignedtodocumentowner(const bool &b_ezsignfoldertype_sendsignedtodocumentowner);
    bool is_b_ezsignfoldertype_sendsignedtodocumentowner_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtodocumentowner_Valid() const;

    bool isBEzsignfoldertypeSendsignedtofolderowner() const;
    void setBEzsignfoldertypeSendsignedtofolderowner(const bool &b_ezsignfoldertype_sendsignedtofolderowner);
    bool is_b_ezsignfoldertype_sendsignedtofolderowner_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtofolderowner_Valid() const;

    bool isBEzsignfoldertypeSendsignedtofullgroup() const;
    void setBEzsignfoldertypeSendsignedtofullgroup(const bool &b_ezsignfoldertype_sendsignedtofullgroup);
    bool is_b_ezsignfoldertype_sendsignedtofullgroup_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtofullgroup_Valid() const;

    bool isBEzsignfoldertypeSendsignedtolimitedgroup() const;
    void setBEzsignfoldertypeSendsignedtolimitedgroup(const bool &b_ezsignfoldertype_sendsignedtolimitedgroup);
    bool is_b_ezsignfoldertype_sendsignedtolimitedgroup_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtolimitedgroup_Valid() const;

    bool isBEzsignfoldertypeSendsignedtocolleague() const;
    void setBEzsignfoldertypeSendsignedtocolleague(const bool &b_ezsignfoldertype_sendsignedtocolleague);
    bool is_b_ezsignfoldertype_sendsignedtocolleague_Set() const;
    bool is_b_ezsignfoldertype_sendsignedtocolleague_Valid() const;

    bool isBEzsignfoldertypeSendsummarytodocumentowner() const;
    void setBEzsignfoldertypeSendsummarytodocumentowner(const bool &b_ezsignfoldertype_sendsummarytodocumentowner);
    bool is_b_ezsignfoldertype_sendsummarytodocumentowner_Set() const;
    bool is_b_ezsignfoldertype_sendsummarytodocumentowner_Valid() const;

    bool isBEzsignfoldertypeSendsummarytofolderowner() const;
    void setBEzsignfoldertypeSendsummarytofolderowner(const bool &b_ezsignfoldertype_sendsummarytofolderowner);
    bool is_b_ezsignfoldertype_sendsummarytofolderowner_Set() const;
    bool is_b_ezsignfoldertype_sendsummarytofolderowner_Valid() const;

    bool isBEzsignfoldertypeSendsummarytofullgroup() const;
    void setBEzsignfoldertypeSendsummarytofullgroup(const bool &b_ezsignfoldertype_sendsummarytofullgroup);
    bool is_b_ezsignfoldertype_sendsummarytofullgroup_Set() const;
    bool is_b_ezsignfoldertype_sendsummarytofullgroup_Valid() const;

    bool isBEzsignfoldertypeSendsummarytolimitedgroup() const;
    void setBEzsignfoldertypeSendsummarytolimitedgroup(const bool &b_ezsignfoldertype_sendsummarytolimitedgroup);
    bool is_b_ezsignfoldertype_sendsummarytolimitedgroup_Set() const;
    bool is_b_ezsignfoldertype_sendsummarytolimitedgroup_Valid() const;

    bool isBEzsignfoldertypeSendsummarytocolleague() const;
    void setBEzsignfoldertypeSendsummarytocolleague(const bool &b_ezsignfoldertype_sendsummarytocolleague);
    bool is_b_ezsignfoldertype_sendsummarytocolleague_Set() const;
    bool is_b_ezsignfoldertype_sendsummarytocolleague_Valid() const;

    Field_eEzsignfoldertypeSigneraccess getEEzsignfoldertypeSigneraccess() const;
    void setEEzsignfoldertypeSigneraccess(const Field_eEzsignfoldertypeSigneraccess &e_ezsignfoldertype_signeraccess);
    bool is_e_ezsignfoldertype_signeraccess_Set() const;
    bool is_e_ezsignfoldertype_signeraccess_Valid() const;

    bool isBEzsignfoldertypeIsactive() const;
    void setBEzsignfoldertypeIsactive(const bool &b_ezsignfoldertype_isactive);
    bool is_b_ezsignfoldertype_isactive_Set() const;
    bool is_b_ezsignfoldertype_isactive_Valid() const;

    QList<qint32> getAFkiUserIdSigned() const;
    void setAFkiUserIdSigned(const QList<qint32> &a_fki_user_id_signed);
    bool is_a_fki_user_id_signed_Set() const;
    bool is_a_fki_user_id_signed_Valid() const;

    QList<qint32> getAFkiUserIdSummary() const;
    void setAFkiUserIdSummary(const QList<qint32> &a_fki_user_id_summary);
    bool is_a_fki_user_id_summary_Set() const;
    bool is_a_fki_user_id_summary_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignfoldertype_id;
    bool m_pki_ezsignfoldertype_id_isSet;
    bool m_pki_ezsignfoldertype_id_isValid;

    Multilingual_EzsignfoldertypeName m_obj_ezsignfoldertype_name;
    bool m_obj_ezsignfoldertype_name_isSet;
    bool m_obj_ezsignfoldertype_name_isValid;

    qint32 m_fki_branding_id;
    bool m_fki_branding_id_isSet;
    bool m_fki_branding_id_isValid;

    qint32 m_fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    qint32 m_fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    qint32 m_fki_font_id_annotation;
    bool m_fki_font_id_annotation_isSet;
    bool m_fki_font_id_annotation_isValid;

    qint32 m_fki_font_id_formfield;
    bool m_fki_font_id_formfield_isSet;
    bool m_fki_font_id_formfield_isValid;

    qint32 m_fki_font_id_signature;
    bool m_fki_font_id_signature_isSet;
    bool m_fki_font_id_signature_isValid;

    qint32 m_fki_pdfalevel_id_convert;
    bool m_fki_pdfalevel_id_convert_isSet;
    bool m_fki_pdfalevel_id_convert_isValid;

    QList<qint32> m_a_fki_pdfalevel_id;
    bool m_a_fki_pdfalevel_id_isSet;
    bool m_a_fki_pdfalevel_id_isValid;

    QList<qint32> m_a_fki_userlogintype_id;
    bool m_a_fki_userlogintype_id_isSet;
    bool m_a_fki_userlogintype_id_isValid;

    QList<qint32> m_a_fki_usergroup_id_all;
    bool m_a_fki_usergroup_id_all_isSet;
    bool m_a_fki_usergroup_id_all_isValid;

    QList<qint32> m_a_fki_usergroup_id_restricted;
    bool m_a_fki_usergroup_id_restricted_isSet;
    bool m_a_fki_usergroup_id_restricted_isValid;

    QList<qint32> m_a_fki_usergroup_id_template;
    bool m_a_fki_usergroup_id_template_isSet;
    bool m_a_fki_usergroup_id_template_isValid;

    Field_eEzsignfoldertypeDocumentdependency m_e_ezsignfoldertype_documentdependency;
    bool m_e_ezsignfoldertype_documentdependency_isSet;
    bool m_e_ezsignfoldertype_documentdependency_isValid;

    QString m_s_email_address_signed;
    bool m_s_email_address_signed_isSet;
    bool m_s_email_address_signed_isValid;

    QString m_s_email_address_summary;
    bool m_s_email_address_summary_isSet;
    bool m_s_email_address_summary_isValid;

    Field_eEzsignfoldertypePdfarequirement m_e_ezsignfoldertype_pdfarequirement;
    bool m_e_ezsignfoldertype_pdfarequirement_isSet;
    bool m_e_ezsignfoldertype_pdfarequirement_isValid;

    Field_eEzsignfoldertypePdfanoncompliantaction m_e_ezsignfoldertype_pdfanoncompliantaction;
    bool m_e_ezsignfoldertype_pdfanoncompliantaction_isSet;
    bool m_e_ezsignfoldertype_pdfanoncompliantaction_isValid;

    Field_eEzsignfoldertypePrivacylevel m_e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    qint32 m_i_ezsignfoldertype_fontsizeannotation;
    bool m_i_ezsignfoldertype_fontsizeannotation_isSet;
    bool m_i_ezsignfoldertype_fontsizeannotation_isValid;

    qint32 m_i_ezsignfoldertype_fontsizeformfield;
    bool m_i_ezsignfoldertype_fontsizeformfield_isSet;
    bool m_i_ezsignfoldertype_fontsizeformfield_isValid;

    qint32 m_i_ezsignfoldertype_sendreminderfirstdays;
    bool m_i_ezsignfoldertype_sendreminderfirstdays_isSet;
    bool m_i_ezsignfoldertype_sendreminderfirstdays_isValid;

    qint32 m_i_ezsignfoldertype_sendreminderotherdays;
    bool m_i_ezsignfoldertype_sendreminderotherdays_isSet;
    bool m_i_ezsignfoldertype_sendreminderotherdays_isValid;

    qint32 m_i_ezsignfoldertype_archivaldays;
    bool m_i_ezsignfoldertype_archivaldays_isSet;
    bool m_i_ezsignfoldertype_archivaldays_isValid;

    Field_eEzsignfoldertypeDisposal m_e_ezsignfoldertype_disposal;
    bool m_e_ezsignfoldertype_disposal_isSet;
    bool m_e_ezsignfoldertype_disposal_isValid;

    Field_eEzsignfoldertypeCompletion m_e_ezsignfoldertype_completion;
    bool m_e_ezsignfoldertype_completion_isSet;
    bool m_e_ezsignfoldertype_completion_isValid;

    qint32 m_i_ezsignfoldertype_disposaldays;
    bool m_i_ezsignfoldertype_disposaldays_isSet;
    bool m_i_ezsignfoldertype_disposaldays_isValid;

    qint32 m_i_ezsignfoldertype_deadlinedays;
    bool m_i_ezsignfoldertype_deadlinedays_isSet;
    bool m_i_ezsignfoldertype_deadlinedays_isValid;

    bool m_b_ezsignfoldertype_prematurelyendautomatically;
    bool m_b_ezsignfoldertype_prematurelyendautomatically_isSet;
    bool m_b_ezsignfoldertype_prematurelyendautomatically_isValid;

    qint32 m_i_ezsignfoldertype_prematurelyendautomaticallydays;
    bool m_i_ezsignfoldertype_prematurelyendautomaticallydays_isSet;
    bool m_i_ezsignfoldertype_prematurelyendautomaticallydays_isValid;

    bool m_b_ezsignfoldertype_automaticsignature;
    bool m_b_ezsignfoldertype_automaticsignature_isSet;
    bool m_b_ezsignfoldertype_automaticsignature_isValid;

    bool m_b_ezsignfoldertype_delegate;
    bool m_b_ezsignfoldertype_delegate_isSet;
    bool m_b_ezsignfoldertype_delegate_isValid;

    bool m_b_ezsignfoldertype_discussion;
    bool m_b_ezsignfoldertype_discussion_isSet;
    bool m_b_ezsignfoldertype_discussion_isValid;

    bool m_b_ezsignfoldertype_logrecipientinproof;
    bool m_b_ezsignfoldertype_logrecipientinproof_isSet;
    bool m_b_ezsignfoldertype_logrecipientinproof_isValid;

    bool m_b_ezsignfoldertype_reassignezsignsigner;
    bool m_b_ezsignfoldertype_reassignezsignsigner_isSet;
    bool m_b_ezsignfoldertype_reassignezsignsigner_isValid;

    bool m_b_ezsignfoldertype_reassignuser;
    bool m_b_ezsignfoldertype_reassignuser_isSet;
    bool m_b_ezsignfoldertype_reassignuser_isValid;

    bool m_b_ezsignfoldertype_reassigngroup;
    bool m_b_ezsignfoldertype_reassigngroup_isSet;
    bool m_b_ezsignfoldertype_reassigngroup_isValid;

    bool m_b_ezsignfoldertype_sendsignedtoezsignsigner;
    bool m_b_ezsignfoldertype_sendsignedtoezsignsigner_isSet;
    bool m_b_ezsignfoldertype_sendsignedtoezsignsigner_isValid;

    bool m_b_ezsignfoldertype_sendsignedtouser;
    bool m_b_ezsignfoldertype_sendsignedtouser_isSet;
    bool m_b_ezsignfoldertype_sendsignedtouser_isValid;

    bool m_b_ezsignfoldertype_sendattachmentezsignsigner;
    bool m_b_ezsignfoldertype_sendattachmentezsignsigner_isSet;
    bool m_b_ezsignfoldertype_sendattachmentezsignsigner_isValid;

    bool m_b_ezsignfoldertype_sendproofezsignsigner;
    bool m_b_ezsignfoldertype_sendproofezsignsigner_isSet;
    bool m_b_ezsignfoldertype_sendproofezsignsigner_isValid;

    bool m_b_ezsignfoldertype_sendattachmentuser;
    bool m_b_ezsignfoldertype_sendattachmentuser_isSet;
    bool m_b_ezsignfoldertype_sendattachmentuser_isValid;

    bool m_b_ezsignfoldertype_sendproofuser;
    bool m_b_ezsignfoldertype_sendproofuser_isSet;
    bool m_b_ezsignfoldertype_sendproofuser_isValid;

    bool m_b_ezsignfoldertype_sendproofemail;
    bool m_b_ezsignfoldertype_sendproofemail_isSet;
    bool m_b_ezsignfoldertype_sendproofemail_isValid;

    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet;
    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid;

    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner;
    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet;
    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid;

    bool m_b_ezsignfoldertype_sendproofreceivealldocument;
    bool m_b_ezsignfoldertype_sendproofreceivealldocument_isSet;
    bool m_b_ezsignfoldertype_sendproofreceivealldocument_isValid;

    bool m_b_ezsignfoldertype_sendsignedtodocumentowner;
    bool m_b_ezsignfoldertype_sendsignedtodocumentowner_isSet;
    bool m_b_ezsignfoldertype_sendsignedtodocumentowner_isValid;

    bool m_b_ezsignfoldertype_sendsignedtofolderowner;
    bool m_b_ezsignfoldertype_sendsignedtofolderowner_isSet;
    bool m_b_ezsignfoldertype_sendsignedtofolderowner_isValid;

    bool m_b_ezsignfoldertype_sendsignedtofullgroup;
    bool m_b_ezsignfoldertype_sendsignedtofullgroup_isSet;
    bool m_b_ezsignfoldertype_sendsignedtofullgroup_isValid;

    bool m_b_ezsignfoldertype_sendsignedtolimitedgroup;
    bool m_b_ezsignfoldertype_sendsignedtolimitedgroup_isSet;
    bool m_b_ezsignfoldertype_sendsignedtolimitedgroup_isValid;

    bool m_b_ezsignfoldertype_sendsignedtocolleague;
    bool m_b_ezsignfoldertype_sendsignedtocolleague_isSet;
    bool m_b_ezsignfoldertype_sendsignedtocolleague_isValid;

    bool m_b_ezsignfoldertype_sendsummarytodocumentowner;
    bool m_b_ezsignfoldertype_sendsummarytodocumentowner_isSet;
    bool m_b_ezsignfoldertype_sendsummarytodocumentowner_isValid;

    bool m_b_ezsignfoldertype_sendsummarytofolderowner;
    bool m_b_ezsignfoldertype_sendsummarytofolderowner_isSet;
    bool m_b_ezsignfoldertype_sendsummarytofolderowner_isValid;

    bool m_b_ezsignfoldertype_sendsummarytofullgroup;
    bool m_b_ezsignfoldertype_sendsummarytofullgroup_isSet;
    bool m_b_ezsignfoldertype_sendsummarytofullgroup_isValid;

    bool m_b_ezsignfoldertype_sendsummarytolimitedgroup;
    bool m_b_ezsignfoldertype_sendsummarytolimitedgroup_isSet;
    bool m_b_ezsignfoldertype_sendsummarytolimitedgroup_isValid;

    bool m_b_ezsignfoldertype_sendsummarytocolleague;
    bool m_b_ezsignfoldertype_sendsummarytocolleague_isSet;
    bool m_b_ezsignfoldertype_sendsummarytocolleague_isValid;

    Field_eEzsignfoldertypeSigneraccess m_e_ezsignfoldertype_signeraccess;
    bool m_e_ezsignfoldertype_signeraccess_isSet;
    bool m_e_ezsignfoldertype_signeraccess_isValid;

    bool m_b_ezsignfoldertype_isactive;
    bool m_b_ezsignfoldertype_isactive_isSet;
    bool m_b_ezsignfoldertype_isactive_isValid;

    QList<qint32> m_a_fki_user_id_signed;
    bool m_a_fki_user_id_signed_isSet;
    bool m_a_fki_user_id_signed_isValid;

    QList<qint32> m_a_fki_user_id_summary;
    bool m_a_fki_user_id_summary_isSet;
    bool m_a_fki_user_id_summary_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_RequestCompoundV3)

#endif // Ezsignfoldertype_RequestCompoundV3_H
