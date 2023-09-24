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

#include "OAIMultilingual_UsergroupName.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_UsergroupName::OAIMultilingual_UsergroupName(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_UsergroupName::OAIMultilingual_UsergroupName() {
    this->initializeModel();
}

OAIMultilingual_UsergroupName::~OAIMultilingual_UsergroupName() {}

void OAIMultilingual_UsergroupName::initializeModel() {

    m_s_usergroup_name1_isSet = false;
    m_s_usergroup_name1_isValid = false;

    m_s_usergroup_name2_isSet = false;
    m_s_usergroup_name2_isValid = false;
}

void OAIMultilingual_UsergroupName::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_UsergroupName::fromJsonObject(QJsonObject json) {

    m_s_usergroup_name1_isValid = ::OpenAPI::fromJsonValue(m_s_usergroup_name1, json[QString("sUsergroupName1")]);
    m_s_usergroup_name1_isSet = !json[QString("sUsergroupName1")].isNull() && m_s_usergroup_name1_isValid;

    m_s_usergroup_name2_isValid = ::OpenAPI::fromJsonValue(m_s_usergroup_name2, json[QString("sUsergroupName2")]);
    m_s_usergroup_name2_isSet = !json[QString("sUsergroupName2")].isNull() && m_s_usergroup_name2_isValid;
}

QString OAIMultilingual_UsergroupName::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_UsergroupName::asJsonObject() const {
    QJsonObject obj;
    if (m_s_usergroup_name1_isSet) {
        obj.insert(QString("sUsergroupName1"), ::OpenAPI::toJsonValue(m_s_usergroup_name1));
    }
    if (m_s_usergroup_name2_isSet) {
        obj.insert(QString("sUsergroupName2"), ::OpenAPI::toJsonValue(m_s_usergroup_name2));
    }
    return obj;
}

QString OAIMultilingual_UsergroupName::getSUsergroupName1() const {
    return m_s_usergroup_name1;
}
void OAIMultilingual_UsergroupName::setSUsergroupName1(const QString &s_usergroup_name1) {
    m_s_usergroup_name1 = s_usergroup_name1;
    m_s_usergroup_name1_isSet = true;
}

bool OAIMultilingual_UsergroupName::is_s_usergroup_name1_Set() const{
    return m_s_usergroup_name1_isSet;
}

bool OAIMultilingual_UsergroupName::is_s_usergroup_name1_Valid() const{
    return m_s_usergroup_name1_isValid;
}

QString OAIMultilingual_UsergroupName::getSUsergroupName2() const {
    return m_s_usergroup_name2;
}
void OAIMultilingual_UsergroupName::setSUsergroupName2(const QString &s_usergroup_name2) {
    m_s_usergroup_name2 = s_usergroup_name2;
    m_s_usergroup_name2_isSet = true;
}

bool OAIMultilingual_UsergroupName::is_s_usergroup_name2_Set() const{
    return m_s_usergroup_name2_isSet;
}

bool OAIMultilingual_UsergroupName::is_s_usergroup_name2_Valid() const{
    return m_s_usergroup_name2_isValid;
}

bool OAIMultilingual_UsergroupName::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_usergroup_name1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_usergroup_name2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMultilingual_UsergroupName::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
