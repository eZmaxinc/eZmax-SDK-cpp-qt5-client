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

#include "Discussion_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussion_Request::Discussion_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussion_Request::Discussion_Request() {
    this->initializeModel();
}

Discussion_Request::~Discussion_Request() {}

void Discussion_Request::initializeModel() {

    m_pki_discussion_id_isSet = false;
    m_pki_discussion_id_isValid = false;

    m_s_discussion_description_isSet = false;
    m_s_discussion_description_isValid = false;

    m_b_discussion_closed_isSet = false;
    m_b_discussion_closed_isValid = false;
}

void Discussion_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussion_Request::fromJsonObject(QJsonObject json) {

    m_pki_discussion_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_discussion_id, json[QString("pkiDiscussionID")]);
    m_pki_discussion_id_isSet = !json[QString("pkiDiscussionID")].isNull() && m_pki_discussion_id_isValid;

    m_s_discussion_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_discussion_description, json[QString("sDiscussionDescription")]);
    m_s_discussion_description_isSet = !json[QString("sDiscussionDescription")].isNull() && m_s_discussion_description_isValid;

    m_b_discussion_closed_isValid = ::Ezmaxapi::fromJsonValue(m_b_discussion_closed, json[QString("bDiscussionClosed")]);
    m_b_discussion_closed_isSet = !json[QString("bDiscussionClosed")].isNull() && m_b_discussion_closed_isValid;
}

QString Discussion_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussion_Request::asJsonObject() const {
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
    return obj;
}

qint32 Discussion_Request::getPkiDiscussionId() const {
    return m_pki_discussion_id;
}
void Discussion_Request::setPkiDiscussionId(const qint32 &pki_discussion_id) {
    m_pki_discussion_id = pki_discussion_id;
    m_pki_discussion_id_isSet = true;
}

bool Discussion_Request::is_pki_discussion_id_Set() const{
    return m_pki_discussion_id_isSet;
}

bool Discussion_Request::is_pki_discussion_id_Valid() const{
    return m_pki_discussion_id_isValid;
}

QString Discussion_Request::getSDiscussionDescription() const {
    return m_s_discussion_description;
}
void Discussion_Request::setSDiscussionDescription(const QString &s_discussion_description) {
    m_s_discussion_description = s_discussion_description;
    m_s_discussion_description_isSet = true;
}

bool Discussion_Request::is_s_discussion_description_Set() const{
    return m_s_discussion_description_isSet;
}

bool Discussion_Request::is_s_discussion_description_Valid() const{
    return m_s_discussion_description_isValid;
}

bool Discussion_Request::isBDiscussionClosed() const {
    return m_b_discussion_closed;
}
void Discussion_Request::setBDiscussionClosed(const bool &b_discussion_closed) {
    m_b_discussion_closed = b_discussion_closed;
    m_b_discussion_closed_isSet = true;
}

bool Discussion_Request::is_b_discussion_closed_Set() const{
    return m_b_discussion_closed_isSet;
}

bool Discussion_Request::is_b_discussion_closed_Valid() const{
    return m_b_discussion_closed_isValid;
}

bool Discussion_Request::isSet() const {
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
    } while (false);
    return isObjectUpdated;
}

bool Discussion_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_discussion_description_isValid && true;
}

} // namespace Ezmaxapi
