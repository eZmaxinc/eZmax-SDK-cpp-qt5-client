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

#include "OAIField_eEzsigntemplatesignatureType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplatesignatureType::OAIField_eEzsigntemplatesignatureType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplatesignatureType::OAIField_eEzsigntemplatesignatureType() {
    this->initializeModel();
}

OAIField_eEzsigntemplatesignatureType::~OAIField_eEzsigntemplatesignatureType() {}

void OAIField_eEzsigntemplatesignatureType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplatesignatureType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplatesignatureType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Acknowledgement", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureType::ACKNOWLEDGEMENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("City", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureType::CITY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Handwritten", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureType::HANDWRITTEN;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Initials", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureType::INITIALS;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Name", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureType::NAME;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplatesignatureType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplatesignatureType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplatesignatureType::ACKNOWLEDGEMENT:
            val = "Acknowledgement";
            break;
        case eOAIField_eEzsigntemplatesignatureType::CITY:
            val = "City";
            break;
        case eOAIField_eEzsigntemplatesignatureType::HANDWRITTEN:
            val = "Handwritten";
            break;
        case eOAIField_eEzsigntemplatesignatureType::INITIALS:
            val = "Initials";
            break;
        case eOAIField_eEzsigntemplatesignatureType::NAME:
            val = "Name";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplatesignatureType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplatesignatureType::eOAIField_eEzsigntemplatesignatureType OAIField_eEzsigntemplatesignatureType::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplatesignatureType::setValue(const OAIField_eEzsigntemplatesignatureType::eOAIField_eEzsigntemplatesignatureType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplatesignatureType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplatesignatureType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
