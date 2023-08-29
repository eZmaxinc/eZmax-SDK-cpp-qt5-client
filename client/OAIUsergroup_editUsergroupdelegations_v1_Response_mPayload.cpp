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

#include "OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload() {
    this->initializeModel();
}

OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::~OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload() {}

void OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::initializeModel() {

    m_a_pki_usergroupdelegation_id_isSet = false;
    m_a_pki_usergroupdelegation_id_isValid = false;
}

void OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_usergroupdelegation_id_isValid = ::OpenAPI::fromJsonValue(m_a_pki_usergroupdelegation_id, json[QString("a_pkiUsergroupdelegationID")]);
    m_a_pki_usergroupdelegation_id_isSet = !json[QString("a_pkiUsergroupdelegationID")].isNull() && m_a_pki_usergroupdelegation_id_isValid;
}

QString OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_usergroupdelegation_id.size() > 0) {
        obj.insert(QString("a_pkiUsergroupdelegationID"), ::OpenAPI::toJsonValue(m_a_pki_usergroupdelegation_id));
    }
    return obj;
}

QList<qint32> OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::getAPkiUsergroupdelegationId() const {
    return m_a_pki_usergroupdelegation_id;
}
void OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::setAPkiUsergroupdelegationId(const QList<qint32> &a_pki_usergroupdelegation_id) {
    m_a_pki_usergroupdelegation_id = a_pki_usergroupdelegation_id;
    m_a_pki_usergroupdelegation_id_isSet = true;
}

bool OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::is_a_pki_usergroupdelegation_id_Set() const{
    return m_a_pki_usergroupdelegation_id_isSet;
}

bool OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::is_a_pki_usergroupdelegation_id_Valid() const{
    return m_a_pki_usergroupdelegation_id_isValid;
}

bool OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_usergroupdelegation_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUsergroup_editUsergroupdelegations_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_usergroupdelegation_id_isValid && true;
}

} // namespace OpenAPI
