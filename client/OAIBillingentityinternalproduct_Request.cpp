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

#include "OAIBillingentityinternalproduct_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBillingentityinternalproduct_Request::OAIBillingentityinternalproduct_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBillingentityinternalproduct_Request::OAIBillingentityinternalproduct_Request() {
    this->initializeModel();
}

OAIBillingentityinternalproduct_Request::~OAIBillingentityinternalproduct_Request() {}

void OAIBillingentityinternalproduct_Request::initializeModel() {

    m_pki_billingentityinternalproduct_id_isSet = false;
    m_pki_billingentityinternalproduct_id_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_fki_billingentityexternal_id_isSet = false;
    m_fki_billingentityexternal_id_isValid = false;
}

void OAIBillingentityinternalproduct_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBillingentityinternalproduct_Request::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternalproduct_id_isValid = ::OpenAPI::fromJsonValue(m_pki_billingentityinternalproduct_id, json[QString("pkiBillingentityinternalproductID")]);
    m_pki_billingentityinternalproduct_id_isSet = !json[QString("pkiBillingentityinternalproductID")].isNull() && m_pki_billingentityinternalproduct_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_fki_billingentityexternal_id_isValid = ::OpenAPI::fromJsonValue(m_fki_billingentityexternal_id, json[QString("fkiBillingentityexternalID")]);
    m_fki_billingentityexternal_id_isSet = !json[QString("fkiBillingentityexternalID")].isNull() && m_fki_billingentityexternal_id_isValid;
}

QString OAIBillingentityinternalproduct_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBillingentityinternalproduct_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternalproduct_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalproductID"), ::OpenAPI::toJsonValue(m_pki_billingentityinternalproduct_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::OpenAPI::toJsonValue(m_fki_ezmaxproduct_id));
    }
    if (m_fki_billingentityexternal_id_isSet) {
        obj.insert(QString("fkiBillingentityexternalID"), ::OpenAPI::toJsonValue(m_fki_billingentityexternal_id));
    }
    return obj;
}

qint32 OAIBillingentityinternalproduct_Request::getPkiBillingentityinternalproductId() const {
    return m_pki_billingentityinternalproduct_id;
}
void OAIBillingentityinternalproduct_Request::setPkiBillingentityinternalproductId(const qint32 &pki_billingentityinternalproduct_id) {
    m_pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    m_pki_billingentityinternalproduct_id_isSet = true;
}

bool OAIBillingentityinternalproduct_Request::is_pki_billingentityinternalproduct_id_Set() const{
    return m_pki_billingentityinternalproduct_id_isSet;
}

bool OAIBillingentityinternalproduct_Request::is_pki_billingentityinternalproduct_id_Valid() const{
    return m_pki_billingentityinternalproduct_id_isValid;
}

qint32 OAIBillingentityinternalproduct_Request::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void OAIBillingentityinternalproduct_Request::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool OAIBillingentityinternalproduct_Request::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool OAIBillingentityinternalproduct_Request::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

qint32 OAIBillingentityinternalproduct_Request::getFkiBillingentityexternalId() const {
    return m_fki_billingentityexternal_id;
}
void OAIBillingentityinternalproduct_Request::setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id) {
    m_fki_billingentityexternal_id = fki_billingentityexternal_id;
    m_fki_billingentityexternal_id_isSet = true;
}

bool OAIBillingentityinternalproduct_Request::is_fki_billingentityexternal_id_Set() const{
    return m_fki_billingentityexternal_id_isSet;
}

bool OAIBillingentityinternalproduct_Request::is_fki_billingentityexternal_id_Valid() const{
    return m_fki_billingentityexternal_id_isValid;
}

bool OAIBillingentityinternalproduct_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_billingentityinternalproduct_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezmaxproduct_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_billingentityexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBillingentityinternalproduct_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_fki_billingentityexternal_id_isValid && true;
}

} // namespace OpenAPI
