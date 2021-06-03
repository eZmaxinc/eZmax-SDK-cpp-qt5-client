/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFranchisereferalincome_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFranchisereferalincome_Request::OAIFranchisereferalincome_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFranchisereferalincome_Request::OAIFranchisereferalincome_Request() {
    this->initializeModel();
}

OAIFranchisereferalincome_Request::~OAIFranchisereferalincome_Request() {}

void OAIFranchisereferalincome_Request::initializeModel() {

    m_fki_franchisebroker_id_isSet = false;
    m_fki_franchisebroker_id_isValid = false;

    m_fki_franchisereferalincomeprogram_id_isSet = false;
    m_fki_franchisereferalincomeprogram_id_isValid = false;

    m_fki_period_id_isSet = false;
    m_fki_period_id_isValid = false;

    m_d_franchisereferalincome_loan_isSet = false;
    m_d_franchisereferalincome_loan_isValid = false;

    m_d_franchisereferalincome_franchiseamount_isSet = false;
    m_d_franchisereferalincome_franchiseamount_isValid = false;

    m_d_franchisereferalincome_franchisoramount_isSet = false;
    m_d_franchisereferalincome_franchisoramount_isValid = false;

    m_d_franchisereferalincome_agentamount_isSet = false;
    m_d_franchisereferalincome_agentamount_isValid = false;

    m_dt_franchisereferalincome_disbursed_isSet = false;
    m_dt_franchisereferalincome_disbursed_isValid = false;

    m_t_franchisereferalincome_comment_isSet = false;
    m_t_franchisereferalincome_comment_isValid = false;

    m_fki_franchiseoffice_id_isSet = false;
    m_fki_franchiseoffice_id_isValid = false;

    m_s_franchisereferalincome_remoteid_isSet = false;
    m_s_franchisereferalincome_remoteid_isValid = false;
}

void OAIFranchisereferalincome_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFranchisereferalincome_Request::fromJsonObject(QJsonObject json) {

    m_fki_franchisebroker_id_isValid = ::OpenAPI::fromJsonValue(fki_franchisebroker_id, json[QString("fkiFranchisebrokerID")]);
    m_fki_franchisebroker_id_isSet = !json[QString("fkiFranchisebrokerID")].isNull() && m_fki_franchisebroker_id_isValid;

    m_fki_franchisereferalincomeprogram_id_isValid = ::OpenAPI::fromJsonValue(fki_franchisereferalincomeprogram_id, json[QString("fkiFranchisereferalincomeprogramID")]);
    m_fki_franchisereferalincomeprogram_id_isSet = !json[QString("fkiFranchisereferalincomeprogramID")].isNull() && m_fki_franchisereferalincomeprogram_id_isValid;

    m_fki_period_id_isValid = ::OpenAPI::fromJsonValue(fki_period_id, json[QString("fkiPeriodID")]);
    m_fki_period_id_isSet = !json[QString("fkiPeriodID")].isNull() && m_fki_period_id_isValid;

    m_d_franchisereferalincome_loan_isValid = ::OpenAPI::fromJsonValue(d_franchisereferalincome_loan, json[QString("dFranchisereferalincomeLoan")]);
    m_d_franchisereferalincome_loan_isSet = !json[QString("dFranchisereferalincomeLoan")].isNull() && m_d_franchisereferalincome_loan_isValid;

    m_d_franchisereferalincome_franchiseamount_isValid = ::OpenAPI::fromJsonValue(d_franchisereferalincome_franchiseamount, json[QString("dFranchisereferalincomeFranchiseamount")]);
    m_d_franchisereferalincome_franchiseamount_isSet = !json[QString("dFranchisereferalincomeFranchiseamount")].isNull() && m_d_franchisereferalincome_franchiseamount_isValid;

    m_d_franchisereferalincome_franchisoramount_isValid = ::OpenAPI::fromJsonValue(d_franchisereferalincome_franchisoramount, json[QString("dFranchisereferalincomeFranchisoramount")]);
    m_d_franchisereferalincome_franchisoramount_isSet = !json[QString("dFranchisereferalincomeFranchisoramount")].isNull() && m_d_franchisereferalincome_franchisoramount_isValid;

    m_d_franchisereferalincome_agentamount_isValid = ::OpenAPI::fromJsonValue(d_franchisereferalincome_agentamount, json[QString("dFranchisereferalincomeAgentamount")]);
    m_d_franchisereferalincome_agentamount_isSet = !json[QString("dFranchisereferalincomeAgentamount")].isNull() && m_d_franchisereferalincome_agentamount_isValid;

    m_dt_franchisereferalincome_disbursed_isValid = ::OpenAPI::fromJsonValue(dt_franchisereferalincome_disbursed, json[QString("dtFranchisereferalincomeDisbursed")]);
    m_dt_franchisereferalincome_disbursed_isSet = !json[QString("dtFranchisereferalincomeDisbursed")].isNull() && m_dt_franchisereferalincome_disbursed_isValid;

    m_t_franchisereferalincome_comment_isValid = ::OpenAPI::fromJsonValue(t_franchisereferalincome_comment, json[QString("tFranchisereferalincomeComment")]);
    m_t_franchisereferalincome_comment_isSet = !json[QString("tFranchisereferalincomeComment")].isNull() && m_t_franchisereferalincome_comment_isValid;

    m_fki_franchiseoffice_id_isValid = ::OpenAPI::fromJsonValue(fki_franchiseoffice_id, json[QString("fkiFranchiseofficeID")]);
    m_fki_franchiseoffice_id_isSet = !json[QString("fkiFranchiseofficeID")].isNull() && m_fki_franchiseoffice_id_isValid;

    m_s_franchisereferalincome_remoteid_isValid = ::OpenAPI::fromJsonValue(s_franchisereferalincome_remoteid, json[QString("sFranchisereferalincomeRemoteid")]);
    m_s_franchisereferalincome_remoteid_isSet = !json[QString("sFranchisereferalincomeRemoteid")].isNull() && m_s_franchisereferalincome_remoteid_isValid;
}

QString OAIFranchisereferalincome_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFranchisereferalincome_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_franchisebroker_id_isSet) {
        obj.insert(QString("fkiFranchisebrokerID"), ::OpenAPI::toJsonValue(fki_franchisebroker_id));
    }
    if (m_fki_franchisereferalincomeprogram_id_isSet) {
        obj.insert(QString("fkiFranchisereferalincomeprogramID"), ::OpenAPI::toJsonValue(fki_franchisereferalincomeprogram_id));
    }
    if (m_fki_period_id_isSet) {
        obj.insert(QString("fkiPeriodID"), ::OpenAPI::toJsonValue(fki_period_id));
    }
    if (m_d_franchisereferalincome_loan_isSet) {
        obj.insert(QString("dFranchisereferalincomeLoan"), ::OpenAPI::toJsonValue(d_franchisereferalincome_loan));
    }
    if (m_d_franchisereferalincome_franchiseamount_isSet) {
        obj.insert(QString("dFranchisereferalincomeFranchiseamount"), ::OpenAPI::toJsonValue(d_franchisereferalincome_franchiseamount));
    }
    if (m_d_franchisereferalincome_franchisoramount_isSet) {
        obj.insert(QString("dFranchisereferalincomeFranchisoramount"), ::OpenAPI::toJsonValue(d_franchisereferalincome_franchisoramount));
    }
    if (m_d_franchisereferalincome_agentamount_isSet) {
        obj.insert(QString("dFranchisereferalincomeAgentamount"), ::OpenAPI::toJsonValue(d_franchisereferalincome_agentamount));
    }
    if (m_dt_franchisereferalincome_disbursed_isSet) {
        obj.insert(QString("dtFranchisereferalincomeDisbursed"), ::OpenAPI::toJsonValue(dt_franchisereferalincome_disbursed));
    }
    if (m_t_franchisereferalincome_comment_isSet) {
        obj.insert(QString("tFranchisereferalincomeComment"), ::OpenAPI::toJsonValue(t_franchisereferalincome_comment));
    }
    if (m_fki_franchiseoffice_id_isSet) {
        obj.insert(QString("fkiFranchiseofficeID"), ::OpenAPI::toJsonValue(fki_franchiseoffice_id));
    }
    if (m_s_franchisereferalincome_remoteid_isSet) {
        obj.insert(QString("sFranchisereferalincomeRemoteid"), ::OpenAPI::toJsonValue(s_franchisereferalincome_remoteid));
    }
    return obj;
}

qint32 OAIFranchisereferalincome_Request::getFkiFranchisebrokerId() const {
    return fki_franchisebroker_id;
}
void OAIFranchisereferalincome_Request::setFkiFranchisebrokerId(const qint32 &fki_franchisebroker_id) {
    this->fki_franchisebroker_id = fki_franchisebroker_id;
    this->m_fki_franchisebroker_id_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_fki_franchisebroker_id_Set() const{
    return m_fki_franchisebroker_id_isSet;
}

bool OAIFranchisereferalincome_Request::is_fki_franchisebroker_id_Valid() const{
    return m_fki_franchisebroker_id_isValid;
}

qint32 OAIFranchisereferalincome_Request::getFkiFranchisereferalincomeprogramId() const {
    return fki_franchisereferalincomeprogram_id;
}
void OAIFranchisereferalincome_Request::setFkiFranchisereferalincomeprogramId(const qint32 &fki_franchisereferalincomeprogram_id) {
    this->fki_franchisereferalincomeprogram_id = fki_franchisereferalincomeprogram_id;
    this->m_fki_franchisereferalincomeprogram_id_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_fki_franchisereferalincomeprogram_id_Set() const{
    return m_fki_franchisereferalincomeprogram_id_isSet;
}

bool OAIFranchisereferalincome_Request::is_fki_franchisereferalincomeprogram_id_Valid() const{
    return m_fki_franchisereferalincomeprogram_id_isValid;
}

qint32 OAIFranchisereferalincome_Request::getFkiPeriodId() const {
    return fki_period_id;
}
void OAIFranchisereferalincome_Request::setFkiPeriodId(const qint32 &fki_period_id) {
    this->fki_period_id = fki_period_id;
    this->m_fki_period_id_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_fki_period_id_Set() const{
    return m_fki_period_id_isSet;
}

bool OAIFranchisereferalincome_Request::is_fki_period_id_Valid() const{
    return m_fki_period_id_isValid;
}

QString OAIFranchisereferalincome_Request::getDFranchisereferalincomeLoan() const {
    return d_franchisereferalincome_loan;
}
void OAIFranchisereferalincome_Request::setDFranchisereferalincomeLoan(const QString &d_franchisereferalincome_loan) {
    this->d_franchisereferalincome_loan = d_franchisereferalincome_loan;
    this->m_d_franchisereferalincome_loan_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_loan_Set() const{
    return m_d_franchisereferalincome_loan_isSet;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_loan_Valid() const{
    return m_d_franchisereferalincome_loan_isValid;
}

QString OAIFranchisereferalincome_Request::getDFranchisereferalincomeFranchiseamount() const {
    return d_franchisereferalincome_franchiseamount;
}
void OAIFranchisereferalincome_Request::setDFranchisereferalincomeFranchiseamount(const QString &d_franchisereferalincome_franchiseamount) {
    this->d_franchisereferalincome_franchiseamount = d_franchisereferalincome_franchiseamount;
    this->m_d_franchisereferalincome_franchiseamount_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_franchiseamount_Set() const{
    return m_d_franchisereferalincome_franchiseamount_isSet;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_franchiseamount_Valid() const{
    return m_d_franchisereferalincome_franchiseamount_isValid;
}

QString OAIFranchisereferalincome_Request::getDFranchisereferalincomeFranchisoramount() const {
    return d_franchisereferalincome_franchisoramount;
}
void OAIFranchisereferalincome_Request::setDFranchisereferalincomeFranchisoramount(const QString &d_franchisereferalincome_franchisoramount) {
    this->d_franchisereferalincome_franchisoramount = d_franchisereferalincome_franchisoramount;
    this->m_d_franchisereferalincome_franchisoramount_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_franchisoramount_Set() const{
    return m_d_franchisereferalincome_franchisoramount_isSet;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_franchisoramount_Valid() const{
    return m_d_franchisereferalincome_franchisoramount_isValid;
}

QString OAIFranchisereferalincome_Request::getDFranchisereferalincomeAgentamount() const {
    return d_franchisereferalincome_agentamount;
}
void OAIFranchisereferalincome_Request::setDFranchisereferalincomeAgentamount(const QString &d_franchisereferalincome_agentamount) {
    this->d_franchisereferalincome_agentamount = d_franchisereferalincome_agentamount;
    this->m_d_franchisereferalincome_agentamount_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_agentamount_Set() const{
    return m_d_franchisereferalincome_agentamount_isSet;
}

bool OAIFranchisereferalincome_Request::is_d_franchisereferalincome_agentamount_Valid() const{
    return m_d_franchisereferalincome_agentamount_isValid;
}

QString OAIFranchisereferalincome_Request::getDtFranchisereferalincomeDisbursed() const {
    return dt_franchisereferalincome_disbursed;
}
void OAIFranchisereferalincome_Request::setDtFranchisereferalincomeDisbursed(const QString &dt_franchisereferalincome_disbursed) {
    this->dt_franchisereferalincome_disbursed = dt_franchisereferalincome_disbursed;
    this->m_dt_franchisereferalincome_disbursed_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_dt_franchisereferalincome_disbursed_Set() const{
    return m_dt_franchisereferalincome_disbursed_isSet;
}

bool OAIFranchisereferalincome_Request::is_dt_franchisereferalincome_disbursed_Valid() const{
    return m_dt_franchisereferalincome_disbursed_isValid;
}

QString OAIFranchisereferalincome_Request::getTFranchisereferalincomeComment() const {
    return t_franchisereferalincome_comment;
}
void OAIFranchisereferalincome_Request::setTFranchisereferalincomeComment(const QString &t_franchisereferalincome_comment) {
    this->t_franchisereferalincome_comment = t_franchisereferalincome_comment;
    this->m_t_franchisereferalincome_comment_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_t_franchisereferalincome_comment_Set() const{
    return m_t_franchisereferalincome_comment_isSet;
}

bool OAIFranchisereferalincome_Request::is_t_franchisereferalincome_comment_Valid() const{
    return m_t_franchisereferalincome_comment_isValid;
}

qint32 OAIFranchisereferalincome_Request::getFkiFranchiseofficeId() const {
    return fki_franchiseoffice_id;
}
void OAIFranchisereferalincome_Request::setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id) {
    this->fki_franchiseoffice_id = fki_franchiseoffice_id;
    this->m_fki_franchiseoffice_id_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_fki_franchiseoffice_id_Set() const{
    return m_fki_franchiseoffice_id_isSet;
}

bool OAIFranchisereferalincome_Request::is_fki_franchiseoffice_id_Valid() const{
    return m_fki_franchiseoffice_id_isValid;
}

QString OAIFranchisereferalincome_Request::getSFranchisereferalincomeRemoteid() const {
    return s_franchisereferalincome_remoteid;
}
void OAIFranchisereferalincome_Request::setSFranchisereferalincomeRemoteid(const QString &s_franchisereferalincome_remoteid) {
    this->s_franchisereferalincome_remoteid = s_franchisereferalincome_remoteid;
    this->m_s_franchisereferalincome_remoteid_isSet = true;
}

bool OAIFranchisereferalincome_Request::is_s_franchisereferalincome_remoteid_Set() const{
    return m_s_franchisereferalincome_remoteid_isSet;
}

bool OAIFranchisereferalincome_Request::is_s_franchisereferalincome_remoteid_Valid() const{
    return m_s_franchisereferalincome_remoteid_isValid;
}

bool OAIFranchisereferalincome_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_franchisebroker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchisereferalincomeprogram_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_period_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_loan_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_franchiseamount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_franchisoramount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_franchisereferalincome_agentamount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_franchisereferalincome_disbursed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_franchisereferalincome_comment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchiseoffice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_franchisereferalincome_remoteid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFranchisereferalincome_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_franchisebroker_id_isValid && m_fki_franchisereferalincomeprogram_id_isValid && m_fki_period_id_isValid && m_d_franchisereferalincome_loan_isValid && m_d_franchisereferalincome_franchiseamount_isValid && m_d_franchisereferalincome_franchisoramount_isValid && m_d_franchisereferalincome_agentamount_isValid && m_dt_franchisereferalincome_disbursed_isValid && m_t_franchisereferalincome_comment_isValid && m_fki_franchiseoffice_id_isValid && m_s_franchisereferalincome_remoteid_isValid && true;
}

} // namespace OpenAPI
