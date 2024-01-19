/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfoldertype_Response.h
 *
 * A Ezsignfoldertype Object
 */

#ifndef Ezsignfoldertype_Response_H
#define Ezsignfoldertype_Response_H

#include <QJsonObject>

#include "Field_eEzsignfoldertypeCompletion.h"
#include "Field_eEzsignfoldertypeDisposal.h"
#include "Field_eEzsignfoldertypePrivacylevel.h"
#include "Field_eEzsignfoldertypeSendreminderfrequency.h"
#include "Multilingual_EzsignfoldertypeName.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_EzsignfoldertypeName;

class Ezsignfoldertype_Response : public Object {
public:
    Ezsignfoldertype_Response();
    Ezsignfoldertype_Response(QString json);
    ~Ezsignfoldertype_Response() override;

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

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiUsergroupIdRestricted() const;
    void setFkiUsergroupIdRestricted(const qint32 &fki_usergroup_id_restricted);
    bool is_fki_usergroup_id_restricted_Set() const;
    bool is_fki_usergroup_id_restricted_Valid() const;

    qint32 getFkiEzsigntsarequirementId() const;
    void setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id);
    bool is_fki_ezsigntsarequirement_id_Set() const;
    bool is_fki_ezsigntsarequirement_id_Valid() const;

    QString getSBrandingDescriptionX() const;
    void setSBrandingDescriptionX(const QString &s_branding_description_x);
    bool is_s_branding_description_x_Set() const;
    bool is_s_branding_description_x_Valid() const;

    QString getSBillingentityinternalDescriptionX() const;
    void setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x);
    bool is_s_billingentityinternal_description_x_Set() const;
    bool is_s_billingentityinternal_description_x_Valid() const;

    QString getSEzsigntsarequirementDescriptionX() const;
    void setSEzsigntsarequirementDescriptionX(const QString &s_ezsigntsarequirement_description_x);
    bool is_s_ezsigntsarequirement_description_x_Set() const;
    bool is_s_ezsigntsarequirement_description_x_Valid() const;

    QString getSEmailAddressSigned() const;
    void setSEmailAddressSigned(const QString &s_email_address_signed);
    bool is_s_email_address_signed_Set() const;
    bool is_s_email_address_signed_Valid() const;

    QString getSEmailAddressSummary() const;
    void setSEmailAddressSummary(const QString &s_email_address_summary);
    bool is_s_email_address_summary_Set() const;
    bool is_s_email_address_summary_Valid() const;

    QString getSUsergroupNameX() const;
    void setSUsergroupNameX(const QString &s_usergroup_name_x);
    bool is_s_usergroup_name_x_Set() const;
    bool is_s_usergroup_name_x_Valid() const;

    QString getSUsergroupNameXRestricted() const;
    void setSUsergroupNameXRestricted(const QString &s_usergroup_name_x_restricted);
    bool is_s_usergroup_name_x_restricted_Set() const;
    bool is_s_usergroup_name_x_restricted_Valid() const;

    Field_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const Field_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
    bool is_e_ezsignfoldertype_privacylevel_Set() const;
    bool is_e_ezsignfoldertype_privacylevel_Valid() const;

    Field_eEzsignfoldertypeSendreminderfrequency getEEzsignfoldertypeSendreminderfrequency() const;
    void setEEzsignfoldertypeSendreminderfrequency(const Field_eEzsignfoldertypeSendreminderfrequency &e_ezsignfoldertype_sendreminderfrequency);
    bool is_e_ezsignfoldertype_sendreminderfrequency_Set() const;
    bool is_e_ezsignfoldertype_sendreminderfrequency_Valid() const;

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

    bool isBEzsignfoldertypeDelegate() const;
    void setBEzsignfoldertypeDelegate(const bool &b_ezsignfoldertype_delegate);
    bool is_b_ezsignfoldertype_delegate_Set() const;
    bool is_b_ezsignfoldertype_delegate_Valid() const;

    bool isBEzsignfoldertypeReassign() const;
    void setBEzsignfoldertypeReassign(const bool &b_ezsignfoldertype_reassign);
    bool is_b_ezsignfoldertype_reassign_Set() const;
    bool is_b_ezsignfoldertype_reassign_Valid() const;

    bool isBEzsignfoldertypeReassignezsignsigner() const;
    void setBEzsignfoldertypeReassignezsignsigner(const bool &b_ezsignfoldertype_reassignezsignsigner);
    bool is_b_ezsignfoldertype_reassignezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_reassignezsignsigner_Valid() const;

    bool isBEzsignfoldertypeReassignuser() const;
    void setBEzsignfoldertypeReassignuser(const bool &b_ezsignfoldertype_reassignuser);
    bool is_b_ezsignfoldertype_reassignuser_Set() const;
    bool is_b_ezsignfoldertype_reassignuser_Valid() const;

    bool isBEzsignfoldertypeSendattatchmentsigner() const;
    void setBEzsignfoldertypeSendattatchmentsigner(const bool &b_ezsignfoldertype_sendattatchmentsigner);
    bool is_b_ezsignfoldertype_sendattatchmentsigner_Set() const;
    bool is_b_ezsignfoldertype_sendattatchmentsigner_Valid() const;

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

    bool isBEzsignfoldertypeIncludeproofsigner() const;
    void setBEzsignfoldertypeIncludeproofsigner(const bool &b_ezsignfoldertype_includeproofsigner);
    bool is_b_ezsignfoldertype_includeproofsigner_Set() const;
    bool is_b_ezsignfoldertype_includeproofsigner_Valid() const;

    bool isBEzsignfoldertypeIncludeproofuser() const;
    void setBEzsignfoldertypeIncludeproofuser(const bool &b_ezsignfoldertype_includeproofuser);
    bool is_b_ezsignfoldertype_includeproofuser_Set() const;
    bool is_b_ezsignfoldertype_includeproofuser_Valid() const;

    bool isBEzsignfoldertypeIsactive() const;
    void setBEzsignfoldertypeIsactive(const bool &b_ezsignfoldertype_isactive);
    bool is_b_ezsignfoldertype_isactive_Set() const;
    bool is_b_ezsignfoldertype_isactive_Valid() const;

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

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 m_fki_usergroup_id_restricted;
    bool m_fki_usergroup_id_restricted_isSet;
    bool m_fki_usergroup_id_restricted_isValid;

    qint32 m_fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString m_s_branding_description_x;
    bool m_s_branding_description_x_isSet;
    bool m_s_branding_description_x_isValid;

    QString m_s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    QString m_s_ezsigntsarequirement_description_x;
    bool m_s_ezsigntsarequirement_description_x_isSet;
    bool m_s_ezsigntsarequirement_description_x_isValid;

    QString m_s_email_address_signed;
    bool m_s_email_address_signed_isSet;
    bool m_s_email_address_signed_isValid;

    QString m_s_email_address_summary;
    bool m_s_email_address_summary_isSet;
    bool m_s_email_address_summary_isValid;

    QString m_s_usergroup_name_x;
    bool m_s_usergroup_name_x_isSet;
    bool m_s_usergroup_name_x_isValid;

    QString m_s_usergroup_name_x_restricted;
    bool m_s_usergroup_name_x_restricted_isSet;
    bool m_s_usergroup_name_x_restricted_isValid;

    Field_eEzsignfoldertypePrivacylevel m_e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    Field_eEzsignfoldertypeSendreminderfrequency m_e_ezsignfoldertype_sendreminderfrequency;
    bool m_e_ezsignfoldertype_sendreminderfrequency_isSet;
    bool m_e_ezsignfoldertype_sendreminderfrequency_isValid;

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

    bool m_b_ezsignfoldertype_delegate;
    bool m_b_ezsignfoldertype_delegate_isSet;
    bool m_b_ezsignfoldertype_delegate_isValid;

    bool m_b_ezsignfoldertype_reassign;
    bool m_b_ezsignfoldertype_reassign_isSet;
    bool m_b_ezsignfoldertype_reassign_isValid;

    bool m_b_ezsignfoldertype_reassignezsignsigner;
    bool m_b_ezsignfoldertype_reassignezsignsigner_isSet;
    bool m_b_ezsignfoldertype_reassignezsignsigner_isValid;

    bool m_b_ezsignfoldertype_reassignuser;
    bool m_b_ezsignfoldertype_reassignuser_isSet;
    bool m_b_ezsignfoldertype_reassignuser_isValid;

    bool m_b_ezsignfoldertype_sendattatchmentsigner;
    bool m_b_ezsignfoldertype_sendattatchmentsigner_isSet;
    bool m_b_ezsignfoldertype_sendattatchmentsigner_isValid;

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

    bool m_b_ezsignfoldertype_includeproofsigner;
    bool m_b_ezsignfoldertype_includeproofsigner_isSet;
    bool m_b_ezsignfoldertype_includeproofsigner_isValid;

    bool m_b_ezsignfoldertype_includeproofuser;
    bool m_b_ezsignfoldertype_includeproofuser_isSet;
    bool m_b_ezsignfoldertype_includeproofuser_isValid;

    bool m_b_ezsignfoldertype_isactive;
    bool m_b_ezsignfoldertype_isactive_isSet;
    bool m_b_ezsignfoldertype_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldertype_Response)

#endif // Ezsignfoldertype_Response_H
