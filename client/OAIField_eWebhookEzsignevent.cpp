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

#include "OAIField_eWebhookEzsignevent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eWebhookEzsignevent::OAIField_eWebhookEzsignevent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eWebhookEzsignevent::OAIField_eWebhookEzsignevent() {
    this->initializeModel();
}

OAIField_eWebhookEzsignevent::~OAIField_eWebhookEzsignevent() {}

void OAIField_eWebhookEzsignevent::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eWebhookEzsignevent::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eWebhookEzsignevent::fromJson(QString jsonString) {
    
    if ( jsonString.compare("DocumentCompleted", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eWebhookEzsignevent::DOCUMENTCOMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FolderCompleted", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eWebhookEzsignevent::FOLDERCOMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eWebhookEzsignevent::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eWebhookEzsignevent::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eWebhookEzsignevent::DOCUMENTCOMPLETED:
            val = "DocumentCompleted";
            break;
        case eOAIField_eWebhookEzsignevent::FOLDERCOMPLETED:
            val = "FolderCompleted";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eWebhookEzsignevent::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eWebhookEzsignevent::eOAIField_eWebhookEzsignevent OAIField_eWebhookEzsignevent::getValue() const {
    return m_value;
}

void OAIField_eWebhookEzsignevent::setValue(const OAIField_eWebhookEzsignevent::eOAIField_eWebhookEzsignevent& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eWebhookEzsignevent::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eWebhookEzsignevent::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
