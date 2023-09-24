/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eBrandingLogo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eBrandingLogo::OAIField_eBrandingLogo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eBrandingLogo::OAIField_eBrandingLogo() {
    this->initializeModel();
}

OAIField_eBrandingLogo::~OAIField_eBrandingLogo() {}

void OAIField_eBrandingLogo::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eBrandingLogo::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eBrandingLogo::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Default", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eBrandingLogo::DEFAULT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("JPEG", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eBrandingLogo::JPEG;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PNG", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eBrandingLogo::PNG;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eBrandingLogo::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eBrandingLogo::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eBrandingLogo::DEFAULT:
            val = "Default";
            break;
        case eOAIField_eBrandingLogo::JPEG:
            val = "JPEG";
            break;
        case eOAIField_eBrandingLogo::PNG:
            val = "PNG";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eBrandingLogo::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eBrandingLogo::eOAIField_eBrandingLogo OAIField_eBrandingLogo::getValue() const {
    return m_value;
}

void OAIField_eBrandingLogo::setValue(const OAIField_eBrandingLogo::eOAIField_eBrandingLogo& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eBrandingLogo::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eBrandingLogo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
