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

#include "OAICustom_AutocompleteElementDisabled_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_AutocompleteElementDisabled_Response::OAICustom_AutocompleteElementDisabled_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_AutocompleteElementDisabled_Response::OAICustom_AutocompleteElementDisabled_Response() {
    this->initializeModel();
}

OAICustom_AutocompleteElementDisabled_Response::~OAICustom_AutocompleteElementDisabled_Response() {}

void OAICustom_AutocompleteElementDisabled_Response::initializeModel() {

    m_b_disabled_isSet = false;
    m_b_disabled_isValid = false;

    m_s_category_isSet = false;
    m_s_category_isValid = false;

    m_s_label_isSet = false;
    m_s_label_isValid = false;

    m_s_value_isSet = false;
    m_s_value_isValid = false;

    m_m_value_isSet = false;
    m_m_value_isValid = false;

    m_b_active_isSet = false;
    m_b_active_isValid = false;
}

void OAICustom_AutocompleteElementDisabled_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_AutocompleteElementDisabled_Response::fromJsonObject(QJsonObject json) {

    m_b_disabled_isValid = ::OpenAPI::fromJsonValue(b_disabled, json[QString("bDisabled")]);
    m_b_disabled_isSet = !json[QString("bDisabled")].isNull() && m_b_disabled_isValid;

    m_s_category_isValid = ::OpenAPI::fromJsonValue(s_category, json[QString("sCategory")]);
    m_s_category_isSet = !json[QString("sCategory")].isNull() && m_s_category_isValid;

    m_s_label_isValid = ::OpenAPI::fromJsonValue(s_label, json[QString("sLabel")]);
    m_s_label_isSet = !json[QString("sLabel")].isNull() && m_s_label_isValid;

    m_s_value_isValid = ::OpenAPI::fromJsonValue(s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;

    m_m_value_isValid = ::OpenAPI::fromJsonValue(m_value, json[QString("mValue")]);
    m_m_value_isSet = !json[QString("mValue")].isNull() && m_m_value_isValid;

    m_b_active_isValid = ::OpenAPI::fromJsonValue(b_active, json[QString("bActive")]);
    m_b_active_isSet = !json[QString("bActive")].isNull() && m_b_active_isValid;
}

QString OAICustom_AutocompleteElementDisabled_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_AutocompleteElementDisabled_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_b_disabled_isSet) {
        obj.insert(QString("bDisabled"), ::OpenAPI::toJsonValue(b_disabled));
    }
    if (m_s_category_isSet) {
        obj.insert(QString("sCategory"), ::OpenAPI::toJsonValue(s_category));
    }
    if (m_s_label_isSet) {
        obj.insert(QString("sLabel"), ::OpenAPI::toJsonValue(s_label));
    }
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::OpenAPI::toJsonValue(s_value));
    }
    if (m_m_value_isSet) {
        obj.insert(QString("mValue"), ::OpenAPI::toJsonValue(m_value));
    }
    if (m_b_active_isSet) {
        obj.insert(QString("bActive"), ::OpenAPI::toJsonValue(b_active));
    }
    return obj;
}

bool OAICustom_AutocompleteElementDisabled_Response::isBDisabled() const {
    return b_disabled;
}
void OAICustom_AutocompleteElementDisabled_Response::setBDisabled(const bool &b_disabled) {
    this->b_disabled = b_disabled;
    this->m_b_disabled_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_b_disabled_Set() const{
    return m_b_disabled_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_b_disabled_Valid() const{
    return m_b_disabled_isValid;
}

QString OAICustom_AutocompleteElementDisabled_Response::getSCategory() const {
    return s_category;
}
void OAICustom_AutocompleteElementDisabled_Response::setSCategory(const QString &s_category) {
    this->s_category = s_category;
    this->m_s_category_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_s_category_Set() const{
    return m_s_category_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_s_category_Valid() const{
    return m_s_category_isValid;
}

QString OAICustom_AutocompleteElementDisabled_Response::getSLabel() const {
    return s_label;
}
void OAICustom_AutocompleteElementDisabled_Response::setSLabel(const QString &s_label) {
    this->s_label = s_label;
    this->m_s_label_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_s_label_Set() const{
    return m_s_label_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_s_label_Valid() const{
    return m_s_label_isValid;
}

QString OAICustom_AutocompleteElementDisabled_Response::getSValue() const {
    return s_value;
}
void OAICustom_AutocompleteElementDisabled_Response::setSValue(const QString &s_value) {
    this->s_value = s_value;
    this->m_s_value_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_s_value_Valid() const{
    return m_s_value_isValid;
}

QString OAICustom_AutocompleteElementDisabled_Response::getMValue() const {
    return m_value;
}
void OAICustom_AutocompleteElementDisabled_Response::setMValue(const QString &m_value) {
    this->m_value = m_value;
    this->m_m_value_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_m_value_Set() const{
    return m_m_value_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_m_value_Valid() const{
    return m_m_value_isValid;
}

bool OAICustom_AutocompleteElementDisabled_Response::isBActive() const {
    return b_active;
}
void OAICustom_AutocompleteElementDisabled_Response::setBActive(const bool &b_active) {
    this->b_active = b_active;
    this->m_b_active_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_b_active_Set() const{
    return m_b_active_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response::is_b_active_Valid() const{
    return m_b_active_isValid;
}

bool OAICustom_AutocompleteElementDisabled_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_category_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_m_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_active_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_AutocompleteElementDisabled_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_disabled_isValid && m_s_category_isValid && m_s_label_isValid && m_s_value_isValid && m_b_active_isValid && true;
}

} // namespace OpenAPI
