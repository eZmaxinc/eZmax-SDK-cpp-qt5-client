/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebsite_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebsite_Request::OAIWebsite_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebsite_Request::OAIWebsite_Request() {
    this->initializeModel();
}

OAIWebsite_Request::~OAIWebsite_Request() {}

void OAIWebsite_Request::initializeModel() {

    m_fki_websitetype_id_isSet = false;
    m_fki_websitetype_id_isValid = false;

    m_s_website_address_isSet = false;
    m_s_website_address_isValid = false;
}

void OAIWebsite_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebsite_Request::fromJsonObject(QJsonObject json) {

    m_fki_websitetype_id_isValid = ::OpenAPI::fromJsonValue(fki_websitetype_id, json[QString("fkiWebsitetypeID")]);
    m_fki_websitetype_id_isSet = !json[QString("fkiWebsitetypeID")].isNull() && m_fki_websitetype_id_isValid;

    m_s_website_address_isValid = ::OpenAPI::fromJsonValue(s_website_address, json[QString("sWebsiteAddress")]);
    m_s_website_address_isSet = !json[QString("sWebsiteAddress")].isNull() && m_s_website_address_isValid;
}

QString OAIWebsite_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebsite_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_websitetype_id_isSet) {
        obj.insert(QString("fkiWebsitetypeID"), ::OpenAPI::toJsonValue(fki_websitetype_id));
    }
    if (m_s_website_address_isSet) {
        obj.insert(QString("sWebsiteAddress"), ::OpenAPI::toJsonValue(s_website_address));
    }
    return obj;
}

qint32 OAIWebsite_Request::getFkiWebsitetypeId() const {
    return fki_websitetype_id;
}
void OAIWebsite_Request::setFkiWebsitetypeId(const qint32 &fki_websitetype_id) {
    this->fki_websitetype_id = fki_websitetype_id;
    this->m_fki_websitetype_id_isSet = true;
}

bool OAIWebsite_Request::is_fki_websitetype_id_Set() const{
    return m_fki_websitetype_id_isSet;
}

bool OAIWebsite_Request::is_fki_websitetype_id_Valid() const{
    return m_fki_websitetype_id_isValid;
}

QString OAIWebsite_Request::getSWebsiteAddress() const {
    return s_website_address;
}
void OAIWebsite_Request::setSWebsiteAddress(const QString &s_website_address) {
    this->s_website_address = s_website_address;
    this->m_s_website_address_isSet = true;
}

bool OAIWebsite_Request::is_s_website_address_Set() const{
    return m_s_website_address_isSet;
}

bool OAIWebsite_Request::is_s_website_address_Valid() const{
    return m_s_website_address_isValid;
}

bool OAIWebsite_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_websitetype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_website_address_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebsite_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_websitetype_id_isValid && m_s_website_address_isValid && true;
}

} // namespace OpenAPI
