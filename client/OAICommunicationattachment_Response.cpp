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

#include "OAICommunicationattachment_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommunicationattachment_Response::OAICommunicationattachment_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommunicationattachment_Response::OAICommunicationattachment_Response() {
    this->initializeModel();
}

OAICommunicationattachment_Response::~OAICommunicationattachment_Response() {}

void OAICommunicationattachment_Response::initializeModel() {

    m_pki_communicationattachment_id_isSet = false;
    m_pki_communicationattachment_id_isValid = false;

    m_fki_attachment_id_isSet = false;
    m_fki_attachment_id_isValid = false;

    m_fki_invoice_id_isSet = false;
    m_fki_invoice_id_isValid = false;

    m_fki_salarypreparation_id_isSet = false;
    m_fki_salarypreparation_id_isValid = false;

    m_s_communicationattachment_name_isSet = false;
    m_s_communicationattachment_name_isValid = false;
}

void OAICommunicationattachment_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommunicationattachment_Response::fromJsonObject(QJsonObject json) {

    m_pki_communicationattachment_id_isValid = ::OpenAPI::fromJsonValue(pki_communicationattachment_id, json[QString("pkiCommunicationattachmentID")]);
    m_pki_communicationattachment_id_isSet = !json[QString("pkiCommunicationattachmentID")].isNull() && m_pki_communicationattachment_id_isValid;

    m_fki_attachment_id_isValid = ::OpenAPI::fromJsonValue(fki_attachment_id, json[QString("fkiAttachmentID")]);
    m_fki_attachment_id_isSet = !json[QString("fkiAttachmentID")].isNull() && m_fki_attachment_id_isValid;

    m_fki_invoice_id_isValid = ::OpenAPI::fromJsonValue(fki_invoice_id, json[QString("fkiInvoiceID")]);
    m_fki_invoice_id_isSet = !json[QString("fkiInvoiceID")].isNull() && m_fki_invoice_id_isValid;

    m_fki_salarypreparation_id_isValid = ::OpenAPI::fromJsonValue(fki_salarypreparation_id, json[QString("fkiSalarypreparationID")]);
    m_fki_salarypreparation_id_isSet = !json[QString("fkiSalarypreparationID")].isNull() && m_fki_salarypreparation_id_isValid;

    m_s_communicationattachment_name_isValid = ::OpenAPI::fromJsonValue(s_communicationattachment_name, json[QString("sCommunicationattachmentName")]);
    m_s_communicationattachment_name_isSet = !json[QString("sCommunicationattachmentName")].isNull() && m_s_communicationattachment_name_isValid;
}

QString OAICommunicationattachment_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommunicationattachment_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_communicationattachment_id_isSet) {
        obj.insert(QString("pkiCommunicationattachmentID"), ::OpenAPI::toJsonValue(pki_communicationattachment_id));
    }
    if (m_fki_attachment_id_isSet) {
        obj.insert(QString("fkiAttachmentID"), ::OpenAPI::toJsonValue(fki_attachment_id));
    }
    if (m_fki_invoice_id_isSet) {
        obj.insert(QString("fkiInvoiceID"), ::OpenAPI::toJsonValue(fki_invoice_id));
    }
    if (m_fki_salarypreparation_id_isSet) {
        obj.insert(QString("fkiSalarypreparationID"), ::OpenAPI::toJsonValue(fki_salarypreparation_id));
    }
    if (m_s_communicationattachment_name_isSet) {
        obj.insert(QString("sCommunicationattachmentName"), ::OpenAPI::toJsonValue(s_communicationattachment_name));
    }
    return obj;
}

qint32 OAICommunicationattachment_Response::getPkiCommunicationattachmentId() const {
    return pki_communicationattachment_id;
}
void OAICommunicationattachment_Response::setPkiCommunicationattachmentId(const qint32 &pki_communicationattachment_id) {
    this->pki_communicationattachment_id = pki_communicationattachment_id;
    this->m_pki_communicationattachment_id_isSet = true;
}

bool OAICommunicationattachment_Response::is_pki_communicationattachment_id_Set() const{
    return m_pki_communicationattachment_id_isSet;
}

bool OAICommunicationattachment_Response::is_pki_communicationattachment_id_Valid() const{
    return m_pki_communicationattachment_id_isValid;
}

qint32 OAICommunicationattachment_Response::getFkiAttachmentId() const {
    return fki_attachment_id;
}
void OAICommunicationattachment_Response::setFkiAttachmentId(const qint32 &fki_attachment_id) {
    this->fki_attachment_id = fki_attachment_id;
    this->m_fki_attachment_id_isSet = true;
}

bool OAICommunicationattachment_Response::is_fki_attachment_id_Set() const{
    return m_fki_attachment_id_isSet;
}

bool OAICommunicationattachment_Response::is_fki_attachment_id_Valid() const{
    return m_fki_attachment_id_isValid;
}

qint32 OAICommunicationattachment_Response::getFkiInvoiceId() const {
    return fki_invoice_id;
}
void OAICommunicationattachment_Response::setFkiInvoiceId(const qint32 &fki_invoice_id) {
    this->fki_invoice_id = fki_invoice_id;
    this->m_fki_invoice_id_isSet = true;
}

bool OAICommunicationattachment_Response::is_fki_invoice_id_Set() const{
    return m_fki_invoice_id_isSet;
}

bool OAICommunicationattachment_Response::is_fki_invoice_id_Valid() const{
    return m_fki_invoice_id_isValid;
}

qint32 OAICommunicationattachment_Response::getFkiSalarypreparationId() const {
    return fki_salarypreparation_id;
}
void OAICommunicationattachment_Response::setFkiSalarypreparationId(const qint32 &fki_salarypreparation_id) {
    this->fki_salarypreparation_id = fki_salarypreparation_id;
    this->m_fki_salarypreparation_id_isSet = true;
}

bool OAICommunicationattachment_Response::is_fki_salarypreparation_id_Set() const{
    return m_fki_salarypreparation_id_isSet;
}

bool OAICommunicationattachment_Response::is_fki_salarypreparation_id_Valid() const{
    return m_fki_salarypreparation_id_isValid;
}

QString OAICommunicationattachment_Response::getSCommunicationattachmentName() const {
    return s_communicationattachment_name;
}
void OAICommunicationattachment_Response::setSCommunicationattachmentName(const QString &s_communicationattachment_name) {
    this->s_communicationattachment_name = s_communicationattachment_name;
    this->m_s_communicationattachment_name_isSet = true;
}

bool OAICommunicationattachment_Response::is_s_communicationattachment_name_Set() const{
    return m_s_communicationattachment_name_isSet;
}

bool OAICommunicationattachment_Response::is_s_communicationattachment_name_Valid() const{
    return m_s_communicationattachment_name_isValid;
}

bool OAICommunicationattachment_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_communicationattachment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_attachment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_invoice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_salarypreparation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_communicationattachment_name_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommunicationattachment_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_communicationattachment_id_isValid && m_s_communicationattachment_name_isValid && true;
}

} // namespace OpenAPI
