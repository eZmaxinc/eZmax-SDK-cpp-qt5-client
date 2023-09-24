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

#include "OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::~OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload() {}

void OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::initializeModel() {

    m_i_communication_count_isSet = false;
    m_i_communication_count_isValid = false;
}

void OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_i_communication_count_isValid = ::OpenAPI::fromJsonValue(m_i_communication_count, json[QString("iCommunicationCount")]);
    m_i_communication_count_isSet = !json[QString("iCommunicationCount")].isNull() && m_i_communication_count_isValid;
}

QString OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_i_communication_count_isSet) {
        obj.insert(QString("iCommunicationCount"), ::OpenAPI::toJsonValue(m_i_communication_count));
    }
    return obj;
}

qint32 OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::getICommunicationCount() const {
    return m_i_communication_count;
}
void OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::setICommunicationCount(const qint32 &i_communication_count) {
    m_i_communication_count = i_communication_count;
    m_i_communication_count_isSet = true;
}

bool OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::is_i_communication_count_Set() const{
    return m_i_communication_count_isSet;
}

bool OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::is_i_communication_count_Valid() const{
    return m_i_communication_count_isValid;
}

bool OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_communication_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getCommunicationCount_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_communication_count_isValid && true;
}

} // namespace OpenAPI
