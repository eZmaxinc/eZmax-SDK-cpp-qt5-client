/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicingcontract_ResponseCompound.h
 *
 * A Ezmaxinvoicingcontract Object
 */

#ifndef OAIEzmaxinvoicingcontract_ResponseCompound_H
#define OAIEzmaxinvoicingcontract_ResponseCompound_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIEzmaxinvoicingcontract_Response.h"
#include "OAIField_eEzmaxinvoicingcontractPaymenttype.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Audit;

class OAIEzmaxinvoicingcontract_ResponseCompound : public OAIObject {
public:
    OAIEzmaxinvoicingcontract_ResponseCompound();
    OAIEzmaxinvoicingcontract_ResponseCompound(QString json);
    ~OAIEzmaxinvoicingcontract_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxinvoicingcontractId() const;
    void setPkiEzmaxinvoicingcontractId(const qint32 &pki_ezmaxinvoicingcontract_id);
    bool is_pki_ezmaxinvoicingcontract_id_Set() const;
    bool is_pki_ezmaxinvoicingcontract_id_Valid() const;

    OAIField_eEzmaxinvoicingcontractPaymenttype getEEzmaxinvoicingcontractPaymenttype() const;
    void setEEzmaxinvoicingcontractPaymenttype(const OAIField_eEzmaxinvoicingcontractPaymenttype &e_ezmaxinvoicingcontract_paymenttype);
    bool is_e_ezmaxinvoicingcontract_paymenttype_Set() const;
    bool is_e_ezmaxinvoicingcontract_paymenttype_Valid() const;

    qint32 getIEzmaxinvoicingcontractLength() const;
    void setIEzmaxinvoicingcontractLength(const qint32 &i_ezmaxinvoicingcontract_length);
    bool is_i_ezmaxinvoicingcontract_length_Set() const;
    bool is_i_ezmaxinvoicingcontract_length_Valid() const;

    QString getDtEzmaxinvoicingcontractStart() const;
    void setDtEzmaxinvoicingcontractStart(const QString &dt_ezmaxinvoicingcontract_start);
    bool is_dt_ezmaxinvoicingcontract_start_Set() const;
    bool is_dt_ezmaxinvoicingcontract_start_Valid() const;

    QString getDtEzmaxinvoicingcontractEnd() const;
    void setDtEzmaxinvoicingcontractEnd(const QString &dt_ezmaxinvoicingcontract_end);
    bool is_dt_ezmaxinvoicingcontract_end_Set() const;
    bool is_dt_ezmaxinvoicingcontract_end_Valid() const;

    QString getDEzmaxinvoicingcontractLicense() const;
    void setDEzmaxinvoicingcontractLicense(const QString &d_ezmaxinvoicingcontract_license);
    bool is_d_ezmaxinvoicingcontract_license_Set() const;
    bool is_d_ezmaxinvoicingcontract_license_Valid() const;

    QString getDEzmaxinvoicingcontract121qa() const;
    void setDEzmaxinvoicingcontract121qa(const QString &d_ezmaxinvoicingcontract121qa);
    bool is_d_ezmaxinvoicingcontract121qa_Set() const;
    bool is_d_ezmaxinvoicingcontract121qa_Valid() const;

    bool isBEzmaxinvoicingcontractEzsignallagents() const;
    void setBEzmaxinvoicingcontractEzsignallagents(const bool &b_ezmaxinvoicingcontract_ezsignallagents);
    bool is_b_ezmaxinvoicingcontract_ezsignallagents_Set() const;
    bool is_b_ezmaxinvoicingcontract_ezsignallagents_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezmaxinvoicingcontract_id;
    bool m_pki_ezmaxinvoicingcontract_id_isSet;
    bool m_pki_ezmaxinvoicingcontract_id_isValid;

    OAIField_eEzmaxinvoicingcontractPaymenttype e_ezmaxinvoicingcontract_paymenttype;
    bool m_e_ezmaxinvoicingcontract_paymenttype_isSet;
    bool m_e_ezmaxinvoicingcontract_paymenttype_isValid;

    qint32 i_ezmaxinvoicingcontract_length;
    bool m_i_ezmaxinvoicingcontract_length_isSet;
    bool m_i_ezmaxinvoicingcontract_length_isValid;

    QString dt_ezmaxinvoicingcontract_start;
    bool m_dt_ezmaxinvoicingcontract_start_isSet;
    bool m_dt_ezmaxinvoicingcontract_start_isValid;

    QString dt_ezmaxinvoicingcontract_end;
    bool m_dt_ezmaxinvoicingcontract_end_isSet;
    bool m_dt_ezmaxinvoicingcontract_end_isValid;

    QString d_ezmaxinvoicingcontract_license;
    bool m_d_ezmaxinvoicingcontract_license_isSet;
    bool m_d_ezmaxinvoicingcontract_license_isValid;

    QString d_ezmaxinvoicingcontract121qa;
    bool m_d_ezmaxinvoicingcontract121qa_isSet;
    bool m_d_ezmaxinvoicingcontract121qa_isValid;

    bool b_ezmaxinvoicingcontract_ezsignallagents;
    bool m_b_ezmaxinvoicingcontract_ezsignallagents_isSet;
    bool m_b_ezmaxinvoicingcontract_ezsignallagents_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingcontract_ResponseCompound)

#endif // OAIEzmaxinvoicingcontract_ResponseCompound_H
