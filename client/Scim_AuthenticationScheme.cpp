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

#include "Scim_AuthenticationScheme.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Scim_AuthenticationScheme::Scim_AuthenticationScheme(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Scim_AuthenticationScheme::Scim_AuthenticationScheme() {
    this->initializeModel();
}

Scim_AuthenticationScheme::~Scim_AuthenticationScheme() {}

void Scim_AuthenticationScheme::initializeModel() {

    m_description_isSet = false;
    m_description_isValid = false;

    m_name_isSet = false;
    m_name_isValid = false;

    m_type_isSet = false;
    m_type_isValid = false;
}

void Scim_AuthenticationScheme::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Scim_AuthenticationScheme::fromJsonObject(QJsonObject json) {

    m_description_isValid = ::Ezmaxapi::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_name_isValid = ::Ezmaxapi::fromJsonValue(m_name, json[QString("name")]);
    m_name_isSet = !json[QString("name")].isNull() && m_name_isValid;

    m_type_isValid = ::Ezmaxapi::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;
}

QString Scim_AuthenticationScheme::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Scim_AuthenticationScheme::asJsonObject() const {
    QJsonObject obj;
    if (m_description_isSet) {
        obj.insert(QString("description"), ::Ezmaxapi::toJsonValue(m_description));
    }
    if (m_name_isSet) {
        obj.insert(QString("name"), ::Ezmaxapi::toJsonValue(m_name));
    }
    if (m_type_isSet) {
        obj.insert(QString("type"), ::Ezmaxapi::toJsonValue(m_type));
    }
    return obj;
}

QString Scim_AuthenticationScheme::getDescription() const {
    return m_description;
}
void Scim_AuthenticationScheme::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool Scim_AuthenticationScheme::is_description_Set() const{
    return m_description_isSet;
}

bool Scim_AuthenticationScheme::is_description_Valid() const{
    return m_description_isValid;
}

QString Scim_AuthenticationScheme::getName() const {
    return m_name;
}
void Scim_AuthenticationScheme::setName(const QString &name) {
    m_name = name;
    m_name_isSet = true;
}

bool Scim_AuthenticationScheme::is_name_Set() const{
    return m_name_isSet;
}

bool Scim_AuthenticationScheme::is_name_Valid() const{
    return m_name_isValid;
}

QString Scim_AuthenticationScheme::getType() const {
    return m_type;
}
void Scim_AuthenticationScheme::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool Scim_AuthenticationScheme::is_type_Set() const{
    return m_type_isSet;
}

bool Scim_AuthenticationScheme::is_type_Valid() const{
    return m_type_isValid;
}

bool Scim_AuthenticationScheme::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Scim_AuthenticationScheme::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_description_isValid && m_name_isValid && m_type_isValid && true;
}

} // namespace Ezmaxapi
