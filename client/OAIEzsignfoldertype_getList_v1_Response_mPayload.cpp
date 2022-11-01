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

#include "OAIEzsignfoldertype_getList_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_getList_v1_Response_mPayload::OAIEzsignfoldertype_getList_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_getList_v1_Response_mPayload::OAIEzsignfoldertype_getList_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfoldertype_getList_v1_Response_mPayload::~OAIEzsignfoldertype_getList_v1_Response_mPayload() {}

void OAIEzsignfoldertype_getList_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignfoldertype_isSet = false;
    m_a_obj_ezsignfoldertype_isValid = false;

    m_i_row_returned_isSet = false;
    m_i_row_returned_isValid = false;

    m_i_row_filtered_isSet = false;
    m_i_row_filtered_isValid = false;
}

void OAIEzsignfoldertype_getList_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_getList_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldertype_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldertype, json[QString("a_objEzsignfoldertype")]);
    m_a_obj_ezsignfoldertype_isSet = !json[QString("a_objEzsignfoldertype")].isNull() && m_a_obj_ezsignfoldertype_isValid;

    m_i_row_returned_isValid = ::OpenAPI::fromJsonValue(i_row_returned, json[QString("iRowReturned")]);
    m_i_row_returned_isSet = !json[QString("iRowReturned")].isNull() && m_i_row_returned_isValid;

    m_i_row_filtered_isValid = ::OpenAPI::fromJsonValue(i_row_filtered, json[QString("iRowFiltered")]);
    m_i_row_filtered_isSet = !json[QString("iRowFiltered")].isNull() && m_i_row_filtered_isValid;
}

QString OAIEzsignfoldertype_getList_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_getList_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfoldertype.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertype"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldertype));
    }
    if (m_i_row_returned_isSet) {
        obj.insert(QString("iRowReturned"), ::OpenAPI::toJsonValue(i_row_returned));
    }
    if (m_i_row_filtered_isSet) {
        obj.insert(QString("iRowFiltered"), ::OpenAPI::toJsonValue(i_row_filtered));
    }
    return obj;
}

QList<OAIEzsignfoldertype_ListElement> OAIEzsignfoldertype_getList_v1_Response_mPayload::getAObjEzsignfoldertype() const {
    return a_obj_ezsignfoldertype;
}
void OAIEzsignfoldertype_getList_v1_Response_mPayload::setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_ListElement> &a_obj_ezsignfoldertype) {
    this->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;
    this->m_a_obj_ezsignfoldertype_isSet = true;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::is_a_obj_ezsignfoldertype_Set() const{
    return m_a_obj_ezsignfoldertype_isSet;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::is_a_obj_ezsignfoldertype_Valid() const{
    return m_a_obj_ezsignfoldertype_isValid;
}

qint32 OAIEzsignfoldertype_getList_v1_Response_mPayload::getIRowReturned() const {
    return i_row_returned;
}
void OAIEzsignfoldertype_getList_v1_Response_mPayload::setIRowReturned(const qint32 &i_row_returned) {
    this->i_row_returned = i_row_returned;
    this->m_i_row_returned_isSet = true;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::is_i_row_returned_Set() const{
    return m_i_row_returned_isSet;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::is_i_row_returned_Valid() const{
    return m_i_row_returned_isValid;
}

qint32 OAIEzsignfoldertype_getList_v1_Response_mPayload::getIRowFiltered() const {
    return i_row_filtered;
}
void OAIEzsignfoldertype_getList_v1_Response_mPayload::setIRowFiltered(const qint32 &i_row_filtered) {
    this->i_row_filtered = i_row_filtered;
    this->m_i_row_filtered_isSet = true;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::is_i_row_filtered_Set() const{
    return m_i_row_filtered_isSet;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::is_i_row_filtered_Valid() const{
    return m_i_row_filtered_isValid;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfoldertype.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_returned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_row_filtered_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldertype_isValid && m_i_row_returned_isValid && m_i_row_filtered_isValid && true;
}

} // namespace OpenAPI
