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

#include "Field_eEzsignfolderMessageorder.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Field_eEzsignfolderMessageorder::Field_eEzsignfolderMessageorder(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Field_eEzsignfolderMessageorder::Field_eEzsignfolderMessageorder() {
    this->initializeModel();
}

Field_eEzsignfolderMessageorder::~Field_eEzsignfolderMessageorder() {}

void Field_eEzsignfolderMessageorder::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eField_eEzsignfolderMessageorder::INVALID_VALUE_OPENAPI_GENERATED;
}

void Field_eEzsignfolderMessageorder::fromJson(QString jsonString) {
    
    if ( jsonString.compare("GlobalFirst", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfolderMessageorder::GLOBALFIRST;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("PrivateFirst", Qt::CaseInsensitive) == 0) {
        m_value = eField_eEzsignfolderMessageorder::PRIVATEFIRST;
        m_value_isSet = m_value_isValid = true;
    }
}

void Field_eEzsignfolderMessageorder::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString Field_eEzsignfolderMessageorder::asJson() const {
    
    QString val;
    switch (m_value){
        case eField_eEzsignfolderMessageorder::GLOBALFIRST:
            val = "GlobalFirst";
            break;
        case eField_eEzsignfolderMessageorder::PRIVATEFIRST:
            val = "PrivateFirst";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue Field_eEzsignfolderMessageorder::asJsonValue() const {
    
    return QJsonValue(asJson());
}


Field_eEzsignfolderMessageorder::eField_eEzsignfolderMessageorder Field_eEzsignfolderMessageorder::getValue() const {
    return m_value;
}

void Field_eEzsignfolderMessageorder::setValue(const Field_eEzsignfolderMessageorder::eField_eEzsignfolderMessageorder& value){
    m_value = value;
    m_value_isSet = true;
}
bool Field_eEzsignfolderMessageorder::isSet() const {
    
    return m_value_isSet;
}

bool Field_eEzsignfolderMessageorder::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace Ezmaxapi
