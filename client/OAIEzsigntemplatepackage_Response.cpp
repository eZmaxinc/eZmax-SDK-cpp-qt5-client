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

#include "OAIEzsigntemplatepackage_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackage_Response::OAIEzsigntemplatepackage_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackage_Response::OAIEzsigntemplatepackage_Response() {
    this->initializeModel();
}

OAIEzsigntemplatepackage_Response::~OAIEzsigntemplatepackage_Response() {}

void OAIEzsigntemplatepackage_Response::initializeModel() {

    m_pki_ezsigntemplatepackage_id_isSet = false;
    m_pki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_language_name_x_isSet = false;
    m_s_language_name_x_isValid = false;

    m_s_ezsigntemplatepackage_description_isSet = false;
    m_s_ezsigntemplatepackage_description_isValid = false;

    m_b_ezsigntemplatepackage_adminonly_isSet = false;
    m_b_ezsigntemplatepackage_adminonly_isValid = false;

    m_b_ezsigntemplatepackage_needvalidation_isSet = false;
    m_b_ezsigntemplatepackage_needvalidation_isValid = false;

    m_b_ezsigntemplatepackage_isactive_isSet = false;
    m_b_ezsigntemplatepackage_isactive_isValid = false;

    m_s_ezsignfoldertype_name_x_isSet = false;
    m_s_ezsignfoldertype_name_x_isValid = false;
}

void OAIEzsigntemplatepackage_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackage_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsigntemplatepackage_id, json[QString("pkiEzsigntemplatepackageID")]);
    m_pki_ezsigntemplatepackage_id_isSet = !json[QString("pkiEzsigntemplatepackageID")].isNull() && m_pki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(m_fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(m_fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_language_name_x_isValid = ::OpenAPI::fromJsonValue(m_s_language_name_x, json[QString("sLanguageNameX")]);
    m_s_language_name_x_isSet = !json[QString("sLanguageNameX")].isNull() && m_s_language_name_x_isValid;

    m_s_ezsigntemplatepackage_description_isValid = ::OpenAPI::fromJsonValue(m_s_ezsigntemplatepackage_description, json[QString("sEzsigntemplatepackageDescription")]);
    m_s_ezsigntemplatepackage_description_isSet = !json[QString("sEzsigntemplatepackageDescription")].isNull() && m_s_ezsigntemplatepackage_description_isValid;

    m_b_ezsigntemplatepackage_adminonly_isValid = ::OpenAPI::fromJsonValue(m_b_ezsigntemplatepackage_adminonly, json[QString("bEzsigntemplatepackageAdminonly")]);
    m_b_ezsigntemplatepackage_adminonly_isSet = !json[QString("bEzsigntemplatepackageAdminonly")].isNull() && m_b_ezsigntemplatepackage_adminonly_isValid;

    m_b_ezsigntemplatepackage_needvalidation_isValid = ::OpenAPI::fromJsonValue(m_b_ezsigntemplatepackage_needvalidation, json[QString("bEzsigntemplatepackageNeedvalidation")]);
    m_b_ezsigntemplatepackage_needvalidation_isSet = !json[QString("bEzsigntemplatepackageNeedvalidation")].isNull() && m_b_ezsigntemplatepackage_needvalidation_isValid;

    m_b_ezsigntemplatepackage_isactive_isValid = ::OpenAPI::fromJsonValue(m_b_ezsigntemplatepackage_isactive, json[QString("bEzsigntemplatepackageIsactive")]);
    m_b_ezsigntemplatepackage_isactive_isSet = !json[QString("bEzsigntemplatepackageIsactive")].isNull() && m_b_ezsigntemplatepackage_isactive_isValid;

    m_s_ezsignfoldertype_name_x_isValid = ::OpenAPI::fromJsonValue(m_s_ezsignfoldertype_name_x, json[QString("sEzsignfoldertypeNameX")]);
    m_s_ezsignfoldertype_name_x_isSet = !json[QString("sEzsignfoldertypeNameX")].isNull() && m_s_ezsignfoldertype_name_x_isValid;
}

QString OAIEzsigntemplatepackage_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackage_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(m_pki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(m_fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(m_fki_language_id));
    }
    if (m_s_language_name_x_isSet) {
        obj.insert(QString("sLanguageNameX"), ::OpenAPI::toJsonValue(m_s_language_name_x));
    }
    if (m_s_ezsigntemplatepackage_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackageDescription"), ::OpenAPI::toJsonValue(m_s_ezsigntemplatepackage_description));
    }
    if (m_b_ezsigntemplatepackage_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplatepackageAdminonly"), ::OpenAPI::toJsonValue(m_b_ezsigntemplatepackage_adminonly));
    }
    if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
        obj.insert(QString("bEzsigntemplatepackageNeedvalidation"), ::OpenAPI::toJsonValue(m_b_ezsigntemplatepackage_needvalidation));
    }
    if (m_b_ezsigntemplatepackage_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepackageIsactive"), ::OpenAPI::toJsonValue(m_b_ezsigntemplatepackage_isactive));
    }
    if (m_s_ezsignfoldertype_name_x_isSet) {
        obj.insert(QString("sEzsignfoldertypeNameX"), ::OpenAPI::toJsonValue(m_s_ezsignfoldertype_name_x));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackage_Response::getPkiEzsigntemplatepackageId() const {
    return m_pki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackage_Response::setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id) {
    m_pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    m_pki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_pki_ezsigntemplatepackage_id_Set() const{
    return m_pki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_pki_ezsigntemplatepackage_id_Valid() const{
    return m_pki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackage_Response::getFkiEzsignfoldertypeId() const {
    return m_fki_ezsignfoldertype_id;
}
void OAIEzsigntemplatepackage_Response::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    m_fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplatepackage_Response::getFkiLanguageId() const {
    return m_fki_language_id;
}
void OAIEzsigntemplatepackage_Response::setFkiLanguageId(const qint32 &fki_language_id) {
    m_fki_language_id = fki_language_id;
    m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplatepackage_Response::getSLanguageNameX() const {
    return m_s_language_name_x;
}
void OAIEzsigntemplatepackage_Response::setSLanguageNameX(const QString &s_language_name_x) {
    m_s_language_name_x = s_language_name_x;
    m_s_language_name_x_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_s_language_name_x_Set() const{
    return m_s_language_name_x_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_s_language_name_x_Valid() const{
    return m_s_language_name_x_isValid;
}

QString OAIEzsigntemplatepackage_Response::getSEzsigntemplatepackageDescription() const {
    return m_s_ezsigntemplatepackage_description;
}
void OAIEzsigntemplatepackage_Response::setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description) {
    m_s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    m_s_ezsigntemplatepackage_description_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_s_ezsigntemplatepackage_description_Set() const{
    return m_s_ezsigntemplatepackage_description_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_s_ezsigntemplatepackage_description_Valid() const{
    return m_s_ezsigntemplatepackage_description_isValid;
}

bool OAIEzsigntemplatepackage_Response::isBEzsigntemplatepackageAdminonly() const {
    return m_b_ezsigntemplatepackage_adminonly;
}
void OAIEzsigntemplatepackage_Response::setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly) {
    m_b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    m_b_ezsigntemplatepackage_adminonly_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_b_ezsigntemplatepackage_adminonly_Set() const{
    return m_b_ezsigntemplatepackage_adminonly_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_b_ezsigntemplatepackage_adminonly_Valid() const{
    return m_b_ezsigntemplatepackage_adminonly_isValid;
}

bool OAIEzsigntemplatepackage_Response::isBEzsigntemplatepackageNeedvalidation() const {
    return m_b_ezsigntemplatepackage_needvalidation;
}
void OAIEzsigntemplatepackage_Response::setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation) {
    m_b_ezsigntemplatepackage_needvalidation = b_ezsigntemplatepackage_needvalidation;
    m_b_ezsigntemplatepackage_needvalidation_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_b_ezsigntemplatepackage_needvalidation_Set() const{
    return m_b_ezsigntemplatepackage_needvalidation_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_b_ezsigntemplatepackage_needvalidation_Valid() const{
    return m_b_ezsigntemplatepackage_needvalidation_isValid;
}

bool OAIEzsigntemplatepackage_Response::isBEzsigntemplatepackageIsactive() const {
    return m_b_ezsigntemplatepackage_isactive;
}
void OAIEzsigntemplatepackage_Response::setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive) {
    m_b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    m_b_ezsigntemplatepackage_isactive_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_b_ezsigntemplatepackage_isactive_Set() const{
    return m_b_ezsigntemplatepackage_isactive_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_b_ezsigntemplatepackage_isactive_Valid() const{
    return m_b_ezsigntemplatepackage_isactive_isValid;
}

QString OAIEzsigntemplatepackage_Response::getSEzsignfoldertypeNameX() const {
    return m_s_ezsignfoldertype_name_x;
}
void OAIEzsigntemplatepackage_Response::setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x) {
    m_s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    m_s_ezsignfoldertype_name_x_isSet = true;
}

bool OAIEzsigntemplatepackage_Response::is_s_ezsignfoldertype_name_x_Set() const{
    return m_s_ezsignfoldertype_name_x_isSet;
}

bool OAIEzsigntemplatepackage_Response::is_s_ezsignfoldertype_name_x_Valid() const{
    return m_s_ezsignfoldertype_name_x_isValid;
}

bool OAIEzsigntemplatepackage_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatepackage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_language_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatepackage_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_needvalidation_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfoldertype_name_x_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackage_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatepackage_id_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_language_name_x_isValid && m_s_ezsigntemplatepackage_description_isValid && m_b_ezsigntemplatepackage_adminonly_isValid && m_b_ezsigntemplatepackage_needvalidation_isValid && m_b_ezsigntemplatepackage_isactive_isValid && m_s_ezsignfoldertype_name_x_isValid && true;
}

} // namespace OpenAPI
