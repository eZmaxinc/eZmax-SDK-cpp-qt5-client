/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_DropdownElement_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_DropdownElement_Request::OAICustom_DropdownElement_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_DropdownElement_Request::OAICustom_DropdownElement_Request() {
    this->initializeModel();
}

OAICustom_DropdownElement_Request::~OAICustom_DropdownElement_Request() {}

void OAICustom_DropdownElement_Request::initializeModel() {

    m_s_label_isSet = false;
    m_s_label_isValid = false;

    m_s_value_isSet = false;
    m_s_value_isValid = false;
}

void OAICustom_DropdownElement_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_DropdownElement_Request::fromJsonObject(QJsonObject json) {

    m_s_label_isValid = ::OpenAPI::fromJsonValue(s_label, json[QString("sLabel")]);
    m_s_label_isSet = !json[QString("sLabel")].isNull() && m_s_label_isValid;

    m_s_value_isValid = ::OpenAPI::fromJsonValue(s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;
}

QString OAICustom_DropdownElement_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_DropdownElement_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_s_label_isSet) {
        obj.insert(QString("sLabel"), ::OpenAPI::toJsonValue(s_label));
    }
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::OpenAPI::toJsonValue(s_value));
    }
    return obj;
}

QString OAICustom_DropdownElement_Request::getSLabel() const {
    return s_label;
}
void OAICustom_DropdownElement_Request::setSLabel(const QString &s_label) {
    this->s_label = s_label;
    this->m_s_label_isSet = true;
}

bool OAICustom_DropdownElement_Request::is_s_label_Set() const{
    return m_s_label_isSet;
}

bool OAICustom_DropdownElement_Request::is_s_label_Valid() const{
    return m_s_label_isValid;
}

QString OAICustom_DropdownElement_Request::getSValue() const {
    return s_value;
}
void OAICustom_DropdownElement_Request::setSValue(const QString &s_value) {
    this->s_value = s_value;
    this->m_s_value_isSet = true;
}

bool OAICustom_DropdownElement_Request::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool OAICustom_DropdownElement_Request::is_s_value_Valid() const{
    return m_s_value_isValid;
}

bool OAICustom_DropdownElement_Request::isSet() const {
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

bool OAICustom_DropdownElement_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_label_isValid && m_s_value_isValid && true;
}

} // namespace OpenAPI
