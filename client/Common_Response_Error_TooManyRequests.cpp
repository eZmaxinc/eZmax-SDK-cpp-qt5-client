/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Common_Response_Error_TooManyRequests.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Common_Response_Error_TooManyRequests::Common_Response_Error_TooManyRequests(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Common_Response_Error_TooManyRequests::Common_Response_Error_TooManyRequests() {
    this->initializeModel();
}

Common_Response_Error_TooManyRequests::~Common_Response_Error_TooManyRequests() {}

void Common_Response_Error_TooManyRequests::initializeModel() {

    m_s_error_message_isSet = false;
    m_s_error_message_isValid = false;

    m_e_error_code_isSet = false;
    m_e_error_code_isValid = false;

    m_a_s_error_messagedetail_isSet = false;
    m_a_s_error_messagedetail_isValid = false;
}

void Common_Response_Error_TooManyRequests::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Common_Response_Error_TooManyRequests::fromJsonObject(QJsonObject json) {

    m_s_error_message_isValid = ::Ezmaxapi::fromJsonValue(m_s_error_message, json[QString("sErrorMessage")]);
    m_s_error_message_isSet = !json[QString("sErrorMessage")].isNull() && m_s_error_message_isValid;

    m_e_error_code_isValid = ::Ezmaxapi::fromJsonValue(m_e_error_code, json[QString("eErrorCode")]);
    m_e_error_code_isSet = !json[QString("eErrorCode")].isNull() && m_e_error_code_isValid;

    m_a_s_error_messagedetail_isValid = ::Ezmaxapi::fromJsonValue(m_a_s_error_messagedetail, json[QString("a_sErrorMessagedetail")]);
    m_a_s_error_messagedetail_isSet = !json[QString("a_sErrorMessagedetail")].isNull() && m_a_s_error_messagedetail_isValid;
}

QString Common_Response_Error_TooManyRequests::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Common_Response_Error_TooManyRequests::asJsonObject() const {
    QJsonObject obj;
    if (m_s_error_message_isSet) {
        obj.insert(QString("sErrorMessage"), ::Ezmaxapi::toJsonValue(m_s_error_message));
    }
    if (m_e_error_code.isSet()) {
        obj.insert(QString("eErrorCode"), ::Ezmaxapi::toJsonValue(m_e_error_code));
    }
    if (m_a_s_error_messagedetail.size() > 0) {
        obj.insert(QString("a_sErrorMessagedetail"), ::Ezmaxapi::toJsonValue(m_a_s_error_messagedetail));
    }
    return obj;
}

QString Common_Response_Error_TooManyRequests::getSErrorMessage() const {
    return m_s_error_message;
}
void Common_Response_Error_TooManyRequests::setSErrorMessage(const QString &s_error_message) {
    m_s_error_message = s_error_message;
    m_s_error_message_isSet = true;
}

bool Common_Response_Error_TooManyRequests::is_s_error_message_Set() const{
    return m_s_error_message_isSet;
}

bool Common_Response_Error_TooManyRequests::is_s_error_message_Valid() const{
    return m_s_error_message_isValid;
}

Field_eErrorCode Common_Response_Error_TooManyRequests::getEErrorCode() const {
    return m_e_error_code;
}
void Common_Response_Error_TooManyRequests::setEErrorCode(const Field_eErrorCode &e_error_code) {
    m_e_error_code = e_error_code;
    m_e_error_code_isSet = true;
}

bool Common_Response_Error_TooManyRequests::is_e_error_code_Set() const{
    return m_e_error_code_isSet;
}

bool Common_Response_Error_TooManyRequests::is_e_error_code_Valid() const{
    return m_e_error_code_isValid;
}

QList<QString> Common_Response_Error_TooManyRequests::getASErrorMessagedetail() const {
    return m_a_s_error_messagedetail;
}
void Common_Response_Error_TooManyRequests::setASErrorMessagedetail(const QList<QString> &a_s_error_messagedetail) {
    m_a_s_error_messagedetail = a_s_error_messagedetail;
    m_a_s_error_messagedetail_isSet = true;
}

bool Common_Response_Error_TooManyRequests::is_a_s_error_messagedetail_Set() const{
    return m_a_s_error_messagedetail_isSet;
}

bool Common_Response_Error_TooManyRequests::is_a_s_error_messagedetail_Valid() const{
    return m_a_s_error_messagedetail_isValid;
}

bool Common_Response_Error_TooManyRequests::isSet() const {
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

        if (m_a_s_error_messagedetail.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Common_Response_Error_TooManyRequests::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_error_message_isValid && m_e_error_code_isValid && true;
}

} // namespace Ezmaxapi
