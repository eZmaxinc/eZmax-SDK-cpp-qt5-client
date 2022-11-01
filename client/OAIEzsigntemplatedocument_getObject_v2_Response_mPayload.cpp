/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatedocument_getObject_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::OAIEzsigntemplatedocument_getObject_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::OAIEzsigntemplatedocument_getObject_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::~OAIEzsigntemplatedocument_getObject_v2_Response_mPayload() {}

void OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::initializeModel() {

    m_obj_ezsigntemplatedocument_isSet = false;
    m_obj_ezsigntemplatedocument_isValid = false;
}

void OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsigntemplatedocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigntemplatedocument, json[QString("objEzsigntemplatedocument")]);
    m_obj_ezsigntemplatedocument_isSet = !json[QString("objEzsigntemplatedocument")].isNull() && m_obj_ezsigntemplatedocument_isValid;
}

QString OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigntemplatedocument.isSet()) {
        obj.insert(QString("objEzsigntemplatedocument"), ::OpenAPI::toJsonValue(obj_ezsigntemplatedocument));
    }
    return obj;
}

OAIEzsigntemplatedocument_ResponseCompound OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::getObjEzsigntemplatedocument() const {
    return obj_ezsigntemplatedocument;
}
void OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::setObjEzsigntemplatedocument(const OAIEzsigntemplatedocument_ResponseCompound &obj_ezsigntemplatedocument) {
    this->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;
    this->m_obj_ezsigntemplatedocument_isSet = true;
}

bool OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::is_obj_ezsigntemplatedocument_Set() const{
    return m_obj_ezsigntemplatedocument_isSet;
}

bool OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::is_obj_ezsigntemplatedocument_Valid() const{
    return m_obj_ezsigntemplatedocument_isValid;
}

bool OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigntemplatedocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_getObject_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsigntemplatedocument_isValid && true;
}

} // namespace OpenAPI
