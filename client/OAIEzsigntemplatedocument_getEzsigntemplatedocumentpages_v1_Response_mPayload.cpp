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

#include "OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::~OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload() {}

void OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigntemplatedocumentpage_isSet = false;
    m_a_obj_ezsigntemplatedocumentpage_isValid = false;
}

void OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigntemplatedocumentpage_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigntemplatedocumentpage, json[QString("a_objEzsigntemplatedocumentpage")]);
    m_a_obj_ezsigntemplatedocumentpage_isSet = !json[QString("a_objEzsigntemplatedocumentpage")].isNull() && m_a_obj_ezsigntemplatedocumentpage_isValid;
}

QString OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigntemplatedocumentpage.size() > 0) {
        obj.insert(QString("a_objEzsigntemplatedocumentpage"), ::OpenAPI::toJsonValue(a_obj_ezsigntemplatedocumentpage));
    }
    return obj;
}

QList<OAIEzsigntemplatedocumentpage_ResponseCompound> OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::getAObjEzsigntemplatedocumentpage() const {
    return a_obj_ezsigntemplatedocumentpage;
}
void OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::setAObjEzsigntemplatedocumentpage(const QList<OAIEzsigntemplatedocumentpage_ResponseCompound> &a_obj_ezsigntemplatedocumentpage) {
    this->a_obj_ezsigntemplatedocumentpage = a_obj_ezsigntemplatedocumentpage;
    this->m_a_obj_ezsigntemplatedocumentpage_isSet = true;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::is_a_obj_ezsigntemplatedocumentpage_Set() const{
    return m_a_obj_ezsigntemplatedocumentpage_isSet;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::is_a_obj_ezsigntemplatedocumentpage_Valid() const{
    return m_a_obj_ezsigntemplatedocumentpage_isValid;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigntemplatedocumentpage.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatedocument_getEzsigntemplatedocumentpages_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigntemplatedocumentpage_isValid && true;
}

} // namespace OpenAPI
