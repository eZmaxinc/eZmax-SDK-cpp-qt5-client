/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eUserEzsignsendreminderfrequency.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eUserEzsignsendreminderfrequency::OAIField_eUserEzsignsendreminderfrequency(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eUserEzsignsendreminderfrequency::OAIField_eUserEzsignsendreminderfrequency() {
    this->initializeModel();
}

OAIField_eUserEzsignsendreminderfrequency::~OAIField_eUserEzsignsendreminderfrequency() {}

void OAIField_eUserEzsignsendreminderfrequency::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eUserEzsignsendreminderfrequency::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eUserEzsignsendreminderfrequency::fromJson(QString jsonString) {
    
    if ( jsonString.compare("None", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignsendreminderfrequency::NONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Daily", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignsendreminderfrequency::DAILY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Weekly", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserEzsignsendreminderfrequency::WEEKLY;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eUserEzsignsendreminderfrequency::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eUserEzsignsendreminderfrequency::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eUserEzsignsendreminderfrequency::NONE:
            val = "None";
            break;
        case eOAIField_eUserEzsignsendreminderfrequency::DAILY:
            val = "Daily";
            break;
        case eOAIField_eUserEzsignsendreminderfrequency::WEEKLY:
            val = "Weekly";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eUserEzsignsendreminderfrequency::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eUserEzsignsendreminderfrequency::eOAIField_eUserEzsignsendreminderfrequency OAIField_eUserEzsignsendreminderfrequency::getValue() const {
    return m_value;
}

void OAIField_eUserEzsignsendreminderfrequency::setValue(const OAIField_eUserEzsignsendreminderfrequency::eOAIField_eUserEzsignsendreminderfrequency& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eUserEzsignsendreminderfrequency::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eUserEzsignsendreminderfrequency::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
