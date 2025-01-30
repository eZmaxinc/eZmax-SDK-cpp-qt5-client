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

#include "Usergroupexternal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Usergroupexternal_Response::Usergroupexternal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Usergroupexternal_Response::Usergroupexternal_Response() {
    this->initializeModel();
}

Usergroupexternal_Response::~Usergroupexternal_Response() {}

void Usergroupexternal_Response::initializeModel() {

    m_pki_usergroupexternal_id_isSet = false;
    m_pki_usergroupexternal_id_isValid = false;

    m_s_usergroupexternal_name_isSet = false;
    m_s_usergroupexternal_name_isValid = false;

    m_s_usergroupexternal_id_isSet = false;
    m_s_usergroupexternal_id_isValid = false;
}

void Usergroupexternal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Usergroupexternal_Response::fromJsonObject(QJsonObject json) {

    m_pki_usergroupexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_usergroupexternal_id, json[QString("pkiUsergroupexternalID")]);
    m_pki_usergroupexternal_id_isSet = !json[QString("pkiUsergroupexternalID")].isNull() && m_pki_usergroupexternal_id_isValid;

    m_s_usergroupexternal_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_usergroupexternal_name, json[QString("sUsergroupexternalName")]);
    m_s_usergroupexternal_name_isSet = !json[QString("sUsergroupexternalName")].isNull() && m_s_usergroupexternal_name_isValid;

    m_s_usergroupexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_s_usergroupexternal_id, json[QString("sUsergroupexternalID")]);
    m_s_usergroupexternal_id_isSet = !json[QString("sUsergroupexternalID")].isNull() && m_s_usergroupexternal_id_isValid;
}

QString Usergroupexternal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Usergroupexternal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroupexternal_id_isSet) {
        obj.insert(QString("pkiUsergroupexternalID"), ::Ezmaxapi::toJsonValue(m_pki_usergroupexternal_id));
    }
    if (m_s_usergroupexternal_name_isSet) {
        obj.insert(QString("sUsergroupexternalName"), ::Ezmaxapi::toJsonValue(m_s_usergroupexternal_name));
    }
    if (m_s_usergroupexternal_id_isSet) {
        obj.insert(QString("sUsergroupexternalID"), ::Ezmaxapi::toJsonValue(m_s_usergroupexternal_id));
    }
    return obj;
}

qint32 Usergroupexternal_Response::getPkiUsergroupexternalId() const {
    return m_pki_usergroupexternal_id;
}
void Usergroupexternal_Response::setPkiUsergroupexternalId(const qint32 &pki_usergroupexternal_id) {
    m_pki_usergroupexternal_id = pki_usergroupexternal_id;
    m_pki_usergroupexternal_id_isSet = true;
}

bool Usergroupexternal_Response::is_pki_usergroupexternal_id_Set() const{
    return m_pki_usergroupexternal_id_isSet;
}

bool Usergroupexternal_Response::is_pki_usergroupexternal_id_Valid() const{
    return m_pki_usergroupexternal_id_isValid;
}

QString Usergroupexternal_Response::getSUsergroupexternalName() const {
    return m_s_usergroupexternal_name;
}
void Usergroupexternal_Response::setSUsergroupexternalName(const QString &s_usergroupexternal_name) {
    m_s_usergroupexternal_name = s_usergroupexternal_name;
    m_s_usergroupexternal_name_isSet = true;
}

bool Usergroupexternal_Response::is_s_usergroupexternal_name_Set() const{
    return m_s_usergroupexternal_name_isSet;
}

bool Usergroupexternal_Response::is_s_usergroupexternal_name_Valid() const{
    return m_s_usergroupexternal_name_isValid;
}

QString Usergroupexternal_Response::getSUsergroupexternalId() const {
    return m_s_usergroupexternal_id;
}
void Usergroupexternal_Response::setSUsergroupexternalId(const QString &s_usergroupexternal_id) {
    m_s_usergroupexternal_id = s_usergroupexternal_id;
    m_s_usergroupexternal_id_isSet = true;
}

bool Usergroupexternal_Response::is_s_usergroupexternal_id_Set() const{
    return m_s_usergroupexternal_id_isSet;
}

bool Usergroupexternal_Response::is_s_usergroupexternal_id_Valid() const{
    return m_s_usergroupexternal_id_isValid;
}

bool Usergroupexternal_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroupexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_usergroupexternal_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_usergroupexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Usergroupexternal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_usergroupexternal_id_isValid && m_s_usergroupexternal_name_isValid && m_s_usergroupexternal_id_isValid && true;
}

} // namespace Ezmaxapi
