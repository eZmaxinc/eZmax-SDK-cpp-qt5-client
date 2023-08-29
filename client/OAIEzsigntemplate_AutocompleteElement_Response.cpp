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

#include "OAIEzsigntemplate_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplate_AutocompleteElement_Response::OAIEzsigntemplate_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplate_AutocompleteElement_Response::OAIEzsigntemplate_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIEzsigntemplate_AutocompleteElement_Response::~OAIEzsigntemplate_AutocompleteElement_Response() {}

void OAIEzsigntemplate_AutocompleteElement_Response::initializeModel() {

    m_e_ezsignfoldertype_privacylevel_isSet = false;
    m_e_ezsignfoldertype_privacylevel_isValid = false;

    m_s_ezsigntemplate_description_isSet = false;
    m_s_ezsigntemplate_description_isValid = false;

    m_pki_ezsigntemplate_id_isSet = false;
    m_pki_ezsigntemplate_id_isValid = false;

    m_b_ezsigntemplate_isactive_isSet = false;
    m_b_ezsigntemplate_isactive_isValid = false;
}

void OAIEzsigntemplate_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplate_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_e_ezsignfoldertype_privacylevel_isValid = ::OpenAPI::fromJsonValue(m_e_ezsignfoldertype_privacylevel, json[QString("eEzsignfoldertypePrivacylevel")]);
    m_e_ezsignfoldertype_privacylevel_isSet = !json[QString("eEzsignfoldertypePrivacylevel")].isNull() && m_e_ezsignfoldertype_privacylevel_isValid;

    m_s_ezsigntemplate_description_isValid = ::OpenAPI::fromJsonValue(m_s_ezsigntemplate_description, json[QString("sEzsigntemplateDescription")]);
    m_s_ezsigntemplate_description_isSet = !json[QString("sEzsigntemplateDescription")].isNull() && m_s_ezsigntemplate_description_isValid;

    m_pki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(m_pki_ezsigntemplate_id, json[QString("pkiEzsigntemplateID")]);
    m_pki_ezsigntemplate_id_isSet = !json[QString("pkiEzsigntemplateID")].isNull() && m_pki_ezsigntemplate_id_isValid;

    m_b_ezsigntemplate_isactive_isValid = ::OpenAPI::fromJsonValue(m_b_ezsigntemplate_isactive, json[QString("bEzsigntemplateIsactive")]);
    m_b_ezsigntemplate_isactive_isSet = !json[QString("bEzsigntemplateIsactive")].isNull() && m_b_ezsigntemplate_isactive_isValid;
}

QString OAIEzsigntemplate_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplate_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_e_ezsignfoldertype_privacylevel.isSet()) {
        obj.insert(QString("eEzsignfoldertypePrivacylevel"), ::OpenAPI::toJsonValue(m_e_ezsignfoldertype_privacylevel));
    }
    if (m_s_ezsigntemplate_description_isSet) {
        obj.insert(QString("sEzsigntemplateDescription"), ::OpenAPI::toJsonValue(m_s_ezsigntemplate_description));
    }
    if (m_pki_ezsigntemplate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplateID"), ::OpenAPI::toJsonValue(m_pki_ezsigntemplate_id));
    }
    if (m_b_ezsigntemplate_isactive_isSet) {
        obj.insert(QString("bEzsigntemplateIsactive"), ::OpenAPI::toJsonValue(m_b_ezsigntemplate_isactive));
    }
    return obj;
}

OAIField_eEzsignfoldertypePrivacylevel OAIEzsigntemplate_AutocompleteElement_Response::getEEzsignfoldertypePrivacylevel() const {
    return m_e_ezsignfoldertype_privacylevel;
}
void OAIEzsigntemplate_AutocompleteElement_Response::setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel) {
    m_e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    m_e_ezsignfoldertype_privacylevel_isSet = true;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_e_ezsignfoldertype_privacylevel_Set() const{
    return m_e_ezsignfoldertype_privacylevel_isSet;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_e_ezsignfoldertype_privacylevel_Valid() const{
    return m_e_ezsignfoldertype_privacylevel_isValid;
}

QString OAIEzsigntemplate_AutocompleteElement_Response::getSEzsigntemplateDescription() const {
    return m_s_ezsigntemplate_description;
}
void OAIEzsigntemplate_AutocompleteElement_Response::setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description) {
    m_s_ezsigntemplate_description = s_ezsigntemplate_description;
    m_s_ezsigntemplate_description_isSet = true;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_s_ezsigntemplate_description_Set() const{
    return m_s_ezsigntemplate_description_isSet;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_s_ezsigntemplate_description_Valid() const{
    return m_s_ezsigntemplate_description_isValid;
}

qint32 OAIEzsigntemplate_AutocompleteElement_Response::getPkiEzsigntemplateId() const {
    return m_pki_ezsigntemplate_id;
}
void OAIEzsigntemplate_AutocompleteElement_Response::setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id) {
    m_pki_ezsigntemplate_id = pki_ezsigntemplate_id;
    m_pki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_pki_ezsigntemplate_id_Set() const{
    return m_pki_ezsigntemplate_id_isSet;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_pki_ezsigntemplate_id_Valid() const{
    return m_pki_ezsigntemplate_id_isValid;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::isBEzsigntemplateIsactive() const {
    return m_b_ezsigntemplate_isactive;
}
void OAIEzsigntemplate_AutocompleteElement_Response::setBEzsigntemplateIsactive(const bool &b_ezsigntemplate_isactive) {
    m_b_ezsigntemplate_isactive = b_ezsigntemplate_isactive;
    m_b_ezsigntemplate_isactive_isSet = true;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_b_ezsigntemplate_isactive_Set() const{
    return m_b_ezsigntemplate_isactive_isSet;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::is_b_ezsigntemplate_isactive_Valid() const{
    return m_b_ezsigntemplate_isactive_isValid;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_e_ezsignfoldertype_privacylevel.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplate_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsigntemplate_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigntemplate_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_e_ezsignfoldertype_privacylevel_isValid && m_s_ezsigntemplate_description_isValid && m_pki_ezsigntemplate_id_isValid && m_b_ezsigntemplate_isactive_isValid && true;
}

} // namespace OpenAPI
