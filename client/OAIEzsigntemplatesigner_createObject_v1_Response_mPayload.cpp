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

#include "OAIEzsigntemplatesigner_createObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::OAIEzsigntemplatesigner_createObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::OAIEzsigntemplatesigner_createObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::~OAIEzsigntemplatesigner_createObject_v1_Response_mPayload() {}

void OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::initializeModel() {

    m_a_pki_ezsigntemplatesigner_id_isSet = false;
    m_a_pki_ezsigntemplatesigner_id_isValid = false;

    m_b_ezsigntemplatepackage_needvalidation_isSet = false;
    m_b_ezsigntemplatepackage_needvalidation_isValid = false;

    m_b_ezsignbulksend_needvalidation_isSet = false;
    m_b_ezsignbulksend_needvalidation_isValid = false;
}

void OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_pki_ezsigntemplatesigner_id_isValid = ::OpenAPI::fromJsonValue(m_a_pki_ezsigntemplatesigner_id, json[QString("a_pkiEzsigntemplatesignerID")]);
    m_a_pki_ezsigntemplatesigner_id_isSet = !json[QString("a_pkiEzsigntemplatesignerID")].isNull() && m_a_pki_ezsigntemplatesigner_id_isValid;

    m_b_ezsigntemplatepackage_needvalidation_isValid = ::OpenAPI::fromJsonValue(m_b_ezsigntemplatepackage_needvalidation, json[QString("bEzsigntemplatepackageNeedvalidation")]);
    m_b_ezsigntemplatepackage_needvalidation_isSet = !json[QString("bEzsigntemplatepackageNeedvalidation")].isNull() && m_b_ezsigntemplatepackage_needvalidation_isValid;

    m_b_ezsignbulksend_needvalidation_isValid = ::OpenAPI::fromJsonValue(m_b_ezsignbulksend_needvalidation, json[QString("bEzsignbulksendNeedvalidation")]);
    m_b_ezsignbulksend_needvalidation_isSet = !json[QString("bEzsignbulksendNeedvalidation")].isNull() && m_b_ezsignbulksend_needvalidation_isValid;
}

QString OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_pki_ezsigntemplatesigner_id.size() > 0) {
        obj.insert(QString("a_pkiEzsigntemplatesignerID"), ::OpenAPI::toJsonValue(m_a_pki_ezsigntemplatesigner_id));
    }
    if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
        obj.insert(QString("bEzsigntemplatepackageNeedvalidation"), ::OpenAPI::toJsonValue(m_b_ezsigntemplatepackage_needvalidation));
    }
    if (m_b_ezsignbulksend_needvalidation_isSet) {
        obj.insert(QString("bEzsignbulksendNeedvalidation"), ::OpenAPI::toJsonValue(m_b_ezsignbulksend_needvalidation));
    }
    return obj;
}

QList<qint32> OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::getAPkiEzsigntemplatesignerId() const {
    return m_a_pki_ezsigntemplatesigner_id;
}
void OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::setAPkiEzsigntemplatesignerId(const QList<qint32> &a_pki_ezsigntemplatesigner_id) {
    m_a_pki_ezsigntemplatesigner_id = a_pki_ezsigntemplatesigner_id;
    m_a_pki_ezsigntemplatesigner_id_isSet = true;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::is_a_pki_ezsigntemplatesigner_id_Set() const{
    return m_a_pki_ezsigntemplatesigner_id_isSet;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::is_a_pki_ezsigntemplatesigner_id_Valid() const{
    return m_a_pki_ezsigntemplatesigner_id_isValid;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::isBEzsigntemplatepackageNeedvalidation() const {
    return m_b_ezsigntemplatepackage_needvalidation;
}
void OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation) {
    m_b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    m_b_ezsigntemplatepackage_needvalidation_isSet = true;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::is_b_ezsigntemplatepackage_needvalidation_Set() const{
    return m_b_ezsigntemplatepackage_needvalidation_isSet;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::is_b_ezsigntemplatepackage_needvalidation_Valid() const{
    return m_b_ezsigntemplatepackage_needvalidation_isValid;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::isBEzsignbulksendNeedvalidation() const {
    return m_b_ezsignbulksend_needvalidation;
}
void OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation) {
    m_b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    m_b_ezsignbulksend_needvalidation_isSet = true;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::is_b_ezsignbulksend_needvalidation_Set() const{
    return m_b_ezsignbulksend_needvalidation_isSet;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::is_b_ezsignbulksend_needvalidation_Valid() const{
    return m_b_ezsignbulksend_needvalidation_isValid;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_pki_ezsigntemplatesigner_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignbulksend_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatesigner_createObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_pki_ezsigntemplatesigner_id_isValid && m_b_ezsigntemplatepackage_needvalidation_isValid && m_b_ezsignbulksend_needvalidation_isValid && true;
}

} // namespace OpenAPI
