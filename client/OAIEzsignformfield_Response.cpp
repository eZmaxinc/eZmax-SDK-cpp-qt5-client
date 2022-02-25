/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignformfield_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfield_Response::OAIEzsignformfield_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfield_Response::OAIEzsignformfield_Response() {
    this->initializeModel();
}

OAIEzsignformfield_Response::~OAIEzsignformfield_Response() {}

void OAIEzsignformfield_Response::initializeModel() {

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_s_ezsignformfield_value_isSet = false;
    m_s_ezsignformfield_value_isValid = false;
}

void OAIEzsignformfield_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfield_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfield_label_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_s_ezsignformfield_value_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfield_value, json[QString("sEzsignformfieldValue")]);
    m_s_ezsignformfield_value_isSet = !json[QString("sEzsignformfieldValue")].isNull() && m_s_ezsignformfield_value_isValid;
}

QString OAIEzsignformfield_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfield_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::OpenAPI::toJsonValue(s_ezsignformfield_label));
    }
    if (m_s_ezsignformfield_value_isSet) {
        obj.insert(QString("sEzsignformfieldValue"), ::OpenAPI::toJsonValue(s_ezsignformfield_value));
    }
    return obj;
}

QString OAIEzsignformfield_Response::getSEzsignformfieldLabel() const {
    return s_ezsignformfield_label;
}
void OAIEzsignformfield_Response::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    this->s_ezsignformfield_label = s_ezsignformfield_label;
    this->m_s_ezsignformfield_label_isSet = true;
}

bool OAIEzsignformfield_Response::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool OAIEzsignformfield_Response::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QString OAIEzsignformfield_Response::getSEzsignformfieldValue() const {
    return s_ezsignformfield_value;
}
void OAIEzsignformfield_Response::setSEzsignformfieldValue(const QString &s_ezsignformfield_value) {
    this->s_ezsignformfield_value = s_ezsignformfield_value;
    this->m_s_ezsignformfield_value_isSet = true;
}

bool OAIEzsignformfield_Response::is_s_ezsignformfield_value_Set() const{
    return m_s_ezsignformfield_value_isSet;
}

bool OAIEzsignformfield_Response::is_s_ezsignformfield_value_Valid() const{
    return m_s_ezsignformfield_value_isValid;
}

bool OAIEzsignformfield_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_value_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfield_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfield_label_isValid && m_s_ezsignformfield_value_isValid && true;
}

} // namespace OpenAPI
