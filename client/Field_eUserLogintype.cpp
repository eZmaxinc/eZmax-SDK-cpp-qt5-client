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

#include "Field_eUserLogintype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eUserLogintype::Field_eUserLogintype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eUserLogintype::Field_eUserLogintype() {
    this->initializeModel();
}

Field_eUserLogintype::~Field_eUserLogintype() {}

void Field_eUserLogintype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eUserLogintype::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eUserLogintype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Password", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserLogintype::PASSWORD;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PasswordPhone", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserLogintype::PASSWORDPHONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PasswordQuestion", Qt::CaseInsensitive) == 0) {
        m_value = eField_eUserLogintype::PASSWORDQUESTION;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eUserLogintype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eUserLogintype::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eUserLogintype::PASSWORD:
            val = "Password";
            break;
        case eField_eUserLogintype::PASSWORDPHONE:
            val = "PasswordPhone";
            break;
        case eField_eUserLogintype::PASSWORDQUESTION:
            val = "PasswordQuestion";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eUserLogintype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eUserLogintype::eField_eUserLogintype Field_eUserLogintype::getValue() const {
    return m_value;
}

void Field_eUserLogintype::setValue(const Field_eUserLogintype::eField_eUserLogintype& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eUserLogintype::isSet() const {
    
    return m_value_isSet;
}

bool Field_eUserLogintype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
