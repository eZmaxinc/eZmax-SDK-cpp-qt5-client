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

#include "OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::~OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload() {}

void OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezmaxproduct_isSet = false;
    m_a_obj_ezmaxproduct_isValid = false;
}

void OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezmaxproduct_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezmaxproduct, json[QString("a_objEzmaxproduct")]);
    m_a_obj_ezmaxproduct_isSet = !json[QString("a_objEzmaxproduct")].isNull() && m_a_obj_ezmaxproduct_isValid;
}

QString OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezmaxproduct.size() > 0) {
        obj.insert(QString("a_objEzmaxproduct"), ::OpenAPI::toJsonValue(m_a_obj_ezmaxproduct));
    }
    return obj;
}

QList<OAIEzmaxproduct_AutocompleteElement_Response> OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::getAObjEzmaxproduct() const {
    return m_a_obj_ezmaxproduct;
}
void OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::setAObjEzmaxproduct(const QList<OAIEzmaxproduct_AutocompleteElement_Response> &a_obj_ezmaxproduct) {
    m_a_obj_ezmaxproduct = a_obj_ezmaxproduct;
    m_a_obj_ezmaxproduct_isSet = true;
}

bool OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::is_a_obj_ezmaxproduct_Set() const{
    return m_a_obj_ezmaxproduct_isSet;
}

bool OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::is_a_obj_ezmaxproduct_Valid() const{
    return m_a_obj_ezmaxproduct_isValid;
}

bool OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezmaxproduct.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzmaxproduct_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
