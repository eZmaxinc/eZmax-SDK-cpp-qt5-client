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

#include "Ezsignuser_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignuser_Response::Ezsignuser_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignuser_Response::Ezsignuser_Response() {
    this->initializeModel();
}

Ezsignuser_Response::~Ezsignuser_Response() {}

void Ezsignuser_Response::initializeModel() {

    m_pki_ezsignuser_id_isSet = false;
    m_pki_ezsignuser_id_isValid = false;

    m_fki_contact_id_isSet = false;
    m_fki_contact_id_isValid = false;

    m_obj_contact_isSet = false;
    m_obj_contact_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void Ezsignuser_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignuser_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignuser_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignuser_id, json[QString("pkiEzsignuserID")]);
    m_pki_ezsignuser_id_isSet = !json[QString("pkiEzsignuserID")].isNull() && m_pki_ezsignuser_id_isValid;

    m_fki_contact_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_contact_id, json[QString("fkiContactID")]);
    m_fki_contact_id_isSet = !json[QString("fkiContactID")].isNull() && m_fki_contact_id_isValid;

    m_obj_contact_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contact, json[QString("objContact")]);
    m_obj_contact_isSet = !json[QString("objContact")].isNull() && m_obj_contact_isValid;

    m_obj_audit_isValid = ::Ezmaxapi::fromJsonValue(m_obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString Ezsignuser_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignuser_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignuser_id_isSet) {
        obj.insert(QString("pkiEzsignuserID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignuser_id));
    }
    if (m_fki_contact_id_isSet) {
        obj.insert(QString("fkiContactID"), ::Ezmaxapi::toJsonValue(m_fki_contact_id));
    }
    if (m_obj_contact.isSet()) {
        obj.insert(QString("objContact"), ::Ezmaxapi::toJsonValue(m_obj_contact));
    }
    if (m_obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::Ezmaxapi::toJsonValue(m_obj_audit));
    }
    return obj;
}

qint32 Ezsignuser_Response::getPkiEzsignuserId() const {
    return m_pki_ezsignuser_id;
}
void Ezsignuser_Response::setPkiEzsignuserId(const qint32 &pki_ezsignuser_id) {
    m_pki_ezsignuser_id = pki_ezsignuser_id;
    m_pki_ezsignuser_id_isSet = true;
}

bool Ezsignuser_Response::is_pki_ezsignuser_id_Set() const{
    return m_pki_ezsignuser_id_isSet;
}

bool Ezsignuser_Response::is_pki_ezsignuser_id_Valid() const{
    return m_pki_ezsignuser_id_isValid;
}

qint32 Ezsignuser_Response::getFkiContactId() const {
    return m_fki_contact_id;
}
void Ezsignuser_Response::setFkiContactId(const qint32 &fki_contact_id) {
    m_fki_contact_id = fki_contact_id;
    m_fki_contact_id_isSet = true;
}

bool Ezsignuser_Response::is_fki_contact_id_Set() const{
    return m_fki_contact_id_isSet;
}

bool Ezsignuser_Response::is_fki_contact_id_Valid() const{
    return m_fki_contact_id_isValid;
}

Contact_ResponseCompound Ezsignuser_Response::getObjContact() const {
    return m_obj_contact;
}
void Ezsignuser_Response::setObjContact(const Contact_ResponseCompound &obj_contact) {
    m_obj_contact = obj_contact;
    m_obj_contact_isSet = true;
}

bool Ezsignuser_Response::is_obj_contact_Set() const{
    return m_obj_contact_isSet;
}

bool Ezsignuser_Response::is_obj_contact_Valid() const{
    return m_obj_contact_isValid;
}

Common_Audit Ezsignuser_Response::getObjAudit() const {
    return m_obj_audit;
}
void Ezsignuser_Response::setObjAudit(const Common_Audit &obj_audit) {
    m_obj_audit = obj_audit;
    m_obj_audit_isSet = true;
}

bool Ezsignuser_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool Ezsignuser_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool Ezsignuser_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignuser_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_contact_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_contact.isSet()) {
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

bool Ezsignuser_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignuser_id_isValid && m_fki_contact_id_isValid && m_obj_contact_isValid && m_obj_audit_isValid && true;
}

} // namespace Ezmaxapi
