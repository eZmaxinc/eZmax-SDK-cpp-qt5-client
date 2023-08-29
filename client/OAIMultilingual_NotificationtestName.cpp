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

#include "OAIMultilingual_NotificationtestName.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_NotificationtestName::OAIMultilingual_NotificationtestName(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_NotificationtestName::OAIMultilingual_NotificationtestName() {
    this->initializeModel();
}

OAIMultilingual_NotificationtestName::~OAIMultilingual_NotificationtestName() {}

void OAIMultilingual_NotificationtestName::initializeModel() {

    m_s_notificationtest_name1_isSet = false;
    m_s_notificationtest_name1_isValid = false;

    m_s_notificationtest_name2_isSet = false;
    m_s_notificationtest_name2_isValid = false;
}

void OAIMultilingual_NotificationtestName::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_NotificationtestName::fromJsonObject(QJsonObject json) {

    m_s_notificationtest_name1_isValid = ::OpenAPI::fromJsonValue(m_s_notificationtest_name1, json[QString("sNotificationtestName1")]);
    m_s_notificationtest_name1_isSet = !json[QString("sNotificationtestName1")].isNull() && m_s_notificationtest_name1_isValid;

    m_s_notificationtest_name2_isValid = ::OpenAPI::fromJsonValue(m_s_notificationtest_name2, json[QString("sNotificationtestName2")]);
    m_s_notificationtest_name2_isSet = !json[QString("sNotificationtestName2")].isNull() && m_s_notificationtest_name2_isValid;
}

QString OAIMultilingual_NotificationtestName::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_NotificationtestName::asJsonObject() const {
    QJsonObject obj;
    if (m_s_notificationtest_name1_isSet) {
        obj.insert(QString("sNotificationtestName1"), ::OpenAPI::toJsonValue(m_s_notificationtest_name1));
    }
    if (m_s_notificationtest_name2_isSet) {
        obj.insert(QString("sNotificationtestName2"), ::OpenAPI::toJsonValue(m_s_notificationtest_name2));
    }
    return obj;
}

QString OAIMultilingual_NotificationtestName::getSNotificationtestName1() const {
    return m_s_notificationtest_name1;
}
void OAIMultilingual_NotificationtestName::setSNotificationtestName1(const QString &s_notificationtest_name1) {
    m_s_notificationtest_name1 = s_notificationtest_name1;
    m_s_notificationtest_name1_isSet = true;
}

bool OAIMultilingual_NotificationtestName::is_s_notificationtest_name1_Set() const{
    return m_s_notificationtest_name1_isSet;
}

bool OAIMultilingual_NotificationtestName::is_s_notificationtest_name1_Valid() const{
    return m_s_notificationtest_name1_isValid;
}

QString OAIMultilingual_NotificationtestName::getSNotificationtestName2() const {
    return m_s_notificationtest_name2;
}
void OAIMultilingual_NotificationtestName::setSNotificationtestName2(const QString &s_notificationtest_name2) {
    m_s_notificationtest_name2 = s_notificationtest_name2;
    m_s_notificationtest_name2_isSet = true;
}

bool OAIMultilingual_NotificationtestName::is_s_notificationtest_name2_Set() const{
    return m_s_notificationtest_name2_isSet;
}

bool OAIMultilingual_NotificationtestName::is_s_notificationtest_name2_Valid() const{
    return m_s_notificationtest_name2_isValid;
}

bool OAIMultilingual_NotificationtestName::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_notificationtest_name1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationtest_name2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMultilingual_NotificationtestName::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
