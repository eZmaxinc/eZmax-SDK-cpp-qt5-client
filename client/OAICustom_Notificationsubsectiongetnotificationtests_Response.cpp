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

#include "OAICustom_Notificationsubsectiongetnotificationtests_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_Notificationsubsectiongetnotificationtests_Response::OAICustom_Notificationsubsectiongetnotificationtests_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_Notificationsubsectiongetnotificationtests_Response::OAICustom_Notificationsubsectiongetnotificationtests_Response() {
    this->initializeModel();
}

OAICustom_Notificationsubsectiongetnotificationtests_Response::~OAICustom_Notificationsubsectiongetnotificationtests_Response() {}

void OAICustom_Notificationsubsectiongetnotificationtests_Response::initializeModel() {

    m_pki_notificationsubsection_id_isSet = false;
    m_pki_notificationsubsection_id_isValid = false;

    m_fki_notificationsection_id_isSet = false;
    m_fki_notificationsection_id_isValid = false;

    m_obj_notificationsubsection_name_isSet = false;
    m_obj_notificationsubsection_name_isValid = false;

    m_s_notificationsection_name_x_isSet = false;
    m_s_notificationsection_name_x_isValid = false;

    m_s_notificationsubsection_name_x_isSet = false;
    m_s_notificationsubsection_name_x_isValid = false;

    m_a_obj_notificationtest_isSet = false;
    m_a_obj_notificationtest_isValid = false;
}

void OAICustom_Notificationsubsectiongetnotificationtests_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_Notificationsubsectiongetnotificationtests_Response::fromJsonObject(QJsonObject json) {

    m_pki_notificationsubsection_id_isValid = ::OpenAPI::fromJsonValue(pki_notificationsubsection_id, json[QString("pkiNotificationsubsectionID")]);
    m_pki_notificationsubsection_id_isSet = !json[QString("pkiNotificationsubsectionID")].isNull() && m_pki_notificationsubsection_id_isValid;

    m_fki_notificationsection_id_isValid = ::OpenAPI::fromJsonValue(fki_notificationsection_id, json[QString("fkiNotificationsectionID")]);
    m_fki_notificationsection_id_isSet = !json[QString("fkiNotificationsectionID")].isNull() && m_fki_notificationsection_id_isValid;

    m_obj_notificationsubsection_name_isValid = ::OpenAPI::fromJsonValue(obj_notificationsubsection_name, json[QString("objNotificationsubsectionName")]);
    m_obj_notificationsubsection_name_isSet = !json[QString("objNotificationsubsectionName")].isNull() && m_obj_notificationsubsection_name_isValid;

    m_s_notificationsection_name_x_isValid = ::OpenAPI::fromJsonValue(s_notificationsection_name_x, json[QString("sNotificationsectionNameX")]);
    m_s_notificationsection_name_x_isSet = !json[QString("sNotificationsectionNameX")].isNull() && m_s_notificationsection_name_x_isValid;

    m_s_notificationsubsection_name_x_isValid = ::OpenAPI::fromJsonValue(s_notificationsubsection_name_x, json[QString("sNotificationsubsectionNameX")]);
    m_s_notificationsubsection_name_x_isSet = !json[QString("sNotificationsubsectionNameX")].isNull() && m_s_notificationsubsection_name_x_isValid;

    m_a_obj_notificationtest_isValid = ::OpenAPI::fromJsonValue(a_obj_notificationtest, json[QString("a_objNotificationtest")]);
    m_a_obj_notificationtest_isSet = !json[QString("a_objNotificationtest")].isNull() && m_a_obj_notificationtest_isValid;
}

QString OAICustom_Notificationsubsectiongetnotificationtests_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_Notificationsubsectiongetnotificationtests_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_notificationsubsection_id_isSet) {
        obj.insert(QString("pkiNotificationsubsectionID"), ::OpenAPI::toJsonValue(pki_notificationsubsection_id));
    }
    if (m_fki_notificationsection_id_isSet) {
        obj.insert(QString("fkiNotificationsectionID"), ::OpenAPI::toJsonValue(fki_notificationsection_id));
    }
    if (obj_notificationsubsection_name.isSet()) {
        obj.insert(QString("objNotificationsubsectionName"), ::OpenAPI::toJsonValue(obj_notificationsubsection_name));
    }
    if (m_s_notificationsection_name_x_isSet) {
        obj.insert(QString("sNotificationsectionNameX"), ::OpenAPI::toJsonValue(s_notificationsection_name_x));
    }
    if (m_s_notificationsubsection_name_x_isSet) {
        obj.insert(QString("sNotificationsubsectionNameX"), ::OpenAPI::toJsonValue(s_notificationsubsection_name_x));
    }
    if (a_obj_notificationtest.size() > 0) {
        obj.insert(QString("a_objNotificationtest"), ::OpenAPI::toJsonValue(a_obj_notificationtest));
    }
    return obj;
}

qint32 OAICustom_Notificationsubsectiongetnotificationtests_Response::getPkiNotificationsubsectionId() const {
    return pki_notificationsubsection_id;
}
void OAICustom_Notificationsubsectiongetnotificationtests_Response::setPkiNotificationsubsectionId(const qint32 &pki_notificationsubsection_id) {
    this->pki_notificationsubsection_id = pki_notificationsubsection_id;
    this->m_pki_notificationsubsection_id_isSet = true;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_pki_notificationsubsection_id_Set() const{
    return m_pki_notificationsubsection_id_isSet;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_pki_notificationsubsection_id_Valid() const{
    return m_pki_notificationsubsection_id_isValid;
}

qint32 OAICustom_Notificationsubsectiongetnotificationtests_Response::getFkiNotificationsectionId() const {
    return fki_notificationsection_id;
}
void OAICustom_Notificationsubsectiongetnotificationtests_Response::setFkiNotificationsectionId(const qint32 &fki_notificationsection_id) {
    this->fki_notificationsection_id = fki_notificationsection_id;
    this->m_fki_notificationsection_id_isSet = true;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_fki_notificationsection_id_Set() const{
    return m_fki_notificationsection_id_isSet;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_fki_notificationsection_id_Valid() const{
    return m_fki_notificationsection_id_isValid;
}

OAIMultilingual_NotificationsubsectionName OAICustom_Notificationsubsectiongetnotificationtests_Response::getObjNotificationsubsectionName() const {
    return obj_notificationsubsection_name;
}
void OAICustom_Notificationsubsectiongetnotificationtests_Response::setObjNotificationsubsectionName(const OAIMultilingual_NotificationsubsectionName &obj_notificationsubsection_name) {
    this->obj_notificationsubsection_name = obj_notificationsubsection_name;
    this->m_obj_notificationsubsection_name_isSet = true;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_obj_notificationsubsection_name_Set() const{
    return m_obj_notificationsubsection_name_isSet;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_obj_notificationsubsection_name_Valid() const{
    return m_obj_notificationsubsection_name_isValid;
}

QString OAICustom_Notificationsubsectiongetnotificationtests_Response::getSNotificationsectionNameX() const {
    return s_notificationsection_name_x;
}
void OAICustom_Notificationsubsectiongetnotificationtests_Response::setSNotificationsectionNameX(const QString &s_notificationsection_name_x) {
    this->s_notificationsection_name_x = s_notificationsection_name_x;
    this->m_s_notificationsection_name_x_isSet = true;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_s_notificationsection_name_x_Set() const{
    return m_s_notificationsection_name_x_isSet;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_s_notificationsection_name_x_Valid() const{
    return m_s_notificationsection_name_x_isValid;
}

QString OAICustom_Notificationsubsectiongetnotificationtests_Response::getSNotificationsubsectionNameX() const {
    return s_notificationsubsection_name_x;
}
void OAICustom_Notificationsubsectiongetnotificationtests_Response::setSNotificationsubsectionNameX(const QString &s_notificationsubsection_name_x) {
    this->s_notificationsubsection_name_x = s_notificationsubsection_name_x;
    this->m_s_notificationsubsection_name_x_isSet = true;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_s_notificationsubsection_name_x_Set() const{
    return m_s_notificationsubsection_name_x_isSet;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_s_notificationsubsection_name_x_Valid() const{
    return m_s_notificationsubsection_name_x_isValid;
}

QList<OAICustom_Notificationtestgetnotificationtests_Response> OAICustom_Notificationsubsectiongetnotificationtests_Response::getAObjNotificationtest() const {
    return a_obj_notificationtest;
}
void OAICustom_Notificationsubsectiongetnotificationtests_Response::setAObjNotificationtest(const QList<OAICustom_Notificationtestgetnotificationtests_Response> &a_obj_notificationtest) {
    this->a_obj_notificationtest = a_obj_notificationtest;
    this->m_a_obj_notificationtest_isSet = true;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_a_obj_notificationtest_Set() const{
    return m_a_obj_notificationtest_isSet;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::is_a_obj_notificationtest_Valid() const{
    return m_a_obj_notificationtest_isValid;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_notificationsubsection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_notificationsection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_notificationsubsection_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationsection_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_notificationsubsection_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_notificationtest.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_Notificationsubsectiongetnotificationtests_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_notificationsubsection_id_isValid && m_fki_notificationsection_id_isValid && m_s_notificationsubsection_name_x_isValid && m_a_obj_notificationtest_isValid && true;
}

} // namespace OpenAPI
