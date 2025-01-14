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

#include "Domain_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Domain_Request::Domain_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Domain_Request::Domain_Request() {
    this->initializeModel();
}

Domain_Request::~Domain_Request() {}

void Domain_Request::initializeModel() {

    m_pki_domain_id_isSet = false;
    m_pki_domain_id_isValid = false;

    m_s_domain_name_isSet = false;
    m_s_domain_name_isValid = false;
}

void Domain_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Domain_Request::fromJsonObject(QJsonObject json) {

    m_pki_domain_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_domain_id, json[QString("pkiDomainID")]);
    m_pki_domain_id_isSet = !json[QString("pkiDomainID")].isNull() && m_pki_domain_id_isValid;

    m_s_domain_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_domain_name, json[QString("sDomainName")]);
    m_s_domain_name_isSet = !json[QString("sDomainName")].isNull() && m_s_domain_name_isValid;
}

QString Domain_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Domain_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_domain_id_isSet) {
        obj.insert(QString("pkiDomainID"), ::Ezmaxapi::toJsonValue(m_pki_domain_id));
    }
    if (m_s_domain_name_isSet) {
        obj.insert(QString("sDomainName"), ::Ezmaxapi::toJsonValue(m_s_domain_name));
    }
    return obj;
}

qint32 Domain_Request::getPkiDomainId() const {
    return m_pki_domain_id;
}
void Domain_Request::setPkiDomainId(const qint32 &pki_domain_id) {
    m_pki_domain_id = pki_domain_id;
    m_pki_domain_id_isSet = true;
}

bool Domain_Request::is_pki_domain_id_Set() const{
    return m_pki_domain_id_isSet;
}

bool Domain_Request::is_pki_domain_id_Valid() const{
    return m_pki_domain_id_isValid;
}

QString Domain_Request::getSDomainName() const {
    return m_s_domain_name;
}
void Domain_Request::setSDomainName(const QString &s_domain_name) {
    m_s_domain_name = s_domain_name;
    m_s_domain_name_isSet = true;
}

bool Domain_Request::is_s_domain_name_Set() const{
    return m_s_domain_name_isSet;
}

bool Domain_Request::is_s_domain_name_Valid() const{
    return m_s_domain_name_isValid;
}

bool Domain_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_domain_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_domain_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Domain_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_domain_name_isValid && true;
}

} // namespace Ezmaxapi
