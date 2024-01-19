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

#include "Discussion_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussion_Response::Discussion_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussion_Response::Discussion_Response() {
    this->initializeModel();
}

Discussion_Response::~Discussion_Response() {}

void Discussion_Response::initializeModel() {

    m_pki_discussion_id_isSet = false;
    m_pki_discussion_id_isValid = false;

    m_s_discussion_description_isSet = false;
    m_s_discussion_description_isValid = false;

    m_b_discussion_closed_isSet = false;
    m_b_discussion_closed_isValid = false;

    m_dt_discussion_lastread_isSet = false;
    m_dt_discussion_lastread_isValid = false;

    m_i_discussionmessage_count_isSet = false;
    m_i_discussionmessage_count_isValid = false;

    m_i_discussionmessage_countunread_isSet = false;
    m_i_discussionmessage_countunread_isValid = false;

    m_obj_discussionconfiguration_isSet = false;
    m_obj_discussionconfiguration_isValid = false;
}

void Discussion_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussion_Response::fromJsonObject(QJsonObject json) {

    m_pki_discussion_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_discussion_id, json[QString("pkiDiscussionID")]);
    m_pki_discussion_id_isSet = !json[QString("pkiDiscussionID")].isNull() && m_pki_discussion_id_isValid;

    m_s_discussion_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_discussion_description, json[QString("sDiscussionDescription")]);
    m_s_discussion_description_isSet = !json[QString("sDiscussionDescription")].isNull() && m_s_discussion_description_isValid;

    m_b_discussion_closed_isValid = ::Ezmaxapi::fromJsonValue(m_b_discussion_closed, json[QString("bDiscussionClosed")]);
    m_b_discussion_closed_isSet = !json[QString("bDiscussionClosed")].isNull() && m_b_discussion_closed_isValid;

    m_dt_discussion_lastread_isValid = ::Ezmaxapi::fromJsonValue(m_dt_discussion_lastread, json[QString("dtDiscussionLastread")]);
    m_dt_discussion_lastread_isSet = !json[QString("dtDiscussionLastread")].isNull() && m_dt_discussion_lastread_isValid;

    m_i_discussionmessage_count_isValid = ::Ezmaxapi::fromJsonValue(m_i_discussionmessage_count, json[QString("iDiscussionmessageCount")]);
    m_i_discussionmessage_count_isSet = !json[QString("iDiscussionmessageCount")].isNull() && m_i_discussionmessage_count_isValid;

    m_i_discussionmessage_countunread_isValid = ::Ezmaxapi::fromJsonValue(m_i_discussionmessage_countunread, json[QString("iDiscussionmessageCountunread")]);
    m_i_discussionmessage_countunread_isSet = !json[QString("iDiscussionmessageCountunread")].isNull() && m_i_discussionmessage_countunread_isValid;

    m_obj_discussionconfiguration_isValid = ::Ezmaxapi::fromJsonValue(m_obj_discussionconfiguration, json[QString("objDiscussionconfiguration")]);
    m_obj_discussionconfiguration_isSet = !json[QString("objDiscussionconfiguration")].isNull() && m_obj_discussionconfiguration_isValid;
}

QString Discussion_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussion_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_discussion_id_isSet) {
        obj.insert(QString("pkiDiscussionID"), ::Ezmaxapi::toJsonValue(m_pki_discussion_id));
    }
    if (m_s_discussion_description_isSet) {
        obj.insert(QString("sDiscussionDescription"), ::Ezmaxapi::toJsonValue(m_s_discussion_description));
    }
    if (m_b_discussion_closed_isSet) {
        obj.insert(QString("bDiscussionClosed"), ::Ezmaxapi::toJsonValue(m_b_discussion_closed));
    }
    if (m_dt_discussion_lastread_isSet) {
        obj.insert(QString("dtDiscussionLastread"), ::Ezmaxapi::toJsonValue(m_dt_discussion_lastread));
    }
    if (m_i_discussionmessage_count_isSet) {
        obj.insert(QString("iDiscussionmessageCount"), ::Ezmaxapi::toJsonValue(m_i_discussionmessage_count));
    }
    if (m_i_discussionmessage_countunread_isSet) {
        obj.insert(QString("iDiscussionmessageCountunread"), ::Ezmaxapi::toJsonValue(m_i_discussionmessage_countunread));
    }
    if (m_obj_discussionconfiguration.isSet()) {
        obj.insert(QString("objDiscussionconfiguration"), ::Ezmaxapi::toJsonValue(m_obj_discussionconfiguration));
    }
    return obj;
}

qint32 Discussion_Response::getPkiDiscussionId() const {
    return m_pki_discussion_id;
}
void Discussion_Response::setPkiDiscussionId(const qint32 &pki_discussion_id) {
    m_pki_discussion_id = pki_discussion_id;
    m_pki_discussion_id_isSet = true;
}

bool Discussion_Response::is_pki_discussion_id_Set() const{
    return m_pki_discussion_id_isSet;
}

bool Discussion_Response::is_pki_discussion_id_Valid() const{
    return m_pki_discussion_id_isValid;
}

QString Discussion_Response::getSDiscussionDescription() const {
    return m_s_discussion_description;
}
void Discussion_Response::setSDiscussionDescription(const QString &s_discussion_description) {
    m_s_discussion_description = s_discussion_description;
    m_s_discussion_description_isSet = true;
}

bool Discussion_Response::is_s_discussion_description_Set() const{
    return m_s_discussion_description_isSet;
}

bool Discussion_Response::is_s_discussion_description_Valid() const{
    return m_s_discussion_description_isValid;
}

bool Discussion_Response::isBDiscussionClosed() const {
    return m_b_discussion_closed;
}
void Discussion_Response::setBDiscussionClosed(const bool &b_discussion_closed) {
    m_b_discussion_closed = b_discussion_closed;
    m_b_discussion_closed_isSet = true;
}

bool Discussion_Response::is_b_discussion_closed_Set() const{
    return m_b_discussion_closed_isSet;
}

bool Discussion_Response::is_b_discussion_closed_Valid() const{
    return m_b_discussion_closed_isValid;
}

QString Discussion_Response::getDtDiscussionLastread() const {
    return m_dt_discussion_lastread;
}
void Discussion_Response::setDtDiscussionLastread(const QString &dt_discussion_lastread) {
    m_dt_discussion_lastread = dt_discussion_lastread;
    m_dt_discussion_lastread_isSet = true;
}

bool Discussion_Response::is_dt_discussion_lastread_Set() const{
    return m_dt_discussion_lastread_isSet;
}

bool Discussion_Response::is_dt_discussion_lastread_Valid() const{
    return m_dt_discussion_lastread_isValid;
}

qint32 Discussion_Response::getIDiscussionmessageCount() const {
    return m_i_discussionmessage_count;
}
void Discussion_Response::setIDiscussionmessageCount(const qint32 &i_discussionmessage_count) {
    m_i_discussionmessage_count = i_discussionmessage_count;
    m_i_discussionmessage_count_isSet = true;
}

bool Discussion_Response::is_i_discussionmessage_count_Set() const{
    return m_i_discussionmessage_count_isSet;
}

bool Discussion_Response::is_i_discussionmessage_count_Valid() const{
    return m_i_discussionmessage_count_isValid;
}

qint32 Discussion_Response::getIDiscussionmessageCountunread() const {
    return m_i_discussionmessage_countunread;
}
void Discussion_Response::setIDiscussionmessageCountunread(const qint32 &i_discussionmessage_countunread) {
    m_i_discussionmessage_countunread = i_discussionmessage_countunread;
    m_i_discussionmessage_countunread_isSet = true;
}

bool Discussion_Response::is_i_discussionmessage_countunread_Set() const{
    return m_i_discussionmessage_countunread_isSet;
}

bool Discussion_Response::is_i_discussionmessage_countunread_Valid() const{
    return m_i_discussionmessage_countunread_isValid;
}

Custom_Discussionconfiguration_Response Discussion_Response::getObjDiscussionconfiguration() const {
    return m_obj_discussionconfiguration;
}
void Discussion_Response::setObjDiscussionconfiguration(const Custom_Discussionconfiguration_Response &obj_discussionconfiguration) {
    m_obj_discussionconfiguration = obj_discussionconfiguration;
    m_obj_discussionconfiguration_isSet = true;
}

bool Discussion_Response::is_obj_discussionconfiguration_Set() const{
    return m_obj_discussionconfiguration_isSet;
}

bool Discussion_Response::is_obj_discussionconfiguration_Valid() const{
    return m_obj_discussionconfiguration_isValid;
}

bool Discussion_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_discussion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_discussion_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_discussion_closed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_discussion_lastread_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_discussionmessage_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_discussionmessage_countunread_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_discussionconfiguration.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussion_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_discussion_id_isValid && m_s_discussion_description_isValid && m_b_discussion_closed_isValid && m_i_discussionmessage_count_isValid && m_i_discussionmessage_countunread_isValid && true;
}

} // namespace Ezmaxapi
