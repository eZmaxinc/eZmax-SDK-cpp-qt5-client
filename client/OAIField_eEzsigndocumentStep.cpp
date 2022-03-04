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

#include "OAIField_eEzsigndocumentStep.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigndocumentStep::OAIField_eEzsigndocumentStep(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigndocumentStep::OAIField_eEzsigndocumentStep() {
    this->initializeModel();
}

OAIField_eEzsigndocumentStep::~OAIField_eEzsigndocumentStep() {}

void OAIField_eEzsigndocumentStep::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigndocumentStep::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigndocumentStep::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Unsent", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigndocumentStep::UNSENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Unsigned", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigndocumentStep::UNSIGNED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PartiallySigned", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigndocumentStep::PARTIALLYSIGNED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DeclinedToSign", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigndocumentStep::DECLINEDTOSIGN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PrematurelyEnded", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigndocumentStep::PREMATURELYENDED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Completed", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigndocumentStep::COMPLETED;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigndocumentStep::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigndocumentStep::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigndocumentStep::UNSENT:
            val = "Unsent";
            break;
        case eOAIField_eEzsigndocumentStep::UNSIGNED:
            val = "Unsigned";
            break;
        case eOAIField_eEzsigndocumentStep::PARTIALLYSIGNED:
            val = "PartiallySigned";
            break;
        case eOAIField_eEzsigndocumentStep::DECLINEDTOSIGN:
            val = "DeclinedToSign";
            break;
        case eOAIField_eEzsigndocumentStep::PREMATURELYENDED:
            val = "PrematurelyEnded";
            break;
        case eOAIField_eEzsigndocumentStep::COMPLETED:
            val = "Completed";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigndocumentStep::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigndocumentStep::eOAIField_eEzsigndocumentStep OAIField_eEzsigndocumentStep::getValue() const {
    return m_value;
}

void OAIField_eEzsigndocumentStep::setValue(const OAIField_eEzsigndocumentStep::eOAIField_eEzsigndocumentStep& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigndocumentStep::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigndocumentStep::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
