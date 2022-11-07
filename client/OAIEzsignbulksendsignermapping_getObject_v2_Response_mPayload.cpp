/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::~OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload() {}

void OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsignbulksendsignermapping_isSet = false;
    m_obj_ezsignbulksendsignermapping_isValid = false;
}

void OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignbulksendsignermapping_isValid = ::OpenAPI::fromJsonValue(obj_ezsignbulksendsignermapping, json[QString("objEzsignbulksendsignermapping")]);
    m_obj_ezsignbulksendsignermapping_isSet = !json[QString("objEzsignbulksendsignermapping")].isNull() && m_obj_ezsignbulksendsignermapping_isValid;
}

QString OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignbulksendsignermapping.isSet()) {
        obj.insert(QString("objEzsignbulksendsignermapping"), ::OpenAPI::toJsonValue(obj_ezsignbulksendsignermapping));
    }
    return obj;
}

OAIEzsignbulksendsignermapping_ResponseCompound OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::getObjEzsignbulksendsignermapping() const {
    return obj_ezsignbulksendsignermapping;
}
void OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::setObjEzsignbulksendsignermapping(const OAIEzsignbulksendsignermapping_ResponseCompound &obj_ezsignbulksendsignermapping) {
    this->obj_ezsignbulksendsignermapping = obj_ezsignbulksendsignermapping;
    this->m_obj_ezsignbulksendsignermapping_isSet = true;
}

bool OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::is_obj_ezsignbulksendsignermapping_Set() const{
    return m_obj_ezsignbulksendsignermapping_isSet;
}

bool OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::is_obj_ezsignbulksendsignermapping_Valid() const{
    return m_obj_ezsignbulksendsignermapping_isValid;
}

bool OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignbulksendsignermapping.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendsignermapping_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignbulksendsignermapping_isValid && true;
}

} // namespace OpenAPI
