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

#include "OAIField_eNotificationpreferenceStatus.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eNotificationpreferenceStatus::OAIField_eNotificationpreferenceStatus(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eNotificationpreferenceStatus::OAIField_eNotificationpreferenceStatus() {
    this->initializeModel();
}

OAIField_eNotificationpreferenceStatus::~OAIField_eNotificationpreferenceStatus() {}

void OAIField_eNotificationpreferenceStatus::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eNotificationpreferenceStatus::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eNotificationpreferenceStatus::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Show", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eNotificationpreferenceStatus::SHOW;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Hide", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eNotificationpreferenceStatus::HIDE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Pin", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eNotificationpreferenceStatus::PIN;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eNotificationpreferenceStatus::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eNotificationpreferenceStatus::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eNotificationpreferenceStatus::SHOW:
            val = "Show";
            break;
        case eOAIField_eNotificationpreferenceStatus::HIDE:
            val = "Hide";
            break;
        case eOAIField_eNotificationpreferenceStatus::PIN:
            val = "Pin";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eNotificationpreferenceStatus::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eNotificationpreferenceStatus::eOAIField_eNotificationpreferenceStatus OAIField_eNotificationpreferenceStatus::getValue() const {
    return m_value;
}

void OAIField_eNotificationpreferenceStatus::setValue(const OAIField_eNotificationpreferenceStatus::eOAIField_eNotificationpreferenceStatus& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eNotificationpreferenceStatus::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eNotificationpreferenceStatus::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
