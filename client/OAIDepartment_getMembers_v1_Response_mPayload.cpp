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

#include "OAIDepartment_getMembers_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIDepartment_getMembers_v1_Response_mPayload::OAIDepartment_getMembers_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIDepartment_getMembers_v1_Response_mPayload::OAIDepartment_getMembers_v1_Response_mPayload() {
    this->initializeModel();
}

OAIDepartment_getMembers_v1_Response_mPayload::~OAIDepartment_getMembers_v1_Response_mPayload() {}

void OAIDepartment_getMembers_v1_Response_mPayload::initializeModel() {

    m_a_fki_agent_id_isSet = false;
    m_a_fki_agent_id_isValid = false;

    m_a_fki_broker_id_isSet = false;
    m_a_fki_broker_id_isValid = false;

    m_a_fki_customer_id_isSet = false;
    m_a_fki_customer_id_isValid = false;

    m_a_fki_employee_id_isSet = false;
    m_a_fki_employee_id_isValid = false;
}

void OAIDepartment_getMembers_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIDepartment_getMembers_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_fki_agent_id_isValid = ::OpenAPI::fromJsonValue(a_fki_agent_id, json[QString("a_fkiAgentID")]);
    m_a_fki_agent_id_isSet = !json[QString("a_fkiAgentID")].isNull() && m_a_fki_agent_id_isValid;

    m_a_fki_broker_id_isValid = ::OpenAPI::fromJsonValue(a_fki_broker_id, json[QString("a_fkiBrokerID")]);
    m_a_fki_broker_id_isSet = !json[QString("a_fkiBrokerID")].isNull() && m_a_fki_broker_id_isValid;

    m_a_fki_customer_id_isValid = ::OpenAPI::fromJsonValue(a_fki_customer_id, json[QString("a_fkiCustomerID")]);
    m_a_fki_customer_id_isSet = !json[QString("a_fkiCustomerID")].isNull() && m_a_fki_customer_id_isValid;

    m_a_fki_employee_id_isValid = ::OpenAPI::fromJsonValue(a_fki_employee_id, json[QString("a_fkiEmployeeID")]);
    m_a_fki_employee_id_isSet = !json[QString("a_fkiEmployeeID")].isNull() && m_a_fki_employee_id_isValid;
}

QString OAIDepartment_getMembers_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIDepartment_getMembers_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_fki_agent_id.size() > 0) {
        obj.insert(QString("a_fkiAgentID"), ::OpenAPI::toJsonValue(a_fki_agent_id));
    }
    if (a_fki_broker_id.size() > 0) {
        obj.insert(QString("a_fkiBrokerID"), ::OpenAPI::toJsonValue(a_fki_broker_id));
    }
    if (a_fki_customer_id.size() > 0) {
        obj.insert(QString("a_fkiCustomerID"), ::OpenAPI::toJsonValue(a_fki_customer_id));
    }
    if (a_fki_employee_id.size() > 0) {
        obj.insert(QString("a_fkiEmployeeID"), ::OpenAPI::toJsonValue(a_fki_employee_id));
    }
    return obj;
}

QList<qint32> OAIDepartment_getMembers_v1_Response_mPayload::getAFkiAgentId() const {
    return a_fki_agent_id;
}
void OAIDepartment_getMembers_v1_Response_mPayload::setAFkiAgentId(const QList<qint32> &a_fki_agent_id) {
    this->a_fki_agent_id = a_fki_agent_id;
    this->m_a_fki_agent_id_isSet = true;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_agent_id_Set() const{
    return m_a_fki_agent_id_isSet;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_agent_id_Valid() const{
    return m_a_fki_agent_id_isValid;
}

QList<qint32> OAIDepartment_getMembers_v1_Response_mPayload::getAFkiBrokerId() const {
    return a_fki_broker_id;
}
void OAIDepartment_getMembers_v1_Response_mPayload::setAFkiBrokerId(const QList<qint32> &a_fki_broker_id) {
    this->a_fki_broker_id = a_fki_broker_id;
    this->m_a_fki_broker_id_isSet = true;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_broker_id_Set() const{
    return m_a_fki_broker_id_isSet;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_broker_id_Valid() const{
    return m_a_fki_broker_id_isValid;
}

QList<qint32> OAIDepartment_getMembers_v1_Response_mPayload::getAFkiCustomerId() const {
    return a_fki_customer_id;
}
void OAIDepartment_getMembers_v1_Response_mPayload::setAFkiCustomerId(const QList<qint32> &a_fki_customer_id) {
    this->a_fki_customer_id = a_fki_customer_id;
    this->m_a_fki_customer_id_isSet = true;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_customer_id_Set() const{
    return m_a_fki_customer_id_isSet;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_customer_id_Valid() const{
    return m_a_fki_customer_id_isValid;
}

QList<qint32> OAIDepartment_getMembers_v1_Response_mPayload::getAFkiEmployeeId() const {
    return a_fki_employee_id;
}
void OAIDepartment_getMembers_v1_Response_mPayload::setAFkiEmployeeId(const QList<qint32> &a_fki_employee_id) {
    this->a_fki_employee_id = a_fki_employee_id;
    this->m_a_fki_employee_id_isSet = true;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_employee_id_Set() const{
    return m_a_fki_employee_id_isSet;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::is_a_fki_employee_id_Valid() const{
    return m_a_fki_employee_id_isValid;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_fki_agent_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_fki_broker_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_fki_customer_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_fki_employee_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIDepartment_getMembers_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
