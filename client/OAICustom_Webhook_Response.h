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
 * OAICustom_Webhook_Response.h
 *
 * A custom Webhook object
 */

#ifndef OAICustom_Webhook_Response_H
#define OAICustom_Webhook_Response_H

#include <QJsonObject>

#include "OAICustom_Webhook_Response_allOf.h"
#include "OAIField_eWebhookEzsignevent.h"
#include "OAIField_eWebhookManagementevent.h"
#include "OAIField_eWebhookModule.h"
#include "OAIWebhook_Response.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_Webhook_Response : public OAIObject {
public:
    OAICustom_Webhook_Response();
    OAICustom_Webhook_Response(QString json);
    ~OAICustom_Webhook_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getPksCustomerCode() const;
    void setPksCustomerCode(const QString &pks_customer_code);
    bool is_pks_customer_code_Set() const;
    bool is_pks_customer_code_Valid() const;

    bool isBWebhookTest() const;
    void setBWebhookTest(const bool &b_webhook_test);
    bool is_b_webhook_test_Set() const;
    bool is_b_webhook_test_Valid() const;

    qint32 getPkiWebhookId() const;
    void setPkiWebhookId(const qint32 &pki_webhook_id);
    bool is_pki_webhook_id_Set() const;
    bool is_pki_webhook_id_Valid() const;

    QString getSWebhookDescription() const;
    void setSWebhookDescription(const QString &s_webhook_description);
    bool is_s_webhook_description_Set() const;
    bool is_s_webhook_description_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    OAIField_eWebhookModule getEWebhookModule() const;
    void setEWebhookModule(const OAIField_eWebhookModule &e_webhook_module);
    bool is_e_webhook_module_Set() const;
    bool is_e_webhook_module_Valid() const;

    OAIField_eWebhookEzsignevent getEWebhookEzsignevent() const;
    void setEWebhookEzsignevent(const OAIField_eWebhookEzsignevent &e_webhook_ezsignevent);
    bool is_e_webhook_ezsignevent_Set() const;
    bool is_e_webhook_ezsignevent_Valid() const;

    OAIField_eWebhookManagementevent getEWebhookManagementevent() const;
    void setEWebhookManagementevent(const OAIField_eWebhookManagementevent &e_webhook_managementevent);
    bool is_e_webhook_managementevent_Set() const;
    bool is_e_webhook_managementevent_Valid() const;

    QString getSWebhookUrl() const;
    void setSWebhookUrl(const QString &s_webhook_url);
    bool is_s_webhook_url_Set() const;
    bool is_s_webhook_url_Valid() const;

    QString getSWebhookEmailfailed() const;
    void setSWebhookEmailfailed(const QString &s_webhook_emailfailed);
    bool is_s_webhook_emailfailed_Set() const;
    bool is_s_webhook_emailfailed_Valid() const;

    bool isBWebhookIsactive() const;
    void setBWebhookIsactive(const bool &b_webhook_isactive);
    bool is_b_webhook_isactive_Set() const;
    bool is_b_webhook_isactive_Valid() const;

    bool isBWebhookSkipsslvalidation() const;
    void setBWebhookSkipsslvalidation(const bool &b_webhook_skipsslvalidation);
    bool is_b_webhook_skipsslvalidation_Set() const;
    bool is_b_webhook_skipsslvalidation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString pks_customer_code;
    bool m_pks_customer_code_isSet;
    bool m_pks_customer_code_isValid;

    bool b_webhook_test;
    bool m_b_webhook_test_isSet;
    bool m_b_webhook_test_isValid;

    qint32 pki_webhook_id;
    bool m_pki_webhook_id_isSet;
    bool m_pki_webhook_id_isValid;

    QString s_webhook_description;
    bool m_s_webhook_description_isSet;
    bool m_s_webhook_description_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    QString s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    OAIField_eWebhookModule e_webhook_module;
    bool m_e_webhook_module_isSet;
    bool m_e_webhook_module_isValid;

    OAIField_eWebhookEzsignevent e_webhook_ezsignevent;
    bool m_e_webhook_ezsignevent_isSet;
    bool m_e_webhook_ezsignevent_isValid;

    OAIField_eWebhookManagementevent e_webhook_managementevent;
    bool m_e_webhook_managementevent_isSet;
    bool m_e_webhook_managementevent_isValid;

    QString s_webhook_url;
    bool m_s_webhook_url_isSet;
    bool m_s_webhook_url_isValid;

    QString s_webhook_emailfailed;
    bool m_s_webhook_emailfailed_isSet;
    bool m_s_webhook_emailfailed_isValid;

    bool b_webhook_isactive;
    bool m_b_webhook_isactive_isSet;
    bool m_b_webhook_isactive_isValid;

    bool b_webhook_skipsslvalidation;
    bool m_b_webhook_skipsslvalidation_isSet;
    bool m_b_webhook_skipsslvalidation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Webhook_Response)

#endif // OAICustom_Webhook_Response_H
