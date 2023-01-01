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

#include "OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::~OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload() {}

void OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplatepackagesignermembership_isSet = false;
    m_obj_ezsigntemplatepackagesignermembership_isValid = false;
}

void OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatepackagesignermembership_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatepackagesignermembership, json[QString("objEzsigntemplatepackagesignermembership")]);
    m_obj_ezsigntemplatepackagesignermembership_isSet = !json[QString("objEzsigntemplatepackagesignermembership")].isNull() && m_obj_ezsigntemplatepackagesignermembership_isValid;
}

QString OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatepackagesignermembership.isSet()) {
        obj.insert(QString("objEzsigntemplatepackagesignermembership"), ::OpenAPI::toJsonValue(obj_ezsigntemplatepackagesignermembership));
    }
    return obj;
}

OAIEzsigntemplatepackagesignermembership_ResponseCompound OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::getObjEzsigntemplatepackagesignermembership() const {
    return obj_ezsigntemplatepackagesignermembership;
}
void OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::setObjEzsigntemplatepackagesignermembership(const OAIEzsigntemplatepackagesignermembership_ResponseCompound &obj_ezsigntemplatepackagesignermembership) {
    this->obj_ezsigntemplatepackagesignermembership = obj_ezsigntemplatepackagesignermembership;
    this->m_obj_ezsigntemplatepackagesignermembership_isSet = true;
}

bool OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::is_obj_ezsigntemplatepackagesignermembership_Set() const{
    return m_obj_ezsigntemplatepackagesignermembership_isSet;
}

bool OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::is_obj_ezsigntemplatepackagesignermembership_Valid() const{
    return m_obj_ezsigntemplatepackagesignermembership_isValid;
}

bool OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatepackagesignermembership.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackagesignermembership_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatepackagesignermembership_isValid && true;
}

} // namespace OpenAPI
