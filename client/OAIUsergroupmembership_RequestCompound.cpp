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

#include "OAIUsergroupmembership_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroupmembership_RequestCompound::OAIUsergroupmembership_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroupmembership_RequestCompound::OAIUsergroupmembership_RequestCompound() {
    this->initializeModel();
}

OAIUsergroupmembership_RequestCompound::~OAIUsergroupmembership_RequestCompound() {}

void OAIUsergroupmembership_RequestCompound::initializeModel() {

    m_pki_usergroupmembership_id_isSet = false;
    m_pki_usergroupmembership_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;
}

void OAIUsergroupmembership_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroupmembership_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_usergroupmembership_id_isValid = ::OpenAPI::fromJsonValue(m_pki_usergroupmembership_id, json[QString("pkiUsergroupmembershipID")]);
    m_pki_usergroupmembership_id_isSet = !json[QString("pkiUsergroupmembershipID")].isNull() && m_pki_usergroupmembership_id_isValid;

    m_fki_usergroup_id_isValid = ::OpenAPI::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;
}

QString OAIUsergroupmembership_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroupmembership_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_usergroupmembership_id_isSet) {
        obj.insert(QString("pkiUsergroupmembershipID"), ::OpenAPI::toJsonValue(m_pki_usergroupmembership_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::OpenAPI::toJsonValue(m_fki_usergroup_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(m_fki_user_id));
    }
    return obj;
}

qint32 OAIUsergroupmembership_RequestCompound::getPkiUsergroupmembershipId() const {
    return m_pki_usergroupmembership_id;
}
void OAIUsergroupmembership_RequestCompound::setPkiUsergroupmembershipId(const qint32 &pki_usergroupmembership_id) {
    m_pki_usergroupmembership_id = pki_usergroupmembership_id;
    m_pki_usergroupmembership_id_isSet = true;
}

bool OAIUsergroupmembership_RequestCompound::is_pki_usergroupmembership_id_Set() const{
    return m_pki_usergroupmembership_id_isSet;
}

bool OAIUsergroupmembership_RequestCompound::is_pki_usergroupmembership_id_Valid() const{
    return m_pki_usergroupmembership_id_isValid;
}

qint32 OAIUsergroupmembership_RequestCompound::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void OAIUsergroupmembership_RequestCompound::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool OAIUsergroupmembership_RequestCompound::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool OAIUsergroupmembership_RequestCompound::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

qint32 OAIUsergroupmembership_RequestCompound::getFkiUserId() const {
    return m_fki_user_id;
}
void OAIUsergroupmembership_RequestCompound::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool OAIUsergroupmembership_RequestCompound::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIUsergroupmembership_RequestCompound::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

bool OAIUsergroupmembership_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_usergroupmembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
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

bool OAIUsergroupmembership_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_usergroup_id_isValid && m_fki_user_id_isValid && true;
}

} // namespace OpenAPI
