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

#include "Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::~Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload() {}

void Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezsigntemplatepackage_isSet = false;
    m_a_obj_ezsigntemplatepackage_isValid = false;
}

void Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatepackage_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigntemplatepackage, json[QString("a_objEzsigntemplatepackage")]);
    m_a_obj_ezsigntemplatepackage_isSet = !json[QString("a_objEzsigntemplatepackage")].isNull() && m_a_obj_ezsigntemplatepackage_isValid;
}

QString Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigntemplatepackage.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatepackage"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigntemplatepackage));
    }
    return obj;
}

QList<Ezsigntemplatepackage_AutocompleteElement_Response> Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::getAObjEzsigntemplatepackage() const {
    return m_a_obj_ezsigntemplatepackage;
}
void Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::setAObjEzsigntemplatepackage(const QList<Ezsigntemplatepackage_AutocompleteElement_Response> &a_obj_ezsigntemplatepackage) {
    m_a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;
    m_a_obj_ezsigntemplatepackage_isSet = true;
}

bool Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsigntemplatepackage_Set() const{
    return m_a_obj_ezsigntemplatepackage_isSet;
}

bool Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsigntemplatepackage_Valid() const{
    return m_a_obj_ezsigntemplatepackage_isValid;
}

bool Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigntemplatepackage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatepackage_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatepackage_isValid && true;
}

} // namespace Ezmaxapi
