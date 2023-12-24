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

#include "Field_eUserEzsignprepaid.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eUserEzsignprepaid::Field_eUserEzsignprepaid(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eUserEzsignprepaid::Field_eUserEzsignprepaid() {
    this->initializeModel();
}

Field_eUserEzsignprepaid::~Field_eUserEzsignprepaid() {}

void Field_eUserEzsignprepaid::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eUserEzsignprepaid::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eUserEzsignprepaid::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Basic", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserEzsignprepaid::BASIC;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Unlimited", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserEzsignprepaid::UNLIMITED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Pro", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserEzsignprepaid::PRO;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eUserEzsignprepaid::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eUserEzsignprepaid::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eUserEzsignprepaid::BASIC:
            val = "Basic";
            break;
        case eField_eUserEzsignprepaid::UNLIMITED:
            val = "Unlimited";
            break;
        case eField_eUserEzsignprepaid::PRO:
            val = "Pro";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eUserEzsignprepaid::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eUserEzsignprepaid::eField_eUserEzsignprepaid Field_eUserEzsignprepaid::getValue() const {
    return m_value;
}

void Field_eUserEzsignprepaid::setValue(const Field_eUserEzsignprepaid::eField_eUserEzsignprepaid& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eUserEzsignprepaid::isSet() const {
    
    return m_value_isSet;
}

bool Field_eUserEzsignprepaid::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
