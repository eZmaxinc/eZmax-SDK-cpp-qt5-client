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

#include "Custom_EzmaxinvoicingEzsignfolder_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_EzmaxinvoicingEzsignfolder_Response::Custom_EzmaxinvoicingEzsignfolder_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_EzmaxinvoicingEzsignfolder_Response::Custom_EzmaxinvoicingEzsignfolder_Response() {
    this->initializeModel();
}

Custom_EzmaxinvoicingEzsignfolder_Response::~Custom_EzmaxinvoicingEzsignfolder_Response() {}

void Custom_EzmaxinvoicingEzsignfolder_Response::initializeModel() {

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_fki_billingentityinternal_id_isSet = false;
    m_fki_billingentityinternal_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_b_ezsigntsarequirement_billable_isSet = false;
    m_b_ezsigntsarequirement_billable_isValid = false;

    m_b_ezsignfolder_mfaused_isSet = false;
    m_b_ezsignfolder_mfaused_isValid = false;

    m_b_ezsignfolder_paymentused_isSet = false;
    m_b_ezsignfolder_paymentused_isValid = false;

    m_b_ezsignfolder_allowed_isSet = false;
    m_b_ezsignfolder_allowed_isValid = false;
}

void Custom_EzmaxinvoicingEzsignfolder_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_EzmaxinvoicingEzsignfolder_Response::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_fki_billingentityinternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityinternal_id, json[QString("fkiBillingentityinternalID")]);
    m_fki_billingentityinternal_id_isSet = !json[QString("fkiBillingentityinternalID")].isNull() && m_fki_billingentityinternal_id_isValid;

    m_s_ezsignfolder_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_b_ezsigntsarequirement_billable_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsigntsarequirement_billable, json[QString("bEzsigntsarequirementBillable")]);
    m_b_ezsigntsarequirement_billable_isSet = !json[QString("bEzsigntsarequirementBillable")].isNull() && m_b_ezsigntsarequirement_billable_isValid;

    m_b_ezsignfolder_mfaused_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfolder_mfaused, json[QString("bEzsignfolderMfaused")]);
    m_b_ezsignfolder_mfaused_isSet = !json[QString("bEzsignfolderMfaused")].isNull() && m_b_ezsignfolder_mfaused_isValid;

    m_b_ezsignfolder_paymentused_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfolder_paymentused, json[QString("bEzsignfolderPaymentused")]);
    m_b_ezsignfolder_paymentused_isSet = !json[QString("bEzsignfolderPaymentused")].isNull() && m_b_ezsignfolder_paymentused_isValid;

    m_b_ezsignfolder_allowed_isValid = ::Ezmaxapi::fromJsonValue(m_b_ezsignfolder_allowed, json[QString("bEzsignfolderAllowed")]);
    m_b_ezsignfolder_allowed_isSet = !json[QString("bEzsignfolderAllowed")].isNull() && m_b_ezsignfolder_allowed_isValid;
}

QString Custom_EzmaxinvoicingEzsignfolder_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_EzmaxinvoicingEzsignfolder_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignfolder_id));
    }
    if (m_fki_billingentityinternal_id_isSet) {
        obj.insert(QString("fkiBillingentityinternalID"), ::Ezmaxapi::toJsonValue(m_fki_billingentityinternal_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_b_ezsigntsarequirement_billable_isSet) {
        obj.insert(QString("bEzsigntsarequirementBillable"), ::Ezmaxapi::toJsonValue(m_b_ezsigntsarequirement_billable));
    }
    if (m_b_ezsignfolder_mfaused_isSet) {
        obj.insert(QString("bEzsignfolderMfaused"), ::Ezmaxapi::toJsonValue(m_b_ezsignfolder_mfaused));
    }
    if (m_b_ezsignfolder_paymentused_isSet) {
        obj.insert(QString("bEzsignfolderPaymentused"), ::Ezmaxapi::toJsonValue(m_b_ezsignfolder_paymentused));
    }
    if (m_b_ezsignfolder_allowed_isSet) {
        obj.insert(QString("bEzsignfolderAllowed"), ::Ezmaxapi::toJsonValue(m_b_ezsignfolder_allowed));
    }
    return obj;
}

qint32 Custom_EzmaxinvoicingEzsignfolder_Response::getFkiEzsignfolderId() const {
    return m_fki_ezsignfolder_id;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    m_fki_ezsignfolder_id = fki_ezsignfolder_id;
    m_fki_ezsignfolder_id_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

qint32 Custom_EzmaxinvoicingEzsignfolder_Response::getFkiBillingentityinternalId() const {
    return m_fki_billingentityinternal_id;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setFkiBillingentityinternalId(const qint32 &fki_billingentityinternal_id) {
    m_fki_billingentityinternal_id = fki_billingentityinternal_id;
    m_fki_billingentityinternal_id_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_fki_billingentityinternal_id_Set() const{
    return m_fki_billingentityinternal_id_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_fki_billingentityinternal_id_Valid() const{
    return m_fki_billingentityinternal_id_isValid;
}

QString Custom_EzmaxinvoicingEzsignfolder_Response::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::isBEzsigntsarequirementBillable() const {
    return m_b_ezsigntsarequirement_billable;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setBEzsigntsarequirementBillable(const bool &b_ezsigntsarequirement_billable) {
    m_b_ezsigntsarequirement_billable = b_ezsigntsarequirement_billable;
    m_b_ezsigntsarequirement_billable_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsigntsarequirement_billable_Set() const{
    return m_b_ezsigntsarequirement_billable_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsigntsarequirement_billable_Valid() const{
    return m_b_ezsigntsarequirement_billable_isValid;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::isBEzsignfolderMfaused() const {
    return m_b_ezsignfolder_mfaused;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setBEzsignfolderMfaused(const bool &b_ezsignfolder_mfaused) {
    m_b_ezsignfolder_mfaused = b_ezsignfolder_mfaused;
    m_b_ezsignfolder_mfaused_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_mfaused_Set() const{
    return m_b_ezsignfolder_mfaused_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_mfaused_Valid() const{
    return m_b_ezsignfolder_mfaused_isValid;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::isBEzsignfolderPaymentused() const {
    return m_b_ezsignfolder_paymentused;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setBEzsignfolderPaymentused(const bool &b_ezsignfolder_paymentused) {
    m_b_ezsignfolder_paymentused = b_ezsignfolder_paymentused;
    m_b_ezsignfolder_paymentused_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_paymentused_Set() const{
    return m_b_ezsignfolder_paymentused_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_paymentused_Valid() const{
    return m_b_ezsignfolder_paymentused_isValid;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::isBEzsignfolderAllowed() const {
    return m_b_ezsignfolder_allowed;
}
void Custom_EzmaxinvoicingEzsignfolder_Response::setBEzsignfolderAllowed(const bool &b_ezsignfolder_allowed) {
    m_b_ezsignfolder_allowed = b_ezsignfolder_allowed;
    m_b_ezsignfolder_allowed_isSet = true;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_allowed_Set() const{
    return m_b_ezsignfolder_allowed_isSet;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::is_b_ezsignfolder_allowed_Valid() const{
    return m_b_ezsignfolder_allowed_isValid;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntsarequirement_billable_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_mfaused_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_paymentused_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_allowed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_EzmaxinvoicingEzsignfolder_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && m_b_ezsigntsarequirement_billable_isValid && m_b_ezsignfolder_mfaused_isValid && m_b_ezsignfolder_paymentused_isValid && m_b_ezsignfolder_allowed_isValid && true;
}

} // namespace Ezmaxapi
