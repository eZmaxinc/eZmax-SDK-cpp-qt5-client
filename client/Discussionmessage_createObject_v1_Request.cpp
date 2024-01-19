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

#include "Discussionmessage_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussionmessage_createObject_v1_Request::Discussionmessage_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussionmessage_createObject_v1_Request::Discussionmessage_createObject_v1_Request() {
    this->initializeModel();
}

Discussionmessage_createObject_v1_Request::~Discussionmessage_createObject_v1_Request() {}

void Discussionmessage_createObject_v1_Request::initializeModel() {

    m_a_obj_discussionmessage_isSet = false;
    m_a_obj_discussionmessage_isValid = false;
}

void Discussionmessage_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussionmessage_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_discussionmessage_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_discussionmessage, json[QString("a_objDiscussionmessage")]);
    m_a_obj_discussionmessage_isSet = !json[QString("a_objDiscussionmessage")].isNull() && m_a_obj_discussionmessage_isValid;
}

QString Discussionmessage_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussionmessage_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_discussionmessage.size() > 0) {
        obj.insert(QString("a_objDiscussionmessage"), ::Ezmaxapi::toJsonValue(m_a_obj_discussionmessage));
    }
    return obj;
}

QList<Discussionmessage_RequestCompound> Discussionmessage_createObject_v1_Request::getAObjDiscussionmessage() const {
    return m_a_obj_discussionmessage;
}
void Discussionmessage_createObject_v1_Request::setAObjDiscussionmessage(const QList<Discussionmessage_RequestCompound> &a_obj_discussionmessage) {
    m_a_obj_discussionmessage = a_obj_discussionmessage;
    m_a_obj_discussionmessage_isSet = true;
}

bool Discussionmessage_createObject_v1_Request::is_a_obj_discussionmessage_Set() const{
    return m_a_obj_discussionmessage_isSet;
}

bool Discussionmessage_createObject_v1_Request::is_a_obj_discussionmessage_Valid() const{
    return m_a_obj_discussionmessage_isValid;
}

bool Discussionmessage_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_discussionmessage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussionmessage_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_discussionmessage_isValid && true;
}

} // namespace Ezmaxapi
