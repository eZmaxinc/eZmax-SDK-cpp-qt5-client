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

#include "OAIField_eCommunicationrecipientObjecttype.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eCommunicationrecipientObjecttype::OAIField_eCommunicationrecipientObjecttype(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eCommunicationrecipientObjecttype::OAIField_eCommunicationrecipientObjecttype() {
    this->initializeModel();
}

OAIField_eCommunicationrecipientObjecttype::~OAIField_eCommunicationrecipientObjecttype() {}

void OAIField_eCommunicationrecipientObjecttype::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eCommunicationrecipientObjecttype::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eCommunicationrecipientObjecttype::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Agent", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::AGENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Agentincorporation", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::AGENTINCORPORATION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Assistant", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::ASSISTANT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Broker", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::BROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Contact", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::CONTACT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Customer", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::CUSTOMER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Employee", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::EMPLOYEE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Externalbroker", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::EXTERNALBROKER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Ezcomagent", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::EZCOMAGENT;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Ezcomcompany", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::EZCOMCOMPANY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Ezsignsigner", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::EZSIGNSIGNER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Franchiseoffice", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::FRANCHISEOFFICE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Notary", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::NOTARY;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Rewardmember", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::REWARDMEMBER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Supplier", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::SUPPLIER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("User", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eCommunicationrecipientObjecttype::USER;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eCommunicationrecipientObjecttype::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eCommunicationrecipientObjecttype::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eCommunicationrecipientObjecttype::AGENT:
            val = "Agent";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::AGENTINCORPORATION:
            val = "Agentincorporation";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::ASSISTANT:
            val = "Assistant";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::BROKER:
            val = "Broker";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::CONTACT:
            val = "Contact";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::CUSTOMER:
            val = "Customer";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::EMPLOYEE:
            val = "Employee";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::EXTERNALBROKER:
            val = "Externalbroker";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::EZCOMAGENT:
            val = "Ezcomagent";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::EZCOMCOMPANY:
            val = "Ezcomcompany";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::EZSIGNSIGNER:
            val = "Ezsignsigner";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::FRANCHISEOFFICE:
            val = "Franchiseoffice";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::NOTARY:
            val = "Notary";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::REWARDMEMBER:
            val = "Rewardmember";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::SUPPLIER:
            val = "Supplier";
            break;
        case eOAIField_eCommunicationrecipientObjecttype::USER:
            val = "User";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eCommunicationrecipientObjecttype::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eCommunicationrecipientObjecttype::eOAIField_eCommunicationrecipientObjecttype OAIField_eCommunicationrecipientObjecttype::getValue() const {
    return m_value;
}

void OAIField_eCommunicationrecipientObjecttype::setValue(const OAIField_eCommunicationrecipientObjecttype::eOAIField_eCommunicationrecipientObjecttype& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eCommunicationrecipientObjecttype::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eCommunicationrecipientObjecttype::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
