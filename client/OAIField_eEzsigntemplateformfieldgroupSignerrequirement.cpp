/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eEzsigntemplateformfieldgroupSignerrequirement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplateformfieldgroupSignerrequirement::OAIField_eEzsigntemplateformfieldgroupSignerrequirement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplateformfieldgroupSignerrequirement::OAIField_eEzsigntemplateformfieldgroupSignerrequirement() {
    this->initializeModel();
}

OAIField_eEzsigntemplateformfieldgroupSignerrequirement::~OAIField_eEzsigntemplateformfieldgroupSignerrequirement() {}

void OAIField_eEzsigntemplateformfieldgroupSignerrequirement::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplateformfieldgroupSignerrequirement::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplateformfieldgroupSignerrequirement::fromJson(QString jsonString) {
    
    if ( jsonString.compare("All", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupSignerrequirement::ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("One", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupSignerrequirement::ONE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplateformfieldgroupSignerrequirement::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplateformfieldgroupSignerrequirement::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplateformfieldgroupSignerrequirement::ALL:
            val = "All";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupSignerrequirement::ONE:
            val = "One";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplateformfieldgroupSignerrequirement::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplateformfieldgroupSignerrequirement::eOAIField_eEzsigntemplateformfieldgroupSignerrequirement OAIField_eEzsigntemplateformfieldgroupSignerrequirement::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplateformfieldgroupSignerrequirement::setValue(const OAIField_eEzsigntemplateformfieldgroupSignerrequirement::eOAIField_eEzsigntemplateformfieldgroupSignerrequirement& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplateformfieldgroupSignerrequirement::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplateformfieldgroupSignerrequirement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
