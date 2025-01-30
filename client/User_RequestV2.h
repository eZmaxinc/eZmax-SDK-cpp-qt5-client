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
 * User_RequestV2.h
 *
 * A User Object
 */

#ifndef User_RequestV2_H
#define User_RequestV2_H

#include <QJsonObject>

#include "Email_RequestCompound.h"
#include "Field_eUserEzsignaccess.h"
#include "Field_eUserLogintype.h"
#include "Field_eUserType.h"
#include "Phone_RequestCompoundV2.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Email_RequestCompound;
class Phone_RequestCompoundV2;

class User_RequestV2 : public Object {
public:
    User_RequestV2();
    User_RequestV2(QString json);
    ~User_RequestV2() override;

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

    qint32 getFkiDepartmentIdDefault() const;
    void setFkiDepartmentIdDefault(const qint32 &fki_department_id_default);
    bool is_fki_department_id_default_Set() const;
    bool is_fki_department_id_default_Valid() const;

    qint32 getFkiTimezoneId() const;
    void setFkiTimezoneId(const qint32 &fki_timezone_id);
    bool is_fki_timezone_id_Set() const;
    bool is_fki_timezone_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    Email_RequestCompound getObjEmail() const;
    void setObjEmail(const Email_RequestCompound &obj_email);
    bool is_obj_email_Set() const;
    bool is_obj_email_Valid() const;

    qint32 getFkiBillingentityinternalId() const;
    void setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id);
    bool is_fki_billingentityinternal_id_Set() const;
    bool is_fki_billingentityinternal_id_Valid() const;

    Phone_RequestCompoundV2 getObjPhoneHome() const;
    void setObjPhoneHome(const Phone_RequestCompoundV2 &obj_phone_home);
    bool is_obj_phone_home_Set() const;
    bool is_obj_phone_home_Valid() const;

    Phone_RequestCompoundV2 getObjPhoneSms() const;
    void setObjPhoneSms(const Phone_RequestCompoundV2 &obj_phone_sms);
    bool is_obj_phone_sms_Set() const;
    bool is_obj_phone_sms_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    QString getSUserSecretresponse() const;
    void setSUserSecretresponse(const QString &s_user_secretresponse);
    bool is_s_user_secretresponse_Set() const;
    bool is_s_user_secretresponse_Valid() const;

    qint32 getFkiModuleIdForm() const;
    void setFkiModuleIdForm(const qint32 &fki_module_id_form);
    bool is_fki_module_id_form_Set() const;
    bool is_fki_module_id_form_Valid() const;

    Field_eUserType getEUserType() const;
    void setEUserType(const Field_eUserType &e_user_type);
    bool is_e_user_type_Set() const;
    bool is_e_user_type_Valid() const;

    Field_eUserLogintype getEUserLogintype() const;
    void setEUserLogintype(const Field_eUserLogintype &e_user_logintype);
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

    QString getSUserJobtitle() const;
    void setSUserJobtitle(const QString &s_user_jobtitle);
    bool is_s_user_jobtitle_Set() const;
    bool is_s_user_jobtitle_Valid() const;

    Field_eUserEzsignaccess getEUserEzsignaccess() const;
    void setEUserEzsignaccess(const Field_eUserEzsignaccess &e_user_ezsignaccess);
    bool is_e_user_ezsignaccess_Set() const;
    bool is_e_user_ezsignaccess_Valid() const;

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

    qint32 m_fki_department_id_default;
    bool m_fki_department_id_default_isSet;
    bool m_fki_department_id_default_isValid;

    qint32 m_fki_timezone_id;
    bool m_fki_timezone_id_isSet;
    bool m_fki_timezone_id_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    Email_RequestCompound m_obj_email;
    bool m_obj_email_isSet;
    bool m_obj_email_isValid;

    qint32 m_fki_billingentityinternal_id;
    bool m_fki_billingentityinternal_id_isSet;
    bool m_fki_billingentityinternal_id_isValid;

    Phone_RequestCompoundV2 m_obj_phone_home;
    bool m_obj_phone_home_isSet;
    bool m_obj_phone_home_isValid;

    Phone_RequestCompoundV2 m_obj_phone_sms;
    bool m_obj_phone_sms_isSet;
    bool m_obj_phone_sms_isValid;

    qint32 m_fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    QString m_s_user_secretresponse;
    bool m_s_user_secretresponse_isSet;
    bool m_s_user_secretresponse_isValid;

    qint32 m_fki_module_id_form;
    bool m_fki_module_id_form_isSet;
    bool m_fki_module_id_form_isValid;

    Field_eUserType m_e_user_type;
    bool m_e_user_type_isSet;
    bool m_e_user_type_isValid;

    Field_eUserLogintype m_e_user_logintype;
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

    QString m_s_user_jobtitle;
    bool m_s_user_jobtitle_isSet;
    bool m_s_user_jobtitle_isValid;

    Field_eUserEzsignaccess m_e_user_ezsignaccess;
    bool m_e_user_ezsignaccess_isSet;
    bool m_e_user_ezsignaccess_isValid;

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
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::User_RequestV2)

#endif // User_RequestV2_H
