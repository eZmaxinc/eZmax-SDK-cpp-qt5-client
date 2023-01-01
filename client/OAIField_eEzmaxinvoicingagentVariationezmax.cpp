/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eEzmaxinvoicingagentVariationezmax.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzmaxinvoicingagentVariationezmax::OAIField_eEzmaxinvoicingagentVariationezmax(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzmaxinvoicingagentVariationezmax::OAIField_eEzmaxinvoicingagentVariationezmax() {
    this->initializeModel();
}

OAIField_eEzmaxinvoicingagentVariationezmax::~OAIField_eEzmaxinvoicingagentVariationezmax() {}

void OAIField_eEzmaxinvoicingagentVariationezmax::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzmaxinvoicingagentVariationezmax::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzmaxinvoicingagentVariationezmax::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Charge", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingagentVariationezmax::CHARGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Refund", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingagentVariationezmax::REFUND;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Same", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzmaxinvoicingagentVariationezmax::SAME;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzmaxinvoicingagentVariationezmax::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzmaxinvoicingagentVariationezmax::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzmaxinvoicingagentVariationezmax::CHARGE:
            val = "Charge";
            break;
        case eOAIField_eEzmaxinvoicingagentVariationezmax::REFUND:
            val = "Refund";
            break;
        case eOAIField_eEzmaxinvoicingagentVariationezmax::SAME:
            val = "Same";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzmaxinvoicingagentVariationezmax::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzmaxinvoicingagentVariationezmax::eOAIField_eEzmaxinvoicingagentVariationezmax OAIField_eEzmaxinvoicingagentVariationezmax::getValue() const {
    return m_value;
}

void OAIField_eEzmaxinvoicingagentVariationezmax::setValue(const OAIField_eEzmaxinvoicingagentVariationezmax::eOAIField_eEzmaxinvoicingagentVariationezmax& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzmaxinvoicingagentVariationezmax::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzmaxinvoicingagentVariationezmax::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
