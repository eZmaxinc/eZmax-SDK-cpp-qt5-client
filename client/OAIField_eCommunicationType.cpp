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

#include "OAIField_eCommunicationType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eCommunicationType::OAIField_eCommunicationType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eCommunicationType::OAIField_eCommunicationType() {
    this->initializeModel();
}

OAIField_eCommunicationType::~OAIField_eCommunicationType() {}

void OAIField_eCommunicationType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eCommunicationType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eCommunicationType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Email", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationType::EMAIL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Fax", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationType::FAX;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Sms", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationType::SMS;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eCommunicationType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eCommunicationType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eCommunicationType::EMAIL:
            val = "Email";
            break;
        case eOAIField_eCommunicationType::FAX:
            val = "Fax";
            break;
        case eOAIField_eCommunicationType::SMS:
            val = "Sms";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eCommunicationType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eCommunicationType::eOAIField_eCommunicationType OAIField_eCommunicationType::getValue() const {
    return m_value;
}

void OAIField_eCommunicationType::setValue(const OAIField_eCommunicationType::eOAIField_eCommunicationType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eCommunicationType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eCommunicationType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
