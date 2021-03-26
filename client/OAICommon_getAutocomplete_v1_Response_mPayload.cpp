/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.39
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_getAutocomplete_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_getAutocomplete_v1_Response_mPayload::OAICommon_getAutocomplete_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_getAutocomplete_v1_Response_mPayload::OAICommon_getAutocomplete_v1_Response_mPayload() {
    this->initializeModel();
}

OAICommon_getAutocomplete_v1_Response_mPayload::~OAICommon_getAutocomplete_v1_Response_mPayload() {}

void OAICommon_getAutocomplete_v1_Response_mPayload::initializeModel() {

    m_group_isSet = false;
    m_group_isValid = false;

    m_id_isSet = false;
    m_id_isValid = false;

    m_option_isSet = false;
    m_option_isValid = false;
}

void OAICommon_getAutocomplete_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_getAutocomplete_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_group_isValid = ::OpenAPI::fromJsonValue(group, json[QString("group")]);
    m_group_isSet = !json[QString("group")].isNull() && m_group_isValid;

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_option_isValid = ::OpenAPI::fromJsonValue(option, json[QString("option")]);
    m_option_isSet = !json[QString("option")].isNull() && m_option_isValid;
}

QString OAICommon_getAutocomplete_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_getAutocomplete_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_group_isSet) {
        obj.insert(QString("group"), ::OpenAPI::toJsonValue(group));
    }
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_option_isSet) {
        obj.insert(QString("option"), ::OpenAPI::toJsonValue(option));
    }
    return obj;
}

QString OAICommon_getAutocomplete_v1_Response_mPayload::getGroup() const {
    return group;
}
void OAICommon_getAutocomplete_v1_Response_mPayload::setGroup(const QString &group) {
    this->group = group;
    this->m_group_isSet = true;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::is_group_Set() const{
    return m_group_isSet;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::is_group_Valid() const{
    return m_group_isValid;
}

QString OAICommon_getAutocomplete_v1_Response_mPayload::getId() const {
    return id;
}
void OAICommon_getAutocomplete_v1_Response_mPayload::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::is_id_Set() const{
    return m_id_isSet;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::is_id_Valid() const{
    return m_id_isValid;
}

QString OAICommon_getAutocomplete_v1_Response_mPayload::getOption() const {
    return option;
}
void OAICommon_getAutocomplete_v1_Response_mPayload::setOption(const QString &option) {
    this->option = option;
    this->m_option_isSet = true;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::is_option_Set() const{
    return m_option_isSet;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::is_option_Valid() const{
    return m_option_isValid;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_group_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_option_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_getAutocomplete_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_group_isValid && m_id_isValid && m_option_isValid && true;
}

} // namespace OpenAPI
