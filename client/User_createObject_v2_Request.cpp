/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "User_createObject_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

User_createObject_v2_Request::User_createObject_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

User_createObject_v2_Request::User_createObject_v2_Request() {
    this->initializeModel();
}

User_createObject_v2_Request::~User_createObject_v2_Request() {}

void User_createObject_v2_Request::initializeModel() {

    m_a_obj_user_isSet = false;
    m_a_obj_user_isValid = false;
}

void User_createObject_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void User_createObject_v2_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_user_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_user, json[QString("a_objUser")]);
    m_a_obj_user_isSet = !json[QString("a_objUser")].isNull() && m_a_obj_user_isValid;
}

QString User_createObject_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject User_createObject_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_user.size() > 0) {
        obj.insert(QString("a_objUser"), ::Ezmaxapi::toJsonValue(m_a_obj_user));
    }
    return obj;
}

QList<User_RequestCompoundV2> User_createObject_v2_Request::getAObjUser() const {
    return m_a_obj_user;
}
void User_createObject_v2_Request::setAObjUser(const QList<User_RequestCompoundV2> &a_obj_user) {
    m_a_obj_user = a_obj_user;
    m_a_obj_user_isSet = true;
}

bool User_createObject_v2_Request::is_a_obj_user_Set() const{
    return m_a_obj_user_isSet;
}

bool User_createObject_v2_Request::is_a_obj_user_Valid() const{
    return m_a_obj_user_isValid;
}

bool User_createObject_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_user.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool User_createObject_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_user_isValid && true;
}

} // namespace Ezmaxapi
