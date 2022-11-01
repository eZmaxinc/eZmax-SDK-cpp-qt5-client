/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISecretquestion_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISecretquestion_getAutocomplete_v2_Response_mPayload::OAISecretquestion_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISecretquestion_getAutocomplete_v2_Response_mPayload::OAISecretquestion_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAISecretquestion_getAutocomplete_v2_Response_mPayload::~OAISecretquestion_getAutocomplete_v2_Response_mPayload() {}

void OAISecretquestion_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_secretquestion_isSet = false;
    m_a_obj_secretquestion_isValid = false;
}

void OAISecretquestion_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISecretquestion_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_secretquestion_isValid = ::OpenAPI::fromJsonValue(a_obj_secretquestion, json[QString("a_objSecretquestion")]);
    m_a_obj_secretquestion_isSet = !json[QString("a_objSecretquestion")].isNull() && m_a_obj_secretquestion_isValid;
}

QString OAISecretquestion_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISecretquestion_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_secretquestion.size() > 0) {
        obj.insert(QString("a_objSecretquestion"), ::OpenAPI::toJsonValue(a_obj_secretquestion));
    }
    return obj;
}

QList<OAISecretquestion_AutocompleteElement_Response> OAISecretquestion_getAutocomplete_v2_Response_mPayload::getAObjSecretquestion() const {
    return a_obj_secretquestion;
}
void OAISecretquestion_getAutocomplete_v2_Response_mPayload::setAObjSecretquestion(const QList<OAISecretquestion_AutocompleteElement_Response> &a_obj_secretquestion) {
    this->a_obj_secretquestion = a_obj_secretquestion;
    this->m_a_obj_secretquestion_isSet = true;
}

bool OAISecretquestion_getAutocomplete_v2_Response_mPayload::is_a_obj_secretquestion_Set() const{
    return m_a_obj_secretquestion_isSet;
}

bool OAISecretquestion_getAutocomplete_v2_Response_mPayload::is_a_obj_secretquestion_Valid() const{
    return m_a_obj_secretquestion_isValid;
}

bool OAISecretquestion_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_secretquestion.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISecretquestion_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_secretquestion_isValid && true;
}

} // namespace OpenAPI
