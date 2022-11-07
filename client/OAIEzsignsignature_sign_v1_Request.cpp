/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignature_sign_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_sign_v1_Request::OAIEzsignsignature_sign_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_sign_v1_Request::OAIEzsignsignature_sign_v1_Request() {
    this->initializeModel();
}

OAIEzsignsignature_sign_v1_Request::~OAIEzsignsignature_sign_v1_Request() {}

void OAIEzsignsignature_sign_v1_Request::initializeModel() {

    m_s_value_isSet = false;
    m_s_value_isValid = false;

    m_b_is_automatic_isSet = false;
    m_b_is_automatic_isValid = false;
}

void OAIEzsignsignature_sign_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_sign_v1_Request::fromJsonObject(QJsonObject json) {

    m_s_value_isValid = ::OpenAPI::fromJsonValue(s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;

    m_b_is_automatic_isValid = ::OpenAPI::fromJsonValue(b_is_automatic, json[QString("bIsAutomatic")]);
    m_b_is_automatic_isSet = !json[QString("bIsAutomatic")].isNull() && m_b_is_automatic_isValid;
}

QString OAIEzsignsignature_sign_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_sign_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::OpenAPI::toJsonValue(s_value));
    }
    if (m_b_is_automatic_isSet) {
        obj.insert(QString("bIsAutomatic"), ::OpenAPI::toJsonValue(b_is_automatic));
    }
    return obj;
}

QString OAIEzsignsignature_sign_v1_Request::getSValue() const {
    return s_value;
}
void OAIEzsignsignature_sign_v1_Request::setSValue(const QString &s_value) {
    this->s_value = s_value;
    this->m_s_value_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_value_Valid() const{
    return m_s_value_isValid;
}

bool OAIEzsignsignature_sign_v1_Request::isBIsAutomatic() const {
    return b_is_automatic;
}
void OAIEzsignsignature_sign_v1_Request::setBIsAutomatic(const bool &b_is_automatic) {
    this->b_is_automatic = b_is_automatic;
    this->m_b_is_automatic_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_b_is_automatic_Set() const{
    return m_b_is_automatic_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_b_is_automatic_Valid() const{
    return m_b_is_automatic_isValid;
}

bool OAIEzsignsignature_sign_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_is_automatic_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_sign_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_is_automatic_isValid && true;
}

} // namespace OpenAPI
