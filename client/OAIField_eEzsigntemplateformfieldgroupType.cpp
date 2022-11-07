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

#include "OAIField_eEzsigntemplateformfieldgroupType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplateformfieldgroupType::OAIField_eEzsigntemplateformfieldgroupType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplateformfieldgroupType::OAIField_eEzsigntemplateformfieldgroupType() {
    this->initializeModel();
}

OAIField_eEzsigntemplateformfieldgroupType::~OAIField_eEzsigntemplateformfieldgroupType() {}

void OAIField_eEzsigntemplateformfieldgroupType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplateformfieldgroupType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplateformfieldgroupType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Text", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupType::TEXT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Textarea", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupType::TEXTAREA;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Dropdown", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupType::DROPDOWN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Radio", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupType::RADIO;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Checkbox", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupType::CHECKBOX;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplateformfieldgroupType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplateformfieldgroupType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplateformfieldgroupType::TEXT:
            val = "Text";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupType::TEXTAREA:
            val = "Textarea";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupType::DROPDOWN:
            val = "Dropdown";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupType::RADIO:
            val = "Radio";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupType::CHECKBOX:
            val = "Checkbox";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplateformfieldgroupType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplateformfieldgroupType::eOAIField_eEzsigntemplateformfieldgroupType OAIField_eEzsigntemplateformfieldgroupType::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplateformfieldgroupType::setValue(const OAIField_eEzsigntemplateformfieldgroupType::eOAIField_eEzsigntemplateformfieldgroupType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplateformfieldgroupType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplateformfieldgroupType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
