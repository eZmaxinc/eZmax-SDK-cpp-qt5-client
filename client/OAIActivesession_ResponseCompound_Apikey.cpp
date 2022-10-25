/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIActivesession_ResponseCompound_Apikey.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActivesession_ResponseCompound_Apikey::OAIActivesession_ResponseCompound_Apikey(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActivesession_ResponseCompound_Apikey::OAIActivesession_ResponseCompound_Apikey() {
    this->initializeModel();
}

OAIActivesession_ResponseCompound_Apikey::~OAIActivesession_ResponseCompound_Apikey() {}

void OAIActivesession_ResponseCompound_Apikey::initializeModel() {

    m_pki_apikey_id_isSet = false;
    m_pki_apikey_id_isValid = false;

    m_s_apikey_description_x_isSet = false;
    m_s_apikey_description_x_isValid = false;
}

void OAIActivesession_ResponseCompound_Apikey::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_ResponseCompound_Apikey::fromJsonObject(QJsonObject json) {

    m_pki_apikey_id_isValid = ::OpenAPI::fromJsonValue(pki_apikey_id, json[QString("pkiApikeyID")]);
    m_pki_apikey_id_isSet = !json[QString("pkiApikeyID")].isNull() && m_pki_apikey_id_isValid;

    m_s_apikey_description_x_isValid = ::OpenAPI::fromJsonValue(s_apikey_description_x, json[QString("sApikeyDescriptionX")]);
    m_s_apikey_description_x_isSet = !json[QString("sApikeyDescriptionX")].isNull() && m_s_apikey_description_x_isValid;
}

QString OAIActivesession_ResponseCompound_Apikey::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_ResponseCompound_Apikey::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_apikey_id_isSet) {
        obj.insert(QString("pkiApikeyID"), ::OpenAPI::toJsonValue(pki_apikey_id));
    }
    if (m_s_apikey_description_x_isSet) {
        obj.insert(QString("sApikeyDescriptionX"), ::OpenAPI::toJsonValue(s_apikey_description_x));
    }
    return obj;
}

qint32 OAIActivesession_ResponseCompound_Apikey::getPkiApikeyId() const {
    return pki_apikey_id;
}
void OAIActivesession_ResponseCompound_Apikey::setPkiApikeyId(const qint32 &pki_apikey_id) {
    this->pki_apikey_id = pki_apikey_id;
    this->m_pki_apikey_id_isSet = true;
}

bool OAIActivesession_ResponseCompound_Apikey::is_pki_apikey_id_Set() const{
    return m_pki_apikey_id_isSet;
}

bool OAIActivesession_ResponseCompound_Apikey::is_pki_apikey_id_Valid() const{
    return m_pki_apikey_id_isValid;
}

QString OAIActivesession_ResponseCompound_Apikey::getSApikeyDescriptionX() const {
    return s_apikey_description_x;
}
void OAIActivesession_ResponseCompound_Apikey::setSApikeyDescriptionX(const QString &s_apikey_description_x) {
    this->s_apikey_description_x = s_apikey_description_x;
    this->m_s_apikey_description_x_isSet = true;
}

bool OAIActivesession_ResponseCompound_Apikey::is_s_apikey_description_x_Set() const{
    return m_s_apikey_description_x_isSet;
}

bool OAIActivesession_ResponseCompound_Apikey::is_s_apikey_description_x_Valid() const{
    return m_s_apikey_description_x_isValid;
}

bool OAIActivesession_ResponseCompound_Apikey::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_apikey_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_ResponseCompound_Apikey::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_apikey_id_isValid && m_s_apikey_description_x_isValid && true;
}

} // namespace OpenAPI
