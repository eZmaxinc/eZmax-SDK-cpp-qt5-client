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

#include "Field_ePhoneType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_ePhoneType::Field_ePhoneType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_ePhoneType::Field_ePhoneType() {
    this->initializeModel();
}

Field_ePhoneType::~Field_ePhoneType() {}

void Field_ePhoneType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_ePhoneType::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_ePhoneType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Local", Qt::CaseInsensitive) == 0) {
        m_value = eField_ePhoneType::LOCAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("International", Qt::CaseInsensitive) == 0) {
        m_value = eField_ePhoneType::INTERNATIONAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_ePhoneType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_ePhoneType::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_ePhoneType::LOCAL:
            val = "Local";
            break;
        case eField_ePhoneType::INTERNATIONAL:
            val = "International";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_ePhoneType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_ePhoneType::eField_ePhoneType Field_ePhoneType::getValue() const {
    return m_value;
}

void Field_ePhoneType::setValue(const Field_ePhoneType::eField_ePhoneType& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_ePhoneType::isSet() const {
    
    return m_value_isSet;
}

bool Field_ePhoneType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
