/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_eSessionhistoryEndby.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eSessionhistoryEndby::OAIField_eSessionhistoryEndby(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eSessionhistoryEndby::OAIField_eSessionhistoryEndby() {
    this->initializeModel();
}

OAIField_eSessionhistoryEndby::~OAIField_eSessionhistoryEndby() {}

void OAIField_eSessionhistoryEndby::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eSessionhistoryEndby::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eSessionhistoryEndby::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Decryption", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::DECRYPTION;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Hack", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::HACK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Expired", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::EXPIRED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Hijack", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::HIJACK;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("DoubleLogon", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::DOUBLELOGON;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Garbage", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::GARBAGE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Logoff", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::LOGOFF;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BadAuth", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::BADAUTH;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Locked", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::LOCKED;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Inactive", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::INACTIVE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("InvalidUser", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::INVALIDUSER;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BadUserType", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::BADUSERTYPE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("BadIP", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::BADIP;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("ForcedLogoff", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eSessionhistoryEndby::FORCEDLOGOFF;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eSessionhistoryEndby::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eSessionhistoryEndby::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eSessionhistoryEndby::DECRYPTION:
            val = "Decryption";
            break;
        case eOAIField_eSessionhistoryEndby::HACK:
            val = "Hack";
            break;
        case eOAIField_eSessionhistoryEndby::EXPIRED:
            val = "Expired";
            break;
        case eOAIField_eSessionhistoryEndby::HIJACK:
            val = "Hijack";
            break;
        case eOAIField_eSessionhistoryEndby::DOUBLELOGON:
            val = "DoubleLogon";
            break;
        case eOAIField_eSessionhistoryEndby::GARBAGE:
            val = "Garbage";
            break;
        case eOAIField_eSessionhistoryEndby::LOGOFF:
            val = "Logoff";
            break;
        case eOAIField_eSessionhistoryEndby::BADAUTH:
            val = "BadAuth";
            break;
        case eOAIField_eSessionhistoryEndby::LOCKED:
            val = "Locked";
            break;
        case eOAIField_eSessionhistoryEndby::INACTIVE:
            val = "Inactive";
            break;
        case eOAIField_eSessionhistoryEndby::INVALIDUSER:
            val = "InvalidUser";
            break;
        case eOAIField_eSessionhistoryEndby::BADUSERTYPE:
            val = "BadUserType";
            break;
        case eOAIField_eSessionhistoryEndby::BADIP:
            val = "BadIP";
            break;
        case eOAIField_eSessionhistoryEndby::FORCEDLOGOFF:
            val = "ForcedLogoff";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eSessionhistoryEndby::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eSessionhistoryEndby::eOAIField_eSessionhistoryEndby OAIField_eSessionhistoryEndby::getValue() const {
    return m_value;
}

void OAIField_eSessionhistoryEndby::setValue(const OAIField_eSessionhistoryEndby::eOAIField_eSessionhistoryEndby& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eSessionhistoryEndby::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eSessionhistoryEndby::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
