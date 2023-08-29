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
 * OAIActivesession_ResponseCompound.h
 *
 * Payload for GET /1/object/activesession/getCurrent
 */

#ifndef OAIActivesession_ResponseCompound_H
#define OAIActivesession_ResponseCompound_H

#include <QJsonObject>

#include "OAIActivesession_ResponseCompound_Apikey.h"
#include "OAIActivesession_ResponseCompound_User.h"
#include "OAIField_eActivesessionOrigin.h"
#include "OAIField_eActivesessionUsertype.h"
#include "OAIField_eActivesessionWeekdaystart.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIActivesession_ResponseCompound_User;
class OAIActivesession_ResponseCompound_Apikey;

class OAIActivesession_ResponseCompound : public OAIObject {
public:
    OAIActivesession_ResponseCompound();
    OAIActivesession_ResponseCompound(QString json);
    ~OAIActivesession_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIField_eActivesessionUsertype getEActivesessionUsertype() const;
    void setEActivesessionUsertype(const OAIField_eActivesessionUsertype &e_activesession_usertype);
    bool is_e_activesession_usertype_Set() const;
    bool is_e_activesession_usertype_Valid() const;

    OAIField_eActivesessionOrigin getEActivesessionOrigin() const;
    void setEActivesessionOrigin(const OAIField_eActivesessionOrigin &e_activesession_origin);
    bool is_e_activesession_origin_Set() const;
    bool is_e_activesession_origin_Valid() const;

    OAIField_eActivesessionWeekdaystart getEActivesessionWeekdaystart() const;
    void setEActivesessionWeekdaystart(const OAIField_eActivesessionWeekdaystart &e_activesession_weekdaystart);
    bool is_e_activesession_weekdaystart_Set() const;
    bool is_e_activesession_weekdaystart_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    QString getSDepartmentNameX() const;
    void setSDepartmentNameX(const QString &s_department_name_x);
    bool is_s_department_name_x_Set() const;
    bool is_s_department_name_x_Valid() const;

    bool isBActivesessionDebug() const;
    void setBActivesessionDebug(const bool &b_activesession_debug);
    bool is_b_activesession_debug_Set() const;
    bool is_b_activesession_debug_Valid() const;

    bool isBActivesessionIssuperadmin() const;
    void setBActivesessionIssuperadmin(const bool &b_activesession_issuperadmin);
    bool is_b_activesession_issuperadmin_Set() const;
    bool is_b_activesession_issuperadmin_Valid() const;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    qint32 getFkiSystemconfigurationtypeId() const;
    void setFkiSystemconfigurationtypeId(const qint32 &fki_systemconfigurationtype_id);
    bool is_fki_systemconfigurationtype_id_Set() const;
    bool is_fki_systemconfigurationtype_id_Valid() const;

    qint32 getFkiSignatureId() const;
    void setFkiSignatureId(const qint32 &fki_signature_id);
    bool is_fki_signature_id_Set() const;
    bool is_fki_signature_id_Valid() const;

    QList<qint32> getAPkiPermissionId() const;
    void setAPkiPermissionId(const QList<qint32> &a_pki_permission_id);
    bool is_a_pki_permission_id_Set() const;
    bool is_a_pki_permission_id_Valid() const;

    OAIActivesession_ResponseCompound_User getObjUserReal() const;
    void setObjUserReal(const OAIActivesession_ResponseCompound_User &obj_user_real);
    bool is_obj_user_real_Set() const;
    bool is_obj_user_real_Valid() const;

    OAIActivesession_ResponseCompound_User getObjUserCloned() const;
    void setObjUserCloned(const OAIActivesession_ResponseCompound_User &obj_user_cloned);
    bool is_obj_user_cloned_Set() const;
    bool is_obj_user_cloned_Valid() const;

    OAIActivesession_ResponseCompound_Apikey getObjApikey() const;
    void setObjApikey(const OAIActivesession_ResponseCompound_Apikey &obj_apikey);
    bool is_obj_apikey_Set() const;
    bool is_obj_apikey_Valid() const;

    QList<QString> getAEModuleInternalname() const;
    void setAEModuleInternalname(const QList<QString> &a_e_module_internalname);
    bool is_a_e_module_internalname_Set() const;
    bool is_a_e_module_internalname_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIField_eActivesessionUsertype m_e_activesession_usertype;
    bool m_e_activesession_usertype_isSet;
    bool m_e_activesession_usertype_isValid;

    OAIField_eActivesessionOrigin m_e_activesession_origin;
    bool m_e_activesession_origin_isSet;
    bool m_e_activesession_origin_isValid;

    OAIField_eActivesessionWeekdaystart m_e_activesession_weekdaystart;
    bool m_e_activesession_weekdaystart_isSet;
    bool m_e_activesession_weekdaystart_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    QString m_s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    bool m_b_activesession_debug;
    bool m_b_activesession_debug_isSet;
    bool m_b_activesession_debug_isValid;

    bool m_b_activesession_issuperadmin;
    bool m_b_activesession_issuperadmin_isSet;
    bool m_b_activesession_issuperadmin_isValid;

    QString m_pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    qint32 m_fki_systemconfigurationtype_id;
    bool m_fki_systemconfigurationtype_id_isSet;
    bool m_fki_systemconfigurationtype_id_isValid;

    qint32 m_fki_signature_id;
    bool m_fki_signature_id_isSet;
    bool m_fki_signature_id_isValid;

    QList<qint32> m_a_pki_permission_id;
    bool m_a_pki_permission_id_isSet;
    bool m_a_pki_permission_id_isValid;

    OAIActivesession_ResponseCompound_User m_obj_user_real;
    bool m_obj_user_real_isSet;
    bool m_obj_user_real_isValid;

    OAIActivesession_ResponseCompound_User m_obj_user_cloned;
    bool m_obj_user_cloned_isSet;
    bool m_obj_user_cloned_isValid;

    OAIActivesession_ResponseCompound_Apikey m_obj_apikey;
    bool m_obj_apikey_isSet;
    bool m_obj_apikey_isValid;

    QList<QString> m_a_e_module_internalname;
    bool m_a_e_module_internalname_isSet;
    bool m_a_e_module_internalname_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActivesession_ResponseCompound)

#endif // OAIActivesession_ResponseCompound_H
