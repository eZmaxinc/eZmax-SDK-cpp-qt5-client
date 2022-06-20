/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::~OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload() {}

void OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::initializeModel() {

    m_obj_ezsignbulksendtransmission_isSet = false;
    m_obj_ezsignbulksendtransmission_isValid = false;
}

void OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_ezsignbulksendtransmission_isValid = ::OpenAPI::fromJsonValue(obj_ezsignbulksendtransmission, json[QString("objEzsignbulksendtransmission")]);
    m_obj_ezsignbulksendtransmission_isSet = !json[QString("objEzsignbulksendtransmission")].isNull() && m_obj_ezsignbulksendtransmission_isValid;
}

QString OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignbulksendtransmission.isSet()) {
        obj.insert(QString("objEzsignbulksendtransmission"), ::OpenAPI::toJsonValue(obj_ezsignbulksendtransmission));
    }
    return obj;
}

OAIEzsignbulksendtransmission_Response OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::getObjEzsignbulksendtransmission() const {
    return obj_ezsignbulksendtransmission;
}
void OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::setObjEzsignbulksendtransmission(const OAIEzsignbulksendtransmission_Response &obj_ezsignbulksendtransmission) {
    this->obj_ezsignbulksendtransmission = obj_ezsignbulksendtransmission;
    this->m_obj_ezsignbulksendtransmission_isSet = true;
}

bool OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::is_obj_ezsignbulksendtransmission_Set() const{
    return m_obj_ezsignbulksendtransmission_isSet;
}

bool OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::is_obj_ezsignbulksendtransmission_Valid() const{
    return m_obj_ezsignbulksendtransmission_isValid;
}

bool OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignbulksendtransmission.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksend_createEzsignbulksendtransmission_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_ezsignbulksendtransmission_isValid && true;
}

} // namespace OpenAPI
