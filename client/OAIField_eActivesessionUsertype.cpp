/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eActivesessionUsertype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eActivesessionUsertype::OAIField_eActivesessionUsertype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eActivesessionUsertype::OAIField_eActivesessionUsertype() {
    this->initializeModel();
}

OAIField_eActivesessionUsertype::~OAIField_eActivesessionUsertype() {}

void OAIField_eActivesessionUsertype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eActivesessionUsertype::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eActivesessionUsertype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("AgentBroker", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionUsertype::AGENTBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Assistant", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionUsertype::ASSISTANT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzsignUser", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionUsertype::EZSIGNUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eActivesessionUsertype::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eActivesessionUsertype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eActivesessionUsertype::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eActivesessionUsertype::AGENTBROKER:
            val = "AgentBroker";
            break;
        case eOAIField_eActivesessionUsertype::ASSISTANT:
            val = "Assistant";
            break;
        case eOAIField_eActivesessionUsertype::EZSIGNUSER:
            val = "EzsignUser";
            break;
        case eOAIField_eActivesessionUsertype::NORMAL:
            val = "Normal";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eActivesessionUsertype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eActivesessionUsertype::eOAIField_eActivesessionUsertype OAIField_eActivesessionUsertype::getValue() const {
    return m_value;
}

void OAIField_eActivesessionUsertype::setValue(const OAIField_eActivesessionUsertype::eOAIField_eActivesessionUsertype& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eActivesessionUsertype::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eActivesessionUsertype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
