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

#include "OAICustom_Ezsignformfielderrortest_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Ezsignformfielderrortest_Response::OAICustom_Ezsignformfielderrortest_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Ezsignformfielderrortest_Response::OAICustom_Ezsignformfielderrortest_Response() {
    this->initializeModel();
}

OAICustom_Ezsignformfielderrortest_Response::~OAICustom_Ezsignformfielderrortest_Response() {}

void OAICustom_Ezsignformfielderrortest_Response::initializeModel() {

    m_s_ezsignformfielderrortest_name_isSet = false;
    m_s_ezsignformfielderrortest_name_isValid = false;

    m_s_ezsignformfielderrortest_detail_isSet = false;
    m_s_ezsignformfielderrortest_detail_isValid = false;
}

void OAICustom_Ezsignformfielderrortest_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Ezsignformfielderrortest_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfielderrortest_name_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignformfielderrortest_name, json[QString("sEzsignformfielderrortestName")]);
    m_s_ezsignformfielderrortest_name_isSet = !json[QString("sEzsignformfielderrortestName")].isNull() && m_s_ezsignformfielderrortest_name_isValid;

    m_s_ezsignformfielderrortest_detail_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignformfielderrortest_detail, json[QString("sEzsignformfielderrortestDetail")]);
    m_s_ezsignformfielderrortest_detail_isSet = !json[QString("sEzsignformfielderrortestDetail")].isNull() && m_s_ezsignformfielderrortest_detail_isValid;
}

QString OAICustom_Ezsignformfielderrortest_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Ezsignformfielderrortest_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfielderrortest_name_isSet) {
        obj.insert(QString("sEzsignformfielderrortestName"), ::OpenAPI::toJsonValue(m_s_ezsignformfielderrortest_name));
    }
    if (m_s_ezsignformfielderrortest_detail_isSet) {
        obj.insert(QString("sEzsignformfielderrortestDetail"), ::OpenAPI::toJsonValue(m_s_ezsignformfielderrortest_detail));
    }
    return obj;
}

QString OAICustom_Ezsignformfielderrortest_Response::getSEzsignformfielderrortestName() const {
    return m_s_ezsignformfielderrortest_name;
}
void OAICustom_Ezsignformfielderrortest_Response::setSEzsignformfielderrortestName(const QString &s_ezsignformfielderrortest_name) {
    m_s_ezsignformfielderrortest_name = s_ezsignformfielderrortest_name;
    m_s_ezsignformfielderrortest_name_isSet = true;
}

bool OAICustom_Ezsignformfielderrortest_Response::is_s_ezsignformfielderrortest_name_Set() const{
    return m_s_ezsignformfielderrortest_name_isSet;
}

bool OAICustom_Ezsignformfielderrortest_Response::is_s_ezsignformfielderrortest_name_Valid() const{
    return m_s_ezsignformfielderrortest_name_isValid;
}

QString OAICustom_Ezsignformfielderrortest_Response::getSEzsignformfielderrortestDetail() const {
    return m_s_ezsignformfielderrortest_detail;
}
void OAICustom_Ezsignformfielderrortest_Response::setSEzsignformfielderrortestDetail(const QString &s_ezsignformfielderrortest_detail) {
    m_s_ezsignformfielderrortest_detail = s_ezsignformfielderrortest_detail;
    m_s_ezsignformfielderrortest_detail_isSet = true;
}

bool OAICustom_Ezsignformfielderrortest_Response::is_s_ezsignformfielderrortest_detail_Set() const{
    return m_s_ezsignformfielderrortest_detail_isSet;
}

bool OAICustom_Ezsignformfielderrortest_Response::is_s_ezsignformfielderrortest_detail_Valid() const{
    return m_s_ezsignformfielderrortest_detail_isValid;
}

bool OAICustom_Ezsignformfielderrortest_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignformfielderrortest_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfielderrortest_detail_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Ezsignformfielderrortest_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfielderrortest_name_isValid && m_s_ezsignformfielderrortest_detail_isValid && true;
}

} // namespace OpenAPI
