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

#include "OAIEzsignfolder_getList_v1_Response_mPayload_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_getList_v1_Response_mPayload_allOf::OAIEzsignfolder_getList_v1_Response_mPayload_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getList_v1_Response_mPayload_allOf::OAIEzsignfolder_getList_v1_Response_mPayload_allOf() {
    this->initializeModel();
}

OAIEzsignfolder_getList_v1_Response_mPayload_allOf::~OAIEzsignfolder_getList_v1_Response_mPayload_allOf() {}

void OAIEzsignfolder_getList_v1_Response_mPayload_allOf::initializeModel() {

    m_a_obj_ezsignfolder_isSet = false;
    m_a_obj_ezsignfolder_isValid = false;
}

void OAIEzsignfolder_getList_v1_Response_mPayload_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getList_v1_Response_mPayload_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfolder, json[QString("a_objEzsignfolder")]);
    m_a_obj_ezsignfolder_isSet = !json[QString("a_objEzsignfolder")].isNull() && m_a_obj_ezsignfolder_isValid;
}

QString OAIEzsignfolder_getList_v1_Response_mPayload_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getList_v1_Response_mPayload_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfolder.size() > 0) {
        obj.insert(QString("a_objEzsignfolder"), ::OpenAPI::toJsonValue(a_obj_ezsignfolder));
    }
    return obj;
}

QList<OAIEzsignfolder_ListElement> OAIEzsignfolder_getList_v1_Response_mPayload_allOf::getAObjEzsignfolder() const {
    return a_obj_ezsignfolder;
}
void OAIEzsignfolder_getList_v1_Response_mPayload_allOf::setAObjEzsignfolder(const QList<OAIEzsignfolder_ListElement> &a_obj_ezsignfolder) {
    this->a_obj_ezsignfolder = a_obj_ezsignfolder;
    this->m_a_obj_ezsignfolder_isSet = true;
}

bool OAIEzsignfolder_getList_v1_Response_mPayload_allOf::is_a_obj_ezsignfolder_Set() const{
    return m_a_obj_ezsignfolder_isSet;
}

bool OAIEzsignfolder_getList_v1_Response_mPayload_allOf::is_a_obj_ezsignfolder_Valid() const{
    return m_a_obj_ezsignfolder_isValid;
}

bool OAIEzsignfolder_getList_v1_Response_mPayload_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfolder.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getList_v1_Response_mPayload_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfolder_isValid && true;
}

} // namespace OpenAPI
