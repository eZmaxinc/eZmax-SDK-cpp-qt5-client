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

#include "OAIEzsignfoldersignerassociation_RequestPatch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_RequestPatch::OAIEzsignfoldersignerassociation_RequestPatch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_RequestPatch::OAIEzsignfoldersignerassociation_RequestPatch() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_RequestPatch::~OAIEzsignfoldersignerassociation_RequestPatch() {}

void OAIEzsignfoldersignerassociation_RequestPatch::initializeModel() {

    m_t_ezsignfoldersignerassociation_message_isSet = false;
    m_t_ezsignfoldersignerassociation_message_isValid = false;
}

void OAIEzsignfoldersignerassociation_RequestPatch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_RequestPatch::fromJsonObject(QJsonObject json) {

    m_t_ezsignfoldersignerassociation_message_isValid = ::OpenAPI::fromJsonValue(m_t_ezsignfoldersignerassociation_message, json[QString("tEzsignfoldersignerassociationMessage")]);
    m_t_ezsignfoldersignerassociation_message_isSet = !json[QString("tEzsignfoldersignerassociationMessage")].isNull() && m_t_ezsignfoldersignerassociation_message_isValid;
}

QString OAIEzsignfoldersignerassociation_RequestPatch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_RequestPatch::asJsonObject() const {
    QJsonObject obj;
    if (m_t_ezsignfoldersignerassociation_message_isSet) {
        obj.insert(QString("tEzsignfoldersignerassociationMessage"), ::OpenAPI::toJsonValue(m_t_ezsignfoldersignerassociation_message));
    }
    return obj;
}

QString OAIEzsignfoldersignerassociation_RequestPatch::getTEzsignfoldersignerassociationMessage() const {
    return m_t_ezsignfoldersignerassociation_message;
}
void OAIEzsignfoldersignerassociation_RequestPatch::setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message) {
    m_t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    m_t_ezsignfoldersignerassociation_message_isSet = true;
}

bool OAIEzsignfoldersignerassociation_RequestPatch::is_t_ezsignfoldersignerassociation_message_Set() const{
    return m_t_ezsignfoldersignerassociation_message_isSet;
}

bool OAIEzsignfoldersignerassociation_RequestPatch::is_t_ezsignfoldersignerassociation_message_Valid() const{
    return m_t_ezsignfoldersignerassociation_message_isValid;
}

bool OAIEzsignfoldersignerassociation_RequestPatch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_t_ezsignfoldersignerassociation_message_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_RequestPatch::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
