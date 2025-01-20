/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Custom_Communicationrecipientsrecipient_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_Communicationrecipientsrecipient_Response::Custom_Communicationrecipientsrecipient_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_Communicationrecipientsrecipient_Response::Custom_Communicationrecipientsrecipient_Response() {
    this->initializeModel();
}

Custom_Communicationrecipientsrecipient_Response::~Custom_Communicationrecipientsrecipient_Response() {}

void Custom_Communicationrecipientsrecipient_Response::initializeModel() {

    m_fki_agent_id_isSet = false;
    m_fki_agent_id_isValid = false;

    m_fki_broker_id_isSet = false;
    m_fki_broker_id_isValid = false;

    m_fki_contact_id_isSet = false;
    m_fki_contact_id_isValid = false;

    m_fki_customer_id_isSet = false;
    m_fki_customer_id_isValid = false;

    m_fki_employee_id_isSet = false;
    m_fki_employee_id_isValid = false;

    m_fki_ezsignsigner_id_isSet = false;
    m_fki_ezsignsigner_id_isValid = false;

    m_fki_franchiseoffice_id_isSet = false;
    m_fki_franchiseoffice_id_isValid = false;

    m_fki_user_id_isSet = false;
    m_fki_user_id_isValid = false;

    m_fki_agentincorporation_id_isSet = false;
    m_fki_agentincorporation_id_isValid = false;

    m_fki_assistant_id_isSet = false;
    m_fki_assistant_id_isValid = false;

    m_fki_externalbroker_id_isSet = false;
    m_fki_externalbroker_id_isValid = false;

    m_fki_ezcomagent_id_isSet = false;
    m_fki_ezcomagent_id_isValid = false;

    m_fki_notary_id_isSet = false;
    m_fki_notary_id_isValid = false;

    m_fki_rewardmember_id_isSet = false;
    m_fki_rewardmember_id_isValid = false;

    m_fki_supplier_id_isSet = false;
    m_fki_supplier_id_isValid = false;

    m_e_communicationrecipientsrecipient_objecttype_isSet = false;
    m_e_communicationrecipientsrecipient_objecttype_isValid = false;

    m_obj_contact_name_isSet = false;
    m_obj_contact_name_isValid = false;

    m_obj_email_isSet = false;
    m_obj_email_isValid = false;

    m_obj_phone_fax_isSet = false;
    m_obj_phone_fax_isValid = false;

    m_obj_phone_sms_isSet = false;
    m_obj_phone_sms_isValid = false;
}

void Custom_Communicationrecipientsrecipient_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_Communicationrecipientsrecipient_Response::fromJsonObject(QJsonObject json) {

    m_fki_agent_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_agent_id, json[QString("fkiAgentID")]);
    m_fki_agent_id_isSet = !json[QString("fkiAgentID")].isNull() && m_fki_agent_id_isValid;

    m_fki_broker_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_broker_id, json[QString("fkiBrokerID")]);
    m_fki_broker_id_isSet = !json[QString("fkiBrokerID")].isNull() && m_fki_broker_id_isValid;

    m_fki_contact_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_contact_id, json[QString("fkiContactID")]);
    m_fki_contact_id_isSet = !json[QString("fkiContactID")].isNull() && m_fki_contact_id_isValid;

    m_fki_customer_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_customer_id, json[QString("fkiCustomerID")]);
    m_fki_customer_id_isSet = !json[QString("fkiCustomerID")].isNull() && m_fki_customer_id_isValid;

    m_fki_employee_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_employee_id, json[QString("fkiEmployeeID")]);
    m_fki_employee_id_isSet = !json[QString("fkiEmployeeID")].isNull() && m_fki_employee_id_isValid;

    m_fki_ezsignsigner_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsigner_id, json[QString("fkiEzsignsignerID")]);
    m_fki_ezsignsigner_id_isSet = !json[QString("fkiEzsignsignerID")].isNull() && m_fki_ezsignsigner_id_isValid;

    m_fki_franchiseoffice_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_franchiseoffice_id, json[QString("fkiFranchiseofficeID")]);
    m_fki_franchiseoffice_id_isSet = !json[QString("fkiFranchiseofficeID")].isNull() && m_fki_franchiseoffice_id_isValid;

    m_fki_user_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_user_id, json[QString("fkiUserID")]);
    m_fki_user_id_isSet = !json[QString("fkiUserID")].isNull() && m_fki_user_id_isValid;

    m_fki_agentincorporation_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_agentincorporation_id, json[QString("fkiAgentincorporationID")]);
    m_fki_agentincorporation_id_isSet = !json[QString("fkiAgentincorporationID")].isNull() && m_fki_agentincorporation_id_isValid;

    m_fki_assistant_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_assistant_id, json[QString("fkiAssistantID")]);
    m_fki_assistant_id_isSet = !json[QString("fkiAssistantID")].isNull() && m_fki_assistant_id_isValid;

    m_fki_externalbroker_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_externalbroker_id, json[QString("fkiExternalbrokerID")]);
    m_fki_externalbroker_id_isSet = !json[QString("fkiExternalbrokerID")].isNull() && m_fki_externalbroker_id_isValid;

    m_fki_ezcomagent_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezcomagent_id, json[QString("fkiEzcomagentID")]);
    m_fki_ezcomagent_id_isSet = !json[QString("fkiEzcomagentID")].isNull() && m_fki_ezcomagent_id_isValid;

    m_fki_notary_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_notary_id, json[QString("fkiNotaryID")]);
    m_fki_notary_id_isSet = !json[QString("fkiNotaryID")].isNull() && m_fki_notary_id_isValid;

    m_fki_rewardmember_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_rewardmember_id, json[QString("fkiRewardmemberID")]);
    m_fki_rewardmember_id_isSet = !json[QString("fkiRewardmemberID")].isNull() && m_fki_rewardmember_id_isValid;

    m_fki_supplier_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_supplier_id, json[QString("fkiSupplierID")]);
    m_fki_supplier_id_isSet = !json[QString("fkiSupplierID")].isNull() && m_fki_supplier_id_isValid;

    m_e_communicationrecipientsrecipient_objecttype_isValid = ::Ezmaxapi::fromJsonValue(m_e_communicationrecipientsrecipient_objecttype, json[QString("eCommunicationrecipientsrecipientObjecttype")]);
    m_e_communicationrecipientsrecipient_objecttype_isSet = !json[QString("eCommunicationrecipientsrecipientObjecttype")].isNull() && m_e_communicationrecipientsrecipient_objecttype_isValid;

    m_obj_contact_name_isValid = ::Ezmaxapi::fromJsonValue(m_obj_contact_name, json[QString("objContactName")]);
    m_obj_contact_name_isSet = !json[QString("objContactName")].isNull() && m_obj_contact_name_isValid;

    m_obj_email_isValid = ::Ezmaxapi::fromJsonValue(m_obj_email, json[QString("objEmail")]);
    m_obj_email_isSet = !json[QString("objEmail")].isNull() && m_obj_email_isValid;

    m_obj_phone_fax_isValid = ::Ezmaxapi::fromJsonValue(m_obj_phone_fax, json[QString("objPhoneFax")]);
    m_obj_phone_fax_isSet = !json[QString("objPhoneFax")].isNull() && m_obj_phone_fax_isValid;

    m_obj_phone_sms_isValid = ::Ezmaxapi::fromJsonValue(m_obj_phone_sms, json[QString("objPhoneSMS")]);
    m_obj_phone_sms_isSet = !json[QString("objPhoneSMS")].isNull() && m_obj_phone_sms_isValid;
}

QString Custom_Communicationrecipientsrecipient_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_Communicationrecipientsrecipient_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_agent_id_isSet) {
        obj.insert(QString("fkiAgentID"), ::Ezmaxapi::toJsonValue(m_fki_agent_id));
    }
    if (m_fki_broker_id_isSet) {
        obj.insert(QString("fkiBrokerID"), ::Ezmaxapi::toJsonValue(m_fki_broker_id));
    }
    if (m_fki_contact_id_isSet) {
        obj.insert(QString("fkiContactID"), ::Ezmaxapi::toJsonValue(m_fki_contact_id));
    }
    if (m_fki_customer_id_isSet) {
        obj.insert(QString("fkiCustomerID"), ::Ezmaxapi::toJsonValue(m_fki_customer_id));
    }
    if (m_fki_employee_id_isSet) {
        obj.insert(QString("fkiEmployeeID"), ::Ezmaxapi::toJsonValue(m_fki_employee_id));
    }
    if (m_fki_ezsignsigner_id_isSet) {
        obj.insert(QString("fkiEzsignsignerID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsigner_id));
    }
    if (m_fki_franchiseoffice_id_isSet) {
        obj.insert(QString("fkiFranchiseofficeID"), ::Ezmaxapi::toJsonValue(m_fki_franchiseoffice_id));
    }
    if (m_fki_user_id_isSet) {
        obj.insert(QString("fkiUserID"), ::Ezmaxapi::toJsonValue(m_fki_user_id));
    }
    if (m_fki_agentincorporation_id_isSet) {
        obj.insert(QString("fkiAgentincorporationID"), ::Ezmaxapi::toJsonValue(m_fki_agentincorporation_id));
    }
    if (m_fki_assistant_id_isSet) {
        obj.insert(QString("fkiAssistantID"), ::Ezmaxapi::toJsonValue(m_fki_assistant_id));
    }
    if (m_fki_externalbroker_id_isSet) {
        obj.insert(QString("fkiExternalbrokerID"), ::Ezmaxapi::toJsonValue(m_fki_externalbroker_id));
    }
    if (m_fki_ezcomagent_id_isSet) {
        obj.insert(QString("fkiEzcomagentID"), ::Ezmaxapi::toJsonValue(m_fki_ezcomagent_id));
    }
    if (m_fki_notary_id_isSet) {
        obj.insert(QString("fkiNotaryID"), ::Ezmaxapi::toJsonValue(m_fki_notary_id));
    }
    if (m_fki_rewardmember_id_isSet) {
        obj.insert(QString("fkiRewardmemberID"), ::Ezmaxapi::toJsonValue(m_fki_rewardmember_id));
    }
    if (m_fki_supplier_id_isSet) {
        obj.insert(QString("fkiSupplierID"), ::Ezmaxapi::toJsonValue(m_fki_supplier_id));
    }
    if (m_e_communicationrecipientsrecipient_objecttype_isSet) {
        obj.insert(QString("eCommunicationrecipientsrecipientObjecttype"), ::Ezmaxapi::toJsonValue(m_e_communicationrecipientsrecipient_objecttype));
    }
    if (m_obj_contact_name.isSet()) {
        obj.insert(QString("objContactName"), ::Ezmaxapi::toJsonValue(m_obj_contact_name));
    }
    if (m_obj_email.isSet()) {
        obj.insert(QString("objEmail"), ::Ezmaxapi::toJsonValue(m_obj_email));
    }
    if (m_obj_phone_fax.isSet()) {
        obj.insert(QString("objPhoneFax"), ::Ezmaxapi::toJsonValue(m_obj_phone_fax));
    }
    if (m_obj_phone_sms.isSet()) {
        obj.insert(QString("objPhoneSMS"), ::Ezmaxapi::toJsonValue(m_obj_phone_sms));
    }
    return obj;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiAgentId() const {
    return m_fki_agent_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiAgentId(const qint32 &fki_agent_id) {
    m_fki_agent_id = fki_agent_id;
    m_fki_agent_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_agent_id_Set() const{
    return m_fki_agent_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_agent_id_Valid() const{
    return m_fki_agent_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiBrokerId() const {
    return m_fki_broker_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiBrokerId(const qint32 &fki_broker_id) {
    m_fki_broker_id = fki_broker_id;
    m_fki_broker_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_broker_id_Set() const{
    return m_fki_broker_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_broker_id_Valid() const{
    return m_fki_broker_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiContactId() const {
    return m_fki_contact_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiContactId(const qint32 &fki_contact_id) {
    m_fki_contact_id = fki_contact_id;
    m_fki_contact_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_contact_id_Set() const{
    return m_fki_contact_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_contact_id_Valid() const{
    return m_fki_contact_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiCustomerId() const {
    return m_fki_customer_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiCustomerId(const qint32 &fki_customer_id) {
    m_fki_customer_id = fki_customer_id;
    m_fki_customer_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_customer_id_Set() const{
    return m_fki_customer_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_customer_id_Valid() const{
    return m_fki_customer_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiEmployeeId() const {
    return m_fki_employee_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiEmployeeId(const qint32 &fki_employee_id) {
    m_fki_employee_id = fki_employee_id;
    m_fki_employee_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_employee_id_Set() const{
    return m_fki_employee_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_employee_id_Valid() const{
    return m_fki_employee_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiEzsignsignerId() const {
    return m_fki_ezsignsigner_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id) {
    m_fki_ezsignsigner_id = fki_ezsignsigner_id;
    m_fki_ezsignsigner_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_ezsignsigner_id_Set() const{
    return m_fki_ezsignsigner_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_ezsignsigner_id_Valid() const{
    return m_fki_ezsignsigner_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiFranchiseofficeId() const {
    return m_fki_franchiseoffice_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiFranchiseofficeId(const qint32 &fki_franchiseoffice_id) {
    m_fki_franchiseoffice_id = fki_franchiseoffice_id;
    m_fki_franchiseoffice_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_franchiseoffice_id_Set() const{
    return m_fki_franchiseoffice_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_franchiseoffice_id_Valid() const{
    return m_fki_franchiseoffice_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiUserId() const {
    return m_fki_user_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiUserId(const qint32 &fki_user_id) {
    m_fki_user_id = fki_user_id;
    m_fki_user_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_user_id_Set() const{
    return m_fki_user_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_user_id_Valid() const{
    return m_fki_user_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiAgentincorporationId() const {
    return m_fki_agentincorporation_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiAgentincorporationId(const qint32 &fki_agentincorporation_id) {
    m_fki_agentincorporation_id = fki_agentincorporation_id;
    m_fki_agentincorporation_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_agentincorporation_id_Set() const{
    return m_fki_agentincorporation_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_agentincorporation_id_Valid() const{
    return m_fki_agentincorporation_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiAssistantId() const {
    return m_fki_assistant_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiAssistantId(const qint32 &fki_assistant_id) {
    m_fki_assistant_id = fki_assistant_id;
    m_fki_assistant_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_assistant_id_Set() const{
    return m_fki_assistant_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_assistant_id_Valid() const{
    return m_fki_assistant_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiExternalbrokerId() const {
    return m_fki_externalbroker_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiExternalbrokerId(const qint32 &fki_externalbroker_id) {
    m_fki_externalbroker_id = fki_externalbroker_id;
    m_fki_externalbroker_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_externalbroker_id_Set() const{
    return m_fki_externalbroker_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_externalbroker_id_Valid() const{
    return m_fki_externalbroker_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiEzcomagentId() const {
    return m_fki_ezcomagent_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiEzcomagentId(const qint32 &fki_ezcomagent_id) {
    m_fki_ezcomagent_id = fki_ezcomagent_id;
    m_fki_ezcomagent_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_ezcomagent_id_Set() const{
    return m_fki_ezcomagent_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_ezcomagent_id_Valid() const{
    return m_fki_ezcomagent_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiNotaryId() const {
    return m_fki_notary_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiNotaryId(const qint32 &fki_notary_id) {
    m_fki_notary_id = fki_notary_id;
    m_fki_notary_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_notary_id_Set() const{
    return m_fki_notary_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_notary_id_Valid() const{
    return m_fki_notary_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiRewardmemberId() const {
    return m_fki_rewardmember_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiRewardmemberId(const qint32 &fki_rewardmember_id) {
    m_fki_rewardmember_id = fki_rewardmember_id;
    m_fki_rewardmember_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_rewardmember_id_Set() const{
    return m_fki_rewardmember_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_rewardmember_id_Valid() const{
    return m_fki_rewardmember_id_isValid;
}

qint32 Custom_Communicationrecipientsrecipient_Response::getFkiSupplierId() const {
    return m_fki_supplier_id;
}
void Custom_Communicationrecipientsrecipient_Response::setFkiSupplierId(const qint32 &fki_supplier_id) {
    m_fki_supplier_id = fki_supplier_id;
    m_fki_supplier_id_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_supplier_id_Set() const{
    return m_fki_supplier_id_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_fki_supplier_id_Valid() const{
    return m_fki_supplier_id_isValid;
}

QString Custom_Communicationrecipientsrecipient_Response::getECommunicationrecipientsrecipientObjecttype() const {
    return m_e_communicationrecipientsrecipient_objecttype;
}
void Custom_Communicationrecipientsrecipient_Response::setECommunicationrecipientsrecipientObjecttype(const QString &e_communicationrecipientsrecipient_objecttype) {
    m_e_communicationrecipientsrecipient_objecttype = e_communicationrecipientsrecipient_objecttype;
    m_e_communicationrecipientsrecipient_objecttype_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_e_communicationrecipientsrecipient_objecttype_Set() const{
    return m_e_communicationrecipientsrecipient_objecttype_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_e_communicationrecipientsrecipient_objecttype_Valid() const{
    return m_e_communicationrecipientsrecipient_objecttype_isValid;
}

Custom_ContactName_Response Custom_Communicationrecipientsrecipient_Response::getObjContactName() const {
    return m_obj_contact_name;
}
void Custom_Communicationrecipientsrecipient_Response::setObjContactName(const Custom_ContactName_Response &obj_contact_name) {
    m_obj_contact_name = obj_contact_name;
    m_obj_contact_name_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_contact_name_Set() const{
    return m_obj_contact_name_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_contact_name_Valid() const{
    return m_obj_contact_name_isValid;
}

Email_Response Custom_Communicationrecipientsrecipient_Response::getObjEmail() const {
    return m_obj_email;
}
void Custom_Communicationrecipientsrecipient_Response::setObjEmail(const Email_Response &obj_email) {
    m_obj_email = obj_email;
    m_obj_email_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_email_Set() const{
    return m_obj_email_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_email_Valid() const{
    return m_obj_email_isValid;
}

Phone_ResponseCompound Custom_Communicationrecipientsrecipient_Response::getObjPhoneFax() const {
    return m_obj_phone_fax;
}
void Custom_Communicationrecipientsrecipient_Response::setObjPhoneFax(const Phone_ResponseCompound &obj_phone_fax) {
    m_obj_phone_fax = obj_phone_fax;
    m_obj_phone_fax_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_phone_fax_Set() const{
    return m_obj_phone_fax_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_phone_fax_Valid() const{
    return m_obj_phone_fax_isValid;
}

Phone_ResponseCompound Custom_Communicationrecipientsrecipient_Response::getObjPhoneSms() const {
    return m_obj_phone_sms;
}
void Custom_Communicationrecipientsrecipient_Response::setObjPhoneSms(const Phone_ResponseCompound &obj_phone_sms) {
    m_obj_phone_sms = obj_phone_sms;
    m_obj_phone_sms_isSet = true;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_phone_sms_Set() const{
    return m_obj_phone_sms_isSet;
}

bool Custom_Communicationrecipientsrecipient_Response::is_obj_phone_sms_Valid() const{
    return m_obj_phone_sms_isValid;
}

bool Custom_Communicationrecipientsrecipient_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_agent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_broker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_contact_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_customer_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_employee_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsigner_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_franchiseoffice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_agentincorporation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_assistant_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_externalbroker_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezcomagent_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_notary_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_rewardmember_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_supplier_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_communicationrecipientsrecipient_objecttype_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_contact_name.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_email.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_phone_fax.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_phone_sms.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_Communicationrecipientsrecipient_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_communicationrecipientsrecipient_objecttype_isValid && m_obj_contact_name_isValid && true;
}

} // namespace Ezmaxapi
