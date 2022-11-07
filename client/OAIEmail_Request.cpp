/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEmail_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEmail_Request::OAIEmail_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEmail_Request::OAIEmail_Request() {
    this->initializeModel();
}

OAIEmail_Request::~OAIEmail_Request() {}

void OAIEmail_Request::initializeModel() {

    m_fki_emailtype_id_isSet = false;
    m_fki_emailtype_id_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;
}

void OAIEmail_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEmail_Request::fromJsonObject(QJsonObject json) {

    m_fki_emailtype_id_isValid = ::OpenAPI::fromJsonValue(fki_emailtype_id, json[QString("fkiEmailtypeID")]);
    m_fki_emailtype_id_isSet = !json[QString("fkiEmailtypeID")].isNull() && m_fki_emailtype_id_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;
}

QString OAIEmail_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEmail_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_emailtype_id_isSet) {
        obj.insert(QString("fkiEmailtypeID"), ::OpenAPI::toJsonValue(fki_emailtype_id));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    return obj;
}

qint32 OAIEmail_Request::getFkiEmailtypeId() const {
    return fki_emailtype_id;
}
void OAIEmail_Request::setFkiEmailtypeId(const qint32 &fki_emailtype_id) {
    this->fki_emailtype_id = fki_emailtype_id;
    this->m_fki_emailtype_id_isSet = true;
}

bool OAIEmail_Request::is_fki_emailtype_id_Set() const{
    return m_fki_emailtype_id_isSet;
}

bool OAIEmail_Request::is_fki_emailtype_id_Valid() const{
    return m_fki_emailtype_id_isValid;
}

QString OAIEmail_Request::getSEmailAddress() const {
    return s_email_address;
}
void OAIEmail_Request::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAIEmail_Request::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIEmail_Request::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

bool OAIEmail_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
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

bool OAIEmail_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_emailtype_id_isValid && m_s_email_address_isValid && true;
}

} // namespace OpenAPI
