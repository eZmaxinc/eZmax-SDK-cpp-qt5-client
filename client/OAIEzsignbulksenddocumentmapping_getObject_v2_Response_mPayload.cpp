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

#include "OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::~OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload() {}

void OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignbulksenddocumentmapping_isSet = false;
    m_obj_ezsignbulksenddocumentmapping_isValid = false;
}

void OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignbulksenddocumentmapping_isValid = ::OpenAPI::fromJsonValue(obj_ezsignbulksenddocumentmapping, json[QString("objEzsignbulksenddocumentmapping")]);
    m_obj_ezsignbulksenddocumentmapping_isSet = !json[QString("objEzsignbulksenddocumentmapping")].isNull() && m_obj_ezsignbulksenddocumentmapping_isValid;
}

QString OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignbulksenddocumentmapping.isSet()) {
        obj.insert(QString("objEzsignbulksenddocumentmapping"), ::OpenAPI::toJsonValue(obj_ezsignbulksenddocumentmapping));
    }
    return obj;
}

OAIEzsignbulksenddocumentmapping_ResponseCompound OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::getObjEzsignbulksenddocumentmapping() const {
    return obj_ezsignbulksenddocumentmapping;
}
void OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::setObjEzsignbulksenddocumentmapping(const OAIEzsignbulksenddocumentmapping_ResponseCompound &obj_ezsignbulksenddocumentmapping) {
    this->obj_ezsignbulksenddocumentmapping = obj_ezsignbulksenddocumentmapping;
    this->m_obj_ezsignbulksenddocumentmapping_isSet = true;
}

bool OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::is_obj_ezsignbulksenddocumentmapping_Set() const{
    return m_obj_ezsignbulksenddocumentmapping_isSet;
}

bool OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::is_obj_ezsignbulksenddocumentmapping_Valid() const{
    return m_obj_ezsignbulksenddocumentmapping_isValid;
}

bool OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignbulksenddocumentmapping.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksenddocumentmapping_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignbulksenddocumentmapping_isValid && true;
}

} // namespace OpenAPI
