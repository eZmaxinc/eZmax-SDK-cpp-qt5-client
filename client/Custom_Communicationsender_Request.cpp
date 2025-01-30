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

#include "Custom_Communicationsender_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_Communicationsender_Request::Custom_Communicationsender_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_Communicationsender_Request::Custom_Communicationsender_Request() {
    this->initializeModel();
}

Custom_Communicationsender_Request::~Custom_Communicationsender_Request() {}

void Custom_Communicationsender_Request::initializeModel() {

    m_fki_agent_id_isSet = false;
    m_fki_agent_id_isValid = false;

    m_fki_broker_id_isSet = false;
    m_fki_broker_id_isValid = false;

    m_fki_mailboxshared_id_isSet = false;
    m_fki_mailboxshared_id_isValid = false;

    m_fki_phonelineshared_id_isSet = false;
    m_fki_phonelineshared_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;
}

void Custom_Communicationsender_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_Communicationsender_Request::fromJsonObject(QJsonObject json) {

    m_fki_agent_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_agent_id, json[QString("fkiAgentID")]);
    m_fki_agent_id_isSet = !json[QString("fkiAgentID")].isNull() && m_fki_agent_id_isValid;

    m_fki_broker_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_broker_id, json[QString("fkiBrokerID")]);
    m_fki_broker_id_isSet = !json[QString("fkiBrokerID")].isNull() && m_fki_broker_id_isValid;

    m_fki_mailboxshared_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_mailboxshared_id, json[QString("fkiMailboxsharedID")]);
    m_fki_mailboxshared_id_isSet = !json[QString("fkiMailboxsharedID")].isNull() && m_fki_mailboxshared_id_isValid;

    m_fki_phonelineshared_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_phonelineshared_id, json[QString("fkiPhonelinesharedID")]);
    m_fki_phonelineshared_id_isSet = !json[QString("fkiPhonelinesharedID")].isNull() && m_fki_phonelineshared_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;
}

QString Custom_Communicationsender_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_Communicationsender_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_agent_id_isSet) {
        obj.insert(QString("fkiAgentID"), ::Ezmaxapi::toJsonValue(m_fki_agent_id));
    }
    if (m_fki_broker_id_isSet) {
        obj.insert(QString("fkiBrokerID"), ::Ezmaxapi::toJsonValue(m_fki_broker_id));
    }
    if (m_fki_mailboxshared_id_isSet) {
        obj.insert(QString("fkiMailboxsharedID"), ::Ezmaxapi::toJsonValue(m_fki_mailboxshared_id));
    }
    if (m_fki_phonelineshared_id_isSet) {
        obj.insert(QString("fkiPhonelinesharedID"), ::Ezmaxapi::toJsonValue(m_fki_phonelineshared_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    return obj;
}

qint32 Custom_Communicationsender_Request::getFkiAgentId() const {
    return m_fki_agent_id;
}
void Custom_Communicationsender_Request::setFkiAgentId(const qint32 &fki_agent_id) {
    m_fki_agent_id = fki_agent_id;
    m_fki_agent_id_isSet = true;
}

bool Custom_Communicationsender_Request::is_fki_agent_id_Set() const{
    return m_fki_agent_id_isSet;
}

bool Custom_Communicationsender_Request::is_fki_agent_id_Valid() const{
    return m_fki_agent_id_isValid;
}

qint32 Custom_Communicationsender_Request::getFkiBrokerId() const {
    return m_fki_broker_id;
}
void Custom_Communicationsender_Request::setFkiBrokerId(const qint32 &fki_broker_id) {
    m_fki_broker_id = fki_broker_id;
    m_fki_broker_id_isSet = true;
}

bool Custom_Communicationsender_Request::is_fki_broker_id_Set() const{
    return m_fki_broker_id_isSet;
}

bool Custom_Communicationsender_Request::is_fki_broker_id_Valid() const{
    return m_fki_broker_id_isValid;
}

qint32 Custom_Communicationsender_Request::getFkiMailboxsharedId() const {
    return m_fki_mailboxshared_id;
}
void Custom_Communicationsender_Request::setFkiMailboxsharedId(const qint32 &fki_mailboxshared_id) {
    m_fki_mailboxshared_id = fki_mailboxshared_id;
    m_fki_mailboxshared_id_isSet = true;
}

bool Custom_Communicationsender_Request::is_fki_mailboxshared_id_Set() const{
    return m_fki_mailboxshared_id_isSet;
}

bool Custom_Communicationsender_Request::is_fki_mailboxshared_id_Valid() const{
    return m_fki_mailboxshared_id_isValid;
}

qint32 Custom_Communicationsender_Request::getFkiPhonelinesharedId() const {
    return m_fki_phonelineshared_id;
}
void Custom_Communicationsender_Request::setFkiPhonelinesharedId(const qint32 &fki_phonelineshared_id) {
    m_fki_phonelineshared_id = fki_phonelineshared_id;
    m_fki_phonelineshared_id_isSet = true;
}

bool Custom_Communicationsender_Request::is_fki_phonelineshared_id_Set() const{
    return m_fki_phonelineshared_id_isSet;
}

bool Custom_Communicationsender_Request::is_fki_phonelineshared_id_Valid() const{
    return m_fki_phonelineshared_id_isValid;
}

qint32 Custom_Communicationsender_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Custom_Communicationsender_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Custom_Communicationsender_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Custom_Communicationsender_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

bool Custom_Communicationsender_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_agent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_broker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_mailboxshared_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_phonelineshared_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_Communicationsender_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
