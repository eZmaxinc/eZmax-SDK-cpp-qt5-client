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

#include "OAIPhonestatic_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPhonestatic_ResponseCompound::OAIPhonestatic_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPhonestatic_ResponseCompound::OAIPhonestatic_ResponseCompound() {
    this->initializeModel();
}

OAIPhonestatic_ResponseCompound::~OAIPhonestatic_ResponseCompound() {}

void OAIPhonestatic_ResponseCompound::initializeModel() {

    m_pki_phonestatic_id_isSet = false;
    m_pki_phonestatic_id_isValid = false;

    m_s_phonestatic_e164_isSet = false;
    m_s_phonestatic_e164_isValid = false;

    m_s_phonestatic_extension_isSet = false;
    m_s_phonestatic_extension_isValid = false;
}

void OAIPhonestatic_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPhonestatic_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_phonestatic_id_isValid = ::OpenAPI::fromJsonValue(pki_phonestatic_id, json[QString("pkiPhonestaticID")]);
    m_pki_phonestatic_id_isSet = !json[QString("pkiPhonestaticID")].isNull() && m_pki_phonestatic_id_isValid;

    m_s_phonestatic_e164_isValid = ::OpenAPI::fromJsonValue(s_phonestatic_e164, json[QString("sPhonestaticE164")]);
    m_s_phonestatic_e164_isSet = !json[QString("sPhonestaticE164")].isNull() && m_s_phonestatic_e164_isValid;

    m_s_phonestatic_extension_isValid = ::OpenAPI::fromJsonValue(s_phonestatic_extension, json[QString("sPhonestaticExtension")]);
    m_s_phonestatic_extension_isSet = !json[QString("sPhonestaticExtension")].isNull() && m_s_phonestatic_extension_isValid;
}

QString OAIPhonestatic_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPhonestatic_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_phonestatic_id_isSet) {
        obj.insert(QString("pkiPhonestaticID"), ::OpenAPI::toJsonValue(pki_phonestatic_id));
    }
    if (m_s_phonestatic_e164_isSet) {
        obj.insert(QString("sPhonestaticE164"), ::OpenAPI::toJsonValue(s_phonestatic_e164));
    }
    if (m_s_phonestatic_extension_isSet) {
        obj.insert(QString("sPhonestaticExtension"), ::OpenAPI::toJsonValue(s_phonestatic_extension));
    }
    return obj;
}

qint32 OAIPhonestatic_ResponseCompound::getPkiPhonestaticId() const {
    return pki_phonestatic_id;
}
void OAIPhonestatic_ResponseCompound::setPkiPhonestaticId(const qint32 &pki_phonestatic_id) {
    this->pki_phonestatic_id = pki_phonestatic_id;
    this->m_pki_phonestatic_id_isSet = true;
}

bool OAIPhonestatic_ResponseCompound::is_pki_phonestatic_id_Set() const{
    return m_pki_phonestatic_id_isSet;
}

bool OAIPhonestatic_ResponseCompound::is_pki_phonestatic_id_Valid() const{
    return m_pki_phonestatic_id_isValid;
}

QString OAIPhonestatic_ResponseCompound::getSPhonestaticE164() const {
    return s_phonestatic_e164;
}
void OAIPhonestatic_ResponseCompound::setSPhonestaticE164(const QString &s_phonestatic_e164) {
    this->s_phonestatic_e164 = s_phonestatic_e164;
    this->m_s_phonestatic_e164_isSet = true;
}

bool OAIPhonestatic_ResponseCompound::is_s_phonestatic_e164_Set() const{
    return m_s_phonestatic_e164_isSet;
}

bool OAIPhonestatic_ResponseCompound::is_s_phonestatic_e164_Valid() const{
    return m_s_phonestatic_e164_isValid;
}

QString OAIPhonestatic_ResponseCompound::getSPhonestaticExtension() const {
    return s_phonestatic_extension;
}
void OAIPhonestatic_ResponseCompound::setSPhonestaticExtension(const QString &s_phonestatic_extension) {
    this->s_phonestatic_extension = s_phonestatic_extension;
    this->m_s_phonestatic_extension_isSet = true;
}

bool OAIPhonestatic_ResponseCompound::is_s_phonestatic_extension_Set() const{
    return m_s_phonestatic_extension_isSet;
}

bool OAIPhonestatic_ResponseCompound::is_s_phonestatic_extension_Valid() const{
    return m_s_phonestatic_extension_isValid;
}

bool OAIPhonestatic_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_phonestatic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phonestatic_e164_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phonestatic_extension_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPhonestatic_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_phonestatic_id_isValid && true;
}

} // namespace OpenAPI
