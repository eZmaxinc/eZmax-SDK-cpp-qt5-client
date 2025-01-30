/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eEzsignformfieldgroupTooltipposition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignformfieldgroupTooltipposition::Field_eEzsignformfieldgroupTooltipposition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignformfieldgroupTooltipposition::Field_eEzsignformfieldgroupTooltipposition() {
    this->initializeModel();
}

Field_eEzsignformfieldgroupTooltipposition::~Field_eEzsignformfieldgroupTooltipposition() {}

void Field_eEzsignformfieldgroupTooltipposition::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignformfieldgroupTooltipposition::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignformfieldgroupTooltipposition::fromJson(QString jsonString) {
    
    if ( jsonString.compare("TopLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::TOPLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::TOPCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("TopRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::TOPRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::MIDDLELEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("MiddleRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::MIDDLERIGHT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomLeft", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::BOTTOMLEFT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomCenter", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::BOTTOMCENTER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BottomRight", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignformfieldgroupTooltipposition::BOTTOMRIGHT;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignformfieldgroupTooltipposition::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignformfieldgroupTooltipposition::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignformfieldgroupTooltipposition::TOPLEFT:
            val = "TopLeft";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::TOPCENTER:
            val = "TopCenter";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::TOPRIGHT:
            val = "TopRight";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::MIDDLELEFT:
            val = "MiddleLeft";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::MIDDLERIGHT:
            val = "MiddleRight";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::BOTTOMLEFT:
            val = "BottomLeft";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::BOTTOMCENTER:
            val = "BottomCenter";
            break;
        case eField_eEzsignformfieldgroupTooltipposition::BOTTOMRIGHT:
            val = "BottomRight";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignformfieldgroupTooltipposition::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignformfieldgroupTooltipposition::eField_eEzsignformfieldgroupTooltipposition Field_eEzsignformfieldgroupTooltipposition::getValue() const {
    return m_value;
}

void Field_eEzsignformfieldgroupTooltipposition::setValue(const Field_eEzsignformfieldgroupTooltipposition::eField_eEzsignformfieldgroupTooltipposition& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignformfieldgroupTooltipposition::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignformfieldgroupTooltipposition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
