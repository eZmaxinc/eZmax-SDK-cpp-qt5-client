/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eEzsigntemplateformfieldgroupTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsigntemplateformfieldgroupTooltipposition::OAIField_eEzsigntemplateformfieldgroupTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsigntemplateformfieldgroupTooltipposition::OAIField_eEzsigntemplateformfieldgroupTooltipposition() {
    this->initializeModel();
}

OAIField_eEzsigntemplateformfieldgroupTooltipposition::~OAIField_eEzsigntemplateformfieldgroupTooltipposition() {}

void OAIField_eEzsigntemplateformfieldgroupTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsigntemplateformfieldgroupTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsigntemplateformfieldgroupTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsigntemplateformfieldgroupTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eOAIField_eEzsigntemplateformfieldgroupTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsigntemplateformfieldgroupTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsigntemplateformfieldgroupTooltipposition::eOAIField_eEzsigntemplateformfieldgroupTooltipposition OAIField_eEzsigntemplateformfieldgroupTooltipposition::getValue() const {
    return m_value;
}

void OAIField_eEzsigntemplateformfieldgroupTooltipposition::setValue(const OAIField_eEzsigntemplateformfieldgroupTooltipposition::eOAIField_eEzsigntemplateformfieldgroupTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsigntemplateformfieldgroupTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsigntemplateformfieldgroupTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
