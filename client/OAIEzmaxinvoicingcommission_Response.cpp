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

#include "OAIEzmaxinvoicingcommission_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingcommission_Response::OAIEzmaxinvoicingcommission_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingcommission_Response::OAIEzmaxinvoicingcommission_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingcommission_Response::~OAIEzmaxinvoicingcommission_Response() {}

void OAIEzmaxinvoicingcommission_Response::initializeModel() {

    m_pki_ezmaxinvoicingcommission_id_isSet = false;
    m_pki_ezmaxinvoicingcommission_id_isValid = false;

    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = false;
    m_fki_ezmaxinvoicingsummaryglobal_id_isValid = false;

    m_fki_ezmaxpartner_id_isSet = false;
    m_fki_ezmaxpartner_id_isValid = false;

    m_fki_ezmaxrepresentative_id_isSet = false;
    m_fki_ezmaxrepresentative_id_isValid = false;

    m_dt_ezmaxinvoicingcommission_start_isSet = false;
    m_dt_ezmaxinvoicingcommission_start_isValid = false;

    m_dt_ezmaxinvoicingcommission_end_isSet = false;
    m_dt_ezmaxinvoicingcommission_end_isValid = false;

    m_i_ezmaxinvoicingcommission_days_isSet = false;
    m_i_ezmaxinvoicingcommission_days_isValid = false;

    m_d_ezmaxinvoicingcommission_amount_isSet = false;
    m_d_ezmaxinvoicingcommission_amount_isValid = false;
}

void OAIEzmaxinvoicingcommission_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingcommission_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingcommission_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicingcommission_id, json[QString("pkiEzmaxinvoicingcommissionID")]);
    m_pki_ezmaxinvoicingcommission_id_isSet = !json[QString("pkiEzmaxinvoicingcommissionID")].isNull() && m_pki_ezmaxinvoicingcommission_id_isValid;

    m_fki_ezmaxinvoicingsummaryglobal_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicingsummaryglobal_id, json[QString("fkiEzmaxinvoicingsummaryglobalID")]);
    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = !json[QString("fkiEzmaxinvoicingsummaryglobalID")].isNull() && m_fki_ezmaxinvoicingsummaryglobal_id_isValid;

    m_fki_ezmaxpartner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxpartner_id, json[QString("fkiEzmaxpartnerID")]);
    m_fki_ezmaxpartner_id_isSet = !json[QString("fkiEzmaxpartnerID")].isNull() && m_fki_ezmaxpartner_id_isValid;

    m_fki_ezmaxrepresentative_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxrepresentative_id, json[QString("fkiEzmaxrepresentativeID")]);
    m_fki_ezmaxrepresentative_id_isSet = !json[QString("fkiEzmaxrepresentativeID")].isNull() && m_fki_ezmaxrepresentative_id_isValid;

    m_dt_ezmaxinvoicingcommission_start_isValid = ::OpenAPI::fromJsonValue(dt_ezmaxinvoicingcommission_start, json[QString("dtEzmaxinvoicingcommissionStart")]);
    m_dt_ezmaxinvoicingcommission_start_isSet = !json[QString("dtEzmaxinvoicingcommissionStart")].isNull() && m_dt_ezmaxinvoicingcommission_start_isValid;

    m_dt_ezmaxinvoicingcommission_end_isValid = ::OpenAPI::fromJsonValue(dt_ezmaxinvoicingcommission_end, json[QString("dtEzmaxinvoicingcommissionEnd")]);
    m_dt_ezmaxinvoicingcommission_end_isSet = !json[QString("dtEzmaxinvoicingcommissionEnd")].isNull() && m_dt_ezmaxinvoicingcommission_end_isValid;

    m_i_ezmaxinvoicingcommission_days_isValid = ::OpenAPI::fromJsonValue(i_ezmaxinvoicingcommission_days, json[QString("iEzmaxinvoicingcommissionDays")]);
    m_i_ezmaxinvoicingcommission_days_isSet = !json[QString("iEzmaxinvoicingcommissionDays")].isNull() && m_i_ezmaxinvoicingcommission_days_isValid;

    m_d_ezmaxinvoicingcommission_amount_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingcommission_amount, json[QString("dEzmaxinvoicingcommissionAmount")]);
    m_d_ezmaxinvoicingcommission_amount_isSet = !json[QString("dEzmaxinvoicingcommissionAmount")].isNull() && m_d_ezmaxinvoicingcommission_amount_isValid;
}

QString OAIEzmaxinvoicingcommission_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingcommission_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingcommission_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingcommissionID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicingcommission_id));
    }
    if (m_fki_ezmaxinvoicingsummaryglobal_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingsummaryglobalID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicingsummaryglobal_id));
    }
    if (m_fki_ezmaxpartner_id_isSet) {
        obj.insert(QString("fkiEzmaxpartnerID"), ::OpenAPI::toJsonValue(fki_ezmaxpartner_id));
    }
    if (m_fki_ezmaxrepresentative_id_isSet) {
        obj.insert(QString("fkiEzmaxrepresentativeID"), ::OpenAPI::toJsonValue(fki_ezmaxrepresentative_id));
    }
    if (m_dt_ezmaxinvoicingcommission_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcommissionStart"), ::OpenAPI::toJsonValue(dt_ezmaxinvoicingcommission_start));
    }
    if (m_dt_ezmaxinvoicingcommission_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcommissionEnd"), ::OpenAPI::toJsonValue(dt_ezmaxinvoicingcommission_end));
    }
    if (m_i_ezmaxinvoicingcommission_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingcommissionDays"), ::OpenAPI::toJsonValue(i_ezmaxinvoicingcommission_days));
    }
    if (m_d_ezmaxinvoicingcommission_amount_isSet) {
        obj.insert(QString("dEzmaxinvoicingcommissionAmount"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingcommission_amount));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingcommission_Response::getPkiEzmaxinvoicingcommissionId() const {
    return pki_ezmaxinvoicingcommission_id;
}
void OAIEzmaxinvoicingcommission_Response::setPkiEzmaxinvoicingcommissionId(const qint32 &pki_ezmaxinvoicingcommission_id) {
    this->pki_ezmaxinvoicingcommission_id = pki_ezmaxinvoicingcommission_id;
    this->m_pki_ezmaxinvoicingcommission_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_pki_ezmaxinvoicingcommission_id_Set() const{
    return m_pki_ezmaxinvoicingcommission_id_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_pki_ezmaxinvoicingcommission_id_Valid() const{
    return m_pki_ezmaxinvoicingcommission_id_isValid;
}

qint32 OAIEzmaxinvoicingcommission_Response::getFkiEzmaxinvoicingsummaryglobalId() const {
    return fki_ezmaxinvoicingsummaryglobal_id;
}
void OAIEzmaxinvoicingcommission_Response::setFkiEzmaxinvoicingsummaryglobalId(const qint32 &fki_ezmaxinvoicingsummaryglobal_id) {
    this->fki_ezmaxinvoicingsummaryglobal_id = fki_ezmaxinvoicingsummaryglobal_id;
    this->m_fki_ezmaxinvoicingsummaryglobal_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_fki_ezmaxinvoicingsummaryglobal_id_Set() const{
    return m_fki_ezmaxinvoicingsummaryglobal_id_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_fki_ezmaxinvoicingsummaryglobal_id_Valid() const{
    return m_fki_ezmaxinvoicingsummaryglobal_id_isValid;
}

qint32 OAIEzmaxinvoicingcommission_Response::getFkiEzmaxpartnerId() const {
    return fki_ezmaxpartner_id;
}
void OAIEzmaxinvoicingcommission_Response::setFkiEzmaxpartnerId(const qint32 &fki_ezmaxpartner_id) {
    this->fki_ezmaxpartner_id = fki_ezmaxpartner_id;
    this->m_fki_ezmaxpartner_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_fki_ezmaxpartner_id_Set() const{
    return m_fki_ezmaxpartner_id_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_fki_ezmaxpartner_id_Valid() const{
    return m_fki_ezmaxpartner_id_isValid;
}

qint32 OAIEzmaxinvoicingcommission_Response::getFkiEzmaxrepresentativeId() const {
    return fki_ezmaxrepresentative_id;
}
void OAIEzmaxinvoicingcommission_Response::setFkiEzmaxrepresentativeId(const qint32 &fki_ezmaxrepresentative_id) {
    this->fki_ezmaxrepresentative_id = fki_ezmaxrepresentative_id;
    this->m_fki_ezmaxrepresentative_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_fki_ezmaxrepresentative_id_Set() const{
    return m_fki_ezmaxrepresentative_id_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_fki_ezmaxrepresentative_id_Valid() const{
    return m_fki_ezmaxrepresentative_id_isValid;
}

QString OAIEzmaxinvoicingcommission_Response::getDtEzmaxinvoicingcommissionStart() const {
    return dt_ezmaxinvoicingcommission_start;
}
void OAIEzmaxinvoicingcommission_Response::setDtEzmaxinvoicingcommissionStart(const QString &dt_ezmaxinvoicingcommission_start) {
    this->dt_ezmaxinvoicingcommission_start = dt_ezmaxinvoicingcommission_start;
    this->m_dt_ezmaxinvoicingcommission_start_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_start_Set() const{
    return m_dt_ezmaxinvoicingcommission_start_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_start_Valid() const{
    return m_dt_ezmaxinvoicingcommission_start_isValid;
}

QString OAIEzmaxinvoicingcommission_Response::getDtEzmaxinvoicingcommissionEnd() const {
    return dt_ezmaxinvoicingcommission_end;
}
void OAIEzmaxinvoicingcommission_Response::setDtEzmaxinvoicingcommissionEnd(const QString &dt_ezmaxinvoicingcommission_end) {
    this->dt_ezmaxinvoicingcommission_end = dt_ezmaxinvoicingcommission_end;
    this->m_dt_ezmaxinvoicingcommission_end_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_end_Set() const{
    return m_dt_ezmaxinvoicingcommission_end_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_dt_ezmaxinvoicingcommission_end_Valid() const{
    return m_dt_ezmaxinvoicingcommission_end_isValid;
}

qint32 OAIEzmaxinvoicingcommission_Response::getIEzmaxinvoicingcommissionDays() const {
    return i_ezmaxinvoicingcommission_days;
}
void OAIEzmaxinvoicingcommission_Response::setIEzmaxinvoicingcommissionDays(const qint32 &i_ezmaxinvoicingcommission_days) {
    this->i_ezmaxinvoicingcommission_days = i_ezmaxinvoicingcommission_days;
    this->m_i_ezmaxinvoicingcommission_days_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_i_ezmaxinvoicingcommission_days_Set() const{
    return m_i_ezmaxinvoicingcommission_days_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_i_ezmaxinvoicingcommission_days_Valid() const{
    return m_i_ezmaxinvoicingcommission_days_isValid;
}

QString OAIEzmaxinvoicingcommission_Response::getDEzmaxinvoicingcommissionAmount() const {
    return d_ezmaxinvoicingcommission_amount;
}
void OAIEzmaxinvoicingcommission_Response::setDEzmaxinvoicingcommissionAmount(const QString &d_ezmaxinvoicingcommission_amount) {
    this->d_ezmaxinvoicingcommission_amount = d_ezmaxinvoicingcommission_amount;
    this->m_d_ezmaxinvoicingcommission_amount_isSet = true;
}

bool OAIEzmaxinvoicingcommission_Response::is_d_ezmaxinvoicingcommission_amount_Set() const{
    return m_d_ezmaxinvoicingcommission_amount_isSet;
}

bool OAIEzmaxinvoicingcommission_Response::is_d_ezmaxinvoicingcommission_amount_Valid() const{
    return m_d_ezmaxinvoicingcommission_amount_isValid;
}

bool OAIEzmaxinvoicingcommission_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingcommission_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicingsummaryglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxpartner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxrepresentative_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcommission_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingcommission_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingcommission_days_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingcommission_amount_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingcommission_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_ezmaxinvoicingcommission_start_isValid && m_dt_ezmaxinvoicingcommission_end_isValid && m_i_ezmaxinvoicingcommission_days_isValid && m_d_ezmaxinvoicingcommission_amount_isValid && true;
}

} // namespace OpenAPI
