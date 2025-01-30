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

#include "Billingentityinternalproduct_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Billingentityinternalproduct_Request::Billingentityinternalproduct_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Billingentityinternalproduct_Request::Billingentityinternalproduct_Request() {
    this->initializeModel();
}

Billingentityinternalproduct_Request::~Billingentityinternalproduct_Request() {}

void Billingentityinternalproduct_Request::initializeModel() {

    m_pki_billingentityinternalproduct_id_isSet = false;
    m_pki_billingentityinternalproduct_id_isValid = false;

    m_fki_ezmaxproduct_id_isSet = false;
    m_fki_ezmaxproduct_id_isValid = false;

    m_fki_billingentityexternal_id_isSet = false;
    m_fki_billingentityexternal_id_isValid = false;
}

void Billingentityinternalproduct_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Billingentityinternalproduct_Request::fromJsonObject(QJsonObject json) {

    m_pki_billingentityinternalproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_billingentityinternalproduct_id, json[QString("pkiBillingentityinternalproductID")]);
    m_pki_billingentityinternalproduct_id_isSet = !json[QString("pkiBillingentityinternalproductID")].isNull() && m_pki_billingentityinternalproduct_id_isValid;

    m_fki_ezmaxproduct_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezmaxproduct_id, json[QString("fkiEzmaxproductID")]);
    m_fki_ezmaxproduct_id_isSet = !json[QString("fkiEzmaxproductID")].isNull() && m_fki_ezmaxproduct_id_isValid;

    m_fki_billingentityexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_billingentityexternal_id, json[QString("fkiBillingentityexternalID")]);
    m_fki_billingentityexternal_id_isSet = !json[QString("fkiBillingentityexternalID")].isNull() && m_fki_billingentityexternal_id_isValid;
}

QString Billingentityinternalproduct_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Billingentityinternalproduct_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_billingentityinternalproduct_id_isSet) {
        obj.insert(QString("pkiBillingentityinternalproductID"), ::Ezmaxapi::toJsonValue(m_pki_billingentityinternalproduct_id));
    }
    if (m_fki_ezmaxproduct_id_isSet) {
        obj.insert(QString("fkiEzmaxproductID"), ::Ezmaxapi::toJsonValue(m_fki_ezmaxproduct_id));
    }
    if (m_fki_billingentityexternal_id_isSet) {
        obj.insert(QString("fkiBillingentityexternalID"), ::Ezmaxapi::toJsonValue(m_fki_billingentityexternal_id));
    }
    return obj;
}

qint32 Billingentityinternalproduct_Request::getPkiBillingentityinternalproductId() const {
    return m_pki_billingentityinternalproduct_id;
}
void Billingentityinternalproduct_Request::setPkiBillingentityinternalproductId(const qint32 &pki_billingentityinternalproduct_id) {
    m_pki_billingentityinternalproduct_id = pki_billingentityinternalproduct_id;
    m_pki_billingentityinternalproduct_id_isSet = true;
}

bool Billingentityinternalproduct_Request::is_pki_billingentityinternalproduct_id_Set() const{
    return m_pki_billingentityinternalproduct_id_isSet;
}

bool Billingentityinternalproduct_Request::is_pki_billingentityinternalproduct_id_Valid() const{
    return m_pki_billingentityinternalproduct_id_isValid;
}

qint32 Billingentityinternalproduct_Request::getFkiEzmaxproductId() const {
    return m_fki_ezmaxproduct_id;
}
void Billingentityinternalproduct_Request::setFkiEzmaxproductId(const qint32 &fki_ezmaxproduct_id) {
    m_fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    m_fki_ezmaxproduct_id_isSet = true;
}

bool Billingentityinternalproduct_Request::is_fki_ezmaxproduct_id_Set() const{
    return m_fki_ezmaxproduct_id_isSet;
}

bool Billingentityinternalproduct_Request::is_fki_ezmaxproduct_id_Valid() const{
    return m_fki_ezmaxproduct_id_isValid;
}

qint32 Billingentityinternalproduct_Request::getFkiBillingentityexternalId() const {
    return m_fki_billingentityexternal_id;
}
void Billingentityinternalproduct_Request::setFkiBillingentityexternalId(const qint32 &fki_billingentityexternal_id) {
    m_fki_billingentityexternal_id = fki_billingentityexternal_id;
    m_fki_billingentityexternal_id_isSet = true;
}

bool Billingentityinternalproduct_Request::is_fki_billingentityexternal_id_Set() const{
    return m_fki_billingentityexternal_id_isSet;
}

bool Billingentityinternalproduct_Request::is_fki_billingentityexternal_id_Valid() const{
    return m_fki_billingentityexternal_id_isValid;
}

bool Billingentityinternalproduct_Request::isSet() const {
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

bool Billingentityinternalproduct_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezmaxproduct_id_isValid && m_fki_billingentityexternal_id_isValid && true;
}

} // namespace Ezmaxapi
