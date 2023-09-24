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

#include "OAICompany_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICompany_getAutocomplete_v2_Response_mPayload::OAICompany_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICompany_getAutocomplete_v2_Response_mPayload::OAICompany_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAICompany_getAutocomplete_v2_Response_mPayload::~OAICompany_getAutocomplete_v2_Response_mPayload() {}

void OAICompany_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_company_isSet = false;
    m_a_obj_company_isValid = false;
}

void OAICompany_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICompany_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_company_isValid = ::OpenAPI::fromJsonValue(m_a_obj_company, json[QString("a_objCompany")]);
    m_a_obj_company_isSet = !json[QString("a_objCompany")].isNull() && m_a_obj_company_isValid;
}

QString OAICompany_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICompany_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_company.size() > 0) {
        obj.insert(QString("a_objCompany"), ::OpenAPI::toJsonValue(m_a_obj_company));
    }
    return obj;
}

QList<OAICompany_AutocompleteElement_Response> OAICompany_getAutocomplete_v2_Response_mPayload::getAObjCompany() const {
    return m_a_obj_company;
}
void OAICompany_getAutocomplete_v2_Response_mPayload::setAObjCompany(const QList<OAICompany_AutocompleteElement_Response> &a_obj_company) {
    m_a_obj_company = a_obj_company;
    m_a_obj_company_isSet = true;
}

bool OAICompany_getAutocomplete_v2_Response_mPayload::is_a_obj_company_Set() const{
    return m_a_obj_company_isSet;
}

bool OAICompany_getAutocomplete_v2_Response_mPayload::is_a_obj_company_Valid() const{
    return m_a_obj_company_isValid;
}

bool OAICompany_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_company.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICompany_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
