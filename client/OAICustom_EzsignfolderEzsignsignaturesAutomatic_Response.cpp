/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response() {
    this->initializeModel();
}

OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::~OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response() {}

void OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::initializeModel() {

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_a_obj_ezsigndocument_isSet = false;
    m_a_obj_ezsigndocument_isValid = false;
}

void OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_a_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(m_a_obj_ezsigndocument, json[QString("a_objEzsigndocument")]);
    m_a_obj_ezsigndocument_isSet = !json[QString("a_objEzsigndocument")].isNull() && m_a_obj_ezsigndocument_isValid;
}

QString OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(m_pki_ezsignfolder_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(m_s_ezsignfolder_description));
    }
    if (m_a_obj_ezsigndocument.size() > 0) {
        obj.insert(QString("a_objEzsigndocument"), ::OpenAPI::toJsonValue(m_a_obj_ezsigndocument));
    }
    return obj;
}

qint32 OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::getPkiEzsignfolderId() const {
    return m_pki_ezsignfolder_id;
}
void OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    m_pki_ezsignfolder_id = pki_ezsignfolder_id;
    m_pki_ezsignfolder_id_isSet = true;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

QString OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::getSEzsignfolderDescription() const {
    return m_s_ezsignfolder_description;
}
void OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    m_s_ezsignfolder_description = s_ezsignfolder_description;
    m_s_ezsignfolder_description_isSet = true;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QList<OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response> OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::getAObjEzsigndocument() const {
    return m_a_obj_ezsigndocument;
}
void OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::setAObjEzsigndocument(const QList<OAICustom_EzsigndocumentEzsignsignaturesAutomatic_Response> &a_obj_ezsigndocument) {
    m_a_obj_ezsigndocument = a_obj_ezsigndocument;
    m_a_obj_ezsigndocument_isSet = true;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::is_a_obj_ezsigndocument_Set() const{
    return m_a_obj_ezsigndocument_isSet;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::is_a_obj_ezsigndocument_Valid() const{
    return m_a_obj_ezsigndocument_isValid;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::isSet() const {
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

        if (m_a_obj_ezsigndocument.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignfolder_id_isValid && m_s_ezsignfolder_description_isValid && m_a_obj_ezsigndocument_isValid && true;
}

} // namespace OpenAPI
