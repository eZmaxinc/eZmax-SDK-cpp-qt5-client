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

#include "Activesession_generateFederationToken_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Activesession_generateFederationToken_v1_Response_mPayload::Activesession_generateFederationToken_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Activesession_generateFederationToken_v1_Response_mPayload::Activesession_generateFederationToken_v1_Response_mPayload() {
    this->initializeModel();
}

Activesession_generateFederationToken_v1_Response_mPayload::~Activesession_generateFederationToken_v1_Response_mPayload() {}

void Activesession_generateFederationToken_v1_Response_mPayload::initializeModel() {

    m_obj_apikeyfederation_isSet = false;
    m_obj_apikeyfederation_isValid = false;

    m_s_ezmaxcustomercode_url_isSet = false;
    m_s_ezmaxcustomercode_url_isValid = false;
}

void Activesession_generateFederationToken_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Activesession_generateFederationToken_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_apikeyfederation_isValid = ::Ezmaxapi::fromJsonValue(m_obj_apikeyfederation, json[QString("objApikeyfederation")]);
    m_obj_apikeyfederation_isSet = !json[QString("objApikeyfederation")].isNull() && m_obj_apikeyfederation_isValid;

    m_s_ezmaxcustomercode_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezmaxcustomercode_url, json[QString("sEzmaxcustomercodeUrl")]);
    m_s_ezmaxcustomercode_url_isSet = !json[QString("sEzmaxcustomercodeUrl")].isNull() && m_s_ezmaxcustomercode_url_isValid;
}

QString Activesession_generateFederationToken_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Activesession_generateFederationToken_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_apikeyfederation.isSet()) {
        obj.insert(QString("objApikeyfederation"), ::Ezmaxapi::toJsonValue(m_obj_apikeyfederation));
    }
    if (m_s_ezmaxcustomercode_url_isSet) {
        obj.insert(QString("sEzmaxcustomercodeUrl"), ::Ezmaxapi::toJsonValue(m_s_ezmaxcustomercode_url));
    }
    return obj;
}

Custom_Apikeyfederation Activesession_generateFederationToken_v1_Response_mPayload::getObjApikeyfederation() const {
    return m_obj_apikeyfederation;
}
void Activesession_generateFederationToken_v1_Response_mPayload::setObjApikeyfederation(const Custom_Apikeyfederation &obj_apikeyfederation) {
    m_obj_apikeyfederation = obj_apikeyfederation;
    m_obj_apikeyfederation_isSet = true;
}

bool Activesession_generateFederationToken_v1_Response_mPayload::is_obj_apikeyfederation_Set() const{
    return m_obj_apikeyfederation_isSet;
}

bool Activesession_generateFederationToken_v1_Response_mPayload::is_obj_apikeyfederation_Valid() const{
    return m_obj_apikeyfederation_isValid;
}

QString Activesession_generateFederationToken_v1_Response_mPayload::getSEzmaxcustomercodeUrl() const {
    return m_s_ezmaxcustomercode_url;
}
void Activesession_generateFederationToken_v1_Response_mPayload::setSEzmaxcustomercodeUrl(const QString &s_ezmaxcustomercode_url) {
    m_s_ezmaxcustomercode_url = s_ezmaxcustomercode_url;
    m_s_ezmaxcustomercode_url_isSet = true;
}

bool Activesession_generateFederationToken_v1_Response_mPayload::is_s_ezmaxcustomercode_url_Set() const{
    return m_s_ezmaxcustomercode_url_isSet;
}

bool Activesession_generateFederationToken_v1_Response_mPayload::is_s_ezmaxcustomercode_url_Valid() const{
    return m_s_ezmaxcustomercode_url_isValid;
}

bool Activesession_generateFederationToken_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_apikeyfederation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezmaxcustomercode_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Activesession_generateFederationToken_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_apikeyfederation_isValid && m_s_ezmaxcustomercode_url_isValid && true;
}

} // namespace Ezmaxapi
