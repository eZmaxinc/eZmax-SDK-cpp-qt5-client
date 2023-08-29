/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIUser_ResponseCompound.h
 *
 * A User Object and children to create a complete structure
 */

#ifndef OAIUser_ResponseCompound_H
#define OAIUser_ResponseCompound_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIEmail_ResponseCompound.h"
#include "OAIField_eUserEzsignaccess.h"
#include "OAIField_eUserLogintype.h"
#include "OAIField_eUserOrigin.h"
#include "OAIField_eUserType.h"
#include "OAIPhone_ResponseCompound.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEmail_ResponseCompound;
class OAIPhone_ResponseCompound;
class OAICommon_Audit;

class OAIUser_ResponseCompound : public OAIObject {
public:
    OAIUser_ResponseCompound();
    OAIUser_ResponseCompound(QString json);
    ~OAIUser_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserId() const;
    void setPkiUserId(const qint32 &pki_user_id);
    bool is_pki_user_id_Set() const;
    bool is_pki_user_id_Valid() const;

    qint32 getFkiAgentId() const;
    void setFkiAgentId(const qint32 &fki_agent_id);
    bool is_fki_agent_id_Set() const;
    bool is_fki_agent_id_Valid() const;

    qint32 getFkiBrokerId() const;
    void setFkiBrokerId(const qint32 &fki_broker_id);
    bool is_fki_broker_id_Set() const;
    bool is_fki_broker_id_Valid() const;

    qint32 getFkiAssistantId() const;
    void setFkiAssistantId(const qint32 &fki_assistant_id);
    bool is_fki_assistant_id_Set() const;
    bool is_fki_assistant_id_Valid() const;

    qint32 getFkiEmployeeId() const;
    void setFkiEmployeeId(const qint32 &fki_employee_id);
    bool is_fki_employee_id_Set() const;
    bool is_fki_employee_id_Valid() const;

    qint32 getFkiCompanyIdDefault() const;
    void setFkiCompanyIdDefault(const qint32 &fki_company_id_default);
    bool is_fki_company_id_default_Set() const;
    bool is_fki_company_id_default_Valid() const;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    qint32 getFkiDepartmentIdDefault() const;
    void setFkiDepartmentIdDefault(const qint32 &fki_department_id_default);
    bool is_fki_department_id_default_Set() const;
    bool is_fki_department_id_default_Valid() const;

    QString getSDepartmentNameX() const;
    void setSDepartmentNameX(const QString &s_department_name_x);
    bool is_s_department_name_x_Set() const;
    bool is_s_department_name_x_Valid() const;

    qint32 getFkiTimezoneId() const;
    void setFkiTimezoneId(const qint32 &fki_timezone_id);
    bool is_fki_timezone_id_Set() const;
    bool is_fki_timezone_id_Valid() const;

    QString getSTimezoneName() const;
    void setSTimezoneName(const QString &s_timezone_name);
    bool is_s_timezone_name_Set() const;
    bool is_s_timezone_name_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSLanguageNameX() const;
    void setSLanguageNameX(const QString &s_language_name_x);
    bool is_s_language_name_x_Set() const;
    bool is_s_language_name_x_Valid() const;

    OAIEmail_ResponseCompound getObjEmail() const;
    void setObjEmail(const OAIEmail_ResponseCompound &obj_email);
    bool is_obj_email_Set() const;
    bool is_obj_email_Valid() const;

    qint32 getFkiBillingentityinternalId() const;
    void setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id);
    bool is_fki_billingentityinternal_id_Set() const;
    bool is_fki_billingentityinternal_id_Valid() const;

    QString getSBillingentityinternalDescriptionX() const;
    void setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x);
    bool is_s_billingentityinternal_description_x_Set() const;
    bool is_s_billingentityinternal_description_x_Valid() const;

    OAIPhone_ResponseCompound getObjPhoneHome() const;
    void setObjPhoneHome(const OAIPhone_ResponseCompound &obj_phone_home);
    bool is_obj_phone_home_Set() const;
    bool is_obj_phone_home_Valid() const;

    OAIPhone_ResponseCompound getObjPhoneSms() const;
    void setObjPhoneSms(const OAIPhone_ResponseCompound &obj_phone_sms);
    bool is_obj_phone_sms_Set() const;
    bool is_obj_phone_sms_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    qint32 getFkiModuleIdForm() const;
    void setFkiModuleIdForm(const qint32 &fki_module_id_form);
    bool is_fki_module_id_form_Set() const;
    bool is_fki_module_id_form_Valid() const;

    QString getSModuleNameX() const;
    void setSModuleNameX(const QString &s_module_name_x);
    bool is_s_module_name_x_Set() const;
    bool is_s_module_name_x_Valid() const;

    OAIField_eUserOrigin getEUserOrigin() const;
    void setEUserOrigin(const OAIField_eUserOrigin &e_user_origin);
    bool is_e_user_origin_Set() const;
    bool is_e_user_origin_Valid() const;

    OAIField_eUserType getEUserType() const;
    void setEUserType(const OAIField_eUserType &e_user_type);
    bool is_e_user_type_Set() const;
    bool is_e_user_type_Valid() const;

    OAIField_eUserLogintype getEUserLogintype() const;
    void setEUserLogintype(const OAIField_eUserLogintype &e_user_logintype);
    bool is_e_user_logintype_Set() const;
    bool is_e_user_logintype_Valid() const;

    QString getSUserFirstname() const;
    void setSUserFirstname(const QString &s_user_firstname);
    bool is_s_user_firstname_Set() const;
    bool is_s_user_firstname_Valid() const;

    QString getSUserLastname() const;
    void setSUserLastname(const QString &s_user_lastname);
    bool is_s_user_lastname_Set() const;
    bool is_s_user_lastname_Valid() const;

    QString getSUserLoginname() const;
    void setSUserLoginname(const QString &s_user_loginname);
    bool is_s_user_loginname_Set() const;
    bool is_s_user_loginname_Valid() const;

    OAIField_eUserEzsignaccess getEUserEzsignaccess() const;
    void setEUserEzsignaccess(const OAIField_eUserEzsignaccess &e_user_ezsignaccess);
    bool is_e_user_ezsignaccess_Set() const;
    bool is_e_user_ezsignaccess_Valid() const;

    QString getDtUserLastlogondate() const;
    void setDtUserLastlogondate(const QString &dt_user_lastlogondate);
    bool is_dt_user_lastlogondate_Set() const;
    bool is_dt_user_lastlogondate_Valid() const;

    QString getDtUserPasswordchanged() const;
    void setDtUserPasswordchanged(const QString &dt_user_passwordchanged);
    bool is_dt_user_passwordchanged_Set() const;
    bool is_dt_user_passwordchanged_Valid() const;

    QString getDtUserEzsignprepaidexpiration() const;
    void setDtUserEzsignprepaidexpiration(const QString &dt_user_ezsignprepaidexpiration);
    bool is_dt_user_ezsignprepaidexpiration_Set() const;
    bool is_dt_user_ezsignprepaidexpiration_Valid() const;

    bool isBUserIsactive() const;
    void setBUserIsactive(const bool &b_user_isactive);
    bool is_b_user_isactive_Set() const;
    bool is_b_user_isactive_Valid() const;

    bool isBUserValidatebyadministration() const;
    void setBUserValidatebyadministration(const bool &b_user_validatebyadministration);
    bool is_b_user_validatebyadministration_Set() const;
    bool is_b_user_validatebyadministration_Valid() const;

    bool isBUserValidatebydirector() const;
    void setBUserValidatebydirector(const bool &b_user_validatebydirector);
    bool is_b_user_validatebydirector_Set() const;
    bool is_b_user_validatebydirector_Valid() const;

    bool isBUserAttachmentautoverified() const;
    void setBUserAttachmentautoverified(const bool &b_user_attachmentautoverified);
    bool is_b_user_attachmentautoverified_Set() const;
    bool is_b_user_attachmentautoverified_Valid() const;

    bool isBUserChangepassword() const;
    void setBUserChangepassword(const bool &b_user_changepassword);
    bool is_b_user_changepassword_Set() const;
    bool is_b_user_changepassword_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;

    qint32 m_fki_agent_id;
    bool m_fki_agent_id_isSet;
    bool m_fki_agent_id_isValid;

    qint32 m_fki_broker_id;
    bool m_fki_broker_id_isSet;
    bool m_fki_broker_id_isValid;

    qint32 m_fki_assistant_id;
    bool m_fki_assistant_id_isSet;
    bool m_fki_assistant_id_isValid;

    qint32 m_fki_employee_id;
    bool m_fki_employee_id_isSet;
    bool m_fki_employee_id_isValid;

    qint32 m_fki_company_id_default;
    bool m_fki_company_id_default_isSet;
    bool m_fki_company_id_default_isValid;

    QString m_s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    qint32 m_fki_department_id_default;
    bool m_fki_department_id_default_isSet;
    bool m_fki_department_id_default_isValid;

    QString m_s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    qint32 m_fki_timezone_id;
    bool m_fki_timezone_id_isSet;
    bool m_fki_timezone_id_isValid;

    QString m_s_timezone_name;
    bool m_s_timezone_name_isSet;
    bool m_s_timezone_name_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_language_name_x;
    bool m_s_language_name_x_isSet;
    bool m_s_language_name_x_isValid;

    OAIEmail_ResponseCompound m_obj_email;
    bool m_obj_email_isSet;
    bool m_obj_email_isValid;

    qint32 m_fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    QString m_s_billingentityinternal_description_x;
    bool m_s_billingentityinternal_description_x_isSet;
    bool m_s_billingentityinternal_description_x_isValid;

    OAIPhone_ResponseCompound m_obj_phone_home;
    bool m_obj_phone_home_isSet;
    bool m_obj_phone_home_isValid;

    OAIPhone_ResponseCompound m_obj_phone_sms;
    bool m_obj_phone_sms_isSet;
    bool m_obj_phone_sms_isValid;

    qint32 m_fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    qint32 m_fki_module_id_form;
    bool m_fki_module_id_form_isSet;
    bool m_fki_module_id_form_isValid;

    QString m_s_module_name_x;
    bool m_s_module_name_x_isSet;
    bool m_s_module_name_x_isValid;

    OAIField_eUserOrigin m_e_user_origin;
    bool m_e_user_origin_isSet;
    bool m_e_user_origin_isValid;

    OAIField_eUserType m_e_user_type;
    bool m_e_user_type_isSet;
    bool m_e_user_type_isValid;

    OAIField_eUserLogintype m_e_user_logintype;
    bool m_e_user_logintype_isSet;
    bool m_e_user_logintype_isValid;

    QString m_s_user_firstname;
    bool m_s_user_firstname_isSet;
    bool m_s_user_firstname_isValid;

    QString m_s_user_lastname;
    bool m_s_user_lastname_isSet;
    bool m_s_user_lastname_isValid;

    QString m_s_user_loginname;
    bool m_s_user_loginname_isSet;
    bool m_s_user_loginname_isValid;

    OAIField_eUserEzsignaccess m_e_user_ezsignaccess;
    bool m_e_user_ezsignaccess_isSet;
    bool m_e_user_ezsignaccess_isValid;

    QString m_dt_user_lastlogondate;
    bool m_dt_user_lastlogondate_isSet;
    bool m_dt_user_lastlogondate_isValid;

    QString m_dt_user_passwordchanged;
    bool m_dt_user_passwordchanged_isSet;
    bool m_dt_user_passwordchanged_isValid;

    QString m_dt_user_ezsignprepaidexpiration;
    bool m_dt_user_ezsignprepaidexpiration_isSet;
    bool m_dt_user_ezsignprepaidexpiration_isValid;

    bool m_b_user_isactive;
    bool m_b_user_isactive_isSet;
    bool m_b_user_isactive_isValid;

    bool m_b_user_validatebyadministration;
    bool m_b_user_validatebyadministration_isSet;
    bool m_b_user_validatebyadministration_isValid;

    bool m_b_user_validatebydirector;
    bool m_b_user_validatebydirector_isSet;
    bool m_b_user_validatebydirector_isValid;

    bool m_b_user_attachmentautoverified;
    bool m_b_user_attachmentautoverified_isSet;
    bool m_b_user_attachmentautoverified_isValid;

    bool m_b_user_changepassword;
    bool m_b_user_changepassword_isSet;
    bool m_b_user_changepassword_isValid;

    OAICommon_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUser_ResponseCompound)

#endif // OAIUser_ResponseCompound_H
