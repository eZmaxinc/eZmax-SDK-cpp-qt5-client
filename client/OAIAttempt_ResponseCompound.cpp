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

#include "OAIAttempt_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAttempt_ResponseCompound::OAIAttempt_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAttempt_ResponseCompound::OAIAttempt_ResponseCompound() {
    this->initializeModel();
}

OAIAttempt_ResponseCompound::~OAIAttempt_ResponseCompound() {}

void OAIAttempt_ResponseCompound::initializeModel() {

    m_dt_attempt_start_isSet = false;
    m_dt_attempt_start_isValid = false;

    m_s_attempt_result_isSet = false;
    m_s_attempt_result_isValid = false;

    m_i_attempt_duration_isSet = false;
    m_i_attempt_duration_isValid = false;
}

void OAIAttempt_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAttempt_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_dt_attempt_start_isValid = ::OpenAPI::fromJsonValue(dt_attempt_start, json[QString("dtAttemptStart")]);
    m_dt_attempt_start_isSet = !json[QString("dtAttemptStart")].isNull() && m_dt_attempt_start_isValid;

    m_s_attempt_result_isValid = ::OpenAPI::fromJsonValue(s_attempt_result, json[QString("sAttemptResult")]);
    m_s_attempt_result_isSet = !json[QString("sAttemptResult")].isNull() && m_s_attempt_result_isValid;

    m_i_attempt_duration_isValid = ::OpenAPI::fromJsonValue(i_attempt_duration, json[QString("iAttemptDuration")]);
    m_i_attempt_duration_isSet = !json[QString("iAttemptDuration")].isNull() && m_i_attempt_duration_isValid;
}

QString OAIAttempt_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAttempt_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_dt_attempt_start_isSet) {
        obj.insert(QString("dtAttemptStart"), ::OpenAPI::toJsonValue(dt_attempt_start));
    }
    if (m_s_attempt_result_isSet) {
        obj.insert(QString("sAttemptResult"), ::OpenAPI::toJsonValue(s_attempt_result));
    }
    if (m_i_attempt_duration_isSet) {
        obj.insert(QString("iAttemptDuration"), ::OpenAPI::toJsonValue(i_attempt_duration));
    }
    return obj;
}

QString OAIAttempt_ResponseCompound::getDtAttemptStart() const {
    return dt_attempt_start;
}
void OAIAttempt_ResponseCompound::setDtAttemptStart(const QString &dt_attempt_start) {
    this->dt_attempt_start = dt_attempt_start;
    this->m_dt_attempt_start_isSet = true;
}

bool OAIAttempt_ResponseCompound::is_dt_attempt_start_Set() const{
    return m_dt_attempt_start_isSet;
}

bool OAIAttempt_ResponseCompound::is_dt_attempt_start_Valid() const{
    return m_dt_attempt_start_isValid;
}

QString OAIAttempt_ResponseCompound::getSAttemptResult() const {
    return s_attempt_result;
}
void OAIAttempt_ResponseCompound::setSAttemptResult(const QString &s_attempt_result) {
    this->s_attempt_result = s_attempt_result;
    this->m_s_attempt_result_isSet = true;
}

bool OAIAttempt_ResponseCompound::is_s_attempt_result_Set() const{
    return m_s_attempt_result_isSet;
}

bool OAIAttempt_ResponseCompound::is_s_attempt_result_Valid() const{
    return m_s_attempt_result_isValid;
}

qint32 OAIAttempt_ResponseCompound::getIAttemptDuration() const {
    return i_attempt_duration;
}
void OAIAttempt_ResponseCompound::setIAttemptDuration(const qint32 &i_attempt_duration) {
    this->i_attempt_duration = i_attempt_duration;
    this->m_i_attempt_duration_isSet = true;
}

bool OAIAttempt_ResponseCompound::is_i_attempt_duration_Set() const{
    return m_i_attempt_duration_isSet;
}

bool OAIAttempt_ResponseCompound::is_i_attempt_duration_Valid() const{
    return m_i_attempt_duration_isValid;
}

bool OAIAttempt_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_dt_attempt_start_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_attempt_result_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_attempt_duration_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAttempt_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_attempt_start_isValid && m_s_attempt_result_isValid && m_i_attempt_duration_isValid && true;
}

} // namespace OpenAPI
