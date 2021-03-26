/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIFranchisereferalincome_Request.h
 *
 * An Franchisereferalincome Object
 */

#ifndef OAIFranchisereferalincome_Request_H
#define OAIFranchisereferalincome_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIFranchisereferalincome_Request : public OAIObject {
public:
    OAIFranchisereferalincome_Request();
    OAIFranchisereferalincome_Request(QString json);
    ~OAIFranchisereferalincome_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiFranchisebrokerId() const;
    void setFkiFranchisebrokerId(const qint32 &fki_franchisebroker_id);
    bool is_fki_franchisebroker_id_Set() const;
    bool is_fki_franchisebroker_id_Valid() const;

    qint32 getFkiFranchisereferalincomeprogramId() const;
    void setFkiFranchisereferalincomeprogramId(const qint32 &fki_franchisereferalincomeprogram_id);
    bool is_fki_franchisereferalincomeprogram_id_Set() const;
    bool is_fki_franchisereferalincomeprogram_id_Valid() const;

    qint32 getFkiPeriodId() const;
    void setFkiPeriodId(const qint32 &fki_period_id);
    bool is_fki_period_id_Set() const;
    bool is_fki_period_id_Valid() const;

    QString getDFranchisereferalincomeLoan() const;
    void setDFranchisereferalincomeLoan(const QString &d_franchisereferalincome_loan);
    bool is_d_franchisereferalincome_loan_Set() const;
    bool is_d_franchisereferalincome_loan_Valid() const;

    QString getDFranchisereferalincomeFranchiseamount() const;
    void setDFranchisereferalincomeFranchiseamount(const QString &d_franchisereferalincome_franchiseamount);
    bool is_d_franchisereferalincome_franchiseamount_Set() const;
    bool is_d_franchisereferalincome_franchiseamount_Valid() const;

    QString getDFranchisereferalincomeFranchisoramount() const;
    void setDFranchisereferalincomeFranchisoramount(const QString &d_franchisereferalincome_franchisoramount);
    bool is_d_franchisereferalincome_franchisoramount_Set() const;
    bool is_d_franchisereferalincome_franchisoramount_Valid() const;

    QString getDFranchisereferalincomeAgentamount() const;
    void setDFranchisereferalincomeAgentamount(const QString &d_franchisereferalincome_agentamount);
    bool is_d_franchisereferalincome_agentamount_Set() const;
    bool is_d_franchisereferalincome_agentamount_Valid() const;

    QString getDtFranchisereferalincomeDisbursed() const;
    void setDtFranchisereferalincomeDisbursed(const QString &dt_franchisereferalincome_disbursed);
    bool is_dt_franchisereferalincome_disbursed_Set() const;
    bool is_dt_franchisereferalincome_disbursed_Valid() const;

    QString getTFranchisereferalincomeComment() const;
    void setTFranchisereferalincomeComment(const QString &t_franchisereferalincome_comment);
    bool is_t_franchisereferalincome_comment_Set() const;
    bool is_t_franchisereferalincome_comment_Valid() const;

    qint32 getFkiFranchiseofficeId() const;
    void setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id);
    bool is_fki_franchiseoffice_id_Set() const;
    bool is_fki_franchiseoffice_id_Valid() const;

    QString getSFranchisereferalincomeRemoteid() const;
    void setSFranchisereferalincomeRemoteid(const QString &s_franchisereferalincome_remoteid);
    bool is_s_franchisereferalincome_remoteid_Set() const;
    bool is_s_franchisereferalincome_remoteid_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_franchisebroker_id;
    bool m_fki_franchisebroker_id_isSet;
    bool m_fki_franchisebroker_id_isValid;

    qint32 fki_franchisereferalincomeprogram_id;
    bool m_fki_franchisereferalincomeprogram_id_isSet;
    bool m_fki_franchisereferalincomeprogram_id_isValid;

    qint32 fki_period_id;
    bool m_fki_period_id_isSet;
    bool m_fki_period_id_isValid;

    QString d_franchisereferalincome_loan;
    bool m_d_franchisereferalincome_loan_isSet;
    bool m_d_franchisereferalincome_loan_isValid;

    QString d_franchisereferalincome_franchiseamount;
    bool m_d_franchisereferalincome_franchiseamount_isSet;
    bool m_d_franchisereferalincome_franchiseamount_isValid;

    QString d_franchisereferalincome_franchisoramount;
    bool m_d_franchisereferalincome_franchisoramount_isSet;
    bool m_d_franchisereferalincome_franchisoramount_isValid;

    QString d_franchisereferalincome_agentamount;
    bool m_d_franchisereferalincome_agentamount_isSet;
    bool m_d_franchisereferalincome_agentamount_isValid;

    QString dt_franchisereferalincome_disbursed;
    bool m_dt_franchisereferalincome_disbursed_isSet;
    bool m_dt_franchisereferalincome_disbursed_isValid;

    QString t_franchisereferalincome_comment;
    bool m_t_franchisereferalincome_comment_isSet;
    bool m_t_franchisereferalincome_comment_isValid;

    qint32 fki_franchiseoffice_id;
    bool m_fki_franchiseoffice_id_isSet;
    bool m_fki_franchiseoffice_id_isValid;

    QString s_franchisereferalincome_remoteid;
    bool m_s_franchisereferalincome_remoteid_isSet;
    bool m_s_franchisereferalincome_remoteid_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIFranchisereferalincome_Request)

#endif // OAIFranchisereferalincome_Request_H
