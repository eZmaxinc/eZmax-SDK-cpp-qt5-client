/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFranchiseoffice_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFranchiseoffice_AutocompleteElement_Response::OAIFranchiseoffice_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFranchiseoffice_AutocompleteElement_Response::OAIFranchiseoffice_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIFranchiseoffice_AutocompleteElement_Response::~OAIFranchiseoffice_AutocompleteElement_Response() {}

void OAIFranchiseoffice_AutocompleteElement_Response::initializeModel() {

    m_s_franchiseoffice_description_isSet = false;
    m_s_franchiseoffice_description_isValid = false;

    m_pki_franchiseoffice_id_isSet = false;
    m_pki_franchiseoffice_id_isValid = false;

    m_b_franchiseoffice_isactive_isSet = false;
    m_b_franchiseoffice_isactive_isValid = false;
}

void OAIFranchiseoffice_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFranchiseoffice_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_franchiseoffice_description_isValid = ::OpenAPI::fromJsonValue(s_franchiseoffice_description, json[QString("sFranchiseofficeDescription")]);
    m_s_franchiseoffice_description_isSet = !json[QString("sFranchiseofficeDescription")].isNull() && m_s_franchiseoffice_description_isValid;

    m_pki_franchiseoffice_id_isValid = ::OpenAPI::fromJsonValue(pki_franchiseoffice_id, json[QString("pkiFranchiseofficeID")]);
    m_pki_franchiseoffice_id_isSet = !json[QString("pkiFranchiseofficeID")].isNull() && m_pki_franchiseoffice_id_isValid;

    m_b_franchiseoffice_isactive_isValid = ::OpenAPI::fromJsonValue(b_franchiseoffice_isactive, json[QString("bFranchiseofficeIsactive")]);
    m_b_franchiseoffice_isactive_isSet = !json[QString("bFranchiseofficeIsactive")].isNull() && m_b_franchiseoffice_isactive_isValid;
}

QString OAIFranchiseoffice_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFranchiseoffice_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_franchiseoffice_description_isSet) {
        obj.insert(QString("sFranchiseofficeDescription"), ::OpenAPI::toJsonValue(s_franchiseoffice_description));
    }
    if (m_pki_franchiseoffice_id_isSet) {
        obj.insert(QString("pkiFranchiseofficeID"), ::OpenAPI::toJsonValue(pki_franchiseoffice_id));
    }
    if (m_b_franchiseoffice_isactive_isSet) {
        obj.insert(QString("bFranchiseofficeIsactive"), ::OpenAPI::toJsonValue(b_franchiseoffice_isactive));
    }
    return obj;
}

QString OAIFranchiseoffice_AutocompleteElement_Response::getSFranchiseofficeDescription() const {
    return s_franchiseoffice_description;
}
void OAIFranchiseoffice_AutocompleteElement_Response::setSFranchiseofficeDescription(const QString &s_franchiseoffice_description) {
    this->s_franchiseoffice_description = s_franchiseoffice_description;
    this->m_s_franchiseoffice_description_isSet = true;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::is_s_franchiseoffice_description_Set() const{
    return m_s_franchiseoffice_description_isSet;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::is_s_franchiseoffice_description_Valid() const{
    return m_s_franchiseoffice_description_isValid;
}

qint32 OAIFranchiseoffice_AutocompleteElement_Response::getPkiFranchiseofficeId() const {
    return pki_franchiseoffice_id;
}
void OAIFranchiseoffice_AutocompleteElement_Response::setPkiFranchiseofficeId(const qint32 &pki_franchiseoffice_id) {
    this->pki_franchiseoffice_id = pki_franchiseoffice_id;
    this->m_pki_franchiseoffice_id_isSet = true;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::is_pki_franchiseoffice_id_Set() const{
    return m_pki_franchiseoffice_id_isSet;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::is_pki_franchiseoffice_id_Valid() const{
    return m_pki_franchiseoffice_id_isValid;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::isBFranchiseofficeIsactive() const {
    return b_franchiseoffice_isactive;
}
void OAIFranchiseoffice_AutocompleteElement_Response::setBFranchiseofficeIsactive(const bool &b_franchiseoffice_isactive) {
    this->b_franchiseoffice_isactive = b_franchiseoffice_isactive;
    this->m_b_franchiseoffice_isactive_isSet = true;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::is_b_franchiseoffice_isactive_Set() const{
    return m_b_franchiseoffice_isactive_isSet;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::is_b_franchiseoffice_isactive_Valid() const{
    return m_b_franchiseoffice_isactive_isValid;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_franchiseoffice_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_franchiseoffice_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_franchiseoffice_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFranchiseoffice_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_franchiseoffice_description_isValid && m_pki_franchiseoffice_id_isValid && m_b_franchiseoffice_isactive_isValid && true;
}

} // namespace OpenAPI
