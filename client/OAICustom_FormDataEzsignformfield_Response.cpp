/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_FormDataEzsignformfield_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_FormDataEzsignformfield_Response::OAICustom_FormDataEzsignformfield_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_FormDataEzsignformfield_Response::OAICustom_FormDataEzsignformfield_Response() {
    this->initializeModel();
}

OAICustom_FormDataEzsignformfield_Response::~OAICustom_FormDataEzsignformfield_Response() {}

void OAICustom_FormDataEzsignformfield_Response::initializeModel() {

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_s_ezsignformfield_value_isSet = false;
    m_s_ezsignformfield_value_isValid = false;
}

void OAICustom_FormDataEzsignformfield_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_FormDataEzsignformfield_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfield_label_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_s_ezsignformfield_value_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignformfield_value, json[QString("sEzsignformfieldValue")]);
    m_s_ezsignformfield_value_isSet = !json[QString("sEzsignformfieldValue")].isNull() && m_s_ezsignformfield_value_isValid;
}

QString OAICustom_FormDataEzsignformfield_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_FormDataEzsignformfield_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::OpenAPI::toJsonValue(m_s_ezsignformfield_label));
    }
    if (m_s_ezsignformfield_value_isSet) {
        obj.insert(QString("sEzsignformfieldValue"), ::OpenAPI::toJsonValue(m_s_ezsignformfield_value));
    }
    return obj;
}

QString OAICustom_FormDataEzsignformfield_Response::getSEzsignformfieldLabel() const {
    return m_s_ezsignformfield_label;
}
void OAICustom_FormDataEzsignformfield_Response::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    m_s_ezsignformfield_label = s_ezsignformfield_label;
    m_s_ezsignformfield_label_isSet = true;
}

bool OAICustom_FormDataEzsignformfield_Response::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool OAICustom_FormDataEzsignformfield_Response::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QString OAICustom_FormDataEzsignformfield_Response::getSEzsignformfieldValue() const {
    return m_s_ezsignformfield_value;
}
void OAICustom_FormDataEzsignformfield_Response::setSEzsignformfieldValue(const QString &s_ezsignformfield_value) {
    m_s_ezsignformfield_value = s_ezsignformfield_value;
    m_s_ezsignformfield_value_isSet = true;
}

bool OAICustom_FormDataEzsignformfield_Response::is_s_ezsignformfield_value_Set() const{
    return m_s_ezsignformfield_value_isSet;
}

bool OAICustom_FormDataEzsignformfield_Response::is_s_ezsignformfield_value_Valid() const{
    return m_s_ezsignformfield_value_isValid;
}

bool OAICustom_FormDataEzsignformfield_Response::isSet() const {
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

bool OAICustom_FormDataEzsignformfield_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfield_label_isValid && m_s_ezsignformfield_value_isValid && true;
}

} // namespace OpenAPI
