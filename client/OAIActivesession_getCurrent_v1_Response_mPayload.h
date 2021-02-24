/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIActivesession_getCurrent_v1_Response_mPayload.h
 *
 * Payload for the /1/object/activesession/getCurrent API Request
 */

#ifndef OAIActivesession_getCurrent_v1_Response_mPayload_H
#define OAIActivesession_getCurrent_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIActivesession_getCurrent_v1_Response_mPayload : public OAIObject {
public:
    OAIActivesession_getCurrent_v1_Response_mPayload();
    OAIActivesession_getCurrent_v1_Response_mPayload(QString json);
    ~OAIActivesession_getCurrent_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSCustomerCode() const;
    void setSCustomerCode(const QString &s_customer_code);
    bool is_s_customer_code_Set() const;
    bool is_s_customer_code_Valid() const;

    QString getEActivesessionSessiontype() const;
    void setEActivesessionSessiontype(const QString &e_activesession_sessiontype);
    bool is_e_activesession_sessiontype_Set() const;
    bool is_e_activesession_sessiontype_Valid() const;

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

    QList<QString> getARegisteredModules() const;
    void setARegisteredModules(const QList<QString> &a_registered_modules);
    bool is_a_registered_modules_Set() const;
    bool is_a_registered_modules_Valid() const;

    QList<qint32> getAPermissions() const;
    void setAPermissions(const QList<qint32> &a_permissions);
    bool is_a_permissions_Set() const;
    bool is_a_permissions_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_customer_code;
    bool m_s_customer_code_isSet;
    bool m_s_customer_code_isValid;

    QString e_activesession_sessiontype;
    bool m_e_activesession_sessiontype_isSet;
    bool m_e_activesession_sessiontype_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    QString s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    QList<QString> a_registered_modules;
    bool m_a_registered_modules_isSet;
    bool m_a_registered_modules_isValid;

    QList<qint32> a_permissions;
    bool m_a_permissions_isSet;
    bool m_a_permissions_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActivesession_getCurrent_v1_Response_mPayload)

#endif // OAIActivesession_getCurrent_v1_Response_mPayload_H
