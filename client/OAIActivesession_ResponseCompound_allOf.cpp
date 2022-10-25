/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIActivesession_ResponseCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIActivesession_ResponseCompound_allOf::OAIActivesession_ResponseCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIActivesession_ResponseCompound_allOf::OAIActivesession_ResponseCompound_allOf() {
    this->initializeModel();
}

OAIActivesession_ResponseCompound_allOf::~OAIActivesession_ResponseCompound_allOf() {}

void OAIActivesession_ResponseCompound_allOf::initializeModel() {

    m_a_pki_permission_id_isSet = false;
    m_a_pki_permission_id_isValid = false;

    m_obj_user_real_isSet = false;
    m_obj_user_real_isValid = false;

    m_obj_user_cloned_isSet = false;
    m_obj_user_cloned_isValid = false;

    m_obj_apikey_isSet = false;
    m_obj_apikey_isValid = false;

    m_a_e_module_internalname_isSet = false;
    m_a_e_module_internalname_isValid = false;
}

void OAIActivesession_ResponseCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIActivesession_ResponseCompound_allOf::fromJsonObject(QJsonObject json) {

    m_a_pki_permission_id_isValid = ::OpenAPI::fromJsonValue(a_pki_permission_id, json[QString("a_pkiPermissionID")]);
    m_a_pki_permission_id_isSet = !json[QString("a_pkiPermissionID")].isNull() && m_a_pki_permission_id_isValid;

    m_obj_user_real_isValid = ::OpenAPI::fromJsonValue(obj_user_real, json[QString("objUserReal")]);
    m_obj_user_real_isSet = !json[QString("objUserReal")].isNull() && m_obj_user_real_isValid;

    m_obj_user_cloned_isValid = ::OpenAPI::fromJsonValue(obj_user_cloned, json[QString("objUserCloned")]);
    m_obj_user_cloned_isSet = !json[QString("objUserCloned")].isNull() && m_obj_user_cloned_isValid;

    m_obj_apikey_isValid = ::OpenAPI::fromJsonValue(obj_apikey, json[QString("objApikey")]);
    m_obj_apikey_isSet = !json[QString("objApikey")].isNull() && m_obj_apikey_isValid;

    m_a_e_module_internalname_isValid = ::OpenAPI::fromJsonValue(a_e_module_internalname, json[QString("a_eModuleInternalname")]);
    m_a_e_module_internalname_isSet = !json[QString("a_eModuleInternalname")].isNull() && m_a_e_module_internalname_isValid;
}

QString OAIActivesession_ResponseCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIActivesession_ResponseCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_pki_permission_id.size() > 0) {
        obj.insert(QString("a_pkiPermissionID"), ::OpenAPI::toJsonValue(a_pki_permission_id));
    }
    if (obj_user_real.isSet()) {
        obj.insert(QString("objUserReal"), ::OpenAPI::toJsonValue(obj_user_real));
    }
    if (obj_user_cloned.isSet()) {
        obj.insert(QString("objUserCloned"), ::OpenAPI::toJsonValue(obj_user_cloned));
    }
    if (obj_apikey.isSet()) {
        obj.insert(QString("objApikey"), ::OpenAPI::toJsonValue(obj_apikey));
    }
    if (a_e_module_internalname.size() > 0) {
        obj.insert(QString("a_eModuleInternalname"), ::OpenAPI::toJsonValue(a_e_module_internalname));
    }
    return obj;
}

QList<qint32> OAIActivesession_ResponseCompound_allOf::getAPkiPermissionId() const {
    return a_pki_permission_id;
}
void OAIActivesession_ResponseCompound_allOf::setAPkiPermissionId(const QList<qint32> &a_pki_permission_id) {
    this->a_pki_permission_id = a_pki_permission_id;
    this->m_a_pki_permission_id_isSet = true;
}

bool OAIActivesession_ResponseCompound_allOf::is_a_pki_permission_id_Set() const{
    return m_a_pki_permission_id_isSet;
}

bool OAIActivesession_ResponseCompound_allOf::is_a_pki_permission_id_Valid() const{
    return m_a_pki_permission_id_isValid;
}

OAIActivesession_ResponseCompound_User OAIActivesession_ResponseCompound_allOf::getObjUserReal() const {
    return obj_user_real;
}
void OAIActivesession_ResponseCompound_allOf::setObjUserReal(const OAIActivesession_ResponseCompound_User &obj_user_real) {
    this->obj_user_real = obj_user_real;
    this->m_obj_user_real_isSet = true;
}

bool OAIActivesession_ResponseCompound_allOf::is_obj_user_real_Set() const{
    return m_obj_user_real_isSet;
}

bool OAIActivesession_ResponseCompound_allOf::is_obj_user_real_Valid() const{
    return m_obj_user_real_isValid;
}

OAIActivesession_ResponseCompound_User OAIActivesession_ResponseCompound_allOf::getObjUserCloned() const {
    return obj_user_cloned;
}
void OAIActivesession_ResponseCompound_allOf::setObjUserCloned(const OAIActivesession_ResponseCompound_User &obj_user_cloned) {
    this->obj_user_cloned = obj_user_cloned;
    this->m_obj_user_cloned_isSet = true;
}

bool OAIActivesession_ResponseCompound_allOf::is_obj_user_cloned_Set() const{
    return m_obj_user_cloned_isSet;
}

bool OAIActivesession_ResponseCompound_allOf::is_obj_user_cloned_Valid() const{
    return m_obj_user_cloned_isValid;
}

OAIActivesession_ResponseCompound_Apikey OAIActivesession_ResponseCompound_allOf::getObjApikey() const {
    return obj_apikey;
}
void OAIActivesession_ResponseCompound_allOf::setObjApikey(const OAIActivesession_ResponseCompound_Apikey &obj_apikey) {
    this->obj_apikey = obj_apikey;
    this->m_obj_apikey_isSet = true;
}

bool OAIActivesession_ResponseCompound_allOf::is_obj_apikey_Set() const{
    return m_obj_apikey_isSet;
}

bool OAIActivesession_ResponseCompound_allOf::is_obj_apikey_Valid() const{
    return m_obj_apikey_isValid;
}

QList<QString> OAIActivesession_ResponseCompound_allOf::getAEModuleInternalname() const {
    return a_e_module_internalname;
}
void OAIActivesession_ResponseCompound_allOf::setAEModuleInternalname(const QList<QString> &a_e_module_internalname) {
    this->a_e_module_internalname = a_e_module_internalname;
    this->m_a_e_module_internalname_isSet = true;
}

bool OAIActivesession_ResponseCompound_allOf::is_a_e_module_internalname_Set() const{
    return m_a_e_module_internalname_isSet;
}

bool OAIActivesession_ResponseCompound_allOf::is_a_e_module_internalname_Valid() const{
    return m_a_e_module_internalname_isValid;
}

bool OAIActivesession_ResponseCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_pki_permission_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (obj_user_real.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_user_cloned.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_apikey.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_e_module_internalname.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIActivesession_ResponseCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_permission_id_isValid && m_obj_user_real_isValid && m_a_e_module_internalname_isValid && true;
}

} // namespace OpenAPI
