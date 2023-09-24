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

#include "OAIEnum_Fontunderline.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEnum_Fontunderline::OAIEnum_Fontunderline(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEnum_Fontunderline::OAIEnum_Fontunderline() {
    this->initializeModel();
}

OAIEnum_Fontunderline::~OAIEnum_Fontunderline() {}

void OAIEnum_Fontunderline::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIEnum_Fontunderline::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIEnum_Fontunderline::fromJson(QString jsonString) {
    
    if ( jsonString.compare("None", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Fontunderline::NONE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Single", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Fontunderline::SINGLE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Double", Qt::CaseInsensitive) == 0) {
        m_value = eOAIEnum_Fontunderline::DOUBLE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIEnum_Fontunderline::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIEnum_Fontunderline::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIEnum_Fontunderline::NONE:
            val = "None";
            break;
        case eOAIEnum_Fontunderline::SINGLE:
            val = "Single";
            break;
        case eOAIEnum_Fontunderline::DOUBLE:
            val = "Double";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIEnum_Fontunderline::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIEnum_Fontunderline::eOAIEnum_Fontunderline OAIEnum_Fontunderline::getValue() const {
    return m_value;
}

void OAIEnum_Fontunderline::setValue(const OAIEnum_Fontunderline::eOAIEnum_Fontunderline& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIEnum_Fontunderline::isSet() const {
    
    return m_value_isSet;
}

bool OAIEnum_Fontunderline::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
