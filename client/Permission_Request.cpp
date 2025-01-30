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

#include "Permission_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Permission_Request::Permission_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Permission_Request::Permission_Request() {
    this->initializeModel();
}

Permission_Request::~Permission_Request() {}

void Permission_Request::initializeModel() {

    m_pki_permission_id_isSet = false;
    m_pki_permission_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_apikey_id_isSet = false;
    m_fki_apikey_id_isValid = false;

    m_fki_usergroup_id_isSet = false;
    m_fki_usergroup_id_isValid = false;

    m_fki_company_id_isSet = false;
    m_fki_company_id_isValid = false;

    m_fki_modulesection_id_isSet = false;
    m_fki_modulesection_id_isValid = false;
}

void Permission_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Permission_Request::fromJsonObject(QJsonObject json) {

    m_pki_permission_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_permission_id, json[QString("pkiPermissionID")]);
    m_pki_permission_id_isSet = !json[QString("pkiPermissionID")].isNull() && m_pki_permission_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_apikey_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_apikey_id, json[QString("fkiApikeyID")]);
    m_fki_apikey_id_isSet = !json[QString("fkiApikeyID")].isNull() && m_fki_apikey_id_isValid;

    m_fki_usergroup_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_usergroup_id, json[QString("fkiUsergroupID")]);
    m_fki_usergroup_id_isSet = !json[QString("fkiUsergroupID")].isNull() && m_fki_usergroup_id_isValid;

    m_fki_company_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_company_id, json[QString("fkiCompanyID")]);
    m_fki_company_id_isSet = !json[QString("fkiCompanyID")].isNull() && m_fki_company_id_isValid;

    m_fki_modulesection_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_modulesection_id, json[QString("fkiModulesectionID")]);
    m_fki_modulesection_id_isSet = !json[QString("fkiModulesectionID")].isNull() && m_fki_modulesection_id_isValid;
}

QString Permission_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Permission_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_permission_id_isSet) {
        obj.insert(QString("pkiPermissionID"), ::Ezmaxapi::toJsonValue(m_pki_permission_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_apikey_id_isSet) {
        obj.insert(QString("fkiApikeyID"), ::Ezmaxapi::toJsonValue(m_fki_apikey_id));
    }
    if (m_fki_usergroup_id_isSet) {
        obj.insert(QString("fkiUsergroupID"), ::Ezmaxapi::toJsonValue(m_fki_usergroup_id));
    }
    if (m_fki_company_id_isSet) {
        obj.insert(QString("fkiCompanyID"), ::Ezmaxapi::toJsonValue(m_fki_company_id));
    }
    if (m_fki_modulesection_id_isSet) {
        obj.insert(QString("fkiModulesectionID"), ::Ezmaxapi::toJsonValue(m_fki_modulesection_id));
    }
    return obj;
}

qint32 Permission_Request::getPkiPermissionId() const {
    return m_pki_permission_id;
}
void Permission_Request::setPkiPermissionId(const qint32 &pki_permission_id) {
    m_pki_permission_id = pki_permission_id;
    m_pki_permission_id_isSet = true;
}

bool Permission_Request::is_pki_permission_id_Set() const{
    return m_pki_permission_id_isSet;
}

bool Permission_Request::is_pki_permission_id_Valid() const{
    return m_pki_permission_id_isValid;
}

qint32 Permission_Request::getFkiUserId() const {
    return m_fki_user_id;
}
void Permission_Request::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Permission_Request::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Permission_Request::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Permission_Request::getFkiApikeyId() const {
    return m_fki_apikey_id;
}
void Permission_Request::setFkiApikeyId(const qint32 &fki_apikey_id) {
    m_fki_apikey_id = fki_apikey_id;
    m_fki_apikey_id_isSet = true;
}

bool Permission_Request::is_fki_apikey_id_Set() const{
    return m_fki_apikey_id_isSet;
}

bool Permission_Request::is_fki_apikey_id_Valid() const{
    return m_fki_apikey_id_isValid;
}

qint32 Permission_Request::getFkiUsergroupId() const {
    return m_fki_usergroup_id;
}
void Permission_Request::setFkiUsergroupId(const qint32 &fki_usergroup_id) {
    m_fki_usergroup_id = fki_usergroup_id;
    m_fki_usergroup_id_isSet = true;
}

bool Permission_Request::is_fki_usergroup_id_Set() const{
    return m_fki_usergroup_id_isSet;
}

bool Permission_Request::is_fki_usergroup_id_Valid() const{
    return m_fki_usergroup_id_isValid;
}

qint32 Permission_Request::getFkiCompanyId() const {
    return m_fki_company_id;
}
void Permission_Request::setFkiCompanyId(const qint32 &fki_company_id) {
    m_fki_company_id = fki_company_id;
    m_fki_company_id_isSet = true;
}

bool Permission_Request::is_fki_company_id_Set() const{
    return m_fki_company_id_isSet;
}

bool Permission_Request::is_fki_company_id_Valid() const{
    return m_fki_company_id_isValid;
}

qint32 Permission_Request::getFkiModulesectionId() const {
    return m_fki_modulesection_id;
}
void Permission_Request::setFkiModulesectionId(const qint32 &fki_modulesection_id) {
    m_fki_modulesection_id = fki_modulesection_id;
    m_fki_modulesection_id_isSet = true;
}

bool Permission_Request::is_fki_modulesection_id_Set() const{
    return m_fki_modulesection_id_isSet;
}

bool Permission_Request::is_fki_modulesection_id_Valid() const{
    return m_fki_modulesection_id_isValid;
}

bool Permission_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_permission_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_usergroup_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_company_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_modulesection_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Permission_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_modulesection_id_isValid && true;
}

} // namespace Ezmaxapi
