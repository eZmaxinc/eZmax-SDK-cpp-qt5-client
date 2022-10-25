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

#include "OAICustom_EzsignfoldertransmissionSigner_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_EzsignfoldertransmissionSigner_Response::OAICustom_EzsignfoldertransmissionSigner_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzsignfoldertransmissionSigner_Response::OAICustom_EzsignfoldertransmissionSigner_Response() {
    this->initializeModel();
}

OAICustom_EzsignfoldertransmissionSigner_Response::~OAICustom_EzsignfoldertransmissionSigner_Response() {}

void OAICustom_EzsignfoldertransmissionSigner_Response::initializeModel() {

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_s_contact_firstname_isSet = false;
    m_s_contact_firstname_isValid = false;

    m_s_contact_lastname_isSet = false;
    m_s_contact_lastname_isValid = false;
}

void OAICustom_EzsignfoldertransmissionSigner_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzsignfoldertransmissionSigner_Response::fromJsonObject(QJsonObject json) {

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_s_contact_firstname_isValid = ::OpenAPI::fromJsonValue(s_contact_firstname, json[QString("sContactFirstname")]);
    m_s_contact_firstname_isSet = !json[QString("sContactFirstname")].isNull() && m_s_contact_firstname_isValid;

    m_s_contact_lastname_isValid = ::OpenAPI::fromJsonValue(s_contact_lastname, json[QString("sContactLastname")]);
    m_s_contact_lastname_isSet = !json[QString("sContactLastname")].isNull() && m_s_contact_lastname_isValid;
}

QString OAICustom_EzsignfoldertransmissionSigner_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzsignfoldertransmissionSigner_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_s_contact_firstname_isSet) {
        obj.insert(QString("sContactFirstname"), ::OpenAPI::toJsonValue(s_contact_firstname));
    }
    if (m_s_contact_lastname_isSet) {
        obj.insert(QString("sContactLastname"), ::OpenAPI::toJsonValue(s_contact_lastname));
    }
    return obj;
}

qint32 OAICustom_EzsignfoldertransmissionSigner_Response::getFkiUserId() const {
    return fki_user_id;
}
void OAICustom_EzsignfoldertransmissionSigner_Response::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

QString OAICustom_EzsignfoldertransmissionSigner_Response::getSContactFirstname() const {
    return s_contact_firstname;
}
void OAICustom_EzsignfoldertransmissionSigner_Response::setSContactFirstname(const QString &s_contact_firstname) {
    this->s_contact_firstname = s_contact_firstname;
    this->m_s_contact_firstname_isSet = true;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::is_s_contact_firstname_Set() const{
    return m_s_contact_firstname_isSet;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::is_s_contact_firstname_Valid() const{
    return m_s_contact_firstname_isValid;
}

QString OAICustom_EzsignfoldertransmissionSigner_Response::getSContactLastname() const {
    return s_contact_lastname;
}
void OAICustom_EzsignfoldertransmissionSigner_Response::setSContactLastname(const QString &s_contact_lastname) {
    this->s_contact_lastname = s_contact_lastname;
    this->m_s_contact_lastname_isSet = true;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::is_s_contact_lastname_Set() const{
    return m_s_contact_lastname_isSet;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::is_s_contact_lastname_Valid() const{
    return m_s_contact_lastname_isValid;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_contact_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzsignfoldertransmissionSigner_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_contact_firstname_isValid && m_s_contact_lastname_isValid && true;
}

} // namespace OpenAPI
