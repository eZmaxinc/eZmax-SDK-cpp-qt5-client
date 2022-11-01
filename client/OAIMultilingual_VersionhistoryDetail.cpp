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

#include "OAIMultilingual_VersionhistoryDetail.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_VersionhistoryDetail::OAIMultilingual_VersionhistoryDetail(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_VersionhistoryDetail::OAIMultilingual_VersionhistoryDetail() {
    this->initializeModel();
}

OAIMultilingual_VersionhistoryDetail::~OAIMultilingual_VersionhistoryDetail() {}

void OAIMultilingual_VersionhistoryDetail::initializeModel() {

    m_t_versionhistory_detail1_isSet = false;
    m_t_versionhistory_detail1_isValid = false;

    m_t_versionhistory_detail2_isSet = false;
    m_t_versionhistory_detail2_isValid = false;
}

void OAIMultilingual_VersionhistoryDetail::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_VersionhistoryDetail::fromJsonObject(QJsonObject json) {

    m_t_versionhistory_detail1_isValid = ::OpenAPI::fromJsonValue(t_versionhistory_detail1, json[QString("tVersionhistoryDetail1")]);
    m_t_versionhistory_detail1_isSet = !json[QString("tVersionhistoryDetail1")].isNull() && m_t_versionhistory_detail1_isValid;

    m_t_versionhistory_detail2_isValid = ::OpenAPI::fromJsonValue(t_versionhistory_detail2, json[QString("tVersionhistoryDetail2")]);
    m_t_versionhistory_detail2_isSet = !json[QString("tVersionhistoryDetail2")].isNull() && m_t_versionhistory_detail2_isValid;
}

QString OAIMultilingual_VersionhistoryDetail::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_VersionhistoryDetail::asJsonObject() const {
    QJsonObject obj;
    if (m_t_versionhistory_detail1_isSet) {
        obj.insert(QString("tVersionhistoryDetail1"), ::OpenAPI::toJsonValue(t_versionhistory_detail1));
    }
    if (m_t_versionhistory_detail2_isSet) {
        obj.insert(QString("tVersionhistoryDetail2"), ::OpenAPI::toJsonValue(t_versionhistory_detail2));
    }
    return obj;
}

QString OAIMultilingual_VersionhistoryDetail::getTVersionhistoryDetail1() const {
    return t_versionhistory_detail1;
}
void OAIMultilingual_VersionhistoryDetail::setTVersionhistoryDetail1(const QString &t_versionhistory_detail1) {
    this->t_versionhistory_detail1 = t_versionhistory_detail1;
    this->m_t_versionhistory_detail1_isSet = true;
}

bool OAIMultilingual_VersionhistoryDetail::is_t_versionhistory_detail1_Set() const{
    return m_t_versionhistory_detail1_isSet;
}

bool OAIMultilingual_VersionhistoryDetail::is_t_versionhistory_detail1_Valid() const{
    return m_t_versionhistory_detail1_isValid;
}

QString OAIMultilingual_VersionhistoryDetail::getTVersionhistoryDetail2() const {
    return t_versionhistory_detail2;
}
void OAIMultilingual_VersionhistoryDetail::setTVersionhistoryDetail2(const QString &t_versionhistory_detail2) {
    this->t_versionhistory_detail2 = t_versionhistory_detail2;
    this->m_t_versionhistory_detail2_isSet = true;
}

bool OAIMultilingual_VersionhistoryDetail::is_t_versionhistory_detail2_Set() const{
    return m_t_versionhistory_detail2_isSet;
}

bool OAIMultilingual_VersionhistoryDetail::is_t_versionhistory_detail2_Valid() const{
    return m_t_versionhistory_detail2_isValid;
}

bool OAIMultilingual_VersionhistoryDetail::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_t_versionhistory_detail1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_versionhistory_detail2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMultilingual_VersionhistoryDetail::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
