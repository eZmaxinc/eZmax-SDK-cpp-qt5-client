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

#include "OAIField_eEzsignfoldertypeSendreminderfrequency.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignfoldertypeSendreminderfrequency::OAIField_eEzsignfoldertypeSendreminderfrequency(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignfoldertypeSendreminderfrequency::OAIField_eEzsignfoldertypeSendreminderfrequency() {
    this->initializeModel();
}

OAIField_eEzsignfoldertypeSendreminderfrequency::~OAIField_eEzsignfoldertypeSendreminderfrequency() {}

void OAIField_eEzsignfoldertypeSendreminderfrequency::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignfoldertypeSendreminderfrequency::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignfoldertypeSendreminderfrequency::fromJson(QString jsonString) {
    
    if ( jsonString.compare("None", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfoldertypeSendreminderfrequency::NONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Daily", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfoldertypeSendreminderfrequency::DAILY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Weekly", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfoldertypeSendreminderfrequency::WEEKLY;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignfoldertypeSendreminderfrequency::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignfoldertypeSendreminderfrequency::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignfoldertypeSendreminderfrequency::NONE:
            val = "None";
            break;
        case eOAIField_eEzsignfoldertypeSendreminderfrequency::DAILY:
            val = "Daily";
            break;
        case eOAIField_eEzsignfoldertypeSendreminderfrequency::WEEKLY:
            val = "Weekly";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignfoldertypeSendreminderfrequency::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignfoldertypeSendreminderfrequency::eOAIField_eEzsignfoldertypeSendreminderfrequency OAIField_eEzsignfoldertypeSendreminderfrequency::getValue() const {
    return m_value;
}

void OAIField_eEzsignfoldertypeSendreminderfrequency::setValue(const OAIField_eEzsignfoldertypeSendreminderfrequency::eOAIField_eEzsignfoldertypeSendreminderfrequency& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignfoldertypeSendreminderfrequency::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignfoldertypeSendreminderfrequency::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
