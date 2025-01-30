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

#include "Enum_Fontweight.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Enum_Fontweight::Enum_Fontweight(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Enum_Fontweight::Enum_Fontweight() {
    this->initializeModel();
}

Enum_Fontweight::~Enum_Fontweight() {}

void Enum_Fontweight::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eEnum_Fontweight::INVALID_VALUE_OPENAPI_GENERATED;
}

void Enum_Fontweight::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eEnum_Fontweight::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Bold", Qt::CaseInsensitive) == 0) {
        m_value = eEnum_Fontweight::BOLD;
        m_value_isSet = m_value_isValid = true;
    }
}

void Enum_Fontweight::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Enum_Fontweight::asJson() const {
    
    QString val;
    switch (m_value){
        case eEnum_Fontweight::NORMAL:
            val = "Normal";
            break;
        case eEnum_Fontweight::BOLD:
            val = "Bold";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Enum_Fontweight::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Enum_Fontweight::eEnum_Fontweight Enum_Fontweight::getValue() const {
    return m_value;
}

void Enum_Fontweight::setValue(const Enum_Fontweight::eEnum_Fontweight& value){
    m_value = value;
    m_value_isSet = true;
}
bool Enum_Fontweight::isSet() const {
    
    return m_value_isSet;
}

bool Enum_Fontweight::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
