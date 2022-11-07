/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIUsergroup_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_getAutocomplete_v2_Response_mPayload::OAIUsergroup_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_getAutocomplete_v2_Response_mPayload::OAIUsergroup_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroup_getAutocomplete_v2_Response_mPayload::~OAIUsergroup_getAutocomplete_v2_Response_mPayload() {}

void OAIUsergroup_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_usergroup_isSet = false;
    m_a_obj_usergroup_isValid = false;
}

void OAIUsergroup_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_usergroup_isValid = ::OpenAPI::fromJsonValue(a_obj_usergroup, json[QString("a_objUsergroup")]);
    m_a_obj_usergroup_isSet = !json[QString("a_objUsergroup")].isNull() && m_a_obj_usergroup_isValid;
}

QString OAIUsergroup_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_usergroup.size() > 0) {
        obj.insert(QString("a_objUsergroup"), ::OpenAPI::toJsonValue(a_obj_usergroup));
    }
    return obj;
}

QList<OAIUsergroup_AutocompleteElement_Response> OAIUsergroup_getAutocomplete_v2_Response_mPayload::getAObjUsergroup() const {
    return a_obj_usergroup;
}
void OAIUsergroup_getAutocomplete_v2_Response_mPayload::setAObjUsergroup(const QList<OAIUsergroup_AutocompleteElement_Response> &a_obj_usergroup) {
    this->a_obj_usergroup = a_obj_usergroup;
    this->m_a_obj_usergroup_isSet = true;
}

bool OAIUsergroup_getAutocomplete_v2_Response_mPayload::is_a_obj_usergroup_Set() const{
    return m_a_obj_usergroup_isSet;
}

bool OAIUsergroup_getAutocomplete_v2_Response_mPayload::is_a_obj_usergroup_Valid() const{
    return m_a_obj_usergroup_isValid;
}

bool OAIUsergroup_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_usergroup.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_usergroup_isValid && true;
}

} // namespace OpenAPI
