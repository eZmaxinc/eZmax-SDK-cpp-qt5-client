/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocumentlog_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocumentlog_Response::OAIEzsigndocumentlog_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocumentlog_Response::OAIEzsigndocumentlog_Response() {
    this->initializeModel();
}

OAIEzsigndocumentlog_Response::~OAIEzsigndocumentlog_Response() {}

void OAIEzsigndocumentlog_Response::initializeModel() {

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_ezsignsigner_id_isSet = false;
    m_fki_ezsignsigner_id_isValid = false;

    m_dt_ezsigndocumentlog_datetime_isSet = false;
    m_dt_ezsigndocumentlog_datetime_isValid = false;

    m_e_ezsigndocumentlog_type_isSet = false;
    m_e_ezsigndocumentlog_type_isValid = false;

    m_s_ezsigndocumentlog_detail_isSet = false;
    m_s_ezsigndocumentlog_detail_isValid = false;

    m_s_ezsigndocumentlog_lastname_isSet = false;
    m_s_ezsigndocumentlog_lastname_isValid = false;

    m_s_ezsigndocumentlog_firstname_isSet = false;
    m_s_ezsigndocumentlog_firstname_isValid = false;

    m_s_ezsigndocumentlog_ip_isSet = false;
    m_s_ezsigndocumentlog_ip_isValid = false;
}

void OAIEzsigndocumentlog_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocumentlog_Response::fromJsonObject(QJsonObject json) {

    m_fki_user_id_isValid = ::OpenAPI::fromJsonValue(fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_ezsignsigner_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignsigner_id, json[QString("fkiEzsignsignerID")]);
    m_fki_ezsignsigner_id_isSet = !json[QString("fkiEzsignsignerID")].isNull() && m_fki_ezsignsigner_id_isValid;

    m_dt_ezsigndocumentlog_datetime_isValid = ::OpenAPI::fromJsonValue(dt_ezsigndocumentlog_datetime, json[QString("dtEzsigndocumentlogDatetime")]);
    m_dt_ezsigndocumentlog_datetime_isSet = !json[QString("dtEzsigndocumentlogDatetime")].isNull() && m_dt_ezsigndocumentlog_datetime_isValid;

    m_e_ezsigndocumentlog_type_isValid = ::OpenAPI::fromJsonValue(e_ezsigndocumentlog_type, json[QString("eEzsigndocumentlogType")]);
    m_e_ezsigndocumentlog_type_isSet = !json[QString("eEzsigndocumentlogType")].isNull() && m_e_ezsigndocumentlog_type_isValid;

    m_s_ezsigndocumentlog_detail_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocumentlog_detail, json[QString("sEzsigndocumentlogDetail")]);
    m_s_ezsigndocumentlog_detail_isSet = !json[QString("sEzsigndocumentlogDetail")].isNull() && m_s_ezsigndocumentlog_detail_isValid;

    m_s_ezsigndocumentlog_lastname_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocumentlog_lastname, json[QString("sEzsigndocumentlogLastname")]);
    m_s_ezsigndocumentlog_lastname_isSet = !json[QString("sEzsigndocumentlogLastname")].isNull() && m_s_ezsigndocumentlog_lastname_isValid;

    m_s_ezsigndocumentlog_firstname_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocumentlog_firstname, json[QString("sEzsigndocumentlogFirstname")]);
    m_s_ezsigndocumentlog_firstname_isSet = !json[QString("sEzsigndocumentlogFirstname")].isNull() && m_s_ezsigndocumentlog_firstname_isValid;

    m_s_ezsigndocumentlog_ip_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocumentlog_ip, json[QString("sEzsigndocumentlogIP")]);
    m_s_ezsigndocumentlog_ip_isSet = !json[QString("sEzsigndocumentlogIP")].isNull() && m_s_ezsigndocumentlog_ip_isValid;
}

QString OAIEzsigndocumentlog_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocumentlog_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::OpenAPI::toJsonValue(fki_user_id));
    }
    if (m_fki_ezsignsigner_id_isSet) {
        obj.insert(QString("fkiEzsignsignerID"), ::OpenAPI::toJsonValue(fki_ezsignsigner_id));
    }
    if (m_dt_ezsigndocumentlog_datetime_isSet) {
        obj.insert(QString("dtEzsigndocumentlogDatetime"), ::OpenAPI::toJsonValue(dt_ezsigndocumentlog_datetime));
    }
    if (e_ezsigndocumentlog_type.isSet()) {
        obj.insert(QString("eEzsigndocumentlogType"), ::OpenAPI::toJsonValue(e_ezsigndocumentlog_type));
    }
    if (m_s_ezsigndocumentlog_detail_isSet) {
        obj.insert(QString("sEzsigndocumentlogDetail"), ::OpenAPI::toJsonValue(s_ezsigndocumentlog_detail));
    }
    if (m_s_ezsigndocumentlog_lastname_isSet) {
        obj.insert(QString("sEzsigndocumentlogLastname"), ::OpenAPI::toJsonValue(s_ezsigndocumentlog_lastname));
    }
    if (m_s_ezsigndocumentlog_firstname_isSet) {
        obj.insert(QString("sEzsigndocumentlogFirstname"), ::OpenAPI::toJsonValue(s_ezsigndocumentlog_firstname));
    }
    if (m_s_ezsigndocumentlog_ip_isSet) {
        obj.insert(QString("sEzsigndocumentlogIP"), ::OpenAPI::toJsonValue(s_ezsigndocumentlog_ip));
    }
    return obj;
}

qint32 OAIEzsigndocumentlog_Response::getFkiUserId() const {
    return fki_user_id;
}
void OAIEzsigndocumentlog_Response::setFkiUserId(const qint32 &fki_user_id) {
    this->fki_user_id = fki_user_id;
    this->m_fki_user_id_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool OAIEzsigndocumentlog_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 OAIEzsigndocumentlog_Response::getFkiEzsignsignerId() const {
    return fki_ezsignsigner_id;
}
void OAIEzsigndocumentlog_Response::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    this->fki_ezsignsigner_id = fki_ezsignsigner_id;
    this->m_fki_ezsignsigner_id_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool OAIEzsigndocumentlog_Response::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

QString OAIEzsigndocumentlog_Response::getDtEzsigndocumentlogDatetime() const {
    return dt_ezsigndocumentlog_datetime;
}
void OAIEzsigndocumentlog_Response::setDtEzsigndocumentlogDatetime(const QString &dt_ezsigndocumentlog_datetime) {
    this->dt_ezsigndocumentlog_datetime = dt_ezsigndocumentlog_datetime;
    this->m_dt_ezsigndocumentlog_datetime_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_dt_ezsigndocumentlog_datetime_Set() const{
    return m_dt_ezsigndocumentlog_datetime_isSet;
}

bool OAIEzsigndocumentlog_Response::is_dt_ezsigndocumentlog_datetime_Valid() const{
    return m_dt_ezsigndocumentlog_datetime_isValid;
}

OAIField_eEzsigndocumentlogType OAIEzsigndocumentlog_Response::getEEzsigndocumentlogType() const {
    return e_ezsigndocumentlog_type;
}
void OAIEzsigndocumentlog_Response::setEEzsigndocumentlogType(const OAIField_eEzsigndocumentlogType &e_ezsigndocumentlog_type) {
    this->e_ezsigndocumentlog_type = e_ezsigndocumentlog_type;
    this->m_e_ezsigndocumentlog_type_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_e_ezsigndocumentlog_type_Set() const{
    return m_e_ezsigndocumentlog_type_isSet;
}

bool OAIEzsigndocumentlog_Response::is_e_ezsigndocumentlog_type_Valid() const{
    return m_e_ezsigndocumentlog_type_isValid;
}

QString OAIEzsigndocumentlog_Response::getSEzsigndocumentlogDetail() const {
    return s_ezsigndocumentlog_detail;
}
void OAIEzsigndocumentlog_Response::setSEzsigndocumentlogDetail(const QString &s_ezsigndocumentlog_detail) {
    this->s_ezsigndocumentlog_detail = s_ezsigndocumentlog_detail;
    this->m_s_ezsigndocumentlog_detail_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_detail_Set() const{
    return m_s_ezsigndocumentlog_detail_isSet;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_detail_Valid() const{
    return m_s_ezsigndocumentlog_detail_isValid;
}

QString OAIEzsigndocumentlog_Response::getSEzsigndocumentlogLastname() const {
    return s_ezsigndocumentlog_lastname;
}
void OAIEzsigndocumentlog_Response::setSEzsigndocumentlogLastname(const QString &s_ezsigndocumentlog_lastname) {
    this->s_ezsigndocumentlog_lastname = s_ezsigndocumentlog_lastname;
    this->m_s_ezsigndocumentlog_lastname_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_lastname_Set() const{
    return m_s_ezsigndocumentlog_lastname_isSet;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_lastname_Valid() const{
    return m_s_ezsigndocumentlog_lastname_isValid;
}

QString OAIEzsigndocumentlog_Response::getSEzsigndocumentlogFirstname() const {
    return s_ezsigndocumentlog_firstname;
}
void OAIEzsigndocumentlog_Response::setSEzsigndocumentlogFirstname(const QString &s_ezsigndocumentlog_firstname) {
    this->s_ezsigndocumentlog_firstname = s_ezsigndocumentlog_firstname;
    this->m_s_ezsigndocumentlog_firstname_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_firstname_Set() const{
    return m_s_ezsigndocumentlog_firstname_isSet;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_firstname_Valid() const{
    return m_s_ezsigndocumentlog_firstname_isValid;
}

QString OAIEzsigndocumentlog_Response::getSEzsigndocumentlogIp() const {
    return s_ezsigndocumentlog_ip;
}
void OAIEzsigndocumentlog_Response::setSEzsigndocumentlogIp(const QString &s_ezsigndocumentlog_ip) {
    this->s_ezsigndocumentlog_ip = s_ezsigndocumentlog_ip;
    this->m_s_ezsigndocumentlog_ip_isSet = true;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_ip_Set() const{
    return m_s_ezsigndocumentlog_ip_isSet;
}

bool OAIEzsigndocumentlog_Response::is_s_ezsigndocumentlog_ip_Valid() const{
    return m_s_ezsigndocumentlog_ip_isValid;
}

bool OAIEzsigndocumentlog_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocumentlog_datetime_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigndocumentlog_type.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_detail_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_lastname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_firstname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocumentlog_ip_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocumentlog_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_dt_ezsigndocumentlog_datetime_isValid && m_e_ezsigndocumentlog_type_isValid && m_s_ezsigndocumentlog_detail_isValid && m_s_ezsigndocumentlog_lastname_isValid && m_s_ezsigndocumentlog_firstname_isValid && m_s_ezsigndocumentlog_ip_isValid && true;
}

} // namespace OpenAPI
