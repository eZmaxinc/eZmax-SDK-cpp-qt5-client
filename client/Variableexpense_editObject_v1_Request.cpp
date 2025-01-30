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

#include "Variableexpense_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Variableexpense_editObject_v1_Request::Variableexpense_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Variableexpense_editObject_v1_Request::Variableexpense_editObject_v1_Request() {
    this->initializeModel();
}

Variableexpense_editObject_v1_Request::~Variableexpense_editObject_v1_Request() {}

void Variableexpense_editObject_v1_Request::initializeModel() {

    m_obj_variableexpense_isSet = false;
    m_obj_variableexpense_isValid = false;
}

void Variableexpense_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Variableexpense_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_variableexpense_isValid = ::Ezmaxapi::fromJsonValue(m_obj_variableexpense, json[QString("objVariableexpense")]);
    m_obj_variableexpense_isSet = !json[QString("objVariableexpense")].isNull() && m_obj_variableexpense_isValid;
}

QString Variableexpense_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Variableexpense_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_variableexpense.isSet()) {
        obj.insert(QString("objVariableexpense"), ::Ezmaxapi::toJsonValue(m_obj_variableexpense));
    }
    return obj;
}

Variableexpense_RequestCompound Variableexpense_editObject_v1_Request::getObjVariableexpense() const {
    return m_obj_variableexpense;
}
void Variableexpense_editObject_v1_Request::setObjVariableexpense(const Variableexpense_RequestCompound &obj_variableexpense) {
    m_obj_variableexpense = obj_variableexpense;
    m_obj_variableexpense_isSet = true;
}

bool Variableexpense_editObject_v1_Request::is_obj_variableexpense_Set() const{
    return m_obj_variableexpense_isSet;
}

bool Variableexpense_editObject_v1_Request::is_obj_variableexpense_Valid() const{
    return m_obj_variableexpense_isValid;
}

bool Variableexpense_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_variableexpense.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Variableexpense_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_variableexpense_isValid && true;
}

} // namespace Ezmaxapi
