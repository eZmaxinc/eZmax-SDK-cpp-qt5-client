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
 * OAIDepartment_AutocompleteElement_Response.h
 *
 * A Department AutocompleteElement Response
 */

#ifndef OAIDepartment_AutocompleteElement_Response_H
#define OAIDepartment_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDepartment_AutocompleteElement_Response : public OAIObject {
public:
    OAIDepartment_AutocompleteElement_Response();
    OAIDepartment_AutocompleteElement_Response(QString json);
    ~OAIDepartment_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSCompanyNameX() const;
    void setSCompanyNameX(const QString &s_company_name_x);
    bool is_s_company_name_x_Set() const;
    bool is_s_company_name_x_Valid() const;

    QString getSDepartmentNameX() const;
    void setSDepartmentNameX(const QString &s_department_name_x);
    bool is_s_department_name_x_Set() const;
    bool is_s_department_name_x_Valid() const;

    qint32 getPkiDepartmentId() const;
    void setPkiDepartmentId(const qint32 &pki_department_id);
    bool is_pki_department_id_Set() const;
    bool is_pki_department_id_Valid() const;

    bool isBDepartmentIsactive() const;
    void setBDepartmentIsactive(const bool &b_department_isactive);
    bool is_b_department_isactive_Set() const;
    bool is_b_department_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_company_name_x;
    bool m_s_company_name_x_isSet;
    bool m_s_company_name_x_isValid;

    QString m_s_department_name_x;
    bool m_s_department_name_x_isSet;
    bool m_s_department_name_x_isValid;

    qint32 m_pki_department_id;
    bool m_pki_department_id_isSet;
    bool m_pki_department_id_isValid;

    bool m_b_department_isactive;
    bool m_b_department_isactive_isSet;
    bool m_b_department_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDepartment_AutocompleteElement_Response)

#endif // OAIDepartment_AutocompleteElement_Response_H
