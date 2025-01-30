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

#include "Email_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Email_Response::Email_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Email_Response::Email_Response() {
    this->initializeModel();
}

Email_Response::~Email_Response() {}

void Email_Response::initializeModel() {

    m_pki_email_id_isSet = false;
    m_pki_email_id_isValid = false;

    m_fki_emailtype_id_isSet = false;
    m_fki_emailtype_id_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;
}

void Email_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Email_Response::fromJsonObject(QJsonObject json) {

    m_pki_email_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_email_id, json[QString("pkiEmailID")]);
    m_pki_email_id_isSet = !json[QString("pkiEmailID")].isNull() && m_pki_email_id_isValid;

    m_fki_emailtype_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_emailtype_id, json[QString("fkiEmailtypeID")]);
    m_fki_emailtype_id_isSet = !json[QString("fkiEmailtypeID")].isNull() && m_fki_emailtype_id_isValid;

    m_s_email_address_isValid = ::Ezmaxapi::fromJsonValue(m_s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;
}

QString Email_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Email_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_email_id_isSet) {
        obj.insert(QString("pkiEmailID"), ::Ezmaxapi::toJsonValue(m_pki_email_id));
    }
    if (m_fki_emailtype_id_isSet) {
        obj.insert(QString("fkiEmailtypeID"), ::Ezmaxapi::toJsonValue(m_fki_emailtype_id));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::Ezmaxapi::toJsonValue(m_s_email_address));
    }
    return obj;
}

qint32 Email_Response::getPkiEmailId() const {
    return m_pki_email_id;
}
void Email_Response::setPkiEmailId(const qint32 &pki_email_id) {
    m_pki_email_id = pki_email_id;
    m_pki_email_id_isSet = true;
}

bool Email_Response::is_pki_email_id_Set() const{
    return m_pki_email_id_isSet;
}

bool Email_Response::is_pki_email_id_Valid() const{
    return m_pki_email_id_isValid;
}

qint32 Email_Response::getFkiEmailtypeId() const {
    return m_fki_emailtype_id;
}
void Email_Response::setFkiEmailtypeId(const qint32 &fki_emailtype_id) {
    m_fki_emailtype_id = fki_emailtype_id;
    m_fki_emailtype_id_isSet = true;
}

bool Email_Response::is_fki_emailtype_id_Set() const{
    return m_fki_emailtype_id_isSet;
}

bool Email_Response::is_fki_emailtype_id_Valid() const{
    return m_fki_emailtype_id_isValid;
}

QString Email_Response::getSEmailAddress() const {
    return m_s_email_address;
}
void Email_Response::setSEmailAddress(const QString &s_email_address) {
    m_s_email_address = s_email_address;
    m_s_email_address_isSet = true;
}

bool Email_Response::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool Email_Response::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool Email_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_email_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_emailtype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Email_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_email_id_isValid && m_fki_emailtype_id_isValid && m_s_email_address_isValid && true;
}

} // namespace Ezmaxapi
