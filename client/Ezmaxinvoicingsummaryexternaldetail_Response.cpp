/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezmaxinvoicingsummaryexternaldetail_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezmaxinvoicingsummaryexternaldetail_Response::Ezmaxinvoicingsummaryexternaldetail_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezmaxinvoicingsummaryexternaldetail_Response::Ezmaxinvoicingsummaryexternaldetail_Response() {
    this->initializeModel();
}

Ezmaxinvoicingsummaryexternaldetail_Response::~Ezmaxinvoicingsummaryexternaldetail_Response() {}

void Ezmaxinvoicingsummaryexternaldetail_Response::initializeModel() {

    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet = false;
    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid = false;

    m_fki_ezmaxinvoicingsummaryexternal_id_isSet = false;
    m_fki_ezmaxinvoicingsummaryexternal_id_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_s_ezmaxproduct_description_x_isSet = false;
    m_s_ezmaxproduct_description_x_isValid = false;

    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet = false;
    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid = false;

    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet = false;
    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid = false;

    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet = false;
    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid = false;

    m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet = false;
    m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid = false;

    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet = false;
    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid = false;

    m_t_ezmaxproduct_help_x_isSet = false;
    m_t_ezmaxproduct_help_x_isValid = false;
}

void Ezmaxinvoicingsummaryexternaldetail_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezmaxinvoicingsummaryexternaldetail_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezmaxinvoicingsummaryexternaldetail_id, json[QString("pkiEzmaxinvoicingsummaryexternaldetailID")]);
    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryexternaldetailID")].isNull() && m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid;

    m_fki_ezmaxinvoicingsummaryexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxinvoicingsummaryexternal_id, json[QString("fkiEzmaxinvoicingsummaryexternalID")]);
    m_fki_ezmaxinvoicingsummaryexternal_id_isSet = !json[QString("fkiEzmaxinvoicingsummaryexternalID")].isNull() && m_fki_ezmaxinvoicingsummaryexternal_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_s_ezmaxproduct_description_x_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxproduct_description_x, json[QString("sEzmaxproductDescriptionX")]);
    m_s_ezmaxproduct_description_x_isSet = !json[QString("sEzmaxproductDescriptionX")].isNull() && m_s_ezmaxproduct_description_x_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_countreal, json[QString("dEzmaxinvoicingsummaryexternaldetailCountreal")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailCountreal")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_subtotal, json[QString("dEzmaxinvoicingsummaryexternaldetailSubtotal")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailSubtotal")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_rebate, json[QString("dEzmaxinvoicingsummaryexternaldetailRebate")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailRebate")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid = ::Ezmaxapi::fromJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_total, json[QString("dEzmaxinvoicingsummaryexternaldetailTotal")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailTotal")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid;

    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezmaxinvoicingsummaryexternaldetail_adjustment, json[QString("bEzmaxinvoicingsummaryexternaldetailAdjustment")]);
    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet = !json[QString("bEzmaxinvoicingsummaryexternaldetailAdjustment")].isNull() && m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid;

    m_t_ezmaxproduct_help_x_isValid = ::Ezmaxapi::fromJsonValue(m_t_ezmaxproduct_help_x, json[QString("tEzmaxproductHelpX")]);
    m_t_ezmaxproduct_help_x_isSet = !json[QString("tEzmaxproductHelpX")].isNull() && m_t_ezmaxproduct_help_x_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezmaxinvoicingsummaryexternaldetail_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryexternaldetailID"), ::Ezmaxapi::toJsonValue(m_pki_ezmaxinvoicingsummaryexternaldetail_id));
    }
    if (m_fki_ezmaxinvoicingsummaryexternal_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingsummaryexternalID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxinvoicingsummaryexternal_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxproduct_id));
    }
    if (m_s_ezmaxproduct_description_x_isSet) {
        obj.insert(QString("sEzmaxproductDescriptionX"), ::Ezmaxapi::toJsonValue(m_s_ezmaxproduct_description_x));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailCountreal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_countreal));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailSubtotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_subtotal));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailRebate"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_rebate));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailTotal"), ::Ezmaxapi::toJsonValue(m_d_ezmaxinvoicingsummaryexternaldetail_total));
    }
    if (m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet) {
        obj.insert(QString("bEzmaxinvoicingsummaryexternaldetailAdjustment"), ::Ezmaxapi::toJsonValue(m_b_ezmaxinvoicingsummaryexternaldetail_adjustment));
    }
    if (m_t_ezmaxproduct_help_x_isSet) {
        obj.insert(QString("tEzmaxproductHelpX"), ::Ezmaxapi::toJsonValue(m_t_ezmaxproduct_help_x));
    }
    return obj;
}

qint32 Ezmaxinvoicingsummaryexternaldetail_Response::getPkiEzmaxinvoicingsummaryexternaldetailId() const {
    return m_pki_ezmaxinvoicingsummaryexternaldetail_id;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setPkiEzmaxinvoicingsummaryexternaldetailId(const qint32 &pki_ezmaxinvoicingsummaryexternaldetail_id) {
    m_pki_ezmaxinvoicingsummaryexternaldetail_id = pki_ezmaxinvoicingsummaryexternaldetail_id;
    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_pki_ezmaxinvoicingsummaryexternaldetail_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_pki_ezmaxinvoicingsummaryexternaldetail_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid;
}

qint32 Ezmaxinvoicingsummaryexternaldetail_Response::getFkiEzmaxinvoicingsummaryexternalId() const {
    return m_fki_ezmaxinvoicingsummaryexternal_id;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setFkiEzmaxinvoicingsummaryexternalId(const qint32 &fki_ezmaxinvoicingsummaryexternal_id) {
    m_fki_ezmaxinvoicingsummaryexternal_id = fki_ezmaxinvoicingsummaryexternal_id;
    m_fki_ezmaxinvoicingsummaryexternal_id_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxinvoicingsummaryexternal_id_Set() const{
    return m_fki_ezmaxinvoicingsummaryexternal_id_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxinvoicingsummaryexternal_id_Valid() const{
    return m_fki_ezmaxinvoicingsummaryexternal_id_isValid;
}

qint32 Ezmaxinvoicingsummaryexternaldetail_Response::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::getSEzmaxproductDescriptionX() const {
    return m_s_ezmaxproduct_description_x;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x) {
    m_s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    m_s_ezmaxproduct_description_x_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_s_ezmaxproduct_description_x_Set() const{
    return m_s_ezmaxproduct_description_x_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_s_ezmaxproduct_description_x_Valid() const{
    return m_s_ezmaxproduct_description_x_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailCountreal() const {
    return m_d_ezmaxinvoicingsummaryexternaldetail_countreal;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailCountreal(const QString &d_ezmaxinvoicingsummaryexternaldetail_countreal) {
    m_d_ezmaxinvoicingsummaryexternaldetail_countreal = d_ezmaxinvoicingsummaryexternaldetail_countreal;
    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_countreal_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_countreal_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailSubtotal() const {
    return m_d_ezmaxinvoicingsummaryexternaldetail_subtotal;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailSubtotal(const QString &d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal = d_ezmaxinvoicingsummaryexternaldetail_subtotal;
    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_subtotal_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_subtotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailRebate() const {
    return m_d_ezmaxinvoicingsummaryexternaldetail_rebate;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailRebate(const QString &d_ezmaxinvoicingsummaryexternaldetail_rebate) {
    m_d_ezmaxinvoicingsummaryexternaldetail_rebate = d_ezmaxinvoicingsummaryexternaldetail_rebate;
    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_rebate_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_rebate_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailTotal() const {
    return m_d_ezmaxinvoicingsummaryexternaldetail_total;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailTotal(const QString &d_ezmaxinvoicingsummaryexternaldetail_total) {
    m_d_ezmaxinvoicingsummaryexternaldetail_total = d_ezmaxinvoicingsummaryexternaldetail_total;
    m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_total_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_total_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::isBEzmaxinvoicingsummaryexternaldetailAdjustment() const {
    return m_b_ezmaxinvoicingsummaryexternaldetail_adjustment;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setBEzmaxinvoicingsummaryexternaldetailAdjustment(const bool &b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment = b_ezmaxinvoicingsummaryexternaldetail_adjustment;
    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_b_ezmaxinvoicingsummaryexternaldetail_adjustment_Set() const{
    return m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_b_ezmaxinvoicingsummaryexternaldetail_adjustment_Valid() const{
    return m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid;
}

QString Ezmaxinvoicingsummaryexternaldetail_Response::getTEzmaxproductHelpX() const {
    return m_t_ezmaxproduct_help_x;
}
void Ezmaxinvoicingsummaryexternaldetail_Response::setTEzmaxproductHelpX(const QString &t_ezmaxproduct_help_x) {
    m_t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;
    m_t_ezmaxproduct_help_x_isSet = true;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_t_ezmaxproduct_help_x_Set() const{
    return m_t_ezmaxproduct_help_x_isSet;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::is_t_ezmaxproduct_help_x_Valid() const{
    return m_t_ezmaxproduct_help_x_isValid;
}

bool Ezmaxinvoicingsummaryexternaldetail_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxinvoicingsummaryexternal_id_isSet) {
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

        if (m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet) {
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

bool Ezmaxinvoicingsummaryexternaldetail_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_s_ezmaxproduct_description_x_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid && m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid && m_t_ezmaxproduct_help_x_isValid && true;
}

} // namespace Ezmaxapi
