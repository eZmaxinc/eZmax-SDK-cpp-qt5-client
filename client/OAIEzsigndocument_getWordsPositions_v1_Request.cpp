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

#include "OAIEzsigndocument_getWordsPositions_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getWordsPositions_v1_Request::OAIEzsigndocument_getWordsPositions_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getWordsPositions_v1_Request::OAIEzsigndocument_getWordsPositions_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_getWordsPositions_v1_Request::~OAIEzsigndocument_getWordsPositions_v1_Request() {}

void OAIEzsigndocument_getWordsPositions_v1_Request::initializeModel() {

    m_e_get_isSet = false;
    m_e_get_isValid = false;

    m_b_word_case_sensitive_isSet = false;
    m_b_word_case_sensitive_isValid = false;

    m_a_s_word_isSet = false;
    m_a_s_word_isValid = false;
}

void OAIEzsigndocument_getWordsPositions_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getWordsPositions_v1_Request::fromJsonObject(QJsonObject json) {

    m_e_get_isValid = ::OpenAPI::fromJsonValue(e_get, json[QString("eGet")]);
    m_e_get_isSet = !json[QString("eGet")].isNull() && m_e_get_isValid;

    m_b_word_case_sensitive_isValid = ::OpenAPI::fromJsonValue(b_word_case_sensitive, json[QString("bWordCaseSensitive")]);
    m_b_word_case_sensitive_isSet = !json[QString("bWordCaseSensitive")].isNull() && m_b_word_case_sensitive_isValid;

    m_a_s_word_isValid = ::OpenAPI::fromJsonValue(a_s_word, json[QString("a_sWord")]);
    m_a_s_word_isSet = !json[QString("a_sWord")].isNull() && m_a_s_word_isValid;
}

QString OAIEzsigndocument_getWordsPositions_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getWordsPositions_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_e_get_isSet) {
        obj.insert(QString("eGet"), ::OpenAPI::toJsonValue(e_get));
    }
    if (m_b_word_case_sensitive_isSet) {
        obj.insert(QString("bWordCaseSensitive"), ::OpenAPI::toJsonValue(b_word_case_sensitive));
    }
    if (a_s_word.size() > 0) {
        obj.insert(QString("a_sWord"), ::OpenAPI::toJsonValue(a_s_word));
    }
    return obj;
}

QString OAIEzsigndocument_getWordsPositions_v1_Request::getEGet() const {
    return e_get;
}
void OAIEzsigndocument_getWordsPositions_v1_Request::setEGet(const QString &e_get) {
    this->e_get = e_get;
    this->m_e_get_isSet = true;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_e_get_Set() const{
    return m_e_get_isSet;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_e_get_Valid() const{
    return m_e_get_isValid;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::isBWordCaseSensitive() const {
    return b_word_case_sensitive;
}
void OAIEzsigndocument_getWordsPositions_v1_Request::setBWordCaseSensitive(const bool &b_word_case_sensitive) {
    this->b_word_case_sensitive = b_word_case_sensitive;
    this->m_b_word_case_sensitive_isSet = true;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_b_word_case_sensitive_Set() const{
    return m_b_word_case_sensitive_isSet;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_b_word_case_sensitive_Valid() const{
    return m_b_word_case_sensitive_isValid;
}

QList<QString> OAIEzsigndocument_getWordsPositions_v1_Request::getASWord() const {
    return a_s_word;
}
void OAIEzsigndocument_getWordsPositions_v1_Request::setASWord(const QList<QString> &a_s_word) {
    this->a_s_word = a_s_word;
    this->m_a_s_word_isSet = true;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_a_s_word_Set() const{
    return m_a_s_word_isSet;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_a_s_word_Valid() const{
    return m_a_s_word_isValid;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::isSet() const {
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

        if (a_s_word.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_get_isValid && m_b_word_case_sensitive_isValid && true;
}

} // namespace OpenAPI
