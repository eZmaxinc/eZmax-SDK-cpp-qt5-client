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

#include "OAIField_eEzsigntemplatesignatureTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplatesignatureTooltipposition::OAIField_eEzsigntemplatesignatureTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplatesignatureTooltipposition::OAIField_eEzsigntemplatesignatureTooltipposition() {
    this->initializeModel();
}

OAIField_eEzsigntemplatesignatureTooltipposition::~OAIField_eEzsigntemplatesignatureTooltipposition() {}

void OAIField_eEzsigntemplatesignatureTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplatesignatureTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplatesignatureTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplatesignatureTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplatesignatureTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplatesignatureTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eOAIField_eEzsigntemplatesignatureTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplatesignatureTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplatesignatureTooltipposition::eOAIField_eEzsigntemplatesignatureTooltipposition OAIField_eEzsigntemplatesignatureTooltipposition::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplatesignatureTooltipposition::setValue(const OAIField_eEzsigntemplatesignatureTooltipposition::eOAIField_eEzsigntemplatesignatureTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplatesignatureTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplatesignatureTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
