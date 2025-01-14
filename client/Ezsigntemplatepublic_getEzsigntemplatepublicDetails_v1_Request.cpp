/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request() {
    this->initializeModel();
}

Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::~Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request() {}

void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::initializeModel() {

    m_pks_ezmaxcustomer_code_isSet = false;
    m_pks_ezmaxcustomer_code_isValid = false;

    m_s_ezsigntemplatepublic_referenceid_isSet = false;
    m_s_ezsigntemplatepublic_referenceid_isValid = false;
}

void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::fromJsonObject(QJsonObject json) {

    m_pks_ezmaxcustomer_code_isValid = ::Ezmaxapi::fromJsonValue(m_pks_ezmaxcustomer_code, json[QString("pksEzmaxcustomerCode")]);
    m_pks_ezmaxcustomer_code_isSet = !json[QString("pksEzmaxcustomerCode")].isNull() && m_pks_ezmaxcustomer_code_isValid;

    m_s_ezsigntemplatepublic_referenceid_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatepublic_referenceid, json[QString("sEzsigntemplatepublicReferenceid")]);
    m_s_ezsigntemplatepublic_referenceid_isSet = !json[QString("sEzsigntemplatepublicReferenceid")].isNull() && m_s_ezsigntemplatepublic_referenceid_isValid;
}

QString Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pks_ezmaxcustomer_code_isSet) {
        obj.insert(QString("pksEzmaxcustomerCode"), ::Ezmaxapi::toJsonValue(m_pks_ezmaxcustomer_code));
    }
    if (m_s_ezsigntemplatepublic_referenceid_isSet) {
        obj.insert(QString("sEzsigntemplatepublicReferenceid"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatepublic_referenceid));
    }
    return obj;
}

QString Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::getPksEzmaxcustomerCode() const {
    return m_pks_ezmaxcustomer_code;
}
void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::setPksEzmaxcustomerCode(const QString &pks_ezmaxcustomer_code) {
    m_pks_ezmaxcustomer_code = pks_ezmaxcustomer_code;
    m_pks_ezmaxcustomer_code_isSet = true;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::is_pks_ezmaxcustomer_code_Set() const{
    return m_pks_ezmaxcustomer_code_isSet;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::is_pks_ezmaxcustomer_code_Valid() const{
    return m_pks_ezmaxcustomer_code_isValid;
}

QString Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::getSEzsigntemplatepublicReferenceid() const {
    return m_s_ezsigntemplatepublic_referenceid;
}
void Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::setSEzsigntemplatepublicReferenceid(const QString &s_ezsigntemplatepublic_referenceid) {
    m_s_ezsigntemplatepublic_referenceid = s_ezsigntemplatepublic_referenceid;
    m_s_ezsigntemplatepublic_referenceid_isSet = true;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::is_s_ezsigntemplatepublic_referenceid_Set() const{
    return m_s_ezsigntemplatepublic_referenceid_isSet;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::is_s_ezsigntemplatepublic_referenceid_Valid() const{
    return m_s_ezsigntemplatepublic_referenceid_isValid;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pks_ezmaxcustomer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepublic_referenceid_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pks_ezmaxcustomer_code_isValid && m_s_ezsigntemplatepublic_referenceid_isValid && true;
}

} // namespace Ezmaxapi
