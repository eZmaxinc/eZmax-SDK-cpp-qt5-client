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

#include "OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::~OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload() {}

void OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::initializeModel() {

    m_a_obj_forms_data_folder_isSet = false;
    m_a_obj_forms_data_folder_isValid = false;
}

void OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_forms_data_folder_isValid = ::OpenAPI::fromJsonValue(a_obj_forms_data_folder, json[QString("a_objFormsDataFolder")]);
    m_a_obj_forms_data_folder_isSet = !json[QString("a_objFormsDataFolder")].isNull() && m_a_obj_forms_data_folder_isValid;
}

QString OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_forms_data_folder.size() > 0) {
        obj.insert(QString("a_objFormsDataFolder"), ::OpenAPI::toJsonValue(a_obj_forms_data_folder));
    }
    return obj;
}

QList<OAICustom_FormsDataFolder_Response> OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::getAObjFormsDataFolder() const {
    return a_obj_forms_data_folder;
}
void OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::setAObjFormsDataFolder(const QList<OAICustom_FormsDataFolder_Response> &a_obj_forms_data_folder) {
    this->a_obj_forms_data_folder = a_obj_forms_data_folder;
    this->m_a_obj_forms_data_folder_isSet = true;
}

bool OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::is_a_obj_forms_data_folder_Set() const{
    return m_a_obj_forms_data_folder_isSet;
}

bool OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::is_a_obj_forms_data_folder_Valid() const{
    return m_a_obj_forms_data_folder_isValid;
}

bool OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_forms_data_folder.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignbulksendtransmission_getFormsData_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_forms_data_folder_isValid && true;
}

} // namespace OpenAPI
