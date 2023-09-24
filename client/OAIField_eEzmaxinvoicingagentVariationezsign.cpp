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

#include "OAIField_eEzmaxinvoicingagentVariationezsign.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzmaxinvoicingagentVariationezsign::OAIField_eEzmaxinvoicingagentVariationezsign(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzmaxinvoicingagentVariationezsign::OAIField_eEzmaxinvoicingagentVariationezsign() {
    this->initializeModel();
}

OAIField_eEzmaxinvoicingagentVariationezsign::~OAIField_eEzmaxinvoicingagentVariationezsign() {}

void OAIField_eEzmaxinvoicingagentVariationezsign::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzmaxinvoicingagentVariationezsign::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzmaxinvoicingagentVariationezsign::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Charge", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingagentVariationezsign::CHARGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Refund", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingagentVariationezsign::REFUND;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Same", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingagentVariationezsign::SAME;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzmaxinvoicingagentVariationezsign::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzmaxinvoicingagentVariationezsign::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzmaxinvoicingagentVariationezsign::CHARGE:
            val = "Charge";
            break;
        case eOAIField_eEzmaxinvoicingagentVariationezsign::REFUND:
            val = "Refund";
            break;
        case eOAIField_eEzmaxinvoicingagentVariationezsign::SAME:
            val = "Same";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzmaxinvoicingagentVariationezsign::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzmaxinvoicingagentVariationezsign::eOAIField_eEzmaxinvoicingagentVariationezsign OAIField_eEzmaxinvoicingagentVariationezsign::getValue() const {
    return m_value;
}

void OAIField_eEzmaxinvoicingagentVariationezsign::setValue(const OAIField_eEzmaxinvoicingagentVariationezsign::eOAIField_eEzmaxinvoicingagentVariationezsign& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzmaxinvoicingagentVariationezsign::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzmaxinvoicingagentVariationezsign::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
