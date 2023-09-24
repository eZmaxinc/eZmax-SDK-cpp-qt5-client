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

#include "OAIEzmaxinvoicingsummaryglobal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryglobal_Response::OAIEzmaxinvoicingsummaryglobal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryglobal_Response::OAIEzmaxinvoicingsummaryglobal_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryglobal_Response::~OAIEzmaxinvoicingsummaryglobal_Response() {}

void OAIEzmaxinvoicingsummaryglobal_Response::initializeModel() {

    m_pki_ezmaxinvoicingsummaryglobal_id_isSet = false;
    m_pki_ezmaxinvoicingsummaryglobal_id_isValid = false;

    m_fki_ezmaxinvoicing_id_isSet = false;
    m_fki_ezmaxinvoicing_id_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_s_ezmaxproduct_description_x_isSet = false;
    m_s_ezmaxproduct_description_x_isValid = false;

    m_dt_ezmaxinvoicingsummaryglobal_start_isSet = false;
    m_dt_ezmaxinvoicingsummaryglobal_start_isValid = false;

    m_dt_ezmaxinvoicingsummaryglobal_end_isSet = false;
    m_dt_ezmaxinvoicingsummaryglobal_end_isValid = false;

    m_i_ezmaxinvoicingsummaryglobal_days_isSet = false;
    m_i_ezmaxinvoicingsummaryglobal_days_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_countreal_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_countreal_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_total_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_total_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_representative_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_representative_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_partner_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_partner_isValid = false;

    m_d_ezmaxinvoicingsummaryglobal_net_isSet = false;
    m_d_ezmaxinvoicingsummaryglobal_net_isValid = false;

    m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet = false;
    m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid = false;

    m_t_ezmaxproduct_help_x_isSet = false;
    m_t_ezmaxproduct_help_x_isValid = false;
}

void OAIEzmaxinvoicingsummaryglobal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryglobal_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryglobal_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezmaxinvoicingsummaryglobal_id, json[QString("pkiEzmaxinvoicingsummaryglobalID")]);
    m_pki_ezmaxinvoicingsummaryglobal_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryglobalID")].isNull() && m_pki_ezmaxinvoicingsummaryglobal_id_isValid;

    m_fki_ezmaxinvoicing_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezmaxinvoicing_id, json[QString("fkiEzmaxinvoicingID")]);
    m_fki_ezmaxinvoicing_id_isSet = !json[QString("fkiEzmaxinvoicingID")].isNull() && m_fki_ezmaxinvoicing_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_s_ezmaxproduct_description_x_isValid = ::OpenAPI::fromJsonValue(m_s_ezmaxproduct_description_x, json[QString("sEzmaxproductDescriptionX")]);
    m_s_ezmaxproduct_description_x_isSet = !json[QString("sEzmaxproductDescriptionX")].isNull() && m_s_ezmaxproduct_description_x_isValid;

    m_dt_ezmaxinvoicingsummaryglobal_start_isValid = ::OpenAPI::fromJsonValue(m_dt_ezmaxinvoicingsummaryglobal_start, json[QString("dtEzmaxinvoicingsummaryglobalStart")]);
    m_dt_ezmaxinvoicingsummaryglobal_start_isSet = !json[QString("dtEzmaxinvoicingsummaryglobalStart")].isNull() && m_dt_ezmaxinvoicingsummaryglobal_start_isValid;

    m_dt_ezmaxinvoicingsummaryglobal_end_isValid = ::OpenAPI::fromJsonValue(m_dt_ezmaxinvoicingsummaryglobal_end, json[QString("dtEzmaxinvoicingsummaryglobalEnd")]);
    m_dt_ezmaxinvoicingsummaryglobal_end_isSet = !json[QString("dtEzmaxinvoicingsummaryglobalEnd")].isNull() && m_dt_ezmaxinvoicingsummaryglobal_end_isValid;

    m_i_ezmaxinvoicingsummaryglobal_days_isValid = ::OpenAPI::fromJsonValue(m_i_ezmaxinvoicingsummaryglobal_days, json[QString("iEzmaxinvoicingsummaryglobalDays")]);
    m_i_ezmaxinvoicingsummaryglobal_days_isSet = !json[QString("iEzmaxinvoicingsummaryglobalDays")].isNull() && m_i_ezmaxinvoicingsummaryglobal_days_isValid;

    m_d_ezmaxinvoicingsummaryglobal_countreal_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_countreal, json[QString("dEzmaxinvoicingsummaryglobalCountreal")]);
    m_d_ezmaxinvoicingsummaryglobal_countreal_isSet = !json[QString("dEzmaxinvoicingsummaryglobalCountreal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_countreal_isValid;

    m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_countbilled, json[QString("dEzmaxinvoicingsummaryglobalCountbilled")]);
    m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet = !json[QString("dEzmaxinvoicingsummaryglobalCountbilled")].isNull() && m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid;

    m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_subtotal, json[QString("dEzmaxinvoicingsummaryglobalSubtotal")]);
    m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet = !json[QString("dEzmaxinvoicingsummaryglobalSubtotal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid;

    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebateamount, json[QString("dEzmaxinvoicingsummaryglobalRebateamount")]);
    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRebateamount")].isNull() && m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid;

    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatepercent, json[QString("dEzmaxinvoicingsummaryglobalRebatepercent")]);
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRebatepercent")].isNull() && m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid;

    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatetotal, json[QString("dEzmaxinvoicingsummaryglobalRebatetotal")]);
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRebatetotal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid;

    m_d_ezmaxinvoicingsummaryglobal_total_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_total, json[QString("dEzmaxinvoicingsummaryglobalTotal")]);
    m_d_ezmaxinvoicingsummaryglobal_total_isSet = !json[QString("dEzmaxinvoicingsummaryglobalTotal")].isNull() && m_d_ezmaxinvoicingsummaryglobal_total_isValid;

    m_d_ezmaxinvoicingsummaryglobal_representative_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_representative, json[QString("dEzmaxinvoicingsummaryglobalRepresentative")]);
    m_d_ezmaxinvoicingsummaryglobal_representative_isSet = !json[QString("dEzmaxinvoicingsummaryglobalRepresentative")].isNull() && m_d_ezmaxinvoicingsummaryglobal_representative_isValid;

    m_d_ezmaxinvoicingsummaryglobal_partner_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_partner, json[QString("dEzmaxinvoicingsummaryglobalPartner")]);
    m_d_ezmaxinvoicingsummaryglobal_partner_isSet = !json[QString("dEzmaxinvoicingsummaryglobalPartner")].isNull() && m_d_ezmaxinvoicingsummaryglobal_partner_isValid;

    m_d_ezmaxinvoicingsummaryglobal_net_isValid = ::OpenAPI::fromJsonValue(m_d_ezmaxinvoicingsummaryglobal_net, json[QString("dEzmaxinvoicingsummaryglobalNet")]);
    m_d_ezmaxinvoicingsummaryglobal_net_isSet = !json[QString("dEzmaxinvoicingsummaryglobalNet")].isNull() && m_d_ezmaxinvoicingsummaryglobal_net_isValid;

    m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid = ::OpenAPI::fromJsonValue(m_b_ezmaxinvoicingsummaryglobal_adjustment, json[QString("bEzmaxinvoicingsummaryglobalAdjustment")]);
    m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet = !json[QString("bEzmaxinvoicingsummaryglobalAdjustment")].isNull() && m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid;

    m_t_ezmaxproduct_help_x_isValid = ::OpenAPI::fromJsonValue(m_t_ezmaxproduct_help_x, json[QString("tEzmaxproductHelpX")]);
    m_t_ezmaxproduct_help_x_isSet = !json[QString("tEzmaxproductHelpX")].isNull() && m_t_ezmaxproduct_help_x_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryglobal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryglobal_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryglobalID"), ::OpenAPI::toJsonValue(m_pki_ezmaxinvoicingsummaryglobal_id));
    }
    if (m_fki_ezmaxinvoicing_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingID"), ::OpenAPI::toJsonValue(m_fki_ezmaxinvoicing_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::OpenAPI::toJsonValue(m_fki_ezmaxproduct_id));
    }
    if (m_s_ezmaxproduct_description_x_isSet) {
        obj.insert(QString("sEzmaxproductDescriptionX"), ::OpenAPI::toJsonValue(m_s_ezmaxproduct_description_x));
    }
    if (m_dt_ezmaxinvoicingsummaryglobal_start_isSet) {
        obj.insert(QString("dtEzmaxinvoicingsummaryglobalStart"), ::OpenAPI::toJsonValue(m_dt_ezmaxinvoicingsummaryglobal_start));
    }
    if (m_dt_ezmaxinvoicingsummaryglobal_end_isSet) {
        obj.insert(QString("dtEzmaxinvoicingsummaryglobalEnd"), ::OpenAPI::toJsonValue(m_dt_ezmaxinvoicingsummaryglobal_end));
    }
    if (m_i_ezmaxinvoicingsummaryglobal_days_isSet) {
        obj.insert(QString("iEzmaxinvoicingsummaryglobalDays"), ::OpenAPI::toJsonValue(m_i_ezmaxinvoicingsummaryglobal_days));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_countreal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalCountreal"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_countreal));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalCountbilled"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_countbilled));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalSubtotal"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_subtotal));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRebateamount"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebateamount));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRebatepercent"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatepercent));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRebatetotal"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_rebatetotal));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_total_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalTotal"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_total));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_representative_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalRepresentative"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_representative));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_partner_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalPartner"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_partner));
    }
    if (m_d_ezmaxinvoicingsummaryglobal_net_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryglobalNet"), ::OpenAPI::toJsonValue(m_d_ezmaxinvoicingsummaryglobal_net));
    }
    if (m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet) {
        obj.insert(QString("bEzmaxinvoicingsummaryglobalAdjustment"), ::OpenAPI::toJsonValue(m_b_ezmaxinvoicingsummaryglobal_adjustment));
    }
    if (m_t_ezmaxproduct_help_x_isSet) {
        obj.insert(QString("tEzmaxproductHelpX"), ::OpenAPI::toJsonValue(m_t_ezmaxproduct_help_x));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingsummaryglobal_Response::getPkiEzmaxinvoicingsummaryglobalId() const {
    return m_pki_ezmaxinvoicingsummaryglobal_id;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setPkiEzmaxinvoicingsummaryglobalId(const qint32 &pki_ezmaxinvoicingsummaryglobal_id) {
    m_pki_ezmaxinvoicingsummaryglobal_id = pki_ezmaxinvoicingsummaryglobal_id;
    m_pki_ezmaxinvoicingsummaryglobal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_pki_ezmaxinvoicingsummaryglobal_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryglobal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_pki_ezmaxinvoicingsummaryglobal_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryglobal_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryglobal_Response::getFkiEzmaxinvoicingId() const {
    return m_fki_ezmaxinvoicing_id;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setFkiEzmaxinvoicingId(const qint32 &fki_ezmaxinvoicing_id) {
    m_fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    m_fki_ezmaxinvoicing_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_fki_ezmaxinvoicing_id_Set() const{
    return m_fki_ezmaxinvoicing_id_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_fki_ezmaxinvoicing_id_Valid() const{
    return m_fki_ezmaxinvoicing_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryglobal_Response::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getSEzmaxproductDescriptionX() const {
    return m_s_ezmaxproduct_description_x;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x) {
    m_s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    m_s_ezmaxproduct_description_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_s_ezmaxproduct_description_x_Set() const{
    return m_s_ezmaxproduct_description_x_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_s_ezmaxproduct_description_x_Valid() const{
    return m_s_ezmaxproduct_description_x_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDtEzmaxinvoicingsummaryglobalStart() const {
    return m_dt_ezmaxinvoicingsummaryglobal_start;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDtEzmaxinvoicingsummaryglobalStart(const QString &dt_ezmaxinvoicingsummaryglobal_start) {
    m_dt_ezmaxinvoicingsummaryglobal_start = dt_ezmaxinvoicingsummaryglobal_start;
    m_dt_ezmaxinvoicingsummaryglobal_start_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_dt_ezmaxinvoicingsummaryglobal_start_Set() const{
    return m_dt_ezmaxinvoicingsummaryglobal_start_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_dt_ezmaxinvoicingsummaryglobal_start_Valid() const{
    return m_dt_ezmaxinvoicingsummaryglobal_start_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDtEzmaxinvoicingsummaryglobalEnd() const {
    return m_dt_ezmaxinvoicingsummaryglobal_end;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDtEzmaxinvoicingsummaryglobalEnd(const QString &dt_ezmaxinvoicingsummaryglobal_end) {
    m_dt_ezmaxinvoicingsummaryglobal_end = dt_ezmaxinvoicingsummaryglobal_end;
    m_dt_ezmaxinvoicingsummaryglobal_end_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_dt_ezmaxinvoicingsummaryglobal_end_Set() const{
    return m_dt_ezmaxinvoicingsummaryglobal_end_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_dt_ezmaxinvoicingsummaryglobal_end_Valid() const{
    return m_dt_ezmaxinvoicingsummaryglobal_end_isValid;
}

qint32 OAIEzmaxinvoicingsummaryglobal_Response::getIEzmaxinvoicingsummaryglobalDays() const {
    return m_i_ezmaxinvoicingsummaryglobal_days;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setIEzmaxinvoicingsummaryglobalDays(const qint32 &i_ezmaxinvoicingsummaryglobal_days) {
    m_i_ezmaxinvoicingsummaryglobal_days = i_ezmaxinvoicingsummaryglobal_days;
    m_i_ezmaxinvoicingsummaryglobal_days_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_i_ezmaxinvoicingsummaryglobal_days_Set() const{
    return m_i_ezmaxinvoicingsummaryglobal_days_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_i_ezmaxinvoicingsummaryglobal_days_Valid() const{
    return m_i_ezmaxinvoicingsummaryglobal_days_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalCountreal() const {
    return m_d_ezmaxinvoicingsummaryglobal_countreal;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalCountreal(const QString &d_ezmaxinvoicingsummaryglobal_countreal) {
    m_d_ezmaxinvoicingsummaryglobal_countreal = d_ezmaxinvoicingsummaryglobal_countreal;
    m_d_ezmaxinvoicingsummaryglobal_countreal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_countreal_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_countreal_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_countreal_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_countreal_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalCountbilled() const {
    return m_d_ezmaxinvoicingsummaryglobal_countbilled;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalCountbilled(const QString &d_ezmaxinvoicingsummaryglobal_countbilled) {
    m_d_ezmaxinvoicingsummaryglobal_countbilled = d_ezmaxinvoicingsummaryglobal_countbilled;
    m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_countbilled_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_countbilled_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalSubtotal() const {
    return m_d_ezmaxinvoicingsummaryglobal_subtotal;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalSubtotal(const QString &d_ezmaxinvoicingsummaryglobal_subtotal) {
    m_d_ezmaxinvoicingsummaryglobal_subtotal = d_ezmaxinvoicingsummaryglobal_subtotal;
    m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_subtotal_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_subtotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalRebateamount() const {
    return m_d_ezmaxinvoicingsummaryglobal_rebateamount;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalRebateamount(const QString &d_ezmaxinvoicingsummaryglobal_rebateamount) {
    m_d_ezmaxinvoicingsummaryglobal_rebateamount = d_ezmaxinvoicingsummaryglobal_rebateamount;
    m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_rebateamount_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_rebateamount_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalRebatepercent() const {
    return m_d_ezmaxinvoicingsummaryglobal_rebatepercent;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalRebatepercent(const QString &d_ezmaxinvoicingsummaryglobal_rebatepercent) {
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent = d_ezmaxinvoicingsummaryglobal_rebatepercent;
    m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_rebatepercent_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_rebatepercent_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalRebatetotal() const {
    return m_d_ezmaxinvoicingsummaryglobal_rebatetotal;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalRebatetotal(const QString &d_ezmaxinvoicingsummaryglobal_rebatetotal) {
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal = d_ezmaxinvoicingsummaryglobal_rebatetotal;
    m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_rebatetotal_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_rebatetotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalTotal() const {
    return m_d_ezmaxinvoicingsummaryglobal_total;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalTotal(const QString &d_ezmaxinvoicingsummaryglobal_total) {
    m_d_ezmaxinvoicingsummaryglobal_total = d_ezmaxinvoicingsummaryglobal_total;
    m_d_ezmaxinvoicingsummaryglobal_total_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_total_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_total_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_total_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_total_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalRepresentative() const {
    return m_d_ezmaxinvoicingsummaryglobal_representative;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalRepresentative(const QString &d_ezmaxinvoicingsummaryglobal_representative) {
    m_d_ezmaxinvoicingsummaryglobal_representative = d_ezmaxinvoicingsummaryglobal_representative;
    m_d_ezmaxinvoicingsummaryglobal_representative_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_representative_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_representative_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_representative_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_representative_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalPartner() const {
    return m_d_ezmaxinvoicingsummaryglobal_partner;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalPartner(const QString &d_ezmaxinvoicingsummaryglobal_partner) {
    m_d_ezmaxinvoicingsummaryglobal_partner = d_ezmaxinvoicingsummaryglobal_partner;
    m_d_ezmaxinvoicingsummaryglobal_partner_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_partner_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_partner_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_partner_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_partner_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getDEzmaxinvoicingsummaryglobalNet() const {
    return m_d_ezmaxinvoicingsummaryglobal_net;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setDEzmaxinvoicingsummaryglobalNet(const QString &d_ezmaxinvoicingsummaryglobal_net) {
    m_d_ezmaxinvoicingsummaryglobal_net = d_ezmaxinvoicingsummaryglobal_net;
    m_d_ezmaxinvoicingsummaryglobal_net_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_net_Set() const{
    return m_d_ezmaxinvoicingsummaryglobal_net_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_d_ezmaxinvoicingsummaryglobal_net_Valid() const{
    return m_d_ezmaxinvoicingsummaryglobal_net_isValid;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::isBEzmaxinvoicingsummaryglobalAdjustment() const {
    return m_b_ezmaxinvoicingsummaryglobal_adjustment;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setBEzmaxinvoicingsummaryglobalAdjustment(const bool &b_ezmaxinvoicingsummaryglobal_adjustment) {
    m_b_ezmaxinvoicingsummaryglobal_adjustment = b_ezmaxinvoicingsummaryglobal_adjustment;
    m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_b_ezmaxinvoicingsummaryglobal_adjustment_Set() const{
    return m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_b_ezmaxinvoicingsummaryglobal_adjustment_Valid() const{
    return m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid;
}

QString OAIEzmaxinvoicingsummaryglobal_Response::getTEzmaxproductHelpX() const {
    return m_t_ezmaxproduct_help_x;
}
void OAIEzmaxinvoicingsummaryglobal_Response::setTEzmaxproductHelpX(const QString &t_ezmaxproduct_help_x) {
    m_t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;
    m_t_ezmaxproduct_help_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_t_ezmaxproduct_help_x_Set() const{
    return m_t_ezmaxproduct_help_x_isSet;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::is_t_ezmaxproduct_help_x_Valid() const{
    return m_t_ezmaxproduct_help_x_isValid;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingsummaryglobal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicing_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxproduct_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxproduct_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingsummaryglobal_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezmaxinvoicingsummaryglobal_end_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezmaxinvoicingsummaryglobal_days_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_countreal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_countbilled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_subtotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_rebateamount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_representative_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_partner_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryglobal_net_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingsummaryglobal_adjustment_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezmaxproduct_help_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryglobal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_s_ezmaxproduct_description_x_isValid && m_dt_ezmaxinvoicingsummaryglobal_start_isValid && m_dt_ezmaxinvoicingsummaryglobal_end_isValid && m_i_ezmaxinvoicingsummaryglobal_days_isValid && m_d_ezmaxinvoicingsummaryglobal_countreal_isValid && m_d_ezmaxinvoicingsummaryglobal_countbilled_isValid && m_d_ezmaxinvoicingsummaryglobal_subtotal_isValid && m_d_ezmaxinvoicingsummaryglobal_rebateamount_isValid && m_d_ezmaxinvoicingsummaryglobal_rebatepercent_isValid && m_d_ezmaxinvoicingsummaryglobal_rebatetotal_isValid && m_d_ezmaxinvoicingsummaryglobal_total_isValid && m_b_ezmaxinvoicingsummaryglobal_adjustment_isValid && m_t_ezmaxproduct_help_x_isValid && true;
}

} // namespace OpenAPI
