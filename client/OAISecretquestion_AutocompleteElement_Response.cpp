/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAISecretquestion_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAISecretquestion_AutocompleteElement_Response::OAISecretquestion_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAISecretquestion_AutocompleteElement_Response::OAISecretquestion_AutocompleteElement_Response() {
    this->initializeModel();
}

OAISecretquestion_AutocompleteElement_Response::~OAISecretquestion_AutocompleteElement_Response() {}

void OAISecretquestion_AutocompleteElement_Response::initializeModel() {

    m_s_secretquestion_text_x_isSet = false;
    m_s_secretquestion_text_x_isValid = false;

    m_pki_secretquestion_id_isSet = false;
    m_pki_secretquestion_id_isValid = false;

    m_b_secretquestion_isactive_isSet = false;
    m_b_secretquestion_isactive_isValid = false;
}

void OAISecretquestion_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAISecretquestion_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_secretquestion_text_x_isValid = ::OpenAPI::fromJsonValue(s_secretquestion_text_x, json[QString("sSecretquestionTextX")]);
    m_s_secretquestion_text_x_isSet = !json[QString("sSecretquestionTextX")].isNull() && m_s_secretquestion_text_x_isValid;

    m_pki_secretquestion_id_isValid = ::OpenAPI::fromJsonValue(pki_secretquestion_id, json[QString("pkiSecretquestionID")]);
    m_pki_secretquestion_id_isSet = !json[QString("pkiSecretquestionID")].isNull() && m_pki_secretquestion_id_isValid;

    m_b_secretquestion_isactive_isValid = ::OpenAPI::fromJsonValue(b_secretquestion_isactive, json[QString("bSecretquestionIsactive")]);
    m_b_secretquestion_isactive_isSet = !json[QString("bSecretquestionIsactive")].isNull() && m_b_secretquestion_isactive_isValid;
}

QString OAISecretquestion_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAISecretquestion_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_secretquestion_text_x_isSet) {
        obj.insert(QString("sSecretquestionTextX"), ::OpenAPI::toJsonValue(s_secretquestion_text_x));
    }
    if (m_pki_secretquestion_id_isSet) {
        obj.insert(QString("pkiSecretquestionID"), ::OpenAPI::toJsonValue(pki_secretquestion_id));
    }
    if (m_b_secretquestion_isactive_isSet) {
        obj.insert(QString("bSecretquestionIsactive"), ::OpenAPI::toJsonValue(b_secretquestion_isactive));
    }
    return obj;
}

QString OAISecretquestion_AutocompleteElement_Response::getSSecretquestionTextX() const {
    return s_secretquestion_text_x;
}
void OAISecretquestion_AutocompleteElement_Response::setSSecretquestionTextX(const QString &s_secretquestion_text_x) {
    this->s_secretquestion_text_x = s_secretquestion_text_x;
    this->m_s_secretquestion_text_x_isSet = true;
}

bool OAISecretquestion_AutocompleteElement_Response::is_s_secretquestion_text_x_Set() const{
    return m_s_secretquestion_text_x_isSet;
}

bool OAISecretquestion_AutocompleteElement_Response::is_s_secretquestion_text_x_Valid() const{
    return m_s_secretquestion_text_x_isValid;
}

qint32 OAISecretquestion_AutocompleteElement_Response::getPkiSecretquestionId() const {
    return pki_secretquestion_id;
}
void OAISecretquestion_AutocompleteElement_Response::setPkiSecretquestionId(const qint32 &pki_secretquestion_id) {
    this->pki_secretquestion_id = pki_secretquestion_id;
    this->m_pki_secretquestion_id_isSet = true;
}

bool OAISecretquestion_AutocompleteElement_Response::is_pki_secretquestion_id_Set() const{
    return m_pki_secretquestion_id_isSet;
}

bool OAISecretquestion_AutocompleteElement_Response::is_pki_secretquestion_id_Valid() const{
    return m_pki_secretquestion_id_isValid;
}

bool OAISecretquestion_AutocompleteElement_Response::isBSecretquestionIsactive() const {
    return b_secretquestion_isactive;
}
void OAISecretquestion_AutocompleteElement_Response::setBSecretquestionIsactive(const bool &b_secretquestion_isactive) {
    this->b_secretquestion_isactive = b_secretquestion_isactive;
    this->m_b_secretquestion_isactive_isSet = true;
}

bool OAISecretquestion_AutocompleteElement_Response::is_b_secretquestion_isactive_Set() const{
    return m_b_secretquestion_isactive_isSet;
}

bool OAISecretquestion_AutocompleteElement_Response::is_b_secretquestion_isactive_Valid() const{
    return m_b_secretquestion_isactive_isValid;
}

bool OAISecretquestion_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_secretquestion_text_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_secretquestion_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_secretquestion_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAISecretquestion_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_secretquestion_text_x_isValid && m_pki_secretquestion_id_isValid && m_b_secretquestion_isactive_isValid && true;
}

} // namespace OpenAPI
