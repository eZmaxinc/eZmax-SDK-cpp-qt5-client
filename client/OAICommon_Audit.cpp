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

#include "OAICommon_Audit.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Audit::OAICommon_Audit(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Audit::OAICommon_Audit() {
    this->initializeModel();
}

OAICommon_Audit::~OAICommon_Audit() {}

void OAICommon_Audit::initializeModel() {

    m_obj_auditdetail_created_isSet = false;
    m_obj_auditdetail_created_isValid = false;

    m_obj_auditdetail_modified_isSet = false;
    m_obj_auditdetail_modified_isValid = false;
}

void OAICommon_Audit::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Audit::fromJsonObject(QJsonObject json) {

    m_obj_auditdetail_created_isValid = ::OpenAPI::fromJsonValue(m_obj_auditdetail_created, json[QString("objAuditdetailCreated")]);
    m_obj_auditdetail_created_isSet = !json[QString("objAuditdetailCreated")].isNull() && m_obj_auditdetail_created_isValid;

    m_obj_auditdetail_modified_isValid = ::OpenAPI::fromJsonValue(m_obj_auditdetail_modified, json[QString("objAuditdetailModified")]);
    m_obj_auditdetail_modified_isSet = !json[QString("objAuditdetailModified")].isNull() && m_obj_auditdetail_modified_isValid;
}

QString OAICommon_Audit::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Audit::asJsonObject() const {
    QJsonObject obj;
    if (m_obj_auditdetail_created.isSet()) {
        obj.insert(QString("objAuditdetailCreated"), ::OpenAPI::toJsonValue(m_obj_auditdetail_created));
    }
    if (m_obj_auditdetail_modified.isSet()) {
        obj.insert(QString("objAuditdetailModified"), ::OpenAPI::toJsonValue(m_obj_auditdetail_modified));
    }
    return obj;
}

OAICommon_Auditdetail OAICommon_Audit::getObjAuditdetailCreated() const {
    return m_obj_auditdetail_created;
}
void OAICommon_Audit::setObjAuditdetailCreated(const OAICommon_Auditdetail &obj_auditdetail_created) {
    m_obj_auditdetail_created = obj_auditdetail_created;
    m_obj_auditdetail_created_isSet = true;
}

bool OAICommon_Audit::is_obj_auditdetail_created_Set() const{
    return m_obj_auditdetail_created_isSet;
}

bool OAICommon_Audit::is_obj_auditdetail_created_Valid() const{
    return m_obj_auditdetail_created_isValid;
}

OAICommon_Auditdetail OAICommon_Audit::getObjAuditdetailModified() const {
    return m_obj_auditdetail_modified;
}
void OAICommon_Audit::setObjAuditdetailModified(const OAICommon_Auditdetail &obj_auditdetail_modified) {
    m_obj_auditdetail_modified = obj_auditdetail_modified;
    m_obj_auditdetail_modified_isSet = true;
}

bool OAICommon_Audit::is_obj_auditdetail_modified_Set() const{
    return m_obj_auditdetail_modified_isSet;
}

bool OAICommon_Audit::is_obj_auditdetail_modified_Valid() const{
    return m_obj_auditdetail_modified_isValid;
}

bool OAICommon_Audit::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_obj_auditdetail_created.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_obj_auditdetail_modified.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Audit::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_auditdetail_created_isValid && true;
}

} // namespace OpenAPI
