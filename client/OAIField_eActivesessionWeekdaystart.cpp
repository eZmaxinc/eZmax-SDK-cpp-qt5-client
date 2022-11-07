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

#include "OAIField_eActivesessionWeekdaystart.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eActivesessionWeekdaystart::OAIField_eActivesessionWeekdaystart(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eActivesessionWeekdaystart::OAIField_eActivesessionWeekdaystart() {
    this->initializeModel();
}

OAIField_eActivesessionWeekdaystart::~OAIField_eActivesessionWeekdaystart() {}

void OAIField_eActivesessionWeekdaystart::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eActivesessionWeekdaystart::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eActivesessionWeekdaystart::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Sunday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::SUNDAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Monday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::MONDAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Tuesday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::TUESDAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Wednesday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::WEDNESDAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Thursday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::THURSDAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Friday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::FRIDAY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Saturday", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionWeekdaystart::SATURDAY;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eActivesessionWeekdaystart::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eActivesessionWeekdaystart::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eActivesessionWeekdaystart::SUNDAY:
            val = "Sunday";
            break;
        case eOAIField_eActivesessionWeekdaystart::MONDAY:
            val = "Monday";
            break;
        case eOAIField_eActivesessionWeekdaystart::TUESDAY:
            val = "Tuesday";
            break;
        case eOAIField_eActivesessionWeekdaystart::WEDNESDAY:
            val = "Wednesday";
            break;
        case eOAIField_eActivesessionWeekdaystart::THURSDAY:
            val = "Thursday";
            break;
        case eOAIField_eActivesessionWeekdaystart::FRIDAY:
            val = "Friday";
            break;
        case eOAIField_eActivesessionWeekdaystart::SATURDAY:
            val = "Saturday";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eActivesessionWeekdaystart::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eActivesessionWeekdaystart::eOAIField_eActivesessionWeekdaystart OAIField_eActivesessionWeekdaystart::getValue() const {
    return m_value;
}

void OAIField_eActivesessionWeekdaystart::setValue(const OAIField_eActivesessionWeekdaystart::eOAIField_eActivesessionWeekdaystart& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eActivesessionWeekdaystart::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eActivesessionWeekdaystart::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
