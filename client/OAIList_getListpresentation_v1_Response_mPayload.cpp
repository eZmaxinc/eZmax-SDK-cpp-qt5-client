/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIList_getListpresentation_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIList_getListpresentation_v1_Response_mPayload::OAIList_getListpresentation_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIList_getListpresentation_v1_Response_mPayload::OAIList_getListpresentation_v1_Response_mPayload() {
    this->initializeModel();
}

OAIList_getListpresentation_v1_Response_mPayload::~OAIList_getListpresentation_v1_Response_mPayload() {}

void OAIList_getListpresentation_v1_Response_mPayload::initializeModel() {

    m_a_obj_listpresentation_isSet = false;
    m_a_obj_listpresentation_isValid = false;
}

void OAIList_getListpresentation_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIList_getListpresentation_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_listpresentation_isValid = ::OpenAPI::fromJsonValue(a_obj_listpresentation, json[QString("a_objListpresentation")]);
    m_a_obj_listpresentation_isSet = !json[QString("a_objListpresentation")].isNull() && m_a_obj_listpresentation_isValid;
}

QString OAIList_getListpresentation_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIList_getListpresentation_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_listpresentation.size() > 0) {
        obj.insert(QString("a_objListpresentation"), ::OpenAPI::toJsonValue(a_obj_listpresentation));
    }
    return obj;
}

QList<OAIListpresentation_ResponseCompound> OAIList_getListpresentation_v1_Response_mPayload::getAObjListpresentation() const {
    return a_obj_listpresentation;
}
void OAIList_getListpresentation_v1_Response_mPayload::setAObjListpresentation(const QList<OAIListpresentation_ResponseCompound> &a_obj_listpresentation) {
    this->a_obj_listpresentation = a_obj_listpresentation;
    this->m_a_obj_listpresentation_isSet = true;
}

bool OAIList_getListpresentation_v1_Response_mPayload::is_a_obj_listpresentation_Set() const{
    return m_a_obj_listpresentation_isSet;
}

bool OAIList_getListpresentation_v1_Response_mPayload::is_a_obj_listpresentation_Valid() const{
    return m_a_obj_listpresentation_isValid;
}

bool OAIList_getListpresentation_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_listpresentation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIList_getListpresentation_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_listpresentation_isValid && true;
}

} // namespace OpenAPI
