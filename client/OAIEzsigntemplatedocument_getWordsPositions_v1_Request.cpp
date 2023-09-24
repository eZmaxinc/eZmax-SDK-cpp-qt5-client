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

#include "OAIEzsigntemplatedocument_getWordsPositions_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_getWordsPositions_v1_Request::OAIEzsigntemplatedocument_getWordsPositions_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_getWordsPositions_v1_Request::OAIEzsigntemplatedocument_getWordsPositions_v1_Request() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_getWordsPositions_v1_Request::~OAIEzsigntemplatedocument_getWordsPositions_v1_Request() {}

void OAIEzsigntemplatedocument_getWordsPositions_v1_Request::initializeModel() {

    m_e_get_isSet = false;
    m_e_get_isValid = false;

    m_b_word_case_sensitive_isSet = false;
    m_b_word_case_sensitive_isValid = false;

    m_a_s_word_isSet = false;
    m_a_s_word_isValid = false;
}

void OAIEzsigntemplatedocument_getWordsPositions_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_getWordsPositions_v1_Request::fromJsonObject(QJsonObject json) {

    m_e_get_isValid = ::OpenAPI::fromJsonValue(m_e_get, json[QString("eGet")]);
    m_e_get_isSet = !json[QString("eGet")].isNull() && m_e_get_isValid;

    m_b_word_case_sensitive_isValid = ::OpenAPI::fromJsonValue(m_b_word_case_sensitive, json[QString("bWordCaseSensitive")]);
    m_b_word_case_sensitive_isSet = !json[QString("bWordCaseSensitive")].isNull() && m_b_word_case_sensitive_isValid;

    m_a_s_word_isValid = ::OpenAPI::fromJsonValue(m_a_s_word, json[QString("a_sWord")]);
    m_a_s_word_isSet = !json[QString("a_sWord")].isNull() && m_a_s_word_isValid;
}

QString OAIEzsigntemplatedocument_getWordsPositions_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_getWordsPositions_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_e_get_isSet) {
        obj.insert(QString("eGet"), ::OpenAPI::toJsonValue(m_e_get));
    }
    if (m_b_word_case_sensitive_isSet) {
        obj.insert(QString("bWordCaseSensitive"), ::OpenAPI::toJsonValue(m_b_word_case_sensitive));
    }
    if (m_a_s_word.size() > 0) {
        obj.insert(QString("a_sWord"), ::OpenAPI::toJsonValue(m_a_s_word));
    }
    return obj;
}

QString OAIEzsigntemplatedocument_getWordsPositions_v1_Request::getEGet() const {
    return m_e_get;
}
void OAIEzsigntemplatedocument_getWordsPositions_v1_Request::setEGet(const QString &e_get) {
    m_e_get = e_get;
    m_e_get_isSet = true;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::is_e_get_Set() const{
    return m_e_get_isSet;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::is_e_get_Valid() const{
    return m_e_get_isValid;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::isBWordCaseSensitive() const {
    return m_b_word_case_sensitive;
}
void OAIEzsigntemplatedocument_getWordsPositions_v1_Request::setBWordCaseSensitive(const bool &b_word_case_sensitive) {
    m_b_word_case_sensitive = b_word_case_sensitive;
    m_b_word_case_sensitive_isSet = true;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::is_b_word_case_sensitive_Set() const{
    return m_b_word_case_sensitive_isSet;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::is_b_word_case_sensitive_Valid() const{
    return m_b_word_case_sensitive_isValid;
}

QList<QString> OAIEzsigntemplatedocument_getWordsPositions_v1_Request::getASWord() const {
    return m_a_s_word;
}
void OAIEzsigntemplatedocument_getWordsPositions_v1_Request::setASWord(const QList<QString> &a_s_word) {
    m_a_s_word = a_s_word;
    m_a_s_word_isSet = true;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::is_a_s_word_Set() const{
    return m_a_s_word_isSet;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::is_a_s_word_Valid() const{
    return m_a_s_word_isValid;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_get_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_word_case_sensitive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_s_word.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_getWordsPositions_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_get_isValid && m_b_word_case_sensitive_isValid && true;
}

} // namespace OpenAPI
