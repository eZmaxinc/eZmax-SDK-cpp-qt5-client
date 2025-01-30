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

#include "Module_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Module_getAutocomplete_v2_Response_mPayload::Module_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Module_getAutocomplete_v2_Response_mPayload::Module_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Module_getAutocomplete_v2_Response_mPayload::~Module_getAutocomplete_v2_Response_mPayload() {}

void Module_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_module_isSet = false;
    m_a_obj_module_isValid = false;
}

void Module_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Module_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_module_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_module, json[QString("a_objModule")]);
    m_a_obj_module_isSet = !json[QString("a_objModule")].isNull() && m_a_obj_module_isValid;
}

QString Module_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Module_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_module.size() > 0) {
        obj.insert(QString("a_objModule"), ::Ezmaxapi::toJsonValue(m_a_obj_module));
    }
    return obj;
}

QList<Module_AutocompleteElement_Response> Module_getAutocomplete_v2_Response_mPayload::getAObjModule() const {
    return m_a_obj_module;
}
void Module_getAutocomplete_v2_Response_mPayload::setAObjModule(const QList<Module_AutocompleteElement_Response> &a_obj_module) {
    m_a_obj_module = a_obj_module;
    m_a_obj_module_isSet = true;
}

bool Module_getAutocomplete_v2_Response_mPayload::is_a_obj_module_Set() const{
    return m_a_obj_module_isSet;
}

bool Module_getAutocomplete_v2_Response_mPayload::is_a_obj_module_Valid() const{
    return m_a_obj_module_isValid;
}

bool Module_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_module.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Module_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_module_isValid && true;
}

} // namespace Ezmaxapi
