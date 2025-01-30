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

#include "Field_eActivesessionUsertype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eActivesessionUsertype::Field_eActivesessionUsertype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eActivesessionUsertype::Field_eActivesessionUsertype() {
    this->initializeModel();
}

Field_eActivesessionUsertype::~Field_eActivesessionUsertype() {}

void Field_eActivesessionUsertype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eActivesessionUsertype::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eActivesessionUsertype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("AgentBroker", Qt::CaseInsensitive) == 0) {
        m_value = eField_eActivesessionUsertype::AGENTBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Assistant", Qt::CaseInsensitive) == 0) {
        m_value = eField_eActivesessionUsertype::ASSISTANT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzsignSigner", Qt::CaseInsensitive) == 0) {
        m_value = eField_eActivesessionUsertype::EZSIGNSIGNER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzsignUser", Qt::CaseInsensitive) == 0) {
        m_value = eField_eActivesessionUsertype::EZSIGNUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eField_eActivesessionUsertype::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eActivesessionUsertype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eActivesessionUsertype::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eActivesessionUsertype::AGENTBROKER:
            val = "AgentBroker";
            break;
        case eField_eActivesessionUsertype::ASSISTANT:
            val = "Assistant";
            break;
        case eField_eActivesessionUsertype::EZSIGNSIGNER:
            val = "EzsignSigner";
            break;
        case eField_eActivesessionUsertype::EZSIGNUSER:
            val = "EzsignUser";
            break;
        case eField_eActivesessionUsertype::NORMAL:
            val = "Normal";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eActivesessionUsertype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eActivesessionUsertype::eField_eActivesessionUsertype Field_eActivesessionUsertype::getValue() const {
    return m_value;
}

void Field_eActivesessionUsertype::setValue(const Field_eActivesessionUsertype::eField_eActivesessionUsertype& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eActivesessionUsertype::isSet() const {
    
    return m_value_isSet;
}

bool Field_eActivesessionUsertype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
