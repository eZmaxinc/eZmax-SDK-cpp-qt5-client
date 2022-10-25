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

#include "OAIEzsignfolder_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_Request::OAIEzsignfolder_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_Request::OAIEzsignfolder_Request() {
    this->initializeModel();
}

OAIEzsignfolder_Request::~OAIEzsignfolder_Request() {}

void OAIEzsignfolder_Request::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_ezsigntsarequirement_id_isSet = false;
    m_fki_ezsigntsarequirement_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_t_ezsignfolder_note_isSet = false;
    m_t_ezsignfolder_note_isValid = false;

    m_e_ezsignfolder_sendreminderfrequency_isSet = false;
    m_e_ezsignfolder_sendreminderfrequency_isValid = false;
}

void OAIEzsignfolder_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_ezsigntsarequirement_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntsarequirement_id, json[QString("fkiEzsigntsarequirementID")]);
    m_fki_ezsigntsarequirement_id_isSet = !json[QString("fkiEzsigntsarequirementID")].isNull() && m_fki_ezsigntsarequirement_id_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_t_ezsignfolder_note_isValid = ::OpenAPI::fromJsonValue(t_ezsignfolder_note, json[QString("tEzsignfolderNote")]);
    m_t_ezsignfolder_note_isSet = !json[QString("tEzsignfolderNote")].isNull() && m_t_ezsignfolder_note_isValid;

    m_e_ezsignfolder_sendreminderfrequency_isValid = ::OpenAPI::fromJsonValue(e_ezsignfolder_sendreminderfrequency, json[QString("eEzsignfolderSendreminderfrequency")]);
    m_e_ezsignfolder_sendreminderfrequency_isSet = !json[QString("eEzsignfolderSendreminderfrequency")].isNull() && m_e_ezsignfolder_sendreminderfrequency_isValid;
}

QString OAIEzsignfolder_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(pki_ezsignfolder_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("fkiEzsigntsarequirementID"), ::OpenAPI::toJsonValue(fki_ezsigntsarequirement_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (m_t_ezsignfolder_note_isSet) {
        obj.insert(QString("tEzsignfolderNote"), ::OpenAPI::toJsonValue(t_ezsignfolder_note));
    }
    if (e_ezsignfolder_sendreminderfrequency.isSet()) {
        obj.insert(QString("eEzsignfolderSendreminderfrequency"), ::OpenAPI::toJsonValue(e_ezsignfolder_sendreminderfrequency));
    }
    return obj;
}

qint32 OAIEzsignfolder_Request::getPkiEzsignfolderId() const {
    return pki_ezsignfolder_id;
}
void OAIEzsignfolder_Request::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    this->pki_ezsignfolder_id = pki_ezsignfolder_id;
    this->m_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_Request::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_Request::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

qint32 OAIEzsignfolder_Request::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignfolder_Request::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfolder_Request::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfolder_Request::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsignfolder_Request::getFkiEzsigntsarequirementId() const {
    return fki_ezsigntsarequirement_id;
}
void OAIEzsignfolder_Request::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    this->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    this->m_fki_ezsigntsarequirement_id_isSet = true;
}

bool OAIEzsignfolder_Request::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool OAIEzsignfolder_Request::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString OAIEzsignfolder_Request::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAIEzsignfolder_Request::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAIEzsignfolder_Request::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAIEzsignfolder_Request::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAIEzsignfolder_Request::getTEzsignfolderNote() const {
    return t_ezsignfolder_note;
}
void OAIEzsignfolder_Request::setTEzsignfolderNote(const QString &t_ezsignfolder_note) {
    this->t_ezsignfolder_note = t_ezsignfolder_note;
    this->m_t_ezsignfolder_note_isSet = true;
}

bool OAIEzsignfolder_Request::is_t_ezsignfolder_note_Set() const{
    return m_t_ezsignfolder_note_isSet;
}

bool OAIEzsignfolder_Request::is_t_ezsignfolder_note_Valid() const{
    return m_t_ezsignfolder_note_isValid;
}

OAIField_eEzsignfolderSendreminderfrequency OAIEzsignfolder_Request::getEEzsignfolderSendreminderfrequency() const {
    return e_ezsignfolder_sendreminderfrequency;
}
void OAIEzsignfolder_Request::setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    this->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    this->m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool OAIEzsignfolder_Request::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool OAIEzsignfolder_Request::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

bool OAIEzsignfolder_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntsarequirement_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfolder_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignfolder_sendreminderfrequency.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_s_ezsignfolder_description_isValid && m_t_ezsignfolder_note_isValid && m_e_ezsignfolder_sendreminderfrequency_isValid && true;
}

} // namespace OpenAPI
