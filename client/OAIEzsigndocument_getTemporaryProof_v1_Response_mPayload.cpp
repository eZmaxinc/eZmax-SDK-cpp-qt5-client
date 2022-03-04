/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::~OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload() {}

void OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigndocumentlog_isSet = false;
    m_a_obj_ezsigndocumentlog_isValid = false;
}

void OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndocumentlog_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigndocumentlog, json[QString("a_objEzsigndocumentlog")]);
    m_a_obj_ezsigndocumentlog_isSet = !json[QString("a_objEzsigndocumentlog")].isNull() && m_a_obj_ezsigndocumentlog_isValid;
}

QString OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigndocumentlog.isSet()) {
        obj.insert(QString("a_objEzsigndocumentlog"), ::OpenAPI::toJsonValue(a_obj_ezsigndocumentlog));
    }
    return obj;
}

OAIEzsigndocumentlog_ResponseCompound OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::getAObjEzsigndocumentlog() const {
    return a_obj_ezsigndocumentlog;
}
void OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::setAObjEzsigndocumentlog(const OAIEzsigndocumentlog_ResponseCompound &a_obj_ezsigndocumentlog) {
    this->a_obj_ezsigndocumentlog = a_obj_ezsigndocumentlog;
    this->m_a_obj_ezsigndocumentlog_isSet = true;
}

bool OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::is_a_obj_ezsigndocumentlog_Set() const{
    return m_a_obj_ezsigndocumentlog_isSet;
}

bool OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::is_a_obj_ezsigndocumentlog_Valid() const{
    return m_a_obj_ezsigndocumentlog_isValid;
}

bool OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigndocumentlog.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getTemporaryProof_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndocumentlog_isValid && true;
}

} // namespace OpenAPI
