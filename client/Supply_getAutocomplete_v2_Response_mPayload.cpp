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

#include "Supply_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Supply_getAutocomplete_v2_Response_mPayload::Supply_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Supply_getAutocomplete_v2_Response_mPayload::Supply_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Supply_getAutocomplete_v2_Response_mPayload::~Supply_getAutocomplete_v2_Response_mPayload() {}

void Supply_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_supply_isSet = false;
    m_a_obj_supply_isValid = false;
}

void Supply_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Supply_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_supply_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_supply, json[QString("a_objSupply")]);
    m_a_obj_supply_isSet = !json[QString("a_objSupply")].isNull() && m_a_obj_supply_isValid;
}

QString Supply_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Supply_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_supply.size() > 0) {
        obj.insert(QString("a_objSupply"), ::Ezmaxapi::toJsonValue(m_a_obj_supply));
    }
    return obj;
}

QList<Supply_AutocompleteElement_Response> Supply_getAutocomplete_v2_Response_mPayload::getAObjSupply() const {
    return m_a_obj_supply;
}
void Supply_getAutocomplete_v2_Response_mPayload::setAObjSupply(const QList<Supply_AutocompleteElement_Response> &a_obj_supply) {
    m_a_obj_supply = a_obj_supply;
    m_a_obj_supply_isSet = true;
}

bool Supply_getAutocomplete_v2_Response_mPayload::is_a_obj_supply_Set() const{
    return m_a_obj_supply_isSet;
}

bool Supply_getAutocomplete_v2_Response_mPayload::is_a_obj_supply_Valid() const{
    return m_a_obj_supply_isValid;
}

bool Supply_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_supply.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Supply_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_supply_isValid && true;
}

} // namespace Ezmaxapi
