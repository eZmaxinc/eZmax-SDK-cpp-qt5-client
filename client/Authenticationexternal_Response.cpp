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

#include "Authenticationexternal_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Authenticationexternal_Response::Authenticationexternal_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Authenticationexternal_Response::Authenticationexternal_Response() {
    this->initializeModel();
}

Authenticationexternal_Response::~Authenticationexternal_Response() {}

void Authenticationexternal_Response::initializeModel() {

    m_pki_authenticationexternal_id_isSet = false;
    m_pki_authenticationexternal_id_isValid = false;

    m_s_authenticationexternal_description_isSet = false;
    m_s_authenticationexternal_description_isValid = false;

    m_e_authenticationexternal_type_isSet = false;
    m_e_authenticationexternal_type_isValid = false;

    m_b_authenticationexternal_connected_isSet = false;
    m_b_authenticationexternal_connected_isValid = false;

    m_s_authenticationexternal_authorizationurl_isSet = false;
    m_s_authenticationexternal_authorizationurl_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void Authenticationexternal_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Authenticationexternal_Response::fromJsonObject(QJsonObject json) {

    m_pki_authenticationexternal_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_authenticationexternal_id, json[QString("pkiAuthenticationexternalID")]);
    m_pki_authenticationexternal_id_isSet = !json[QString("pkiAuthenticationexternalID")].isNull() && m_pki_authenticationexternal_id_isValid;

    m_s_authenticationexternal_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_authenticationexternal_description, json[QString("sAuthenticationexternalDescription")]);
    m_s_authenticationexternal_description_isSet = !json[QString("sAuthenticationexternalDescription")].isNull() && m_s_authenticationexternal_description_isValid;

    m_e_authenticationexternal_type_isValid = ::Ezmaxapi::fromJsonValue(m_e_authenticationexternal_type, json[QString("eAuthenticationexternalType")]);
    m_e_authenticationexternal_type_isSet = !json[QString("eAuthenticationexternalType")].isNull() && m_e_authenticationexternal_type_isValid;

    m_b_authenticationexternal_connected_isValid = ::Ezmaxapi::fromJsonValue(m_b_authenticationexternal_connected, json[QString("bAuthenticationexternalConnected")]);
    m_b_authenticationexternal_connected_isSet = !json[QString("bAuthenticationexternalConnected")].isNull() && m_b_authenticationexternal_connected_isValid;

    m_s_authenticationexternal_authorizationurl_isValid = ::Ezmaxapi::fromJsonValue(m_s_authenticationexternal_authorizationurl, json[QString("sAuthenticationexternalAuthorizationurl")]);
    m_s_authenticationexternal_authorizationurl_isSet = !json[QString("sAuthenticationexternalAuthorizationurl")].isNull() && m_s_authenticationexternal_authorizationurl_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString Authenticationexternal_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Authenticationexternal_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_authenticationexternal_id_isSet) {
        obj.insert(QString("pkiAuthenticationexternalID"), ::Ezmaxapi::toJsonValue(m_pki_authenticationexternal_id));
    }
    if (m_s_authenticationexternal_description_isSet) {
        obj.insert(QString("sAuthenticationexternalDescription"), ::Ezmaxapi::toJsonValue(m_s_authenticationexternal_description));
    }
    if (m_e_authenticationexternal_type.isSet()) {
        obj.insert(QString("eAuthenticationexternalType"), ::Ezmaxapi::toJsonValue(m_e_authenticationexternal_type));
    }
    if (m_b_authenticationexternal_connected_isSet) {
        obj.insert(QString("bAuthenticationexternalConnected"), ::Ezmaxapi::toJsonValue(m_b_authenticationexternal_connected));
    }
    if (m_s_authenticationexternal_authorizationurl_isSet) {
        obj.insert(QString("sAuthenticationexternalAuthorizationurl"), ::Ezmaxapi::toJsonValue(m_s_authenticationexternal_authorizationurl));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 Authenticationexternal_Response::getPkiAuthenticationexternalId() const {
    return m_pki_authenticationexternal_id;
}
void Authenticationexternal_Response::setPkiAuthenticationexternalId(const qint32 &pki_authenticationexternal_id) {
    m_pki_authenticationexternal_id = pki_authenticationexternal_id;
    m_pki_authenticationexternal_id_isSet = true;
}

bool Authenticationexternal_Response::is_pki_authenticationexternal_id_Set() const{
    return m_pki_authenticationexternal_id_isSet;
}

bool Authenticationexternal_Response::is_pki_authenticationexternal_id_Valid() const{
    return m_pki_authenticationexternal_id_isValid;
}

QString Authenticationexternal_Response::getSAuthenticationexternalDescription() const {
    return m_s_authenticationexternal_description;
}
void Authenticationexternal_Response::setSAuthenticationexternalDescription(const QString &s_authenticationexternal_description) {
    m_s_authenticationexternal_description = s_authenticationexternal_description;
    m_s_authenticationexternal_description_isSet = true;
}

bool Authenticationexternal_Response::is_s_authenticationexternal_description_Set() const{
    return m_s_authenticationexternal_description_isSet;
}

bool Authenticationexternal_Response::is_s_authenticationexternal_description_Valid() const{
    return m_s_authenticationexternal_description_isValid;
}

Field_eAuthenticationexternalType Authenticationexternal_Response::getEAuthenticationexternalType() const {
    return m_e_authenticationexternal_type;
}
void Authenticationexternal_Response::setEAuthenticationexternalType(const Field_eAuthenticationexternalType &e_authenticationexternal_type) {
    m_e_authenticationexternal_type = e_authenticationexternal_type;
    m_e_authenticationexternal_type_isSet = true;
}

bool Authenticationexternal_Response::is_e_authenticationexternal_type_Set() const{
    return m_e_authenticationexternal_type_isSet;
}

bool Authenticationexternal_Response::is_e_authenticationexternal_type_Valid() const{
    return m_e_authenticationexternal_type_isValid;
}

bool Authenticationexternal_Response::isBAuthenticationexternalConnected() const {
    return m_b_authenticationexternal_connected;
}
void Authenticationexternal_Response::setBAuthenticationexternalConnected(const bool &b_authenticationexternal_connected) {
    m_b_authenticationexternal_connected = b_authenticationexternal_connected;
    m_b_authenticationexternal_connected_isSet = true;
}

bool Authenticationexternal_Response::is_b_authenticationexternal_connected_Set() const{
    return m_b_authenticationexternal_connected_isSet;
}

bool Authenticationexternal_Response::is_b_authenticationexternal_connected_Valid() const{
    return m_b_authenticationexternal_connected_isValid;
}

QString Authenticationexternal_Response::getSAuthenticationexternalAuthorizationurl() const {
    return m_s_authenticationexternal_authorizationurl;
}
void Authenticationexternal_Response::setSAuthenticationexternalAuthorizationurl(const QString &s_authenticationexternal_authorizationurl) {
    m_s_authenticationexternal_authorizationurl = s_authenticationexternal_authorizationurl;
    m_s_authenticationexternal_authorizationurl_isSet = true;
}

bool Authenticationexternal_Response::is_s_authenticationexternal_authorizationurl_Set() const{
    return m_s_authenticationexternal_authorizationurl_isSet;
}

bool Authenticationexternal_Response::is_s_authenticationexternal_authorizationurl_Valid() const{
    return m_s_authenticationexternal_authorizationurl_isValid;
}

Common_Audit Authenticationexternal_Response::getObjAudit() const {
    return m_obj_audit;
}
void Authenticationexternal_Response::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Authenticationexternal_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Authenticationexternal_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool Authenticationexternal_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_authenticationexternal_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_authenticationexternal_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_authenticationexternal_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_authenticationexternal_connected_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_authenticationexternal_authorizationurl_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Authenticationexternal_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_authenticationexternal_id_isValid && m_s_authenticationexternal_description_isValid && m_e_authenticationexternal_type_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi
