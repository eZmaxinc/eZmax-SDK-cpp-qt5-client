/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::~OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload() {}

void OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::initializeModel() {

    m_b_ezsigntemplatepackage_needvalidation_isSet = false;
    m_b_ezsigntemplatepackage_needvalidation_isValid = false;

    m_b_ezsignbulksend_needvalidation_isSet = false;
    m_b_ezsignbulksend_needvalidation_isValid = false;
}

void OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_b_ezsigntemplatepackage_needvalidation_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_needvalidation, json[QString("bEzsigntemplatepackageNeedvalidation")]);
    m_b_ezsigntemplatepackage_needvalidation_isSet = !json[QString("bEzsigntemplatepackageNeedvalidation")].isNull() && m_b_ezsigntemplatepackage_needvalidation_isValid;

    m_b_ezsignbulksend_needvalidation_isValid = ::OpenAPI::fromJsonValue(b_ezsignbulksend_needvalidation, json[QString("bEzsignbulksendNeedvalidation")]);
    m_b_ezsignbulksend_needvalidation_isSet = !json[QString("bEzsignbulksendNeedvalidation")].isNull() && m_b_ezsignbulksend_needvalidation_isValid;
}

QString OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
        obj.insert(QString("bEzsigntemplatepackageNeedvalidation"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_needvalidation));
    }
    if (m_b_ezsignbulksend_needvalidation_isSet) {
        obj.insert(QString("bEzsignbulksendNeedvalidation"), ::OpenAPI::toJsonValue(b_ezsignbulksend_needvalidation));
    }
    return obj;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::isBEzsigntemplatepackageNeedvalidation() const {
    return b_ezsigntemplatepackage_needvalidation;
}
void OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation) {
    this->b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    this->m_b_ezsigntemplatepackage_needvalidation_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::is_b_ezsigntemplatepackage_needvalidation_Set() const{
    return m_b_ezsigntemplatepackage_needvalidation_isSet;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::is_b_ezsigntemplatepackage_needvalidation_Valid() const{
    return m_b_ezsigntemplatepackage_needvalidation_isValid;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::isBEzsignbulksendNeedvalidation() const {
    return b_ezsignbulksend_needvalidation;
}
void OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation) {
    this->b_ezsignbulksend_needvalidation = b_ezsignbulksend_needvalidation;
    this->m_b_ezsignbulksend_needvalidation_isSet = true;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::is_b_ezsignbulksend_needvalidation_Set() const{
    return m_b_ezsignbulksend_needvalidation_isSet;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::is_b_ezsignbulksend_needvalidation_Valid() const{
    return m_b_ezsignbulksend_needvalidation_isValid;
}

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
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

bool OAIEzsigntemplatepackagesigner_deleteObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_b_ezsigntemplatepackage_needvalidation_isValid && m_b_ezsignbulksend_needvalidation_isValid && true;
}

} // namespace OpenAPI
