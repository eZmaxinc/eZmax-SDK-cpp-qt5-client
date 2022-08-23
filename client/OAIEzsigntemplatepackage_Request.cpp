/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatepackage_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatepackage_Request::OAIEzsigntemplatepackage_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatepackage_Request::OAIEzsigntemplatepackage_Request() {
    this->initializeModel();
}

OAIEzsigntemplatepackage_Request::~OAIEzsigntemplatepackage_Request() {}

void OAIEzsigntemplatepackage_Request::initializeModel() {

    m_pki_ezsigntemplatepackage_id_isSet = false;
    m_pki_ezsigntemplatepackage_id_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigntemplatepackage_description_isSet = false;
    m_s_ezsigntemplatepackage_description_isValid = false;

    m_b_ezsigntemplatepackage_adminonly_isSet = false;
    m_b_ezsigntemplatepackage_adminonly_isValid = false;

    m_b_ezsigntemplatepackage_isactive_isSet = false;
    m_b_ezsigntemplatepackage_isactive_isValid = false;
}

void OAIEzsigntemplatepackage_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatepackage_Request::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatepackage_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatepackage_id, json[QString("pkiEzsigntemplatepackageID")]);
    m_pki_ezsigntemplatepackage_id_isSet = !json[QString("pkiEzsigntemplatepackageID")].isNull() && m_pki_ezsigntemplatepackage_id_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigntemplatepackage_description_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatepackage_description, json[QString("sEzsigntemplatepackageDescription")]);
    m_s_ezsigntemplatepackage_description_isSet = !json[QString("sEzsigntemplatepackageDescription")].isNull() && m_s_ezsigntemplatepackage_description_isValid;

    m_b_ezsigntemplatepackage_adminonly_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_adminonly, json[QString("bEzsigntemplatepackageAdminonly")]);
    m_b_ezsigntemplatepackage_adminonly_isSet = !json[QString("bEzsigntemplatepackageAdminonly")].isNull() && m_b_ezsigntemplatepackage_adminonly_isValid;

    m_b_ezsigntemplatepackage_isactive_isValid = ::OpenAPI::fromJsonValue(b_ezsigntemplatepackage_isactive, json[QString("bEzsigntemplatepackageIsactive")]);
    m_b_ezsigntemplatepackage_isactive_isSet = !json[QString("bEzsigntemplatepackageIsactive")].isNull() && m_b_ezsigntemplatepackage_isactive_isValid;
}

QString OAIEzsigntemplatepackage_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatepackage_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatepackage_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatepackageID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatepackage_id));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsigntemplatepackage_description_isSet) {
        obj.insert(QString("sEzsigntemplatepackageDescription"), ::OpenAPI::toJsonValue(s_ezsigntemplatepackage_description));
    }
    if (m_b_ezsigntemplatepackage_adminonly_isSet) {
        obj.insert(QString("bEzsigntemplatepackageAdminonly"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_adminonly));
    }
    if (m_b_ezsigntemplatepackage_isactive_isSet) {
        obj.insert(QString("bEzsigntemplatepackageIsactive"), ::OpenAPI::toJsonValue(b_ezsigntemplatepackage_isactive));
    }
    return obj;
}

qint32 OAIEzsigntemplatepackage_Request::getPkiEzsigntemplatepackageId() const {
    return pki_ezsigntemplatepackage_id;
}
void OAIEzsigntemplatepackage_Request::setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id) {
    this->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    this->m_pki_ezsigntemplatepackage_id_isSet = true;
}

bool OAIEzsigntemplatepackage_Request::is_pki_ezsigntemplatepackage_id_Set() const{
    return m_pki_ezsigntemplatepackage_id_isSet;
}

bool OAIEzsigntemplatepackage_Request::is_pki_ezsigntemplatepackage_id_Valid() const{
    return m_pki_ezsigntemplatepackage_id_isValid;
}

qint32 OAIEzsigntemplatepackage_Request::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsigntemplatepackage_Request::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsigntemplatepackage_Request::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsigntemplatepackage_Request::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsigntemplatepackage_Request::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigntemplatepackage_Request::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigntemplatepackage_Request::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigntemplatepackage_Request::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigntemplatepackage_Request::getSEzsigntemplatepackageDescription() const {
    return s_ezsigntemplatepackage_description;
}
void OAIEzsigntemplatepackage_Request::setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description) {
    this->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    this->m_s_ezsigntemplatepackage_description_isSet = true;
}

bool OAIEzsigntemplatepackage_Request::is_s_ezsigntemplatepackage_description_Set() const{
    return m_s_ezsigntemplatepackage_description_isSet;
}

bool OAIEzsigntemplatepackage_Request::is_s_ezsigntemplatepackage_description_Valid() const{
    return m_s_ezsigntemplatepackage_description_isValid;
}

bool OAIEzsigntemplatepackage_Request::isBEzsigntemplatepackageAdminonly() const {
    return b_ezsigntemplatepackage_adminonly;
}
void OAIEzsigntemplatepackage_Request::setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly) {
    this->b_ezsigntemplatepackage_adminonly = b_ezsigntemplatepackage_adminonly;
    this->m_b_ezsigntemplatepackage_adminonly_isSet = true;
}

bool OAIEzsigntemplatepackage_Request::is_b_ezsigntemplatepackage_adminonly_Set() const{
    return m_b_ezsigntemplatepackage_adminonly_isSet;
}

bool OAIEzsigntemplatepackage_Request::is_b_ezsigntemplatepackage_adminonly_Valid() const{
    return m_b_ezsigntemplatepackage_adminonly_isValid;
}

bool OAIEzsigntemplatepackage_Request::isBEzsigntemplatepackageIsactive() const {
    return b_ezsigntemplatepackage_isactive;
}
void OAIEzsigntemplatepackage_Request::setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive) {
    this->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    this->m_b_ezsigntemplatepackage_isactive_isSet = true;
}

bool OAIEzsigntemplatepackage_Request::is_b_ezsigntemplatepackage_isactive_Set() const{
    return m_b_ezsigntemplatepackage_isactive_isSet;
}

bool OAIEzsigntemplatepackage_Request::is_b_ezsigntemplatepackage_isactive_Valid() const{
    return m_b_ezsigntemplatepackage_isactive_isValid;
}

bool OAIEzsigntemplatepackage_Request::isSet() const {
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

        if (m_s_ezsigntemplatepackage_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_adminonly_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplatepackage_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplatepackage_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_fki_language_id_isValid && m_s_ezsigntemplatepackage_description_isValid && m_b_ezsigntemplatepackage_adminonly_isValid && m_b_ezsigntemplatepackage_isactive_isValid && true;
}

} // namespace OpenAPI
