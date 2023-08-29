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

#include "OAIFranchisebroker_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::OAIFranchisebroker_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::OAIFranchisebroker_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::~OAIFranchisebroker_getAutocomplete_v2_Response_mPayload() {}

void OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_franchisebroker_isSet = false;
    m_a_obj_franchisebroker_isValid = false;
}

void OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_franchisebroker_isValid = ::OpenAPI::fromJsonValue(m_a_obj_franchisebroker, json[QString("a_objFranchisebroker")]);
    m_a_obj_franchisebroker_isSet = !json[QString("a_objFranchisebroker")].isNull() && m_a_obj_franchisebroker_isValid;
}

QString OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_franchisebroker.size() > 0) {
        obj.insert(QString("a_objFranchisebroker"), ::OpenAPI::toJsonValue(m_a_obj_franchisebroker));
    }
    return obj;
}

QList<OAIFranchisebroker_AutocompleteElement_Response> OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::getAObjFranchisebroker() const {
    return m_a_obj_franchisebroker;
}
void OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::setAObjFranchisebroker(const QList<OAIFranchisebroker_AutocompleteElement_Response> &a_obj_franchisebroker) {
    m_a_obj_franchisebroker = a_obj_franchisebroker;
    m_a_obj_franchisebroker_isSet = true;
}

bool OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::is_a_obj_franchisebroker_Set() const{
    return m_a_obj_franchisebroker_isSet;
}

bool OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::is_a_obj_franchisebroker_Valid() const{
    return m_a_obj_franchisebroker_isValid;
}

bool OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_franchisebroker.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFranchisebroker_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
