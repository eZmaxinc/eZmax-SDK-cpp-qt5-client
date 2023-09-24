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

#include "OAIField_eEzsignsignatureFont.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_eEzsignsignatureFont::OAIField_eEzsignsignatureFont(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_eEzsignsignatureFont::OAIField_eEzsignsignatureFont() {
    this->initializeModel();
}

OAIField_eEzsignsignatureFont::~OAIField_eEzsignsignatureFont() {}

void OAIField_eEzsignsignatureFont::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_eEzsignsignatureFont::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_eEzsignsignatureFont::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Normal", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureFont::NORMAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("Cursive", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_eEzsignsignatureFont::CURSIVE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_eEzsignsignatureFont::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_eEzsignsignatureFont::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_eEzsignsignatureFont::NORMAL:
            val = "Normal";
            break;
        case eOAIField_eEzsignsignatureFont::CURSIVE:
            val = "Cursive";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_eEzsignsignatureFont::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_eEzsignsignatureFont::eOAIField_eEzsignsignatureFont OAIField_eEzsignsignatureFont::getValue() const {
    return m_value;
}

void OAIField_eEzsignsignatureFont::setValue(const OAIField_eEzsignsignatureFont::eOAIField_eEzsignsignatureFont& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_eEzsignsignatureFont::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_eEzsignsignatureFont::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
