/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzmaxinvoicingcommission_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingcommission_ResponseCompound::OAIEzmaxinvoicingcommission_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingcommission_ResponseCompound::OAIEzmaxinvoicingcommission_ResponseCompound() {
    this->initializeModel();
}

OAIEzmaxinvoicingcommission_ResponseCompound::~OAIEzmaxinvoicingcommission_ResponseCompound() {}

void OAIEzmaxinvoicingcommission_ResponseCompound::initializeModel() {

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

    m_obj_contact_name_isSet = false;
    m_obj_contact_name_isValid = false;
}

void OAIEzmaxinvoicingcommission_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingcommission_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingcommission_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezmaxinvoicingcommission_id, json[QString("pkiEzmaxinvoicingcommissionID")]);
    m_pki_ezmaxinvoicingcommission_id_isSet = !json[QString("pkiEzmaxinvoicingcommissionID")].isNull() && m_pki_ezmaxinvoicingcommission_id_isValid;

    m_fki_ezmaxinvoicingsummaryglobal_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezmaxinvoicingsummaryglobal_id, json[QString("fkiEzmaxinvoicingsummaryglobalID")]);
    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = !json[QString("fkiEzmaxinvoicingsummaryglobalID")].isNull() && m_fki_ezmaxinvoicingsummaryglobal_id_isValid;

    m_fki_ezmaxpartner_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezmaxpartner_id, json[QString("fkiEzmaxpartnerID")]);
    m_fki_ezmaxpartner_id_isSet = !json[QString("fkiEzmaxpartnerID")].isNull() && m_fki_ezmaxpartner_id_isValid;

    m_fki_ezmaxrepresentative_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezmaxrepresentative_id, json[QString("fkiEzmaxrepresentativeID")]);
    m_fki_ezmaxrepresentative_id_isSet = !json[QString("fkiEzmaxrepresentativeID")].isNull() && m_fki_ezmaxrepresentative_id_isValid;

    m_dt_ezmaxinvoicingcommission_start_isValid = ::OpenAPI::fromJsonValue(m_dt_ezmaxinvoicingcommission_start, json[QString("dtEzmaxinvoicingcommissionStart")]);
    m_dt_ezmaxinvoicingcommission_start_isSet = !json[QString("dtEzmaxinvoicingcommissionStart")].isNull() && m_dt_ezmaxinvoicingcommission_start_isValid;

    m_dt_ezmaxinvoicingcommission_end_isValid = ::OpenAPI::fromJsonValue(m_dt_ezmaxinvoicingcommission_end, json[QString("dtEzmaxinvoicingcommissionEnd")]);
    m_dt_ezmaxinvoicingcommission_end_isSet = !json[QString("dtEzmaxinvoicingcommissionEnd")].isNull() && m_dt_ezmaxinvoicingcommission_end_isValid;

    m_i_ezmaxinvoicingcommission_days_isValid = ::OpenAPI::fromJsonValue(m_i_ezmaxinvoicingcommission_days, json[QString("iEzmaxinvoicingcommissionDays")]);
    m_i_ezmaxinvoicingcommission_days_isSet = !json[QString("iEzmaxinvoicingcommissionDays")].isNull() && m_i_ezmaxinvoicingcommission_days_isValid;

    m_d_ezmaxinvoicingcommission_amount_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingcommission_amount, json[QString("dEzmaxinvoicingcommissionAmount")]);
    m_d_ezmaxinvoicingcommission_amount_isSet = !json[QString("dEzmaxinvoicingcommissionAmount")].isNull() && m_d_ezmaxinvoicingcommission_amount_isValid;

    m_obj_contact_name_isValid = ::OpenAPI::fromJsonValue(m_obj_contact_name, json[QString("objContactName")]);
    m_obj_contact_name_isSet = !json[QString("objContactName")].isNull() && m_obj_contact_name_isValid;
}

QString OAIEzmaxinvoicingcommission_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingcommission_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingcommission_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingcommissionID"), ::OpenAPI::toJsonValue(m_pki_ezmaxinvoicingcommission_id));
    }
    if (m_fki_ezmaxinvoicingsummaryglobal_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingsummaryglobalID"), ::OpenAPI::toJsonValue(m_fki_ezmaxinvoicingsummaryglobal_id));
    }
    if (m_fki_ezmaxpartner_id_isSet) {
        obj.insert(QString("fkiEzmaxpartnerID"), ::OpenAPI::toJsonValue(m_fki_ezmaxpartner_id));
    }
    if (m_fki_ezmaxrepresentative_id_isSet) {
        obj.insert(QString("fkiEzmaxrepresentativeID"), ::OpenAPI::toJsonValue(m_fki_ezmaxrepresentative_id));
    }
    if (m_dt_ezmaxinvoicingcommission_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcommissionStart"), ::OpenAPI::toJsonValue(m_dt_ezmaxinvoicingcommission_start));
    }
    if (m_dt_ezmaxinvoicingcommission_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingcommissionEnd"), ::OpenAPI::toJsonValue(m_dt_ezmaxinvoicingcommission_end));
    }
    if (m_i_ezmaxinvoicingcommission_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingcommissionDays"), ::OpenAPI::toJsonValue(m_i_ezmaxinvoicingcommission_days));
    }
    if (m_d_ezmaxinvoicingcommission_amount_isSet) {
        obj.insert(QString("dEzmaxinvoicingcommissionAmount"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingcommission_amount));
    }
    if (m_obj_contact_name.isSet()) {
        obj.insert(QString("objContactName"), ::OpenAPI::toJsonValue(m_obj_contact_name));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingcommission_ResponseCompound::getPkiEzmaxinvoicingcommissionId() const {
    return m_pki_ezmaxinvoicingcommission_id;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setPkiEzmaxinvoicingcommissionId(const qint32 &pki_ezmaxinvoicingcommission_id) {
    m_pki_ezmaxinvoicingcommission_id = pki_ezmaxinvoicingcommission_id;
    m_pki_ezmaxinvoicingcommission_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_pki_ezmaxinvoicingcommission_id_Set() const{
    return m_pki_ezmaxinvoicingcommission_id_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_pki_ezmaxinvoicingcommission_id_Valid() const{
    return m_pki_ezmaxinvoicingcommission_id_isValid;
}

qint32 OAIEzmaxinvoicingcommission_ResponseCompound::getFkiEzmaxinvoicingsummaryglobalId() const {
    return m_fki_ezmaxinvoicingsummaryglobal_id;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setFkiEzmaxinvoicingsummaryglobalId(const qint32 &fki_ezmaxinvoicingsummaryglobal_id) {
    m_fki_ezmaxinvoicingsummaryglobal_id = fki_ezmaxinvoicingsummaryglobal_id;
    m_fki_ezmaxinvoicingsummaryglobal_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_fki_ezmaxinvoicingsummaryglobal_id_Set() const{
    return m_fki_ezmaxinvoicingsummaryglobal_id_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_fki_ezmaxinvoicingsummaryglobal_id_Valid() const{
    return m_fki_ezmaxinvoicingsummaryglobal_id_isValid;
}

qint32 OAIEzmaxinvoicingcommission_ResponseCompound::getFkiEzmaxpartnerId() const {
    return m_fki_ezmaxpartner_id;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setFkiEzmaxpartnerId(const qint32 &fki_ezmaxpartner_id) {
    m_fki_ezmaxpartner_id = fki_ezmaxpartner_id;
    m_fki_ezmaxpartner_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_fki_ezmaxpartner_id_Set() const{
    return m_fki_ezmaxpartner_id_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_fki_ezmaxpartner_id_Valid() const{
    return m_fki_ezmaxpartner_id_isValid;
}

qint32 OAIEzmaxinvoicingcommission_ResponseCompound::getFkiEzmaxrepresentativeId() const {
    return m_fki_ezmaxrepresentative_id;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setFkiEzmaxrepresentativeId(const qint32 &fki_ezmaxrepresentative_id) {
    m_fki_ezmaxrepresentative_id = fki_ezmaxrepresentative_id;
    m_fki_ezmaxrepresentative_id_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_fki_ezmaxrepresentative_id_Set() const{
    return m_fki_ezmaxrepresentative_id_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_fki_ezmaxrepresentative_id_Valid() const{
    return m_fki_ezmaxrepresentative_id_isValid;
}

QString OAIEzmaxinvoicingcommission_ResponseCompound::getDtEzmaxinvoicingcommissionStart() const {
    return m_dt_ezmaxinvoicingcommission_start;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setDtEzmaxinvoicingcommissionStart(const QString &dt_ezmaxinvoicingcommission_start) {
    m_dt_ezmaxinvoicingcommission_start = dt_ezmaxinvoicingcommission_start;
    m_dt_ezmaxinvoicingcommission_start_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_dt_ezmaxinvoicingcommission_start_Set() const{
    return m_dt_ezmaxinvoicingcommission_start_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_dt_ezmaxinvoicingcommission_start_Valid() const{
    return m_dt_ezmaxinvoicingcommission_start_isValid;
}

QString OAIEzmaxinvoicingcommission_ResponseCompound::getDtEzmaxinvoicingcommissionEnd() const {
    return m_dt_ezmaxinvoicingcommission_end;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setDtEzmaxinvoicingcommissionEnd(const QString &dt_ezmaxinvoicingcommission_end) {
    m_dt_ezmaxinvoicingcommission_end = dt_ezmaxinvoicingcommission_end;
    m_dt_ezmaxinvoicingcommission_end_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_dt_ezmaxinvoicingcommission_end_Set() const{
    return m_dt_ezmaxinvoicingcommission_end_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_dt_ezmaxinvoicingcommission_end_Valid() const{
    return m_dt_ezmaxinvoicingcommission_end_isValid;
}

qint32 OAIEzmaxinvoicingcommission_ResponseCompound::getIEzmaxinvoicingcommissionDays() const {
    return m_i_ezmaxinvoicingcommission_days;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setIEzmaxinvoicingcommissionDays(const qint32 &i_ezmaxinvoicingcommission_days) {
    m_i_ezmaxinvoicingcommission_days = i_ezmaxinvoicingcommission_days;
    m_i_ezmaxinvoicingcommission_days_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_i_ezmaxinvoicingcommission_days_Set() const{
    return m_i_ezmaxinvoicingcommission_days_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_i_ezmaxinvoicingcommission_days_Valid() const{
    return m_i_ezmaxinvoicingcommission_days_isValid;
}

QString OAIEzmaxinvoicingcommission_ResponseCompound::getDEzmaxinvoicingcommissionAmount() const {
    return m_d_ezmaxinvoicingcommission_amount;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setDEzmaxinvoicingcommissionAmount(const QString &d_ezmaxinvoicingcommission_amount) {
    m_d_ezmaxinvoicingcommission_amount = d_ezmaxinvoicingcommission_amount;
    m_d_ezmaxinvoicingcommission_amount_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_d_ezmaxinvoicingcommission_amount_Set() const{
    return m_d_ezmaxinvoicingcommission_amount_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_d_ezmaxinvoicingcommission_amount_Valid() const{
    return m_d_ezmaxinvoicingcommission_amount_isValid;
}

OAICustom_ContactName_Response OAIEzmaxinvoicingcommission_ResponseCompound::getObjContactName() const {
    return m_obj_contact_name;
}
void OAIEzmaxinvoicingcommission_ResponseCompound::setObjContactName(const OAICustom_ContactName_Response &obj_contact_name) {
    m_obj_contact_name = obj_contact_name;
    m_obj_contact_name_isSet = true;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_obj_contact_name_Set() const{
    return m_obj_contact_name_isSet;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::is_obj_contact_name_Valid() const{
    return m_obj_contact_name_isValid;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::isSet() const {
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

        if (m_obj_contact_name.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingcommission_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_ezmaxinvoicingcommission_start_isValid && m_dt_ezmaxinvoicingcommission_end_isValid && m_i_ezmaxinvoicingcommission_days_isValid && m_d_ezmaxinvoicingcommission_amount_isValid && m_obj_contact_name_isValid && true;
}

} // namespace OpenAPI
