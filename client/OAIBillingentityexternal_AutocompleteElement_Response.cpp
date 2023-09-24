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

#include "OAIBillingentityexternal_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBillingentityexternal_AutocompleteElement_Response::OAIBillingentityexternal_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityexternal_AutocompleteElement_Response::OAIBillingentityexternal_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIBillingentityexternal_AutocompleteElement_Response::~OAIBillingentityexternal_AutocompleteElement_Response() {}

void OAIBillingentityexternal_AutocompleteElement_Response::initializeModel() {

    m_pki_billingentityexternal_id_isSet = false;
    m_pki_billingentityexternal_id_isValid = false;

    m_s_billingentityexternal_description_isSet = false;
    m_s_billingentityexternal_description_isValid = false;

    m_b_billingentityexternal_isactive_isSet = false;
    m_b_billingentityexternal_isactive_isValid = false;
}

void OAIBillingentityexternal_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityexternal_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_billingentityexternal_id_isValid = ::OpenAPI::fromJsonValue(m_pki_billingentityexternal_id, json[QString("pkiBillingentityexternalID")]);
    m_pki_billingentityexternal_id_isSet = !json[QString("pkiBillingentityexternalID")].isNull() && m_pki_billingentityexternal_id_isValid;

    m_s_billingentityexternal_description_isValid = ::OpenAPI::fromJsonValue(m_s_billingentityexternal_description, json[QString("sBillingentityexternalDescription")]);
    m_s_billingentityexternal_description_isSet = !json[QString("sBillingentityexternalDescription")].isNull() && m_s_billingentityexternal_description_isValid;

    m_b_billingentityexternal_isactive_isValid = ::OpenAPI::fromJsonValue(m_b_billingentityexternal_isactive, json[QString("bBillingentityexternalIsactive")]);
    m_b_billingentityexternal_isactive_isSet = !json[QString("bBillingentityexternalIsactive")].isNull() && m_b_billingentityexternal_isactive_isValid;
}

QString OAIBillingentityexternal_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityexternal_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityexternal_id_isSet) {
        obj.insert(QString("pkiBillingentityexternalID"), ::OpenAPI::toJsonValue(m_pki_billingentityexternal_id));
    }
    if (m_s_billingentityexternal_description_isSet) {
        obj.insert(QString("sBillingentityexternalDescription"), ::OpenAPI::toJsonValue(m_s_billingentityexternal_description));
    }
    if (m_b_billingentityexternal_isactive_isSet) {
        obj.insert(QString("bBillingentityexternalIsactive"), ::OpenAPI::toJsonValue(m_b_billingentityexternal_isactive));
    }
    return obj;
}

qint32 OAIBillingentityexternal_AutocompleteElement_Response::getPkiBillingentityexternalId() const {
    return m_pki_billingentityexternal_id;
}
void OAIBillingentityexternal_AutocompleteElement_Response::setPkiBillingentityexternalId(const qint32 &pki_billingentityexternal_id) {
    m_pki_billingentityexternal_id = pki_billingentityexternal_id;
    m_pki_billingentityexternal_id_isSet = true;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::is_pki_billingentityexternal_id_Set() const{
    return m_pki_billingentityexternal_id_isSet;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::is_pki_billingentityexternal_id_Valid() const{
    return m_pki_billingentityexternal_id_isValid;
}

QString OAIBillingentityexternal_AutocompleteElement_Response::getSBillingentityexternalDescription() const {
    return m_s_billingentityexternal_description;
}
void OAIBillingentityexternal_AutocompleteElement_Response::setSBillingentityexternalDescription(const QString &s_billingentityexternal_description) {
    m_s_billingentityexternal_description = s_billingentityexternal_description;
    m_s_billingentityexternal_description_isSet = true;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::is_s_billingentityexternal_description_Set() const{
    return m_s_billingentityexternal_description_isSet;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::is_s_billingentityexternal_description_Valid() const{
    return m_s_billingentityexternal_description_isValid;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::isBBillingentityexternalIsactive() const {
    return m_b_billingentityexternal_isactive;
}
void OAIBillingentityexternal_AutocompleteElement_Response::setBBillingentityexternalIsactive(const bool &b_billingentityexternal_isactive) {
    m_b_billingentityexternal_isactive = b_billingentityexternal_isactive;
    m_b_billingentityexternal_isactive_isSet = true;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::is_b_billingentityexternal_isactive_Set() const{
    return m_b_billingentityexternal_isactive_isSet;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::is_b_billingentityexternal_isactive_Valid() const{
    return m_b_billingentityexternal_isactive_isValid;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityexternal_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_billingentityexternal_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBillingentityexternal_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_billingentityexternal_id_isValid && m_s_billingentityexternal_description_isValid && m_b_billingentityexternal_isactive_isValid && true;
}

} // namespace OpenAPI
