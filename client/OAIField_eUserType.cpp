/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.33
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eUserType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eUserType::OAIField_eUserType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eUserType::OAIField_eUserType() {
    this->initializeModel();
}

OAIField_eUserType::~OAIField_eUserType() {}

void OAIField_eUserType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eUserType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eUserType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("AgentBroker", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::AGENTBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Assistant", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::ASSISTANT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Attendance", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::ATTENDANCE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Customer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::CUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Employee", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::EMPLOYEE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Ezcom", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::EZCOM;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzsignSigner", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::EZSIGNSIGNER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("EzsignUser", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::EZSIGNUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("FranchiseCustomerServer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::FRANCHISECUSTOMERSERVER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RewardAdministration", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::REWARDADMINISTRATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RewardMember", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::REWARDMEMBER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RewardRepresentative", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::REWARDREPRESENTATIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RewardCustomer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::REWARDCUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("RewardDistributorServer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::REWARDDISTRIBUTORSERVER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Supplier", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::SUPPLIER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VetrxCustomer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::VETRXCUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Vetrxcustomergroup", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::VETRXCUSTOMERGROUP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VetrxCustomerServer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::VETRXCUSTOMERSERVER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VetrxManufacturer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::VETRXMANUFACTURER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("VetrxVendor", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eUserType::VETRXVENDOR;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eUserType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eUserType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eUserType::AGENTBROKER:
            val = "AgentBroker";
            break;
        case eOAIField_eUserType::ASSISTANT:
            val = "Assistant";
            break;
        case eOAIField_eUserType::ATTENDANCE:
            val = "Attendance";
            break;
        case eOAIField_eUserType::CUSTOMER:
            val = "Customer";
            break;
        case eOAIField_eUserType::EMPLOYEE:
            val = "Employee";
            break;
        case eOAIField_eUserType::EZCOM:
            val = "Ezcom";
            break;
        case eOAIField_eUserType::EZSIGNSIGNER:
            val = "EzsignSigner";
            break;
        case eOAIField_eUserType::EZSIGNUSER:
            val = "EzsignUser";
            break;
        case eOAIField_eUserType::FRANCHISECUSTOMERSERVER:
            val = "FranchiseCustomerServer";
            break;
        case eOAIField_eUserType::NORMAL:
            val = "Normal";
            break;
        case eOAIField_eUserType::REWARDADMINISTRATION:
            val = "RewardAdministration";
            break;
        case eOAIField_eUserType::REWARDMEMBER:
            val = "RewardMember";
            break;
        case eOAIField_eUserType::REWARDREPRESENTATIVE:
            val = "RewardRepresentative";
            break;
        case eOAIField_eUserType::REWARDCUSTOMER:
            val = "RewardCustomer";
            break;
        case eOAIField_eUserType::REWARDDISTRIBUTORSERVER:
            val = "RewardDistributorServer";
            break;
        case eOAIField_eUserType::SUPPLIER:
            val = "Supplier";
            break;
        case eOAIField_eUserType::VETRXCUSTOMER:
            val = "VetrxCustomer";
            break;
        case eOAIField_eUserType::VETRXCUSTOMERGROUP:
            val = "Vetrxcustomergroup";
            break;
        case eOAIField_eUserType::VETRXCUSTOMERSERVER:
            val = "VetrxCustomerServer";
            break;
        case eOAIField_eUserType::VETRXMANUFACTURER:
            val = "VetrxManufacturer";
            break;
        case eOAIField_eUserType::VETRXVENDOR:
            val = "VetrxVendor";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eUserType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eUserType::eOAIField_eUserType OAIField_eUserType::getValue() const {
    return m_value;
}

void OAIField_eUserType::setValue(const OAIField_eUserType::eOAIField_eUserType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eUserType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eUserType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
