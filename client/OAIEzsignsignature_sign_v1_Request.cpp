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

#include "OAIEzsignsignature_sign_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_sign_v1_Request::OAIEzsignsignature_sign_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_sign_v1_Request::OAIEzsignsignature_sign_v1_Request() {
    this->initializeModel();
}

OAIEzsignsignature_sign_v1_Request::~OAIEzsignsignature_sign_v1_Request() {}

void OAIEzsignsignature_sign_v1_Request::initializeModel() {

    m_s_value_isSet = false;
    m_s_value_isValid = false;

    m_e_attachments_confirmation_decision_isSet = false;
    m_e_attachments_confirmation_decision_isValid = false;

    m_s_attachments_refusal_reason_isSet = false;
    m_s_attachments_refusal_reason_isValid = false;

    m_s_svg_isSet = false;
    m_s_svg_isValid = false;

    m_a_obj_file_isSet = false;
    m_a_obj_file_isValid = false;

    m_b_is_automatic_isSet = false;
    m_b_is_automatic_isValid = false;
}

void OAIEzsignsignature_sign_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_sign_v1_Request::fromJsonObject(QJsonObject json) {

    m_s_value_isValid = ::OpenAPI::fromJsonValue(m_s_value, json[QString("sValue")]);
    m_s_value_isSet = !json[QString("sValue")].isNull() && m_s_value_isValid;

    m_e_attachments_confirmation_decision_isValid = ::OpenAPI::fromJsonValue(m_e_attachments_confirmation_decision, json[QString("eAttachmentsConfirmationDecision")]);
    m_e_attachments_confirmation_decision_isSet = !json[QString("eAttachmentsConfirmationDecision")].isNull() && m_e_attachments_confirmation_decision_isValid;

    m_s_attachments_refusal_reason_isValid = ::OpenAPI::fromJsonValue(m_s_attachments_refusal_reason, json[QString("sAttachmentsRefusalReason")]);
    m_s_attachments_refusal_reason_isSet = !json[QString("sAttachmentsRefusalReason")].isNull() && m_s_attachments_refusal_reason_isValid;

    m_s_svg_isValid = ::OpenAPI::fromJsonValue(m_s_svg, json[QString("sSvg")]);
    m_s_svg_isSet = !json[QString("sSvg")].isNull() && m_s_svg_isValid;

    m_a_obj_file_isValid = ::OpenAPI::fromJsonValue(m_a_obj_file, json[QString("a_objFile")]);
    m_a_obj_file_isSet = !json[QString("a_objFile")].isNull() && m_a_obj_file_isValid;

    m_b_is_automatic_isValid = ::OpenAPI::fromJsonValue(m_b_is_automatic, json[QString("bIsAutomatic")]);
    m_b_is_automatic_isSet = !json[QString("bIsAutomatic")].isNull() && m_b_is_automatic_isValid;
}

QString OAIEzsignsignature_sign_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_sign_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_s_value_isSet) {
        obj.insert(QString("sValue"), ::OpenAPI::toJsonValue(m_s_value));
    }
    if (m_e_attachments_confirmation_decision_isSet) {
        obj.insert(QString("eAttachmentsConfirmationDecision"), ::OpenAPI::toJsonValue(m_e_attachments_confirmation_decision));
    }
    if (m_s_attachments_refusal_reason_isSet) {
        obj.insert(QString("sAttachmentsRefusalReason"), ::OpenAPI::toJsonValue(m_s_attachments_refusal_reason));
    }
    if (m_s_svg_isSet) {
        obj.insert(QString("sSvg"), ::OpenAPI::toJsonValue(m_s_svg));
    }
    if (m_a_obj_file.size() > 0) {
        obj.insert(QString("a_objFile"), ::OpenAPI::toJsonValue(m_a_obj_file));
    }
    if (m_b_is_automatic_isSet) {
        obj.insert(QString("bIsAutomatic"), ::OpenAPI::toJsonValue(m_b_is_automatic));
    }
    return obj;
}

QString OAIEzsignsignature_sign_v1_Request::getSValue() const {
    return m_s_value;
}
void OAIEzsignsignature_sign_v1_Request::setSValue(const QString &s_value) {
    m_s_value = s_value;
    m_s_value_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_value_Set() const{
    return m_s_value_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_value_Valid() const{
    return m_s_value_isValid;
}

QString OAIEzsignsignature_sign_v1_Request::getEAttachmentsConfirmationDecision() const {
    return m_e_attachments_confirmation_decision;
}
void OAIEzsignsignature_sign_v1_Request::setEAttachmentsConfirmationDecision(const QString &e_attachments_confirmation_decision) {
    m_e_attachments_confirmation_decision = e_attachments_confirmation_decision;
    m_e_attachments_confirmation_decision_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_e_attachments_confirmation_decision_Set() const{
    return m_e_attachments_confirmation_decision_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_e_attachments_confirmation_decision_Valid() const{
    return m_e_attachments_confirmation_decision_isValid;
}

QString OAIEzsignsignature_sign_v1_Request::getSAttachmentsRefusalReason() const {
    return m_s_attachments_refusal_reason;
}
void OAIEzsignsignature_sign_v1_Request::setSAttachmentsRefusalReason(const QString &s_attachments_refusal_reason) {
    m_s_attachments_refusal_reason = s_attachments_refusal_reason;
    m_s_attachments_refusal_reason_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_attachments_refusal_reason_Set() const{
    return m_s_attachments_refusal_reason_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_attachments_refusal_reason_Valid() const{
    return m_s_attachments_refusal_reason_isValid;
}

QString OAIEzsignsignature_sign_v1_Request::getSSvg() const {
    return m_s_svg;
}
void OAIEzsignsignature_sign_v1_Request::setSSvg(const QString &s_svg) {
    m_s_svg = s_svg;
    m_s_svg_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_svg_Set() const{
    return m_s_svg_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_s_svg_Valid() const{
    return m_s_svg_isValid;
}

QList<OAICommon_File> OAIEzsignsignature_sign_v1_Request::getAObjFile() const {
    return m_a_obj_file;
}
void OAIEzsignsignature_sign_v1_Request::setAObjFile(const QList<OAICommon_File> &a_obj_file) {
    m_a_obj_file = a_obj_file;
    m_a_obj_file_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_a_obj_file_Set() const{
    return m_a_obj_file_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_a_obj_file_Valid() const{
    return m_a_obj_file_isValid;
}

bool OAIEzsignsignature_sign_v1_Request::isBIsAutomatic() const {
    return m_b_is_automatic;
}
void OAIEzsignsignature_sign_v1_Request::setBIsAutomatic(const bool &b_is_automatic) {
    m_b_is_automatic = b_is_automatic;
    m_b_is_automatic_isSet = true;
}

bool OAIEzsignsignature_sign_v1_Request::is_b_is_automatic_Set() const{
    return m_b_is_automatic_isSet;
}

bool OAIEzsignsignature_sign_v1_Request::is_b_is_automatic_Valid() const{
    return m_b_is_automatic_isValid;
}

bool OAIEzsignsignature_sign_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_attachments_confirmation_decision_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_attachments_refusal_reason_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_svg_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_file.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_is_automatic_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_sign_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_is_automatic_isValid && true;
}

} // namespace OpenAPI
