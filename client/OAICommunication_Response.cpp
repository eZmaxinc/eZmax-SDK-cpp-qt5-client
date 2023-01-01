/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommunication_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommunication_Response::OAICommunication_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunication_Response::OAICommunication_Response() {
    this->initializeModel();
}

OAICommunication_Response::~OAICommunication_Response() {}

void OAICommunication_Response::initializeModel() {

    m_pki_communication_id_isSet = false;
    m_pki_communication_id_isValid = false;

    m_e_communication_emailimportance_isSet = false;
    m_e_communication_emailimportance_isValid = false;

    m_e_communication_type_isSet = false;
    m_e_communication_type_isValid = false;

    m_s_communication_subject_isSet = false;
    m_s_communication_subject_isValid = false;

    m_dt_communication_sentdate_isSet = false;
    m_dt_communication_sentdate_isValid = false;

    m_obj_contact_from_isSet = false;
    m_obj_contact_from_isValid = false;
}

void OAICommunication_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunication_Response::fromJsonObject(QJsonObject json) {

    m_pki_communication_id_isValid = ::OpenAPI::fromJsonValue(pki_communication_id, json[QString("pkiCommunicationID")]);
    m_pki_communication_id_isSet = !json[QString("pkiCommunicationID")].isNull() && m_pki_communication_id_isValid;

    m_e_communication_emailimportance_isValid = ::OpenAPI::fromJsonValue(e_communication_emailimportance, json[QString("eCommunicationEmailimportance")]);
    m_e_communication_emailimportance_isSet = !json[QString("eCommunicationEmailimportance")].isNull() && m_e_communication_emailimportance_isValid;

    m_e_communication_type_isValid = ::OpenAPI::fromJsonValue(e_communication_type, json[QString("eCommunicationType")]);
    m_e_communication_type_isSet = !json[QString("eCommunicationType")].isNull() && m_e_communication_type_isValid;

    m_s_communication_subject_isValid = ::OpenAPI::fromJsonValue(s_communication_subject, json[QString("sCommunicationSubject")]);
    m_s_communication_subject_isSet = !json[QString("sCommunicationSubject")].isNull() && m_s_communication_subject_isValid;

    m_dt_communication_sentdate_isValid = ::OpenAPI::fromJsonValue(dt_communication_sentdate, json[QString("dtCommunicationSentdate")]);
    m_dt_communication_sentdate_isSet = !json[QString("dtCommunicationSentdate")].isNull() && m_dt_communication_sentdate_isValid;

    m_obj_contact_from_isValid = ::OpenAPI::fromJsonValue(obj_contact_from, json[QString("objContactFrom")]);
    m_obj_contact_from_isSet = !json[QString("objContactFrom")].isNull() && m_obj_contact_from_isValid;
}

QString OAICommunication_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunication_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communication_id_isSet) {
        obj.insert(QString("pkiCommunicationID"), ::OpenAPI::toJsonValue(pki_communication_id));
    }
    if (e_communication_emailimportance.isSet()) {
        obj.insert(QString("eCommunicationEmailimportance"), ::OpenAPI::toJsonValue(e_communication_emailimportance));
    }
    if (e_communication_type.isSet()) {
        obj.insert(QString("eCommunicationType"), ::OpenAPI::toJsonValue(e_communication_type));
    }
    if (m_s_communication_subject_isSet) {
        obj.insert(QString("sCommunicationSubject"), ::OpenAPI::toJsonValue(s_communication_subject));
    }
    if (m_dt_communication_sentdate_isSet) {
        obj.insert(QString("dtCommunicationSentdate"), ::OpenAPI::toJsonValue(dt_communication_sentdate));
    }
    if (obj_contact_from.isSet()) {
        obj.insert(QString("objContactFrom"), ::OpenAPI::toJsonValue(obj_contact_from));
    }
    return obj;
}

qint32 OAICommunication_Response::getPkiCommunicationId() const {
    return pki_communication_id;
}
void OAICommunication_Response::setPkiCommunicationId(const qint32 &pki_communication_id) {
    this->pki_communication_id = pki_communication_id;
    this->m_pki_communication_id_isSet = true;
}

bool OAICommunication_Response::is_pki_communication_id_Set() const{
    return m_pki_communication_id_isSet;
}

bool OAICommunication_Response::is_pki_communication_id_Valid() const{
    return m_pki_communication_id_isValid;
}

OAIField_eCommunicationEmailimportance OAICommunication_Response::getECommunicationEmailimportance() const {
    return e_communication_emailimportance;
}
void OAICommunication_Response::setECommunicationEmailimportance(const OAIField_eCommunicationEmailimportance &e_communication_emailimportance) {
    this->e_communication_emailimportance = e_communication_emailimportance;
    this->m_e_communication_emailimportance_isSet = true;
}

bool OAICommunication_Response::is_e_communication_emailimportance_Set() const{
    return m_e_communication_emailimportance_isSet;
}

bool OAICommunication_Response::is_e_communication_emailimportance_Valid() const{
    return m_e_communication_emailimportance_isValid;
}

OAIField_eCommunicationType OAICommunication_Response::getECommunicationType() const {
    return e_communication_type;
}
void OAICommunication_Response::setECommunicationType(const OAIField_eCommunicationType &e_communication_type) {
    this->e_communication_type = e_communication_type;
    this->m_e_communication_type_isSet = true;
}

bool OAICommunication_Response::is_e_communication_type_Set() const{
    return m_e_communication_type_isSet;
}

bool OAICommunication_Response::is_e_communication_type_Valid() const{
    return m_e_communication_type_isValid;
}

QString OAICommunication_Response::getSCommunicationSubject() const {
    return s_communication_subject;
}
void OAICommunication_Response::setSCommunicationSubject(const QString &s_communication_subject) {
    this->s_communication_subject = s_communication_subject;
    this->m_s_communication_subject_isSet = true;
}

bool OAICommunication_Response::is_s_communication_subject_Set() const{
    return m_s_communication_subject_isSet;
}

bool OAICommunication_Response::is_s_communication_subject_Valid() const{
    return m_s_communication_subject_isValid;
}

QString OAICommunication_Response::getDtCommunicationSentdate() const {
    return dt_communication_sentdate;
}
void OAICommunication_Response::setDtCommunicationSentdate(const QString &dt_communication_sentdate) {
    this->dt_communication_sentdate = dt_communication_sentdate;
    this->m_dt_communication_sentdate_isSet = true;
}

bool OAICommunication_Response::is_dt_communication_sentdate_Set() const{
    return m_dt_communication_sentdate_isSet;
}

bool OAICommunication_Response::is_dt_communication_sentdate_Valid() const{
    return m_dt_communication_sentdate_isValid;
}

OAICustom_ContactName_Response OAICommunication_Response::getObjContactFrom() const {
    return obj_contact_from;
}
void OAICommunication_Response::setObjContactFrom(const OAICustom_ContactName_Response &obj_contact_from) {
    this->obj_contact_from = obj_contact_from;
    this->m_obj_contact_from_isSet = true;
}

bool OAICommunication_Response::is_obj_contact_from_Set() const{
    return m_obj_contact_from_isSet;
}

bool OAICommunication_Response::is_obj_contact_from_Valid() const{
    return m_obj_contact_from_isValid;
}

bool OAICommunication_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communication_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_emailimportance.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (e_communication_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communication_subject_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_communication_sentdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_contact_from.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunication_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communication_id_isValid && m_e_communication_type_isValid && m_s_communication_subject_isValid && m_dt_communication_sentdate_isValid && m_obj_contact_from_isValid && true;
}

} // namespace OpenAPI
