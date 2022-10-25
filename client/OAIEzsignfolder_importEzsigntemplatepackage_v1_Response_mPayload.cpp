/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::~OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload() {}

void OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigndocument_isSet = false;
    m_a_obj_ezsigndocument_isValid = false;
}

void OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsigndocument, json[QString("a_objEzsigndocument")]);
    m_a_obj_ezsigndocument_isSet = !json[QString("a_objEzsigndocument")].isNull() && m_a_obj_ezsigndocument_isValid;
}

QString OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzsigndocument"), ::OpenAPI::toJsonValue(a_obj_ezsigndocument));
    }
    return obj;
}

QList<OAIEzsigndocument_ResponseCompound> OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::getAObjEzsigndocument() const {
    return a_obj_ezsigndocument;
}
void OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::setAObjEzsigndocument(const QList<OAIEzsigndocument_ResponseCompound> &a_obj_ezsigndocument) {
    this->a_obj_ezsigndocument = a_obj_ezsigndocument;
    this->m_a_obj_ezsigndocument_isSet = true;
}

bool OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::is_a_obj_ezsigndocument_Set() const{
    return m_a_obj_ezsigndocument_isSet;
}

bool OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::is_a_obj_ezsigndocument_Valid() const{
    return m_a_obj_ezsigndocument_isValid;
}

bool OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_importEzsigntemplatepackage_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndocument_isValid && true;
}

} // namespace OpenAPI
