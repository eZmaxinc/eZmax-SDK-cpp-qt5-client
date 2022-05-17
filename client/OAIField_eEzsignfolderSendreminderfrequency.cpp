/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eEzsignfolderSendreminderfrequency.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignfolderSendreminderfrequency::OAIField_eEzsignfolderSendreminderfrequency(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignfolderSendreminderfrequency::OAIField_eEzsignfolderSendreminderfrequency() {
    this->initializeModel();
}

OAIField_eEzsignfolderSendreminderfrequency::~OAIField_eEzsignfolderSendreminderfrequency() {}

void OAIField_eEzsignfolderSendreminderfrequency::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignfolderSendreminderfrequency::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignfolderSendreminderfrequency::fromJson(QString jsonString) {
    
    if ( jsonString.compare("None", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderSendreminderfrequency::NONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Daily", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderSendreminderfrequency::DAILY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Weekly", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignfolderSendreminderfrequency::WEEKLY;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignfolderSendreminderfrequency::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignfolderSendreminderfrequency::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignfolderSendreminderfrequency::NONE:
            val = "None";
            break;
        case eOAIField_eEzsignfolderSendreminderfrequency::DAILY:
            val = "Daily";
            break;
        case eOAIField_eEzsignfolderSendreminderfrequency::WEEKLY:
            val = "Weekly";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignfolderSendreminderfrequency::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignfolderSendreminderfrequency::eOAIField_eEzsignfolderSendreminderfrequency OAIField_eEzsignfolderSendreminderfrequency::getValue() const {
    return m_value;
}

void OAIField_eEzsignfolderSendreminderfrequency::setValue(const OAIField_eEzsignfolderSendreminderfrequency::eOAIField_eEzsignfolderSendreminderfrequency& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignfolderSendreminderfrequency::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignfolderSendreminderfrequency::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
