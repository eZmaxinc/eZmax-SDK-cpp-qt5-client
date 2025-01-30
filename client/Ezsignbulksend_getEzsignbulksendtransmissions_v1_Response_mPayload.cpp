/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::~Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload() {}

void Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignbulksendtransmission_isSet = false;
    m_a_obj_ezsignbulksendtransmission_isValid = false;
}

void Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignbulksendtransmission_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignbulksendtransmission, json[QString("a_objEzsignbulksendtransmission")]);
    m_a_obj_ezsignbulksendtransmission_isSet = !json[QString("a_objEzsignbulksendtransmission")].isNull() && m_a_obj_ezsignbulksendtransmission_isValid;
}

QString Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsignbulksendtransmission.size() > 0) {
        obj.insert(QString("a_objEzsignbulksendtransmission"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignbulksendtransmission));
    }
    return obj;
}

QList<Ezsignbulksendtransmission_ResponseCompound> Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::getAObjEzsignbulksendtransmission() const {
    return m_a_obj_ezsignbulksendtransmission;
}
void Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::setAObjEzsignbulksendtransmission(const QList<Ezsignbulksendtransmission_ResponseCompound> &a_obj_ezsignbulksendtransmission) {
    m_a_obj_ezsignbulksendtransmission = a_obj_ezsignbulksendtransmission;
    m_a_obj_ezsignbulksendtransmission_isSet = true;
}

bool Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::is_a_obj_ezsignbulksendtransmission_Set() const{
    return m_a_obj_ezsignbulksendtransmission_isSet;
}

bool Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::is_a_obj_ezsignbulksendtransmission_Valid() const{
    return m_a_obj_ezsignbulksendtransmission_isValid;
}

bool Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsignbulksendtransmission.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignbulksendtransmission_isValid && true;
}

} // namespace Ezmaxapi
