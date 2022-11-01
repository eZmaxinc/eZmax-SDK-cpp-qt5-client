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

#include "OAIEzmaxinvoicingsummaryexternaldetail_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxinvoicingsummaryexternaldetail_Response::OAIEzmaxinvoicingsummaryexternaldetail_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxinvoicingsummaryexternaldetail_Response::OAIEzmaxinvoicingsummaryexternaldetail_Response() {
    this->initializeModel();
}

OAIEzmaxinvoicingsummaryexternaldetail_Response::~OAIEzmaxinvoicingsummaryexternaldetail_Response() {}

void OAIEzmaxinvoicingsummaryexternaldetail_Response::initializeModel() {

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
}

void OAIEzmaxinvoicingsummaryexternaldetail_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxinvoicingsummaryexternaldetail_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid = ::OpenAPI::fromJsonValue(pki_ezmaxinvoicingsummaryexternaldetail_id, json[QString("pkiEzmaxinvoicingsummaryexternaldetailID")]);
    m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet = !json[QString("pkiEzmaxinvoicingsummaryexternaldetailID")].isNull() && m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid;

    m_fki_ezmaxinvoicingsummaryexternal_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxinvoicingsummaryexternal_id, json[QString("fkiEzmaxinvoicingsummaryexternalID")]);
    m_fki_ezmaxinvoicingsummaryexternal_id_isSet = !json[QString("fkiEzmaxinvoicingsummaryexternalID")].isNull() && m_fki_ezmaxinvoicingsummaryexternal_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::OpenAPI::fromJsonValue(fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_s_ezmaxproduct_description_x_isValid = ::OpenAPI::fromJsonValue(s_ezmaxproduct_description_x, json[QString("sEzmaxproductDescriptionX")]);
    m_s_ezmaxproduct_description_x_isSet = !json[QString("sEzmaxproductDescriptionX")].isNull() && m_s_ezmaxproduct_description_x_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingsummaryexternaldetail_countreal, json[QString("dEzmaxinvoicingsummaryexternaldetailCountreal")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailCountreal")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingsummaryexternaldetail_subtotal, json[QString("dEzmaxinvoicingsummaryexternaldetailSubtotal")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailSubtotal")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingsummaryexternaldetail_rebate, json[QString("dEzmaxinvoicingsummaryexternaldetailRebate")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailRebate")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid;

    m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid = ::OpenAPI::fromJsonValue(d_ezmaxinvoicingsummaryexternaldetail_total, json[QString("dEzmaxinvoicingsummaryexternaldetailTotal")]);
    m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet = !json[QString("dEzmaxinvoicingsummaryexternaldetailTotal")].isNull() && m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid;

    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid = ::OpenAPI::fromJsonValue(b_ezmaxinvoicingsummaryexternaldetail_adjustment, json[QString("bEzmaxinvoicingsummaryexternaldetailAdjustment")]);
    m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet = !json[QString("bEzmaxinvoicingsummaryexternaldetailAdjustment")].isNull() && m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid;
}

QString OAIEzmaxinvoicingsummaryexternaldetail_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxinvoicingsummaryexternaldetail_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet) {
        obj.insert(QString("pkiEzmaxinvoicingsummaryexternaldetailID"), ::OpenAPI::toJsonValue(pki_ezmaxinvoicingsummaryexternaldetail_id));
    }
    if (m_fki_ezmaxinvoicingsummaryexternal_id_isSet) {
        obj.insert(QString("fkiEzmaxinvoicingsummaryexternalID"), ::OpenAPI::toJsonValue(fki_ezmaxinvoicingsummaryexternal_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::OpenAPI::toJsonValue(fki_ezmaxproduct_id));
    }
    if (m_s_ezmaxproduct_description_x_isSet) {
        obj.insert(QString("sEzmaxproductDescriptionX"), ::OpenAPI::toJsonValue(s_ezmaxproduct_description_x));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailCountreal"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingsummaryexternaldetail_countreal));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailSubtotal"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingsummaryexternaldetail_subtotal));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailRebate"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingsummaryexternaldetail_rebate));
    }
    if (m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet) {
        obj.insert(QString("dEzmaxinvoicingsummaryexternaldetailTotal"), ::OpenAPI::toJsonValue(d_ezmaxinvoicingsummaryexternaldetail_total));
    }
    if (m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet) {
        obj.insert(QString("bEzmaxinvoicingsummaryexternaldetailAdjustment"), ::OpenAPI::toJsonValue(b_ezmaxinvoicingsummaryexternaldetail_adjustment));
    }
    return obj;
}

qint32 OAIEzmaxinvoicingsummaryexternaldetail_Response::getPkiEzmaxinvoicingsummaryexternaldetailId() const {
    return pki_ezmaxinvoicingsummaryexternaldetail_id;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setPkiEzmaxinvoicingsummaryexternaldetailId(const qint32 &pki_ezmaxinvoicingsummaryexternaldetail_id) {
    this->pki_ezmaxinvoicingsummaryexternaldetail_id = pki_ezmaxinvoicingsummaryexternaldetail_id;
    this->m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_pki_ezmaxinvoicingsummaryexternaldetail_id_Set() const{
    return m_pki_ezmaxinvoicingsummaryexternaldetail_id_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_pki_ezmaxinvoicingsummaryexternaldetail_id_Valid() const{
    return m_pki_ezmaxinvoicingsummaryexternaldetail_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryexternaldetail_Response::getFkiEzmaxinvoicingsummaryexternalId() const {
    return fki_ezmaxinvoicingsummaryexternal_id;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setFkiEzmaxinvoicingsummaryexternalId(const qint32 &fki_ezmaxinvoicingsummaryexternal_id) {
    this->fki_ezmaxinvoicingsummaryexternal_id = fki_ezmaxinvoicingsummaryexternal_id;
    this->m_fki_ezmaxinvoicingsummaryexternal_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxinvoicingsummaryexternal_id_Set() const{
    return m_fki_ezmaxinvoicingsummaryexternal_id_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxinvoicingsummaryexternal_id_Valid() const{
    return m_fki_ezmaxinvoicingsummaryexternal_id_isValid;
}

qint32 OAIEzmaxinvoicingsummaryexternaldetail_Response::getFkiEzmaxproductId() const {
    return fki_ezmaxproduct_id;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    this->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    this->m_fki_ezmaxproduct_id_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

QString OAIEzmaxinvoicingsummaryexternaldetail_Response::getSEzmaxproductDescriptionX() const {
    return s_ezmaxproduct_description_x;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x) {
    this->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    this->m_s_ezmaxproduct_description_x_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_s_ezmaxproduct_description_x_Set() const{
    return m_s_ezmaxproduct_description_x_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_s_ezmaxproduct_description_x_Valid() const{
    return m_s_ezmaxproduct_description_x_isValid;
}

QString OAIEzmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailCountreal() const {
    return d_ezmaxinvoicingsummaryexternaldetail_countreal;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailCountreal(const QString &d_ezmaxinvoicingsummaryexternaldetail_countreal) {
    this->d_ezmaxinvoicingsummaryexternaldetail_countreal = d_ezmaxinvoicingsummaryexternaldetail_countreal;
    this->m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_countreal_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_countreal_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid;
}

QString OAIEzmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailSubtotal() const {
    return d_ezmaxinvoicingsummaryexternaldetail_subtotal;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailSubtotal(const QString &d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
    this->d_ezmaxinvoicingsummaryexternaldetail_subtotal = d_ezmaxinvoicingsummaryexternaldetail_subtotal;
    this->m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_subtotal_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_subtotal_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid;
}

QString OAIEzmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailRebate() const {
    return d_ezmaxinvoicingsummaryexternaldetail_rebate;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailRebate(const QString &d_ezmaxinvoicingsummaryexternaldetail_rebate) {
    this->d_ezmaxinvoicingsummaryexternaldetail_rebate = d_ezmaxinvoicingsummaryexternaldetail_rebate;
    this->m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_rebate_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_rebate_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid;
}

QString OAIEzmaxinvoicingsummaryexternaldetail_Response::getDEzmaxinvoicingsummaryexternaldetailTotal() const {
    return d_ezmaxinvoicingsummaryexternaldetail_total;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setDEzmaxinvoicingsummaryexternaldetailTotal(const QString &d_ezmaxinvoicingsummaryexternaldetail_total) {
    this->d_ezmaxinvoicingsummaryexternaldetail_total = d_ezmaxinvoicingsummaryexternaldetail_total;
    this->m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_total_Set() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_total_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_d_ezmaxinvoicingsummaryexternaldetail_total_Valid() const{
    return m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::isBEzmaxinvoicingsummaryexternaldetailAdjustment() const {
    return b_ezmaxinvoicingsummaryexternaldetail_adjustment;
}
void OAIEzmaxinvoicingsummaryexternaldetail_Response::setBEzmaxinvoicingsummaryexternaldetailAdjustment(const bool &b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
    this->b_ezmaxinvoicingsummaryexternaldetail_adjustment = b_ezmaxinvoicingsummaryexternaldetail_adjustment;
    this->m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet = true;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_b_ezmaxinvoicingsummaryexternaldetail_adjustment_Set() const{
    return m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isSet;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::is_b_ezmaxinvoicingsummaryexternaldetail_adjustment_Valid() const{
    return m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxinvoicingsummaryexternaldetail_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_s_ezmaxproduct_description_x_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_countreal_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_subtotal_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_rebate_isValid && m_d_ezmaxinvoicingsummaryexternaldetail_total_isValid && m_b_ezmaxinvoicingsummaryexternaldetail_adjustment_isValid && true;
}

} // namespace OpenAPI
