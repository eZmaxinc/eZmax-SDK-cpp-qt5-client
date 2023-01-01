/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAITaxassignment_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITaxassignment_getAutocomplete_v2_Response_mPayload::OAITaxassignment_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITaxassignment_getAutocomplete_v2_Response_mPayload::OAITaxassignment_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAITaxassignment_getAutocomplete_v2_Response_mPayload::~OAITaxassignment_getAutocomplete_v2_Response_mPayload() {}

void OAITaxassignment_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_taxassignment_isSet = false;
    m_a_obj_taxassignment_isValid = false;
}

void OAITaxassignment_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITaxassignment_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_taxassignment_isValid = ::OpenAPI::fromJsonValue(a_obj_taxassignment, json[QString("a_objTaxassignment")]);
    m_a_obj_taxassignment_isSet = !json[QString("a_objTaxassignment")].isNull() && m_a_obj_taxassignment_isValid;
}

QString OAITaxassignment_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITaxassignment_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_taxassignment.size() > 0) {
        obj.insert(QString("a_objTaxassignment"), ::OpenAPI::toJsonValue(a_obj_taxassignment));
    }
    return obj;
}

QList<OAITaxassignment_AutocompleteElement_Response> OAITaxassignment_getAutocomplete_v2_Response_mPayload::getAObjTaxassignment() const {
    return a_obj_taxassignment;
}
void OAITaxassignment_getAutocomplete_v2_Response_mPayload::setAObjTaxassignment(const QList<OAITaxassignment_AutocompleteElement_Response> &a_obj_taxassignment) {
    this->a_obj_taxassignment = a_obj_taxassignment;
    this->m_a_obj_taxassignment_isSet = true;
}

bool OAITaxassignment_getAutocomplete_v2_Response_mPayload::is_a_obj_taxassignment_Set() const{
    return m_a_obj_taxassignment_isSet;
}

bool OAITaxassignment_getAutocomplete_v2_Response_mPayload::is_a_obj_taxassignment_Valid() const{
    return m_a_obj_taxassignment_isValid;
}

bool OAITaxassignment_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_taxassignment.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITaxassignment_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_taxassignment_isValid && true;
}

} // namespace OpenAPI
