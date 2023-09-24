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

#include "OAIPhone_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIPhone_Response::OAIPhone_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPhone_Response::OAIPhone_Response() {
    this->initializeModel();
}

OAIPhone_Response::~OAIPhone_Response() {}

void OAIPhone_Response::initializeModel() {

    m_pki_phone_id_isSet = false;
    m_pki_phone_id_isValid = false;

    m_fki_phonetype_id_isSet = false;
    m_fki_phonetype_id_isValid = false;

    m_e_phone_type_isSet = false;
    m_e_phone_type_isValid = false;

    m_s_phone_e164_isSet = false;
    m_s_phone_e164_isValid = false;

    m_s_phone_extension_isSet = false;
    m_s_phone_extension_isValid = false;
}

void OAIPhone_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPhone_Response::fromJsonObject(QJsonObject json) {

    m_pki_phone_id_isValid = ::OpenAPI::fromJsonValue(m_pki_phone_id, json[QString("pkiPhoneID")]);
    m_pki_phone_id_isSet = !json[QString("pkiPhoneID")].isNull() && m_pki_phone_id_isValid;

    m_fki_phonetype_id_isValid = ::OpenAPI::fromJsonValue(m_fki_phonetype_id, json[QString("fkiPhonetypeID")]);
    m_fki_phonetype_id_isSet = !json[QString("fkiPhonetypeID")].isNull() && m_fki_phonetype_id_isValid;

    m_e_phone_type_isValid = ::OpenAPI::fromJsonValue(m_e_phone_type, json[QString("ePhoneType")]);
    m_e_phone_type_isSet = !json[QString("ePhoneType")].isNull() && m_e_phone_type_isValid;

    m_s_phone_e164_isValid = ::OpenAPI::fromJsonValue(m_s_phone_e164, json[QString("sPhoneE164")]);
    m_s_phone_e164_isSet = !json[QString("sPhoneE164")].isNull() && m_s_phone_e164_isValid;

    m_s_phone_extension_isValid = ::OpenAPI::fromJsonValue(m_s_phone_extension, json[QString("sPhoneExtension")]);
    m_s_phone_extension_isSet = !json[QString("sPhoneExtension")].isNull() && m_s_phone_extension_isValid;
}

QString OAIPhone_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPhone_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_phone_id_isSet) {
        obj.insert(QString("pkiPhoneID"), ::OpenAPI::toJsonValue(m_pki_phone_id));
    }
    if (m_fki_phonetype_id_isSet) {
        obj.insert(QString("fkiPhonetypeID"), ::OpenAPI::toJsonValue(m_fki_phonetype_id));
    }
    if (m_e_phone_type.isSet()) {
        obj.insert(QString("ePhoneType"), ::OpenAPI::toJsonValue(m_e_phone_type));
    }
    if (m_s_phone_e164_isSet) {
        obj.insert(QString("sPhoneE164"), ::OpenAPI::toJsonValue(m_s_phone_e164));
    }
    if (m_s_phone_extension_isSet) {
        obj.insert(QString("sPhoneExtension"), ::OpenAPI::toJsonValue(m_s_phone_extension));
    }
    return obj;
}

qint32 OAIPhone_Response::getPkiPhoneId() const {
    return m_pki_phone_id;
}
void OAIPhone_Response::setPkiPhoneId(const qint32 &pki_phone_id) {
    m_pki_phone_id = pki_phone_id;
    m_pki_phone_id_isSet = true;
}

bool OAIPhone_Response::is_pki_phone_id_Set() const{
    return m_pki_phone_id_isSet;
}

bool OAIPhone_Response::is_pki_phone_id_Valid() const{
    return m_pki_phone_id_isValid;
}

qint32 OAIPhone_Response::getFkiPhonetypeId() const {
    return m_fki_phonetype_id;
}
void OAIPhone_Response::setFkiPhonetypeId(const qint32 &fki_phonetype_id) {
    m_fki_phonetype_id = fki_phonetype_id;
    m_fki_phonetype_id_isSet = true;
}

bool OAIPhone_Response::is_fki_phonetype_id_Set() const{
    return m_fki_phonetype_id_isSet;
}

bool OAIPhone_Response::is_fki_phonetype_id_Valid() const{
    return m_fki_phonetype_id_isValid;
}

OAIField_ePhoneType OAIPhone_Response::getEPhoneType() const {
    return m_e_phone_type;
}
void OAIPhone_Response::setEPhoneType(const OAIField_ePhoneType &e_phone_type) {
    m_e_phone_type = e_phone_type;
    m_e_phone_type_isSet = true;
}

bool OAIPhone_Response::is_e_phone_type_Set() const{
    return m_e_phone_type_isSet;
}

bool OAIPhone_Response::is_e_phone_type_Valid() const{
    return m_e_phone_type_isValid;
}

QString OAIPhone_Response::getSPhoneE164() const {
    return m_s_phone_e164;
}
void OAIPhone_Response::setSPhoneE164(const QString &s_phone_e164) {
    m_s_phone_e164 = s_phone_e164;
    m_s_phone_e164_isSet = true;
}

bool OAIPhone_Response::is_s_phone_e164_Set() const{
    return m_s_phone_e164_isSet;
}

bool OAIPhone_Response::is_s_phone_e164_Valid() const{
    return m_s_phone_e164_isValid;
}

QString OAIPhone_Response::getSPhoneExtension() const {
    return m_s_phone_extension;
}
void OAIPhone_Response::setSPhoneExtension(const QString &s_phone_extension) {
    m_s_phone_extension = s_phone_extension;
    m_s_phone_extension_isSet = true;
}

bool OAIPhone_Response::is_s_phone_extension_Set() const{
    return m_s_phone_extension_isSet;
}

bool OAIPhone_Response::is_s_phone_extension_Valid() const{
    return m_s_phone_extension_isValid;
}

bool OAIPhone_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_phone_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_phonetype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_phone_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_e164_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_phone_extension_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPhone_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_phone_id_isValid && m_fki_phonetype_id_isValid && true;
}

} // namespace OpenAPI
