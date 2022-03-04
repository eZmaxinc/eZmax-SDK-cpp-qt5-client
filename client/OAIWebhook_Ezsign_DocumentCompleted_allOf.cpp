/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIWebhook_Ezsign_DocumentCompleted_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIWebhook_Ezsign_DocumentCompleted_allOf::OAIWebhook_Ezsign_DocumentCompleted_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIWebhook_Ezsign_DocumentCompleted_allOf::OAIWebhook_Ezsign_DocumentCompleted_allOf() {
    this->initializeModel();
}

OAIWebhook_Ezsign_DocumentCompleted_allOf::~OAIWebhook_Ezsign_DocumentCompleted_allOf() {}

void OAIWebhook_Ezsign_DocumentCompleted_allOf::initializeModel() {

    m_obj_ezsigndocument_isSet = false;
    m_obj_ezsigndocument_isValid = false;
}

void OAIWebhook_Ezsign_DocumentCompleted_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIWebhook_Ezsign_DocumentCompleted_allOf::fromJsonObject(QJsonObject json) {

    m_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigndocument, json[QString("objEzsigndocument")]);
    m_obj_ezsigndocument_isSet = !json[QString("objEzsigndocument")].isNull() && m_obj_ezsigndocument_isValid;
}

QString OAIWebhook_Ezsign_DocumentCompleted_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIWebhook_Ezsign_DocumentCompleted_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigndocument.isSet()) {
        obj.insert(QString("objEzsigndocument"), ::OpenAPI::toJsonValue(obj_ezsigndocument));
    }
    return obj;
}

OAIEzsigndocument_Response OAIWebhook_Ezsign_DocumentCompleted_allOf::getObjEzsigndocument() const {
    return obj_ezsigndocument;
}
void OAIWebhook_Ezsign_DocumentCompleted_allOf::setObjEzsigndocument(const OAIEzsigndocument_Response &obj_ezsigndocument) {
    this->obj_ezsigndocument = obj_ezsigndocument;
    this->m_obj_ezsigndocument_isSet = true;
}

bool OAIWebhook_Ezsign_DocumentCompleted_allOf::is_obj_ezsigndocument_Set() const{
    return m_obj_ezsigndocument_isSet;
}

bool OAIWebhook_Ezsign_DocumentCompleted_allOf::is_obj_ezsigndocument_Valid() const{
    return m_obj_ezsigndocument_isValid;
}

bool OAIWebhook_Ezsign_DocumentCompleted_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigndocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIWebhook_Ezsign_DocumentCompleted_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigndocument_isValid && true;
}

} // namespace OpenAPI
