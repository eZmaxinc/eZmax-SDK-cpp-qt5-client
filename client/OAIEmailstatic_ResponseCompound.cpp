/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEmailstatic_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEmailstatic_ResponseCompound::OAIEmailstatic_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEmailstatic_ResponseCompound::OAIEmailstatic_ResponseCompound() {
    this->initializeModel();
}

OAIEmailstatic_ResponseCompound::~OAIEmailstatic_ResponseCompound() {}

void OAIEmailstatic_ResponseCompound::initializeModel() {

    m_pki_emailstatic_id_isSet = false;
    m_pki_emailstatic_id_isValid = false;

    m_s_emailstatic_address_isSet = false;
    m_s_emailstatic_address_isValid = false;
}

void OAIEmailstatic_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEmailstatic_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_emailstatic_id_isValid = ::OpenAPI::fromJsonValue(pki_emailstatic_id, json[QString("pkiEmailstaticID")]);
    m_pki_emailstatic_id_isSet = !json[QString("pkiEmailstaticID")].isNull() && m_pki_emailstatic_id_isValid;

    m_s_emailstatic_address_isValid = ::OpenAPI::fromJsonValue(s_emailstatic_address, json[QString("sEmailstaticAddress")]);
    m_s_emailstatic_address_isSet = !json[QString("sEmailstaticAddress")].isNull() && m_s_emailstatic_address_isValid;
}

QString OAIEmailstatic_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEmailstatic_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_emailstatic_id_isSet) {
        obj.insert(QString("pkiEmailstaticID"), ::OpenAPI::toJsonValue(pki_emailstatic_id));
    }
    if (m_s_emailstatic_address_isSet) {
        obj.insert(QString("sEmailstaticAddress"), ::OpenAPI::toJsonValue(s_emailstatic_address));
    }
    return obj;
}

qint32 OAIEmailstatic_ResponseCompound::getPkiEmailstaticId() const {
    return pki_emailstatic_id;
}
void OAIEmailstatic_ResponseCompound::setPkiEmailstaticId(const qint32 &pki_emailstatic_id) {
    this->pki_emailstatic_id = pki_emailstatic_id;
    this->m_pki_emailstatic_id_isSet = true;
}

bool OAIEmailstatic_ResponseCompound::is_pki_emailstatic_id_Set() const{
    return m_pki_emailstatic_id_isSet;
}

bool OAIEmailstatic_ResponseCompound::is_pki_emailstatic_id_Valid() const{
    return m_pki_emailstatic_id_isValid;
}

QString OAIEmailstatic_ResponseCompound::getSEmailstaticAddress() const {
    return s_emailstatic_address;
}
void OAIEmailstatic_ResponseCompound::setSEmailstaticAddress(const QString &s_emailstatic_address) {
    this->s_emailstatic_address = s_emailstatic_address;
    this->m_s_emailstatic_address_isSet = true;
}

bool OAIEmailstatic_ResponseCompound::is_s_emailstatic_address_Set() const{
    return m_s_emailstatic_address_isSet;
}

bool OAIEmailstatic_ResponseCompound::is_s_emailstatic_address_Valid() const{
    return m_s_emailstatic_address_isValid;
}

bool OAIEmailstatic_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_emailstatic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_emailstatic_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEmailstatic_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_emailstatic_id_isValid && m_s_emailstatic_address_isValid && true;
}

} // namespace OpenAPI
