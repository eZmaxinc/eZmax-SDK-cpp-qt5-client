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

#include "OAIEzsigndocument_getEzsignpages_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::OAIEzsigndocument_getEzsignpages_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::OAIEzsigndocument_getEzsignpages_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::~OAIEzsigndocument_getEzsignpages_v1_Response_mPayload() {}

void OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignpage_isSet = false;
    m_a_obj_ezsignpage_isValid = false;
}

void OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignpage_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignpage, json[QString("a_objEzsignpage")]);
    m_a_obj_ezsignpage_isSet = !json[QString("a_objEzsignpage")].isNull() && m_a_obj_ezsignpage_isValid;
}

QString OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignpage.size() > 0) {
        obj.insert(QString("a_objEzsignpage"), ::OpenAPI::toJsonValue(a_obj_ezsignpage));
    }
    return obj;
}

QList<OAIEzsignpage_ResponseCompound> OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::getAObjEzsignpage() const {
    return a_obj_ezsignpage;
}
void OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::setAObjEzsignpage(const QList<OAIEzsignpage_ResponseCompound> &a_obj_ezsignpage) {
    this->a_obj_ezsignpage = a_obj_ezsignpage;
    this->m_a_obj_ezsignpage_isSet = true;
}

bool OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::is_a_obj_ezsignpage_Set() const{
    return m_a_obj_ezsignpage_isSet;
}

bool OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::is_a_obj_ezsignpage_Valid() const{
    return m_a_obj_ezsignpage_isValid;
}

bool OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignpage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getEzsignpages_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignpage_isValid && true;
}

} // namespace OpenAPI
