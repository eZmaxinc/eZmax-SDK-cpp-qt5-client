/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Field_eEzsigntemplatepackagesignerMapping.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsigntemplatepackagesignerMapping::Field_eEzsigntemplatepackagesignerMapping(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsigntemplatepackagesignerMapping::Field_eEzsigntemplatepackagesignerMapping() {
    this->initializeModel();
}

Field_eEzsigntemplatepackagesignerMapping::~Field_eEzsigntemplatepackagesignerMapping() {}

void Field_eEzsigntemplatepackagesignerMapping::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsigntemplatepackagesignerMapping::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsigntemplatepackagesignerMapping::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Manual", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatepackagesignerMapping::MANUAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Creator", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatepackagesignerMapping::CREATOR;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("User", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatepackagesignerMapping::USER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Usergroup", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsigntemplatepackagesignerMapping::USERGROUP;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsigntemplatepackagesignerMapping::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsigntemplatepackagesignerMapping::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsigntemplatepackagesignerMapping::MANUAL:
            val = "Manual";
            break;
        case eField_eEzsigntemplatepackagesignerMapping::CREATOR:
            val = "Creator";
            break;
        case eField_eEzsigntemplatepackagesignerMapping::USER:
            val = "User";
            break;
        case eField_eEzsigntemplatepackagesignerMapping::USERGROUP:
            val = "Usergroup";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsigntemplatepackagesignerMapping::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsigntemplatepackagesignerMapping::eField_eEzsigntemplatepackagesignerMapping Field_eEzsigntemplatepackagesignerMapping::getValue() const {
    return m_value;
}

void Field_eEzsigntemplatepackagesignerMapping::setValue(const Field_eEzsigntemplatepackagesignerMapping::eField_eEzsigntemplatepackagesignerMapping& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsigntemplatepackagesignerMapping::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsigntemplatepackagesignerMapping::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
