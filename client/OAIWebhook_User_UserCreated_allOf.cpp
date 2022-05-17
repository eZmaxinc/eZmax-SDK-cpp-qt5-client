/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_User_UserCreated_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_User_UserCreated_allOf::OAIWebhook_User_UserCreated_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_User_UserCreated_allOf::OAIWebhook_User_UserCreated_allOf() {
    this->initializeModel();
}

OAIWebhook_User_UserCreated_allOf::~OAIWebhook_User_UserCreated_allOf() {}

void OAIWebhook_User_UserCreated_allOf::initializeModel() {

    m_obj_user_isSet = false;
    m_obj_user_isValid = false;
}

void OAIWebhook_User_UserCreated_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_User_UserCreated_allOf::fromJsonObject(QJsonObject json) {

    m_obj_user_isValid = ::OpenAPI::fromJsonValue(obj_user, json[QString("objUser")]);
    m_obj_user_isSet = !json[QString("objUser")].isNull() && m_obj_user_isValid;
}

QString OAIWebhook_User_UserCreated_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_User_UserCreated_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_user.isSet()) {
        obj.insert(QString("objUser"), ::OpenAPI::toJsonValue(obj_user));
    }
    return obj;
}

OAIUser_ResponseCompound OAIWebhook_User_UserCreated_allOf::getObjUser() const {
    return obj_user;
}
void OAIWebhook_User_UserCreated_allOf::setObjUser(const OAIUser_ResponseCompound &obj_user) {
    this->obj_user = obj_user;
    this->m_obj_user_isSet = true;
}

bool OAIWebhook_User_UserCreated_allOf::is_obj_user_Set() const{
    return m_obj_user_isSet;
}

bool OAIWebhook_User_UserCreated_allOf::is_obj_user_Valid() const{
    return m_obj_user_isValid;
}

bool OAIWebhook_User_UserCreated_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_user.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_User_UserCreated_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_user_isValid && true;
}

} // namespace OpenAPI
