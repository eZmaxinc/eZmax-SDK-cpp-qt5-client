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

#include "Discussionmembership_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussionmembership_Request::Discussionmembership_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussionmembership_Request::Discussionmembership_Request() {
    this->initializeModel();
}

Discussionmembership_Request::~Discussionmembership_Request() {}

void Discussionmembership_Request::initializeModel() {

    m_pki_discussionmembership_id_isSet = false;
    m_pki_discussionmembership_id_isValid = false;

    m_fki_discussion_id_isSet = false;
    m_fki_discussion_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_fki_modulesection_id_isSet = false;
    m_fki_modulesection_id_isValid = false;

    m_dt_discussionmembership_joined_isSet = false;
    m_dt_discussionmembership_joined_isValid = false;
}

void Discussionmembership_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussionmembership_Request::fromJsonObject(QJsonObject json) {

    m_pki_discussionmembership_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_discussionmembership_id, json[QString("pkiDiscussionmembershipID")]);
    m_pki_discussionmembership_id_isSet = !json[QString("pkiDiscussionmembershipID")].isNull() && m_pki_discussionmembership_id_isValid;

    m_fki_discussion_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_discussion_id, json[QString("fkiDiscussionID")]);
    m_fki_discussion_id_isSet = !json[QString("fkiDiscussionID")].isNull() && m_fki_discussion_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_fki_modulesection_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_modulesection_id, json[QString("fkiModulesectionID")]);
    m_fki_modulesection_id_isSet = !json[QString("fkiModulesectionID")].isNull() && m_fki_modulesection_id_isValid;

    m_dt_discussionmembership_joined_isValid = ::Ezmaxapi::fromJsonValue(m_dt_discussionmembership_joined, json[QString("dtDiscussionmembershipJoined")]);
    m_dt_discussionmembership_joined_isSet = !json[QString("dtDiscussionmembershipJoined")].isNull() && m_dt_discussionmembership_joined_isValid;
}

QString Discussionmembership_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussionmembership_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_discussionmembership_id_isSet) {
        obj.insert(QString("pkiDiscussionmembershipID"), ::Ezmaxapi::toJsonValue(m_pki_discussionmembership_id));
    }
    if (m_fki_discussion_id_isSet) {
        obj.insert(QString("fkiDiscussionID"), ::Ezmaxapi::toJsonValue(m_fki_discussion_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_fki_usergroup_id));
    }
    if (m_fki_modulesection_id_isSet) {
        obj.insert(QString("fkiModulesectionID"), ::Ezmaxapi::toJsonValue(m_fki_modulesection_id));
    }
    if (m_dt_discussionmembership_joined_isSet) {
        obj.insert(QString("dtDiscussionmembershipJoined"), ::Ezmaxapi::toJsonValue(m_dt_discussionmembership_joined));
    }
    return obj;
}

qint32 Discussionmembership_Request::getPkiDiscussionmembershipId() const {
    return m_pki_discussionmembership_id;
}
void Discussionmembership_Request::setPkiDiscussionmembershipId(const qint32 &pki_discussionmembership_id) {
    m_pki_discussionmembership_id = pki_discussionmembership_id;
    m_pki_discussionmembership_id_isSet = true;
}

bool Discussionmembership_Request::is_pki_discussionmembership_id_Set() const{
    return m_pki_discussionmembership_id_isSet;
}

bool Discussionmembership_Request::is_pki_discussionmembership_id_Valid() const{
    return m_pki_discussionmembership_id_isValid;
}

qint32 Discussionmembership_Request::getFkiDiscussionId() const {
    return m_fki_discussion_id;
}
void Discussionmembership_Request::setFkiDiscussionId(const qint32 &fki_discussion_id) {
    m_fki_discussion_id = fki_discussion_id;
    m_fki_discussion_id_isSet = true;
}

bool Discussionmembership_Request::is_fki_discussion_id_Set() const{
    return m_fki_discussion_id_isSet;
}

bool Discussionmembership_Request::is_fki_discussion_id_Valid() const{
    return m_fki_discussion_id_isValid;
}

qint32 Discussionmembership_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Discussionmembership_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Discussionmembership_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Discussionmembership_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Discussionmembership_Request::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void Discussionmembership_Request::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool Discussionmembership_Request::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool Discussionmembership_Request::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

qint32 Discussionmembership_Request::getFkiModulesectionId() const {
    return m_fki_modulesection_id;
}
void Discussionmembership_Request::setFkiModulesectionId(const qint32 &fki_modulesection_id) {
    m_fki_modulesection_id = fki_modulesection_id;
    m_fki_modulesection_id_isSet = true;
}

bool Discussionmembership_Request::is_fki_modulesection_id_Set() const{
    return m_fki_modulesection_id_isSet;
}

bool Discussionmembership_Request::is_fki_modulesection_id_Valid() const{
    return m_fki_modulesection_id_isValid;
}

QString Discussionmembership_Request::getDtDiscussionmembershipJoined() const {
    return m_dt_discussionmembership_joined;
}
void Discussionmembership_Request::setDtDiscussionmembershipJoined(const QString &dt_discussionmembership_joined) {
    m_dt_discussionmembership_joined = dt_discussionmembership_joined;
    m_dt_discussionmembership_joined_isSet = true;
}

bool Discussionmembership_Request::is_dt_discussionmembership_joined_Set() const{
    return m_dt_discussionmembership_joined_isSet;
}

bool Discussionmembership_Request::is_dt_discussionmembership_joined_Valid() const{
    return m_dt_discussionmembership_joined_isValid;
}

bool Discussionmembership_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_discussionmembership_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_discussion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_modulesection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_discussionmembership_joined_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussionmembership_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_discussion_id_isValid && m_dt_discussionmembership_joined_isValid && true;
}

} // namespace Ezmaxapi
