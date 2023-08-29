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

#include "OAIVariableexpense_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIVariableexpense_getObject_v2_Response_mPayload::OAIVariableexpense_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIVariableexpense_getObject_v2_Response_mPayload::OAIVariableexpense_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIVariableexpense_getObject_v2_Response_mPayload::~OAIVariableexpense_getObject_v2_Response_mPayload() {}

void OAIVariableexpense_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_variableexpense_isSet = false;
    m_obj_variableexpense_isValid = false;
}

void OAIVariableexpense_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIVariableexpense_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_variableexpense_isValid = ::OpenAPI::fromJsonValue(m_obj_variableexpense, json[QString("objVariableexpense")]);
    m_obj_variableexpense_isSet = !json[QString("objVariableexpense")].isNull() && m_obj_variableexpense_isValid;
}

QString OAIVariableexpense_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIVariableexpense_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_variableexpense.isSet()) {
        obj.insert(QString("objVariableexpense"), ::OpenAPI::toJsonValue(m_obj_variableexpense));
    }
    return obj;
}

OAIVariableexpense_ResponseCompound OAIVariableexpense_getObject_v2_Response_mPayload::getObjVariableexpense() const {
    return m_obj_variableexpense;
}
void OAIVariableexpense_getObject_v2_Response_mPayload::setObjVariableexpense(const OAIVariableexpense_ResponseCompound &obj_variableexpense) {
    m_obj_variableexpense = obj_variableexpense;
    m_obj_variableexpense_isSet = true;
}

bool OAIVariableexpense_getObject_v2_Response_mPayload::is_obj_variableexpense_Set() const{
    return m_obj_variableexpense_isSet;
}

bool OAIVariableexpense_getObject_v2_Response_mPayload::is_obj_variableexpense_Valid() const{
    return m_obj_variableexpense_isValid;
}

bool OAIVariableexpense_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_variableexpense.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIVariableexpense_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_variableexpense_isValid && true;
}

} // namespace OpenAPI
