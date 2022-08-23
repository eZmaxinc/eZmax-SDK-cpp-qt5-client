/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_AutocompleteElementDisabled_Response_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_AutocompleteElementDisabled_Response_allOf::OAICustom_AutocompleteElementDisabled_Response_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_AutocompleteElementDisabled_Response_allOf::OAICustom_AutocompleteElementDisabled_Response_allOf() {
    this->initializeModel();
}

OAICustom_AutocompleteElementDisabled_Response_allOf::~OAICustom_AutocompleteElementDisabled_Response_allOf() {}

void OAICustom_AutocompleteElementDisabled_Response_allOf::initializeModel() {

    m_b_disabled_isSet = false;
    m_b_disabled_isValid = false;
}

void OAICustom_AutocompleteElementDisabled_Response_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_AutocompleteElementDisabled_Response_allOf::fromJsonObject(QJsonObject json) {

    m_b_disabled_isValid = ::OpenAPI::fromJsonValue(b_disabled, json[QString("bDisabled")]);
    m_b_disabled_isSet = !json[QString("bDisabled")].isNull() && m_b_disabled_isValid;
}

QString OAICustom_AutocompleteElementDisabled_Response_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_AutocompleteElementDisabled_Response_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_b_disabled_isSet) {
        obj.insert(QString("bDisabled"), ::OpenAPI::toJsonValue(b_disabled));
    }
    return obj;
}

bool OAICustom_AutocompleteElementDisabled_Response_allOf::isBDisabled() const {
    return b_disabled;
}
void OAICustom_AutocompleteElementDisabled_Response_allOf::setBDisabled(const bool &b_disabled) {
    this->b_disabled = b_disabled;
    this->m_b_disabled_isSet = true;
}

bool OAICustom_AutocompleteElementDisabled_Response_allOf::is_b_disabled_Set() const{
    return m_b_disabled_isSet;
}

bool OAICustom_AutocompleteElementDisabled_Response_allOf::is_b_disabled_Valid() const{
    return m_b_disabled_isValid;
}

bool OAICustom_AutocompleteElementDisabled_Response_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_b_disabled_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_AutocompleteElementDisabled_Response_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_disabled_isValid && true;
}

} // namespace OpenAPI
