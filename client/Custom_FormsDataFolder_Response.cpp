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

#include "Custom_FormsDataFolder_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_FormsDataFolder_Response::Custom_FormsDataFolder_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_FormsDataFolder_Response::Custom_FormsDataFolder_Response() {
    this->initializeModel();
}

Custom_FormsDataFolder_Response::~Custom_FormsDataFolder_Response() {}

void Custom_FormsDataFolder_Response::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_a_obj_form_data_document_isSet = false;
    m_a_obj_form_data_document_isValid = false;
}

void Custom_FormsDataFolder_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_FormsDataFolder_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_s_ezsignfolder_description_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_a_obj_form_data_document_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_form_data_document, json[QString("a_objFormDataDocument")]);
    m_a_obj_form_data_document_isSet = !json[QString("a_objFormDataDocument")].isNull() && m_a_obj_form_data_document_isValid;
}

QString Custom_FormsDataFolder_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_FormsDataFolder_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignfolder_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::Ezmaxapi::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_a_obj_form_data_document.size() > 0) {
        obj.insert(QString("a_objFormDataDocument"), ::Ezmaxapi::toJsonValue(m_a_obj_form_data_document));
    }
    return obj;
}

qint32 Custom_FormsDataFolder_Response::getPkiEzsignfolderId() const {
    return m_pki_ezsignfolder_id;
}
void Custom_FormsDataFolder_Response::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    m_pki_ezsignfolder_id = pki_ezsignfolder_id;
    m_pki_ezsignfolder_id_isSet = true;
}

bool Custom_FormsDataFolder_Response::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool Custom_FormsDataFolder_Response::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

QString Custom_FormsDataFolder_Response::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void Custom_FormsDataFolder_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool Custom_FormsDataFolder_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool Custom_FormsDataFolder_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QList<Custom_FormDataDocument_Response> Custom_FormsDataFolder_Response::getAObjFormDataDocument() const {
    return m_a_obj_form_data_document;
}
void Custom_FormsDataFolder_Response::setAObjFormDataDocument(const QList<Custom_FormDataDocument_Response> &a_obj_form_data_document) {
    m_a_obj_form_data_document = a_obj_form_data_document;
    m_a_obj_form_data_document_isSet = true;
}

bool Custom_FormsDataFolder_Response::is_a_obj_form_data_document_Set() const{
    return m_a_obj_form_data_document_isSet;
}

bool Custom_FormsDataFolder_Response::is_a_obj_form_data_document_Valid() const{
    return m_a_obj_form_data_document_isValid;
}

bool Custom_FormsDataFolder_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_form_data_document.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_FormsDataFolder_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && m_a_obj_form_data_document_isValid && true;
}

} // namespace Ezmaxapi
