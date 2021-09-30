/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
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

    m_a_s_words_isSet = false;
    m_a_s_words_isValid = false;
}

void OAIEzsigndocument_getWordsPositions_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getWordsPositions_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_s_words_isValid = ::OpenAPI::fromJsonValue(a_s_words, json[QString("a_sWords")]);
    m_a_s_words_isSet = !json[QString("a_sWords")].isNull() && m_a_s_words_isValid;
}

QString OAIEzsigndocument_getWordsPositions_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getWordsPositions_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_s_words.size() > 0) {
        obj.insert(QString("a_sWords"), ::OpenAPI::toJsonValue(a_s_words));
    }
    return obj;
}

QList<QString> OAIEzsigndocument_getWordsPositions_v1_Request::getASWords() const {
    return a_s_words;
}
void OAIEzsigndocument_getWordsPositions_v1_Request::setASWords(const QList<QString> &a_s_words) {
    this->a_s_words = a_s_words;
    this->m_a_s_words_isSet = true;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_a_s_words_Set() const{
    return m_a_s_words_isSet;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::is_a_s_words_Valid() const{
    return m_a_s_words_isValid;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_s_words.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getWordsPositions_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_s_words_isValid && true;
}

} // namespace OpenAPI
