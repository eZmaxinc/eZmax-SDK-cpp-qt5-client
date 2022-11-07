/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldertype_RequestCompound.h
 *
 * A Ezsignfoldertype Object and children
 */

#ifndef OAIEzsignfoldertype_RequestCompound_H
#define OAIEzsignfoldertype_RequestCompound_H

#include <QJsonObject>

#include "OAIEzsignfoldertype_Request.h"
#include "OAIEzsignfoldertype_RequestCompound_allOf.h"
#include "OAIField_eEzsignfoldertypeDisposal.h"
#include "OAIField_eEzsignfoldertypePrivacylevel.h"
#include "OAIField_eEzsignfoldertypeSendreminderfrequency.h"
#include "OAIMultilingual_EzsignfoldertypeName.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_EzsignfoldertypeName;

class OAIEzsignfoldertype_RequestCompound : public OAIObject {
public:
    OAIEzsignfoldertype_RequestCompound();
    OAIEzsignfoldertype_RequestCompound(QString json);
    ~OAIEzsignfoldertype_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfoldertypeId() const;
    void setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id);
    bool is_pki_ezsignfoldertype_id_Set() const;
    bool is_pki_ezsignfoldertype_id_Valid() const;

    OAIMultilingual_EzsignfoldertypeName getObjEzsignfoldertypeName() const;
    void setObjEzsignfoldertypeName(const OAIMultilingual_EzsignfoldertypeName &obj_ezsignfoldertype_name);
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

    QString getSEmailAddressSigned() const;
    void setSEmailAddressSigned(const QString &s_email_address_signed);
    bool is_s_email_address_signed_Set() const;
    bool is_s_email_address_signed_Valid() const;

    QString getSEmailAddressSummary() const;
    void setSEmailAddressSummary(const QString &s_email_address_summary);
    bool is_s_email_address_summary_Set() const;
    bool is_s_email_address_summary_Valid() const;

    OAIField_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
    bool is_e_ezsignfoldertype_privacylevel_Set() const;
    bool is_e_ezsignfoldertype_privacylevel_Valid() const;

    OAIField_eEzsignfoldertypeSendreminderfrequency getEEzsignfoldertypeSendreminderfrequency() const;
    void setEEzsignfoldertypeSendreminderfrequency(const OAIField_eEzsignfoldertypeSendreminderfrequency &e_ezsignfoldertype_sendreminderfrequency);
    bool is_e_ezsignfoldertype_sendreminderfrequency_Set() const;
    bool is_e_ezsignfoldertype_sendreminderfrequency_Valid() const;

    qint32 getIEzsignfoldertypeArchivaldays() const;
    void setIEzsignfoldertypeArchivaldays(const qint32 &i_ezsignfoldertype_archivaldays);
    bool is_i_ezsignfoldertype_archivaldays_Set() const;
    bool is_i_ezsignfoldertype_archivaldays_Valid() const;

    OAIField_eEzsignfoldertypeDisposal getEEzsignfoldertypeDisposal() const;
    void setEEzsignfoldertypeDisposal(const OAIField_eEzsignfoldertypeDisposal &e_ezsignfoldertype_disposal);
    bool is_e_ezsignfoldertype_disposal_Set() const;
    bool is_e_ezsignfoldertype_disposal_Valid() const;

    qint32 getIEzsignfoldertypeDisposaldays() const;
    void setIEzsignfoldertypeDisposaldays(const qint32 &i_ezsignfoldertype_disposaldays);
    bool is_i_ezsignfoldertype_disposaldays_Set() const;
    bool is_i_ezsignfoldertype_disposaldays_Valid() const;

    qint32 getIEzsignfoldertypeDeadlinedays() const;
    void setIEzsignfoldertypeDeadlinedays(const qint32 &i_ezsignfoldertype_deadlinedays);
    bool is_i_ezsignfoldertype_deadlinedays_Set() const;
    bool is_i_ezsignfoldertype_deadlinedays_Valid() const;

    bool isBEzsignfoldertypeSendattatchmentsigner() const;
    void setBEzsignfoldertypeSendattatchmentsigner(const bool &b_ezsignfoldertype_sendattatchmentsigner);
    bool is_b_ezsignfoldertype_sendattatchmentsigner_Set() const;
    bool is_b_ezsignfoldertype_sendattatchmentsigner_Valid() const;

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

    qint32 pki_ezsignfoldertype_id;
    bool m_pki_ezsignfoldertype_id_isSet;
    bool m_pki_ezsignfoldertype_id_isValid;

    OAIMultilingual_EzsignfoldertypeName obj_ezsignfoldertype_name;
    bool m_obj_ezsignfoldertype_name_isSet;
    bool m_obj_ezsignfoldertype_name_isValid;

    qint32 fki_branding_id;
    bool m_fki_branding_id_isSet;
    bool m_fki_branding_id_isValid;

    qint32 fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    qint32 fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 fki_usergroup_id_restricted;
    bool m_fki_usergroup_id_restricted_isSet;
    bool m_fki_usergroup_id_restricted_isValid;

    qint32 fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString s_email_address_signed;
    bool m_s_email_address_signed_isSet;
    bool m_s_email_address_signed_isValid;

    QString s_email_address_summary;
    bool m_s_email_address_summary_isSet;
    bool m_s_email_address_summary_isValid;

    OAIField_eEzsignfoldertypePrivacylevel e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    OAIField_eEzsignfoldertypeSendreminderfrequency e_ezsignfoldertype_sendreminderfrequency;
    bool m_e_ezsignfoldertype_sendreminderfrequency_isSet;
    bool m_e_ezsignfoldertype_sendreminderfrequency_isValid;

    qint32 i_ezsignfoldertype_archivaldays;
    bool m_i_ezsignfoldertype_archivaldays_isSet;
    bool m_i_ezsignfoldertype_archivaldays_isValid;

    OAIField_eEzsignfoldertypeDisposal e_ezsignfoldertype_disposal;
    bool m_e_ezsignfoldertype_disposal_isSet;
    bool m_e_ezsignfoldertype_disposal_isValid;

    qint32 i_ezsignfoldertype_disposaldays;
    bool m_i_ezsignfoldertype_disposaldays_isSet;
    bool m_i_ezsignfoldertype_disposaldays_isValid;

    qint32 i_ezsignfoldertype_deadlinedays;
    bool m_i_ezsignfoldertype_deadlinedays_isSet;
    bool m_i_ezsignfoldertype_deadlinedays_isValid;

    bool b_ezsignfoldertype_sendattatchmentsigner;
    bool m_b_ezsignfoldertype_sendattatchmentsigner_isSet;
    bool m_b_ezsignfoldertype_sendattatchmentsigner_isValid;

    bool b_ezsignfoldertype_sendsignedtodocumentowner;
    bool m_b_ezsignfoldertype_sendsignedtodocumentowner_isSet;
    bool m_b_ezsignfoldertype_sendsignedtodocumentowner_isValid;

    bool b_ezsignfoldertype_sendsignedtofolderowner;
    bool m_b_ezsignfoldertype_sendsignedtofolderowner_isSet;
    bool m_b_ezsignfoldertype_sendsignedtofolderowner_isValid;

    bool b_ezsignfoldertype_sendsignedtofullgroup;
    bool m_b_ezsignfoldertype_sendsignedtofullgroup_isSet;
    bool m_b_ezsignfoldertype_sendsignedtofullgroup_isValid;

    bool b_ezsignfoldertype_sendsignedtolimitedgroup;
    bool m_b_ezsignfoldertype_sendsignedtolimitedgroup_isSet;
    bool m_b_ezsignfoldertype_sendsignedtolimitedgroup_isValid;

    bool b_ezsignfoldertype_sendsignedtocolleague;
    bool m_b_ezsignfoldertype_sendsignedtocolleague_isSet;
    bool m_b_ezsignfoldertype_sendsignedtocolleague_isValid;

    bool b_ezsignfoldertype_sendsummarytodocumentowner;
    bool m_b_ezsignfoldertype_sendsummarytodocumentowner_isSet;
    bool m_b_ezsignfoldertype_sendsummarytodocumentowner_isValid;

    bool b_ezsignfoldertype_sendsummarytofolderowner;
    bool m_b_ezsignfoldertype_sendsummarytofolderowner_isSet;
    bool m_b_ezsignfoldertype_sendsummarytofolderowner_isValid;

    bool b_ezsignfoldertype_sendsummarytofullgroup;
    bool m_b_ezsignfoldertype_sendsummarytofullgroup_isSet;
    bool m_b_ezsignfoldertype_sendsummarytofullgroup_isValid;

    bool b_ezsignfoldertype_sendsummarytolimitedgroup;
    bool m_b_ezsignfoldertype_sendsummarytolimitedgroup_isSet;
    bool m_b_ezsignfoldertype_sendsummarytolimitedgroup_isValid;

    bool b_ezsignfoldertype_sendsummarytocolleague;
    bool m_b_ezsignfoldertype_sendsummarytocolleague_isSet;
    bool m_b_ezsignfoldertype_sendsummarytocolleague_isValid;

    bool b_ezsignfoldertype_includeproofsigner;
    bool m_b_ezsignfoldertype_includeproofsigner_isSet;
    bool m_b_ezsignfoldertype_includeproofsigner_isValid;

    bool b_ezsignfoldertype_includeproofuser;
    bool m_b_ezsignfoldertype_includeproofuser_isSet;
    bool m_b_ezsignfoldertype_includeproofuser_isValid;

    bool b_ezsignfoldertype_isactive;
    bool m_b_ezsignfoldertype_isactive_isSet;
    bool m_b_ezsignfoldertype_isactive_isValid;

    QList<qint32> a_fki_user_id_signed;
    bool m_a_fki_user_id_signed_isSet;
    bool m_a_fki_user_id_signed_isValid;

    QList<qint32> a_fki_user_id_summary;
    bool m_a_fki_user_id_summary_isSet;
    bool m_a_fki_user_id_summary_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_RequestCompound)

#endif // OAIEzsignfoldertype_RequestCompound_H
