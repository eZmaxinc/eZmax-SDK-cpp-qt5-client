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

#include "OAICustom_DropdownElement_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_DropdownElement_RequestCompound::OAICustom_DropdownElement_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_DropdownElement_RequestCompound::OAICustom_DropdownElement_RequestCompound() {
    this->initializeModel();
}

OAICustom_DropdownElement_RequestCompound::~OAICustom_DropdownElement_RequestCompound() {}

void OAICustom_DropdownElement_RequestCompound::initializeModel() {

    m_s_label_isSet = false;
    m_s_label_isValid = false;

    m_s_value_isSet = false;
    m_s_value_isValid = false;
}

void OAICustom_DropdownElement_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_DropdownElement_RequestCompound::fromJsonObject(QJsonObject json) {

    m_s_label_isValid = ::OpenAPI::fromJsonValue(s_label, json[QString("sLabel")]);
    m_s_label_isSet = !json[QString("sLabel")].isNull() && m_s_label_isValid;

    m_s_value_isValid = ::OpenAPI::fromJsonValue(s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;
}

QString OAICustom_DropdownElement_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_DropdownElement_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_s_label_isSet) {
        obj.insert(QString("sLabel"), ::OpenAPI::toJsonValue(s_label));
    }
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::OpenAPI::toJsonValue(s_value));
    }
    return obj;
}

QString OAICustom_DropdownElement_RequestCompound::getSLabel() const {
    return s_label;
}
void OAICustom_DropdownElement_RequestCompound::setSLabel(const QString &s_label) {
    this->s_label = s_label;
    this->m_s_label_isSet = true;
}

bool OAICustom_DropdownElement_RequestCompound::is_s_label_Set() const{
    return m_s_label_isSet;
}

bool OAICustom_DropdownElement_RequestCompound::is_s_label_Valid() const{
    return m_s_label_isValid;
}

QString OAICustom_DropdownElement_RequestCompound::getSValue() const {
    return s_value;
}
void OAICustom_DropdownElement_RequestCompound::setSValue(const QString &s_value) {
    this->s_value = s_value;
    this->m_s_value_isSet = true;
}

bool OAICustom_DropdownElement_RequestCompound::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool OAICustom_DropdownElement_RequestCompound::is_s_value_Valid() const{
    return m_s_value_isValid;
}

bool OAICustom_DropdownElement_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_DropdownElement_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_label_isValid && m_s_value_isValid && true;
}

} // namespace OpenAPI
