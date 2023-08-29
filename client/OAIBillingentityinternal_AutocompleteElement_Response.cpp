/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIBillingentityinternal_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBillingentityinternal_AutocompleteElement_Response::OAIBillingentityinternal_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityinternal_AutocompleteElement_Response::OAIBillingentityinternal_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIBillingentityinternal_AutocompleteElement_Response::~OAIBillingentityinternal_AutocompleteElement_Response() {}

void OAIBillingentityinternal_AutocompleteElement_Response::initializeModel() {

    m_pki_billingentityinternal_id_isSet = false;
    m_pki_billingentityinternal_id_isValid = false;

    m_s_billingentityinternal_description_x_isSet = false;
    m_s_billingentityinternal_description_x_isValid = false;

    m_b_billingentityinternal_isactive_isSet = false;
    m_b_billingentityinternal_isactive_isValid = false;
}

void OAIBillingentityinternal_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityinternal_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternal_id_isValid = ::OpenAPI::fromJsonValue(m_pki_billingentityinternal_id, json[QString("pkiBillingentityinternalID")]);
    m_pki_billingentityinternal_id_isSet = !json[QString("pkiBillingentityinternalID")].isNull() && m_pki_billingentityinternal_id_isValid;

    m_s_billingentityinternal_description_x_isValid = ::OpenAPI::fromJsonValue(m_s_billingentityinternal_description_x, json[QString("sBillingentityinternalDescriptionX")]);
    m_s_billingentityinternal_description_x_isSet = !json[QString("sBillingentityinternalDescriptionX")].isNull() && m_s_billingentityinternal_description_x_isValid;

    m_b_billingentityinternal_isactive_isValid = ::OpenAPI::fromJsonValue(m_b_billingentityinternal_isactive, json[QString("bBillingentityinternalIsactive")]);
    m_b_billingentityinternal_isactive_isSet = !json[QString("bBillingentityinternalIsactive")].isNull() && m_b_billingentityinternal_isactive_isValid;
}

QString OAIBillingentityinternal_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityinternal_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternal_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalID"), ::OpenAPI::toJsonValue(m_pki_billingentityinternal_id));
    }
    if (m_s_billingentityinternal_description_x_isSet) {
        obj.insert(QString("sBillingentityinternalDescriptionX"), ::OpenAPI::toJsonValue(m_s_billingentityinternal_description_x));
    }
    if (m_b_billingentityinternal_isactive_isSet) {
        obj.insert(QString("bBillingentityinternalIsactive"), ::OpenAPI::toJsonValue(m_b_billingentityinternal_isactive));
    }
    return obj;
}

qint32 OAIBillingentityinternal_AutocompleteElement_Response::getPkiBillingentityinternalId() const {
    return m_pki_billingentityinternal_id;
}
void OAIBillingentityinternal_AutocompleteElement_Response::setPkiBillingentityinternalId(const qint32 &pki_billingentityinternal_id) {
    m_pki_billingentityinternal_id = pki_billingentityinternal_id;
    m_pki_billingentityinternal_id_isSet = true;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::is_pki_billingentityinternal_id_Set() const{
    return m_pki_billingentityinternal_id_isSet;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::is_pki_billingentityinternal_id_Valid() const{
    return m_pki_billingentityinternal_id_isValid;
}

QString OAIBillingentityinternal_AutocompleteElement_Response::getSBillingentityinternalDescriptionX() const {
    return m_s_billingentityinternal_description_x;
}
void OAIBillingentityinternal_AutocompleteElement_Response::setSBillingentityinternalDescriptionX(const QString &s_billingentityinternal_description_x) {
    m_s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    m_s_billingentityinternal_description_x_isSet = true;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::is_s_billingentityinternal_description_x_Set() const{
    return m_s_billingentityinternal_description_x_isSet;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::is_s_billingentityinternal_description_x_Valid() const{
    return m_s_billingentityinternal_description_x_isValid;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::isBBillingentityinternalIsactive() const {
    return m_b_billingentityinternal_isactive;
}
void OAIBillingentityinternal_AutocompleteElement_Response::setBBillingentityinternalIsactive(const bool &b_billingentityinternal_isactive) {
    m_b_billingentityinternal_isactive = b_billingentityinternal_isactive;
    m_b_billingentityinternal_isactive_isSet = true;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::is_b_billingentityinternal_isactive_Set() const{
    return m_b_billingentityinternal_isactive_isSet;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::is_b_billingentityinternal_isactive_Valid() const{
    return m_b_billingentityinternal_isactive_isValid;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityinternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_billingentityinternal_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_billingentityinternal_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBillingentityinternal_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_billingentityinternal_id_isValid && m_s_billingentityinternal_description_x_isValid && m_b_billingentityinternal_isactive_isValid && true;
}

} // namespace OpenAPI
