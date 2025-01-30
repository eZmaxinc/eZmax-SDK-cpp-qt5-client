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

#include "Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::~Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload() {}

void Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezsigntemplateglobal_isSet = false;
    m_a_obj_ezsigntemplateglobal_isValid = false;
}

void Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplateglobal_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplateglobal, json[QString("a_objEzsigntemplateglobal")]);
    m_a_obj_ezsigntemplateglobal_isSet = !json[QString("a_objEzsigntemplateglobal")].isNull() && m_a_obj_ezsigntemplateglobal_isValid;
}

QString Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplateglobal.size() > 0) {
        obj.insert(QString("a_objEzsigntemplateglobal"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplateglobal));
    }
    return obj;
}

QList<Ezsigntemplateglobal_AutocompleteElement_Response> Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::getAObjEzsigntemplateglobal() const {
    return m_a_obj_ezsigntemplateglobal;
}
void Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::setAObjEzsigntemplateglobal(const QList<Ezsigntemplateglobal_AutocompleteElement_Response> &a_obj_ezsigntemplateglobal) {
    m_a_obj_ezsigntemplateglobal = a_obj_ezsigntemplateglobal;
    m_a_obj_ezsigntemplateglobal_isSet = true;
}

bool Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsigntemplateglobal_Set() const{
    return m_a_obj_ezsigntemplateglobal_isSet;
}

bool Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsigntemplateglobal_Valid() const{
    return m_a_obj_ezsigntemplateglobal_isValid;
}

bool Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplateglobal.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplateglobal_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplateglobal_isValid && true;
}

} // namespace Ezmaxapi
