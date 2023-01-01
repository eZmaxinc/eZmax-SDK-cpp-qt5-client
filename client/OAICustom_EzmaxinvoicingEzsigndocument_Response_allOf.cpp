/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf() {
    this->initializeModel();
}

OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::~OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf() {}

void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::initializeModel() {

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_s_name_isSet = false;
    m_s_name_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_s_ezsigndocument_name_isSet = false;
    m_s_ezsigndocument_name_isValid = false;

    m_b_ezsignfolder_allowed_isSet = false;
    m_b_ezsignfolder_allowed_isValid = false;
}

void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_s_name_isValid = ::OpenAPI::fromJsonValue(s_name, json[QString("sName")]);
    m_s_name_isSet = !json[QString("sName")].isNull() && m_s_name_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_s_ezsigndocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_name, json[QString("sEzsigndocumentName")]);
    m_s_ezsigndocument_name_isSet = !json[QString("sEzsigndocumentName")].isNull() && m_s_ezsigndocument_name_isValid;

    m_b_ezsignfolder_allowed_isValid = ::OpenAPI::fromJsonValue(b_ezsignfolder_allowed, json[QString("bEzsignfolderAllowed")]);
    m_b_ezsignfolder_allowed_isSet = !json[QString("bEzsignfolderAllowed")].isNull() && m_b_ezsignfolder_allowed_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_s_name_isSet) {
        obj.insert(QString("sName"), ::OpenAPI::toJsonValue(s_name));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (m_s_ezsigndocument_name_isSet) {
        obj.insert(QString("sEzsigndocumentName"), ::OpenAPI::toJsonValue(s_ezsigndocument_name));
    }
    if (m_b_ezsignfolder_allowed_isSet) {
        obj.insert(QString("bEzsignfolderAllowed"), ::OpenAPI::toJsonValue(b_ezsignfolder_allowed));
    }
    return obj;
}

qint32 OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::getSName() const {
    return s_name;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::setSName(const QString &s_name) {
    this->s_name = s_name;
    this->m_s_name_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_s_name_Set() const{
    return m_s_name_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_s_name_Valid() const{
    return m_s_name_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::getSEzsigndocumentName() const {
    return s_ezsigndocument_name;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::setSEzsigndocumentName(const QString &s_ezsigndocument_name) {
    this->s_ezsigndocument_name = s_ezsigndocument_name;
    this->m_s_ezsigndocument_name_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_s_ezsigndocument_name_Set() const{
    return m_s_ezsigndocument_name_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_s_ezsigndocument_name_Valid() const{
    return m_s_ezsigndocument_name_isValid;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::isBEzsignfolderAllowed() const {
    return b_ezsignfolder_allowed;
}
void OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::setBEzsignfolderAllowed(const bool &b_ezsignfolder_allowed) {
    this->b_ezsignfolder_allowed = b_ezsignfolder_allowed;
    this->m_b_ezsignfolder_allowed_isSet = true;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_b_ezsignfolder_allowed_Set() const{
    return m_b_ezsignfolder_allowed_isSet;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::is_b_ezsignfolder_allowed_Valid() const{
    return m_b_ezsignfolder_allowed_isValid;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignfolder_allowed_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_EzmaxinvoicingEzsigndocument_Response_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_s_name_isValid && m_s_ezsignfolder_description_isValid && m_s_ezsigndocument_name_isValid && m_b_ezsignfolder_allowed_isValid && true;
}

} // namespace OpenAPI
