/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Response_Error_EzsignformValidation.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_Error_EzsignformValidation::OAICommon_Response_Error_EzsignformValidation(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_Error_EzsignformValidation::OAICommon_Response_Error_EzsignformValidation() {
    this->initializeModel();
}

OAICommon_Response_Error_EzsignformValidation::~OAICommon_Response_Error_EzsignformValidation() {}

void OAICommon_Response_Error_EzsignformValidation::initializeModel() {

    m_s_error_message_isSet = false;
    m_s_error_message_isValid = false;

    m_e_error_code_isSet = false;
    m_e_error_code_isValid = false;

    m_a_obj_ezsignformfielderror_isSet = false;
    m_a_obj_ezsignformfielderror_isValid = false;
}

void OAICommon_Response_Error_EzsignformValidation::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_Error_EzsignformValidation::fromJsonObject(QJsonObject json) {

    m_s_error_message_isValid = ::OpenAPI::fromJsonValue(m_s_error_message, json[QString("sErrorMessage")]);
    m_s_error_message_isSet = !json[QString("sErrorMessage")].isNull() && m_s_error_message_isValid;

    m_e_error_code_isValid = ::OpenAPI::fromJsonValue(m_e_error_code, json[QString("eErrorCode")]);
    m_e_error_code_isSet = !json[QString("eErrorCode")].isNull() && m_e_error_code_isValid;

    m_a_obj_ezsignformfielderror_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsignformfielderror, json[QString("a_objEzsignformfielderror")]);
    m_a_obj_ezsignformfielderror_isSet = !json[QString("a_objEzsignformfielderror")].isNull() && m_a_obj_ezsignformfielderror_isValid;
}

QString OAICommon_Response_Error_EzsignformValidation::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_Error_EzsignformValidation::asJsonObject() const {
    QJsonObject obj;
    if (m_s_error_message_isSet) {
        obj.insert(QString("sErrorMessage"), ::OpenAPI::toJsonValue(m_s_error_message));
    }
    if (m_e_error_code.isSet()) {
        obj.insert(QString("eErrorCode"), ::OpenAPI::toJsonValue(m_e_error_code));
    }
    if (m_a_obj_ezsignformfielderror.size() > 0) {
        obj.insert(QString("a_objEzsignformfielderror"), ::OpenAPI::toJsonValue(m_a_obj_ezsignformfielderror));
    }
    return obj;
}

QString OAICommon_Response_Error_EzsignformValidation::getSErrorMessage() const {
    return m_s_error_message;
}
void OAICommon_Response_Error_EzsignformValidation::setSErrorMessage(const QString &s_error_message) {
    m_s_error_message = s_error_message;
    m_s_error_message_isSet = true;
}

bool OAICommon_Response_Error_EzsignformValidation::is_s_error_message_Set() const{
    return m_s_error_message_isSet;
}

bool OAICommon_Response_Error_EzsignformValidation::is_s_error_message_Valid() const{
    return m_s_error_message_isValid;
}

OAIField_eErrorCode OAICommon_Response_Error_EzsignformValidation::getEErrorCode() const {
    return m_e_error_code;
}
void OAICommon_Response_Error_EzsignformValidation::setEErrorCode(const OAIField_eErrorCode &e_error_code) {
    m_e_error_code = e_error_code;
    m_e_error_code_isSet = true;
}

bool OAICommon_Response_Error_EzsignformValidation::is_e_error_code_Set() const{
    return m_e_error_code_isSet;
}

bool OAICommon_Response_Error_EzsignformValidation::is_e_error_code_Valid() const{
    return m_e_error_code_isValid;
}

QList<OAICustom_Ezsignformfielderror_Response> OAICommon_Response_Error_EzsignformValidation::getAObjEzsignformfielderror() const {
    return m_a_obj_ezsignformfielderror;
}
void OAICommon_Response_Error_EzsignformValidation::setAObjEzsignformfielderror(const QList<OAICustom_Ezsignformfielderror_Response> &a_obj_ezsignformfielderror) {
    m_a_obj_ezsignformfielderror = a_obj_ezsignformfielderror;
    m_a_obj_ezsignformfielderror_isSet = true;
}

bool OAICommon_Response_Error_EzsignformValidation::is_a_obj_ezsignformfielderror_Set() const{
    return m_a_obj_ezsignformfielderror_isSet;
}

bool OAICommon_Response_Error_EzsignformValidation::is_a_obj_ezsignformfielderror_Valid() const{
    return m_a_obj_ezsignformfielderror_isValid;
}

bool OAICommon_Response_Error_EzsignformValidation::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_error_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_error_code.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfielderror.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_Error_EzsignformValidation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_error_message_isValid && m_e_error_code_isValid && m_a_obj_ezsignformfielderror_isValid && true;
}

} // namespace OpenAPI
