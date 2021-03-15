/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eUserTypeSSPR.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eUserTypeSSPR::OAIField_eUserTypeSSPR(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eUserTypeSSPR::OAIField_eUserTypeSSPR() {
    this->initializeModel();
}

OAIField_eUserTypeSSPR::~OAIField_eUserTypeSSPR() {}

void OAIField_eUserTypeSSPR::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eUserTypeSSPR::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eUserTypeSSPR::fromJson(QString jsonString) {
    
    if ( jsonString.compare("EzsignUser", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserTypeSSPR::EZSIGNUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Native", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserTypeSSPR::NATIVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eUserTypeSSPR::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eUserTypeSSPR::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eUserTypeSSPR::EZSIGNUSER:
            val = "EzsignUser";
            break;
        case eOAIField_eUserTypeSSPR::NATIVE:
            val = "Native";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eUserTypeSSPR::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eUserTypeSSPR::eOAIField_eUserTypeSSPR OAIField_eUserTypeSSPR::getValue() const {
    return m_value;
}

void OAIField_eUserTypeSSPR::setValue(const OAIField_eUserTypeSSPR::eOAIField_eUserTypeSSPR& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eUserTypeSSPR::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eUserTypeSSPR::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
