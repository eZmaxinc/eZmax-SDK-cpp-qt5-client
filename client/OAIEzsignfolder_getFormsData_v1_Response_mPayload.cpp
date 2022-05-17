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

#include "OAIEzsignfolder_getFormsData_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_getFormsData_v1_Response_mPayload::OAIEzsignfolder_getFormsData_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getFormsData_v1_Response_mPayload::OAIEzsignfolder_getFormsData_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_getFormsData_v1_Response_mPayload::~OAIEzsignfolder_getFormsData_v1_Response_mPayload() {}

void OAIEzsignfolder_getFormsData_v1_Response_mPayload::initializeModel() {

    m_obj_forms_data_folder_isSet = false;
    m_obj_forms_data_folder_isValid = false;
}

void OAIEzsignfolder_getFormsData_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getFormsData_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_obj_forms_data_folder_isValid = ::OpenAPI::fromJsonValue(obj_forms_data_folder, json[QString("objFormsDataFolder")]);
    m_obj_forms_data_folder_isSet = !json[QString("objFormsDataFolder")].isNull() && m_obj_forms_data_folder_isValid;
}

QString OAIEzsignfolder_getFormsData_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getFormsData_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (obj_forms_data_folder.isSet()) {
        obj.insert(QString("objFormsDataFolder"), ::OpenAPI::toJsonValue(obj_forms_data_folder));
    }
    return obj;
}

OAICustom_FormsDataFolder_Response OAIEzsignfolder_getFormsData_v1_Response_mPayload::getObjFormsDataFolder() const {
    return obj_forms_data_folder;
}
void OAIEzsignfolder_getFormsData_v1_Response_mPayload::setObjFormsDataFolder(const OAICustom_FormsDataFolder_Response &obj_forms_data_folder) {
    this->obj_forms_data_folder = obj_forms_data_folder;
    this->m_obj_forms_data_folder_isSet = true;
}

bool OAIEzsignfolder_getFormsData_v1_Response_mPayload::is_obj_forms_data_folder_Set() const{
    return m_obj_forms_data_folder_isSet;
}

bool OAIEzsignfolder_getFormsData_v1_Response_mPayload::is_obj_forms_data_folder_Valid() const{
    return m_obj_forms_data_folder_isValid;
}

bool OAIEzsignfolder_getFormsData_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_forms_data_folder.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getFormsData_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_forms_data_folder_isValid && true;
}

} // namespace OpenAPI
