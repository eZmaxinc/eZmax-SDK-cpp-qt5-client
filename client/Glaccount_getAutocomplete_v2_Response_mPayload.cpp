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

#include "Glaccount_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Glaccount_getAutocomplete_v2_Response_mPayload::Glaccount_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Glaccount_getAutocomplete_v2_Response_mPayload::Glaccount_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

Glaccount_getAutocomplete_v2_Response_mPayload::~Glaccount_getAutocomplete_v2_Response_mPayload() {}

void Glaccount_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_glaccount_isSet = false;
    m_a_obj_glaccount_isValid = false;
}

void Glaccount_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Glaccount_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_glaccount_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_glaccount, json[QString("a_objGlaccount")]);
    m_a_obj_glaccount_isSet = !json[QString("a_objGlaccount")].isNull() && m_a_obj_glaccount_isValid;
}

QString Glaccount_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Glaccount_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_glaccount.size() > 0) {
        obj.insert(QString("a_objGlaccount"), ::Ezmaxapi::toJsonValue(m_a_obj_glaccount));
    }
    return obj;
}

QList<Glaccount_AutocompleteElement_Response> Glaccount_getAutocomplete_v2_Response_mPayload::getAObjGlaccount() const {
    return m_a_obj_glaccount;
}
void Glaccount_getAutocomplete_v2_Response_mPayload::setAObjGlaccount(const QList<Glaccount_AutocompleteElement_Response> &a_obj_glaccount) {
    m_a_obj_glaccount = a_obj_glaccount;
    m_a_obj_glaccount_isSet = true;
}

bool Glaccount_getAutocomplete_v2_Response_mPayload::is_a_obj_glaccount_Set() const{
    return m_a_obj_glaccount_isSet;
}

bool Glaccount_getAutocomplete_v2_Response_mPayload::is_a_obj_glaccount_Valid() const{
    return m_a_obj_glaccount_isValid;
}

bool Glaccount_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_glaccount.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Glaccount_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_glaccount_isValid && true;
}

} // namespace Ezmaxapi
