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
 * Custom_Attachment_Response.h
 *
 * A Custom Attachment Object
 */

#ifndef Custom_Attachment_Response_H
#define Custom_Attachment_Response_H

#include <QJsonObject>

#include "Attachment_ResponseCompound.h"
#include "Common_Audit.h"
#include "Field_eAttachmentDocumenttype.h"
#include "Field_eAttachmentPrivacy.h"
#include "Field_eAttachmentType.h"
#include "Field_eAttachmentVerified.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Attachment_ResponseCompound;

class Custom_Attachment_Response : public Object {
public:
    Custom_Attachment_Response();
    Custom_Attachment_Response(QString json);
    ~Custom_Attachment_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiAttachmentId() const;
    void setPkiAttachmentId(const qint32 &pki_attachment_id);
    bool is_pki_attachment_id_Set() const;
    bool is_pki_attachment_id_Valid() const;

    qint32 getFkiComputerId() const;
    void setFkiComputerId(const qint32 &fki_computer_id);
    bool is_fki_computer_id_Set() const;
    bool is_fki_computer_id_Valid() const;

    qint32 getFkiAdjustmentId() const;
    void setFkiAdjustmentId(const qint32 &fki_adjustment_id);
    bool is_fki_adjustment_id_Set() const;
    bool is_fki_adjustment_id_Valid() const;

    qint32 getFkiAgentId() const;
    void setFkiAgentId(const qint32 &fki_agent_id);
    bool is_fki_agent_id_Set() const;
    bool is_fki_agent_id_Valid() const;

    qint32 getFkiBankaccountId() const;
    void setFkiBankaccountId(const qint32 &fki_bankaccount_id);
    bool is_fki_bankaccount_id_Set() const;
    bool is_fki_bankaccount_id_Valid() const;

    qint32 getFkiBrokerId() const;
    void setFkiBrokerId(const qint32 &fki_broker_id);
    bool is_fki_broker_id_Set() const;
    bool is_fki_broker_id_Valid() const;

    qint32 getFkiCommissionadvanceId() const;
    void setFkiCommissionadvanceId(const qint32 &fki_commissionadvance_id);
    bool is_fki_commissionadvance_id_Set() const;
    bool is_fki_commissionadvance_id_Valid() const;

    qint32 getFkiCommunicationId() const;
    void setFkiCommunicationId(const qint32 &fki_communication_id);
    bool is_fki_communication_id_Set() const;
    bool is_fki_communication_id_Valid() const;

    qint32 getFkiCustomerId() const;
    void setFkiCustomerId(const qint32 &fki_customer_id);
    bool is_fki_customer_id_Set() const;
    bool is_fki_customer_id_Valid() const;

    qint32 getFkiCustomertemplateId() const;
    void setFkiCustomertemplateId(const qint32 &fki_customertemplate_id);
    bool is_fki_customertemplate_id_Set() const;
    bool is_fki_customertemplate_id_Valid() const;

    qint32 getFkiDepositId() const;
    void setFkiDepositId(const qint32 &fki_deposit_id);
    bool is_fki_deposit_id_Set() const;
    bool is_fki_deposit_id_Valid() const;

    qint32 getFkiDeposittransitchequeId() const;
    void setFkiDeposittransitchequeId(const qint32 &fki_deposittransitcheque_id);
    bool is_fki_deposittransitcheque_id_Set() const;
    bool is_fki_deposittransitcheque_id_Valid() const;

    qint32 getFkiElectronicfundstransferId() const;
    void setFkiElectronicfundstransferId(const qint32 &fki_electronicfundstransfer_id);
    bool is_fki_electronicfundstransfer_id_Set() const;
    bool is_fki_electronicfundstransfer_id_Valid() const;

    qint32 getFkiEmployeeId() const;
    void setFkiEmployeeId(const qint32 &fki_employee_id);
    bool is_fki_employee_id_Set() const;
    bool is_fki_employee_id_Valid() const;

    qint32 getFkiExternalbrokerId() const;
    void setFkiExternalbrokerId(const qint32 &fki_externalbroker_id);
    bool is_fki_externalbroker_id_Set() const;
    bool is_fki_externalbroker_id_Valid() const;

    qint32 getFkiEzcomadvanceserverId() const;
    void setFkiEzcomadvanceserverId(const qint32 &fki_ezcomadvanceserver_id);
    bool is_fki_ezcomadvanceserver_id_Set() const;
    bool is_fki_ezcomadvanceserver_id_Valid() const;

    qint32 getFkiEzcomcompanyId() const;
    void setFkiEzcomcompanyId(const qint32 &fki_ezcomcompany_id);
    bool is_fki_ezcomcompany_id_Set() const;
    bool is_fki_ezcomcompany_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    qint32 getFkiGhacqcontractId() const;
    void setFkiGhacqcontractId(const qint32 &fki_ghacqcontract_id);
    bool is_fki_ghacqcontract_id_Set() const;
    bool is_fki_ghacqcontract_id_Valid() const;

    qint32 getFkiInscriptionId() const;
    void setFkiInscriptionId(const qint32 &fki_inscription_id);
    bool is_fki_inscription_id_Set() const;
    bool is_fki_inscription_id_Valid() const;

    qint32 getFkiInscriptiontempId() const;
    void setFkiInscriptiontempId(const qint32 &fki_inscriptiontemp_id);
    bool is_fki_inscriptiontemp_id_Set() const;
    bool is_fki_inscriptiontemp_id_Valid() const;

    qint32 getFkiInscriptionnotauthenticatedId() const;
    void setFkiInscriptionnotauthenticatedId(const qint32 &fki_inscriptionnotauthenticated_id);
    bool is_fki_inscriptionnotauthenticated_id_Set() const;
    bool is_fki_inscriptionnotauthenticated_id_Valid() const;

    qint32 getFkiInvoiceId() const;
    void setFkiInvoiceId(const qint32 &fki_invoice_id);
    bool is_fki_invoice_id_Set() const;
    bool is_fki_invoice_id_Valid() const;

    qint32 getFkiBuyercontractId() const;
    void setFkiBuyercontractId(const qint32 &fki_buyercontract_id);
    bool is_fki_buyercontract_id_Set() const;
    bool is_fki_buyercontract_id_Valid() const;

    qint32 getFkiFranchisebrokerId() const;
    void setFkiFranchisebrokerId(const qint32 &fki_franchisebroker_id);
    bool is_fki_franchisebroker_id_Set() const;
    bool is_fki_franchisebroker_id_Valid() const;

    qint32 getFkiFranchiseagenceId() const;
    void setFkiFranchiseagenceId(const qint32 &fki_franchiseagence_id);
    bool is_fki_franchiseagence_id_Set() const;
    bool is_fki_franchiseagence_id_Valid() const;

    qint32 getFkiFranchiseofficeId() const;
    void setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id);
    bool is_fki_franchiseoffice_id_Set() const;
    bool is_fki_franchiseoffice_id_Valid() const;

    qint32 getFkiFranchisefranchiseId() const;
    void setFkiFranchisefranchiseId(const qint32 &fki_franchisefranchise_id);
    bool is_fki_franchisefranchise_id_Set() const;
    bool is_fki_franchisefranchise_id_Valid() const;

    qint32 getFkiFranchisecomplaintId() const;
    void setFkiFranchisecomplaintId(const qint32 &fki_franchisecomplaint_id);
    bool is_fki_franchisecomplaint_id_Set() const;
    bool is_fki_franchisecomplaint_id_Valid() const;

    qint32 getFkiLeadId() const;
    void setFkiLeadId(const qint32 &fki_lead_id);
    bool is_fki_lead_id_Set() const;
    bool is_fki_lead_id_Valid() const;

    qint32 getFkiMarketingprogramId() const;
    void setFkiMarketingprogramId(const qint32 &fki_marketingprogram_id);
    bool is_fki_marketingprogram_id_Set() const;
    bool is_fki_marketingprogram_id_Valid() const;

    qint32 getFkiMarketingfollowId() const;
    void setFkiMarketingfollowId(const qint32 &fki_marketingfollow_id);
    bool is_fki_marketingfollow_id_Set() const;
    bool is_fki_marketingfollow_id_Valid() const;

    qint32 getFkiNotaryId() const;
    void setFkiNotaryId(const qint32 &fki_notary_id);
    bool is_fki_notary_id_Set() const;
    bool is_fki_notary_id_Valid() const;

    qint32 getFkiOfficetaxreportId() const;
    void setFkiOfficetaxreportId(const qint32 &fki_officetaxreport_id);
    bool is_fki_officetaxreport_id_Set() const;
    bool is_fki_officetaxreport_id_Valid() const;

    qint32 getFkiOtherincomeId() const;
    void setFkiOtherincomeId(const qint32 &fki_otherincome_id);
    bool is_fki_otherincome_id_Set() const;
    bool is_fki_otherincome_id_Valid() const;

    qint32 getFkiPaymentpreparationId() const;
    void setFkiPaymentpreparationId(const qint32 &fki_paymentpreparation_id);
    bool is_fki_paymentpreparation_id_Set() const;
    bool is_fki_paymentpreparation_id_Valid() const;

    qint32 getFkiPurchaseId() const;
    void setFkiPurchaseId(const qint32 &fki_purchase_id);
    bool is_fki_purchase_id_Set() const;
    bool is_fki_purchase_id_Valid() const;

    qint32 getFkiSalaryId() const;
    void setFkiSalaryId(const qint32 &fki_salary_id);
    bool is_fki_salary_id_Set() const;
    bool is_fki_salary_id_Valid() const;

    qint32 getFkiSupplierId() const;
    void setFkiSupplierId(const qint32 &fki_supplier_id);
    bool is_fki_supplier_id_Set() const;
    bool is_fki_supplier_id_Valid() const;

    qint32 getFkiTranqcontractId() const;
    void setFkiTranqcontractId(const qint32 &fki_tranqcontract_id);
    bool is_fki_tranqcontract_id_Set() const;
    bool is_fki_tranqcontract_id_Valid() const;

    qint32 getFkiTemplateId() const;
    void setFkiTemplateId(const qint32 &fki_template_id);
    bool is_fki_template_id_Set() const;
    bool is_fki_template_id_Valid() const;

    qint32 getFkiInscriptionchecklistId() const;
    void setFkiInscriptionchecklistId(const qint32 &fki_inscriptionchecklist_id);
    bool is_fki_inscriptionchecklist_id_Set() const;
    bool is_fki_inscriptionchecklist_id_Valid() const;

    qint32 getFkiFolderId() const;
    void setFkiFolderId(const qint32 &fki_folder_id);
    bool is_fki_folder_id_Set() const;
    bool is_fki_folder_id_Valid() const;

    qint32 getFkiRejectedoffertopurchaseId() const;
    void setFkiRejectedoffertopurchaseId(const qint32 &fki_rejectedoffertopurchase_id);
    bool is_fki_rejectedoffertopurchase_id_Set() const;
    bool is_fki_rejectedoffertopurchase_id_Valid() const;

    qint32 getFkiDisclosureId() const;
    void setFkiDisclosureId(const qint32 &fki_disclosure_id);
    bool is_fki_disclosure_id_Set() const;
    bool is_fki_disclosure_id_Valid() const;

    qint32 getFkiReconciliationId() const;
    void setFkiReconciliationId(const qint32 &fki_reconciliation_id);
    bool is_fki_reconciliation_id_Set() const;
    bool is_fki_reconciliation_id_Valid() const;

    qint32 getFkiEzsigndocumentIdReference() const;
    void setFkiEzsigndocumentIdReference(const qint32 &fki_ezsigndocument_id_reference);
    bool is_fki_ezsigndocument_id_reference_Set() const;
    bool is_fki_ezsigndocument_id_reference_Valid() const;

    Field_eAttachmentDocumenttype getEAttachmentDocumenttype() const;
    void setEAttachmentDocumenttype(const Field_eAttachmentDocumenttype &e_attachment_documenttype);
    bool is_e_attachment_documenttype_Set() const;
    bool is_e_attachment_documenttype_Valid() const;

    QString getSAttachmentName() const;
    void setSAttachmentName(const QString &s_attachment_name);
    bool is_s_attachment_name_Set() const;
    bool is_s_attachment_name_Valid() const;

    Field_eAttachmentPrivacy getEAttachmentPrivacy() const;
    void setEAttachmentPrivacy(const Field_eAttachmentPrivacy &e_attachment_privacy);
    bool is_e_attachment_privacy_Set() const;
    bool is_e_attachment_privacy_Valid() const;

    qint32 getFkiUserIdSpecific() const;
    void setFkiUserIdSpecific(const qint32 &fki_user_id_specific);
    bool is_fki_user_id_specific_Set() const;
    bool is_fki_user_id_specific_Valid() const;

    Field_eAttachmentType getEAttachmentType() const;
    void setEAttachmentType(const Field_eAttachmentType &e_attachment_type);
    bool is_e_attachment_type_Set() const;
    bool is_e_attachment_type_Valid() const;

    qint32 getIAttachmentSize() const;
    void setIAttachmentSize(const qint32 &i_attachment_size);
    bool is_i_attachment_size_Set() const;
    bool is_i_attachment_size_Valid() const;

    qint32 getIAttachmentEdMmoduleflag() const;
    void setIAttachmentEdMmoduleflag(const qint32 &i_attachment_ed_mmoduleflag);
    bool is_i_attachment_ed_mmoduleflag_Set() const;
    bool is_i_attachment_ed_mmoduleflag_Valid() const;

    QString getSAttachmentMd5() const;
    void setSAttachmentMd5(const QString &s_attachment_md5);
    bool is_s_attachment_md5_Set() const;
    bool is_s_attachment_md5_Valid() const;

    bool isBAttachmentDeleted() const;
    void setBAttachmentDeleted(const bool &b_attachment_deleted);
    bool is_b_attachment_deleted_Set() const;
    bool is_b_attachment_deleted_Valid() const;

    bool isBAttachmentValid() const;
    void setBAttachmentValid(const bool &b_attachment_valid);
    bool is_b_attachment_valid_Set() const;
    bool is_b_attachment_valid_Valid() const;

    Field_eAttachmentVerified getEAttachmentVerified() const;
    void setEAttachmentVerified(const Field_eAttachmentVerified &e_attachment_verified);
    bool is_e_attachment_verified_Set() const;
    bool is_e_attachment_verified_Valid() const;

    QString getTAttachmentRejectioncomment() const;
    void setTAttachmentRejectioncomment(const QString &t_attachment_rejectioncomment);
    bool is_t_attachment_rejectioncomment_Set() const;
    bool is_t_attachment_rejectioncomment_Valid() const;

    qint32 getFkiUserIdOwner() const;
    void setFkiUserIdOwner(const qint32 &fki_user_id_owner);
    bool is_fki_user_id_owner_Set() const;
    bool is_fki_user_id_owner_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    Attachment_ResponseCompound getObjAttachmentProof() const;
    void setObjAttachmentProof(const Attachment_ResponseCompound &obj_attachment_proof);
    bool is_obj_attachment_proof_Set() const;
    bool is_obj_attachment_proof_Valid() const;

    Attachment_ResponseCompound getObjAttachmentProofdocument() const;
    void setObjAttachmentProofdocument(const Attachment_ResponseCompound &obj_attachment_proofdocument);
    bool is_obj_attachment_proofdocument_Set() const;
    bool is_obj_attachment_proofdocument_Valid() const;

    QList<Attachment_ResponseCompound> getAObjAttachmentAttachment() const;
    void setAObjAttachmentAttachment(const QList<Attachment_ResponseCompound> &a_obj_attachment_attachment);
    bool is_a_obj_attachment_attachment_Set() const;
    bool is_a_obj_attachment_attachment_Valid() const;

    QList<Attachment_ResponseCompound> getAObjAttachmentVersion() const;
    void setAObjAttachmentVersion(const QList<Attachment_ResponseCompound> &a_obj_attachment_version);
    bool is_a_obj_attachment_version_Set() const;
    bool is_a_obj_attachment_version_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_attachment_id;
    bool m_pki_attachment_id_isSet;
    bool m_pki_attachment_id_isValid;

    qint32 m_fki_computer_id;
    bool m_fki_computer_id_isSet;
    bool m_fki_computer_id_isValid;

    qint32 m_fki_adjustment_id;
    bool m_fki_adjustment_id_isSet;
    bool m_fki_adjustment_id_isValid;

    qint32 m_fki_agent_id;
    bool m_fki_agent_id_isSet;
    bool m_fki_agent_id_isValid;

    qint32 m_fki_bankaccount_id;
    bool m_fki_bankaccount_id_isSet;
    bool m_fki_bankaccount_id_isValid;

    qint32 m_fki_broker_id;
    bool m_fki_broker_id_isSet;
    bool m_fki_broker_id_isValid;

    qint32 m_fki_commissionadvance_id;
    bool m_fki_commissionadvance_id_isSet;
    bool m_fki_commissionadvance_id_isValid;

    qint32 m_fki_communication_id;
    bool m_fki_communication_id_isSet;
    bool m_fki_communication_id_isValid;

    qint32 m_fki_customer_id;
    bool m_fki_customer_id_isSet;
    bool m_fki_customer_id_isValid;

    qint32 m_fki_customertemplate_id;
    bool m_fki_customertemplate_id_isSet;
    bool m_fki_customertemplate_id_isValid;

    qint32 m_fki_deposit_id;
    bool m_fki_deposit_id_isSet;
    bool m_fki_deposit_id_isValid;

    qint32 m_fki_deposittransitcheque_id;
    bool m_fki_deposittransitcheque_id_isSet;
    bool m_fki_deposittransitcheque_id_isValid;

    qint32 m_fki_electronicfundstransfer_id;
    bool m_fki_electronicfundstransfer_id_isSet;
    bool m_fki_electronicfundstransfer_id_isValid;

    qint32 m_fki_employee_id;
    bool m_fki_employee_id_isSet;
    bool m_fki_employee_id_isValid;

    qint32 m_fki_externalbroker_id;
    bool m_fki_externalbroker_id_isSet;
    bool m_fki_externalbroker_id_isValid;

    qint32 m_fki_ezcomadvanceserver_id;
    bool m_fki_ezcomadvanceserver_id_isSet;
    bool m_fki_ezcomadvanceserver_id_isValid;

    qint32 m_fki_ezcomcompany_id;
    bool m_fki_ezcomcompany_id_isSet;
    bool m_fki_ezcomcompany_id_isValid;

    qint32 m_fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    qint32 m_fki_ghacqcontract_id;
    bool m_fki_ghacqcontract_id_isSet;
    bool m_fki_ghacqcontract_id_isValid;

    qint32 m_fki_inscription_id;
    bool m_fki_inscription_id_isSet;
    bool m_fki_inscription_id_isValid;

    qint32 m_fki_inscriptiontemp_id;
    bool m_fki_inscriptiontemp_id_isSet;
    bool m_fki_inscriptiontemp_id_isValid;

    qint32 m_fki_inscriptionnotauthenticated_id;
    bool m_fki_inscriptionnotauthenticated_id_isSet;
    bool m_fki_inscriptionnotauthenticated_id_isValid;

    qint32 m_fki_invoice_id;
    bool m_fki_invoice_id_isSet;
    bool m_fki_invoice_id_isValid;

    qint32 m_fki_buyercontract_id;
    bool m_fki_buyercontract_id_isSet;
    bool m_fki_buyercontract_id_isValid;

    qint32 m_fki_franchisebroker_id;
    bool m_fki_franchisebroker_id_isSet;
    bool m_fki_franchisebroker_id_isValid;

    qint32 m_fki_franchiseagence_id;
    bool m_fki_franchiseagence_id_isSet;
    bool m_fki_franchiseagence_id_isValid;

    qint32 m_fki_franchiseoffice_id;
    bool m_fki_franchiseoffice_id_isSet;
    bool m_fki_franchiseoffice_id_isValid;

    qint32 m_fki_franchisefranchise_id;
    bool m_fki_franchisefranchise_id_isSet;
    bool m_fki_franchisefranchise_id_isValid;

    qint32 m_fki_franchisecomplaint_id;
    bool m_fki_franchisecomplaint_id_isSet;
    bool m_fki_franchisecomplaint_id_isValid;

    qint32 m_fki_lead_id;
    bool m_fki_lead_id_isSet;
    bool m_fki_lead_id_isValid;

    qint32 m_fki_marketingprogram_id;
    bool m_fki_marketingprogram_id_isSet;
    bool m_fki_marketingprogram_id_isValid;

    qint32 m_fki_marketingfollow_id;
    bool m_fki_marketingfollow_id_isSet;
    bool m_fki_marketingfollow_id_isValid;

    qint32 m_fki_notary_id;
    bool m_fki_notary_id_isSet;
    bool m_fki_notary_id_isValid;

    qint32 m_fki_officetaxreport_id;
    bool m_fki_officetaxreport_id_isSet;
    bool m_fki_officetaxreport_id_isValid;

    qint32 m_fki_otherincome_id;
    bool m_fki_otherincome_id_isSet;
    bool m_fki_otherincome_id_isValid;

    qint32 m_fki_paymentpreparation_id;
    bool m_fki_paymentpreparation_id_isSet;
    bool m_fki_paymentpreparation_id_isValid;

    qint32 m_fki_purchase_id;
    bool m_fki_purchase_id_isSet;
    bool m_fki_purchase_id_isValid;

    qint32 m_fki_salary_id;
    bool m_fki_salary_id_isSet;
    bool m_fki_salary_id_isValid;

    qint32 m_fki_supplier_id;
    bool m_fki_supplier_id_isSet;
    bool m_fki_supplier_id_isValid;

    qint32 m_fki_tranqcontract_id;
    bool m_fki_tranqcontract_id_isSet;
    bool m_fki_tranqcontract_id_isValid;

    qint32 m_fki_template_id;
    bool m_fki_template_id_isSet;
    bool m_fki_template_id_isValid;

    qint32 m_fki_inscriptionchecklist_id;
    bool m_fki_inscriptionchecklist_id_isSet;
    bool m_fki_inscriptionchecklist_id_isValid;

    qint32 m_fki_folder_id;
    bool m_fki_folder_id_isSet;
    bool m_fki_folder_id_isValid;

    qint32 m_fki_rejectedoffertopurchase_id;
    bool m_fki_rejectedoffertopurchase_id_isSet;
    bool m_fki_rejectedoffertopurchase_id_isValid;

    qint32 m_fki_disclosure_id;
    bool m_fki_disclosure_id_isSet;
    bool m_fki_disclosure_id_isValid;

    qint32 m_fki_reconciliation_id;
    bool m_fki_reconciliation_id_isSet;
    bool m_fki_reconciliation_id_isValid;

    qint32 m_fki_ezsigndocument_id_reference;
    bool m_fki_ezsigndocument_id_reference_isSet;
    bool m_fki_ezsigndocument_id_reference_isValid;

    Field_eAttachmentDocumenttype m_e_attachment_documenttype;
    bool m_e_attachment_documenttype_isSet;
    bool m_e_attachment_documenttype_isValid;

    QString m_s_attachment_name;
    bool m_s_attachment_name_isSet;
    bool m_s_attachment_name_isValid;

    Field_eAttachmentPrivacy m_e_attachment_privacy;
    bool m_e_attachment_privacy_isSet;
    bool m_e_attachment_privacy_isValid;

    qint32 m_fki_user_id_specific;
    bool m_fki_user_id_specific_isSet;
    bool m_fki_user_id_specific_isValid;

    Field_eAttachmentType m_e_attachment_type;
    bool m_e_attachment_type_isSet;
    bool m_e_attachment_type_isValid;

    qint32 m_i_attachment_size;
    bool m_i_attachment_size_isSet;
    bool m_i_attachment_size_isValid;

    qint32 m_i_attachment_ed_mmoduleflag;
    bool m_i_attachment_ed_mmoduleflag_isSet;
    bool m_i_attachment_ed_mmoduleflag_isValid;

    QString m_s_attachment_md5;
    bool m_s_attachment_md5_isSet;
    bool m_s_attachment_md5_isValid;

    bool m_b_attachment_deleted;
    bool m_b_attachment_deleted_isSet;
    bool m_b_attachment_deleted_isValid;

    bool m_b_attachment_valid;
    bool m_b_attachment_valid_isSet;
    bool m_b_attachment_valid_isValid;

    Field_eAttachmentVerified m_e_attachment_verified;
    bool m_e_attachment_verified_isSet;
    bool m_e_attachment_verified_isValid;

    QString m_t_attachment_rejectioncomment;
    bool m_t_attachment_rejectioncomment_isSet;
    bool m_t_attachment_rejectioncomment_isValid;

    qint32 m_fki_user_id_owner;
    bool m_fki_user_id_owner_isSet;
    bool m_fki_user_id_owner_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    Attachment_ResponseCompound m_obj_attachment_proof;
    bool m_obj_attachment_proof_isSet;
    bool m_obj_attachment_proof_isValid;

    Attachment_ResponseCompound m_obj_attachment_proofdocument;
    bool m_obj_attachment_proofdocument_isSet;
    bool m_obj_attachment_proofdocument_isValid;

    QList<Attachment_ResponseCompound> m_a_obj_attachment_attachment;
    bool m_a_obj_attachment_attachment_isSet;
    bool m_a_obj_attachment_attachment_isValid;

    QList<Attachment_ResponseCompound> m_a_obj_attachment_version;
    bool m_a_obj_attachment_version_isSet;
    bool m_a_obj_attachment_version_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Attachment_Response)

#endif // Custom_Attachment_Response_H
