/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_Ezsign_FolderCompleted_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Ezsign_FolderCompleted_allOf::OAIWebhook_Ezsign_FolderCompleted_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Ezsign_FolderCompleted_allOf::OAIWebhook_Ezsign_FolderCompleted_allOf() {
    this->initializeModel();
}

OAIWebhook_Ezsign_FolderCompleted_allOf::~OAIWebhook_Ezsign_FolderCompleted_allOf() {}

void OAIWebhook_Ezsign_FolderCompleted_allOf::initializeModel() {

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;
}

void OAIWebhook_Ezsign_FolderCompleted_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Ezsign_FolderCompleted_allOf::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;
}

QString OAIWebhook_Ezsign_FolderCompleted_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Ezsign_FolderCompleted_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::OpenAPI::toJsonValue(obj_ezsignfolder));
    }
    return obj;
}

OAIEzsignfolder_Response OAIWebhook_Ezsign_FolderCompleted_allOf::getObjEzsignfolder() const {
    return obj_ezsignfolder;
}
void OAIWebhook_Ezsign_FolderCompleted_allOf::setObjEzsignfolder(const OAIEzsignfolder_Response &obj_ezsignfolder) {
    this->obj_ezsignfolder = obj_ezsignfolder;
    this->m_obj_ezsignfolder_isSet = true;
}

bool OAIWebhook_Ezsign_FolderCompleted_allOf::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool OAIWebhook_Ezsign_FolderCompleted_allOf::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

bool OAIWebhook_Ezsign_FolderCompleted_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfolder.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Ezsign_FolderCompleted_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignfolder_isValid && true;
}

} // namespace OpenAPI
