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

#include "Invoice_getAttachments_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Invoice_getAttachments_v1_Response_mPayload::Invoice_getAttachments_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Invoice_getAttachments_v1_Response_mPayload::Invoice_getAttachments_v1_Response_mPayload() {
    this->initializeModel();
}

Invoice_getAttachments_v1_Response_mPayload::~Invoice_getAttachments_v1_Response_mPayload() {}

void Invoice_getAttachments_v1_Response_mPayload::initializeModel() {

    m_a_obj_attachmentdocumenttype_isSet = false;
    m_a_obj_attachmentdocumenttype_isValid = false;
}

void Invoice_getAttachments_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Invoice_getAttachments_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_attachmentdocumenttype_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_attachmentdocumenttype, json[QString("a_objAttachmentdocumenttype")]);
    m_a_obj_attachmentdocumenttype_isSet = !json[QString("a_objAttachmentdocumenttype")].isNull() && m_a_obj_attachmentdocumenttype_isValid;
}

QString Invoice_getAttachments_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Invoice_getAttachments_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_attachmentdocumenttype.size() > 0) {
        obj.insert(QString("a_objAttachmentdocumenttype"), ::Ezmaxapi::toJsonValue(m_a_obj_attachmentdocumenttype));
    }
    return obj;
}

QList<Custom_Attachmentdocumenttype_Response> Invoice_getAttachments_v1_Response_mPayload::getAObjAttachmentdocumenttype() const {
    return m_a_obj_attachmentdocumenttype;
}
void Invoice_getAttachments_v1_Response_mPayload::setAObjAttachmentdocumenttype(const QList<Custom_Attachmentdocumenttype_Response> &a_obj_attachmentdocumenttype) {
    m_a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    m_a_obj_attachmentdocumenttype_isSet = true;
}

bool Invoice_getAttachments_v1_Response_mPayload::is_a_obj_attachmentdocumenttype_Set() const{
    return m_a_obj_attachmentdocumenttype_isSet;
}

bool Invoice_getAttachments_v1_Response_mPayload::is_a_obj_attachmentdocumenttype_Valid() const{
    return m_a_obj_attachmentdocumenttype_isValid;
}

bool Invoice_getAttachments_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_attachmentdocumenttype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Invoice_getAttachments_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_attachmentdocumenttype_isValid && true;
}

} // namespace Ezmaxapi
