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

#include "OAIField_eEzsignfolderStep.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignfolderStep::OAIField_eEzsignfolderStep(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignfolderStep::OAIField_eEzsignfolderStep() {
    this->initializeModel();
}

OAIField_eEzsignfolderStep::~OAIField_eEzsignfolderStep() {}

void OAIField_eEzsignfolderStep::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignfolderStep::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignfolderStep::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Unsent", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::UNSENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Sent", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::SENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PartiallySigned", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::PARTIALLYSIGNED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Expired", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::EXPIRED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Completed", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Archived", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::ARCHIVED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Disposed", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderStep::DISPOSED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignfolderStep::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignfolderStep::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignfolderStep::UNSENT:
            val = "Unsent";
            break;
        case eOAIField_eEzsignfolderStep::SENT:
            val = "Sent";
            break;
        case eOAIField_eEzsignfolderStep::PARTIALLYSIGNED:
            val = "PartiallySigned";
            break;
        case eOAIField_eEzsignfolderStep::EXPIRED:
            val = "Expired";
            break;
        case eOAIField_eEzsignfolderStep::COMPLETED:
            val = "Completed";
            break;
        case eOAIField_eEzsignfolderStep::ARCHIVED:
            val = "Archived";
            break;
        case eOAIField_eEzsignfolderStep::DISPOSED:
            val = "Disposed";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignfolderStep::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignfolderStep::eOAIField_eEzsignfolderStep OAIField_eEzsignfolderStep::getValue() const {
    return m_value;
}

void OAIField_eEzsignfolderStep::setValue(const OAIField_eEzsignfolderStep::eOAIField_eEzsignfolderStep& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignfolderStep::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignfolderStep::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
