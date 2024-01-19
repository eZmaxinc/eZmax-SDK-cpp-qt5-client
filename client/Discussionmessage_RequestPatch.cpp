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

#include "Discussionmessage_RequestPatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Discussionmessage_RequestPatch::Discussionmessage_RequestPatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Discussionmessage_RequestPatch::Discussionmessage_RequestPatch() {
    this->initializeModel();
}

Discussionmessage_RequestPatch::~Discussionmessage_RequestPatch() {}

void Discussionmessage_RequestPatch::initializeModel() {

    m_fki_discussionmembership_id_actionrequired_isSet = false;
    m_fki_discussionmembership_id_actionrequired_isValid = false;

    m_t_discussionmessage_content_isSet = false;
    m_t_discussionmessage_content_isValid = false;
}

void Discussionmessage_RequestPatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Discussionmessage_RequestPatch::fromJsonObject(QJsonObject json) {

    m_fki_discussionmembership_id_actionrequired_isValid = ::Ezmaxapi::fromJsonValue(m_fki_discussionmembership_id_actionrequired, json[QString("fkiDiscussionmembershipIDActionrequired")]);
    m_fki_discussionmembership_id_actionrequired_isSet = !json[QString("fkiDiscussionmembershipIDActionrequired")].isNull() && m_fki_discussionmembership_id_actionrequired_isValid;

    m_t_discussionmessage_content_isValid = ::Ezmaxapi::fromJsonValue(m_t_discussionmessage_content, json[QString("tDiscussionmessageContent")]);
    m_t_discussionmessage_content_isSet = !json[QString("tDiscussionmessageContent")].isNull() && m_t_discussionmessage_content_isValid;
}

QString Discussionmessage_RequestPatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Discussionmessage_RequestPatch::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_discussionmembership_id_actionrequired_isSet) {
        obj.insert(QString("fkiDiscussionmembershipIDActionrequired"), ::Ezmaxapi::toJsonValue(m_fki_discussionmembership_id_actionrequired));
    }
    if (m_t_discussionmessage_content_isSet) {
        obj.insert(QString("tDiscussionmessageContent"), ::Ezmaxapi::toJsonValue(m_t_discussionmessage_content));
    }
    return obj;
}

qint32 Discussionmessage_RequestPatch::getFkiDiscussionmembershipIdActionrequired() const {
    return m_fki_discussionmembership_id_actionrequired;
}
void Discussionmessage_RequestPatch::setFkiDiscussionmembershipIdActionrequired(const qint32 &fki_discussionmembership_id_actionrequired) {
    m_fki_discussionmembership_id_actionrequired = fki_discussionmembership_id_actionrequired;
    m_fki_discussionmembership_id_actionrequired_isSet = true;
}

bool Discussionmessage_RequestPatch::is_fki_discussionmembership_id_actionrequired_Set() const{
    return m_fki_discussionmembership_id_actionrequired_isSet;
}

bool Discussionmessage_RequestPatch::is_fki_discussionmembership_id_actionrequired_Valid() const{
    return m_fki_discussionmembership_id_actionrequired_isValid;
}

QString Discussionmessage_RequestPatch::getTDiscussionmessageContent() const {
    return m_t_discussionmessage_content;
}
void Discussionmessage_RequestPatch::setTDiscussionmessageContent(const QString &t_discussionmessage_content) {
    m_t_discussionmessage_content = t_discussionmessage_content;
    m_t_discussionmessage_content_isSet = true;
}

bool Discussionmessage_RequestPatch::is_t_discussionmessage_content_Set() const{
    return m_t_discussionmessage_content_isSet;
}

bool Discussionmessage_RequestPatch::is_t_discussionmessage_content_Valid() const{
    return m_t_discussionmessage_content_isValid;
}

bool Discussionmessage_RequestPatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_discussionmembership_id_actionrequired_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_discussionmessage_content_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Discussionmessage_RequestPatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
