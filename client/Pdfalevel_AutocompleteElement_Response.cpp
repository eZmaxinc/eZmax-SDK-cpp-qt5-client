/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Pdfalevel_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Pdfalevel_AutocompleteElement_Response::Pdfalevel_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Pdfalevel_AutocompleteElement_Response::Pdfalevel_AutocompleteElement_Response() {
    this->initializeModel();
}

Pdfalevel_AutocompleteElement_Response::~Pdfalevel_AutocompleteElement_Response() {}

void Pdfalevel_AutocompleteElement_Response::initializeModel() {

    m_pki_pdfalevel_id_isSet = false;
    m_pki_pdfalevel_id_isValid = false;

    m_s_pdfalevel_name_isSet = false;
    m_s_pdfalevel_name_isValid = false;

    m_b_pdfalevel_isactive_isSet = false;
    m_b_pdfalevel_isactive_isValid = false;
}

void Pdfalevel_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Pdfalevel_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_pki_pdfalevel_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_pdfalevel_id, json[QString("pkiPdfalevelID")]);
    m_pki_pdfalevel_id_isSet = !json[QString("pkiPdfalevelID")].isNull() && m_pki_pdfalevel_id_isValid;

    m_s_pdfalevel_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_pdfalevel_name, json[QString("sPdfalevelName")]);
    m_s_pdfalevel_name_isSet = !json[QString("sPdfalevelName")].isNull() && m_s_pdfalevel_name_isValid;

    m_b_pdfalevel_isactive_isValid = ::Ezmaxapi::fromJsonValue(m_b_pdfalevel_isactive, json[QString("bPdfalevelIsactive")]);
    m_b_pdfalevel_isactive_isSet = !json[QString("bPdfalevelIsactive")].isNull() && m_b_pdfalevel_isactive_isValid;
}

QString Pdfalevel_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Pdfalevel_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_pdfalevel_id_isSet) {
        obj.insert(QString("pkiPdfalevelID"), ::Ezmaxapi::toJsonValue(m_pki_pdfalevel_id));
    }
    if (m_s_pdfalevel_name_isSet) {
        obj.insert(QString("sPdfalevelName"), ::Ezmaxapi::toJsonValue(m_s_pdfalevel_name));
    }
    if (m_b_pdfalevel_isactive_isSet) {
        obj.insert(QString("bPdfalevelIsactive"), ::Ezmaxapi::toJsonValue(m_b_pdfalevel_isactive));
    }
    return obj;
}

qint32 Pdfalevel_AutocompleteElement_Response::getPkiPdfalevelId() const {
    return m_pki_pdfalevel_id;
}
void Pdfalevel_AutocompleteElement_Response::setPkiPdfalevelId(const qint32 &pki_pdfalevel_id) {
    m_pki_pdfalevel_id = pki_pdfalevel_id;
    m_pki_pdfalevel_id_isSet = true;
}

bool Pdfalevel_AutocompleteElement_Response::is_pki_pdfalevel_id_Set() const{
    return m_pki_pdfalevel_id_isSet;
}

bool Pdfalevel_AutocompleteElement_Response::is_pki_pdfalevel_id_Valid() const{
    return m_pki_pdfalevel_id_isValid;
}

QString Pdfalevel_AutocompleteElement_Response::getSPdfalevelName() const {
    return m_s_pdfalevel_name;
}
void Pdfalevel_AutocompleteElement_Response::setSPdfalevelName(const QString &s_pdfalevel_name) {
    m_s_pdfalevel_name = s_pdfalevel_name;
    m_s_pdfalevel_name_isSet = true;
}

bool Pdfalevel_AutocompleteElement_Response::is_s_pdfalevel_name_Set() const{
    return m_s_pdfalevel_name_isSet;
}

bool Pdfalevel_AutocompleteElement_Response::is_s_pdfalevel_name_Valid() const{
    return m_s_pdfalevel_name_isValid;
}

bool Pdfalevel_AutocompleteElement_Response::isBPdfalevelIsactive() const {
    return m_b_pdfalevel_isactive;
}
void Pdfalevel_AutocompleteElement_Response::setBPdfalevelIsactive(const bool &b_pdfalevel_isactive) {
    m_b_pdfalevel_isactive = b_pdfalevel_isactive;
    m_b_pdfalevel_isactive_isSet = true;
}

bool Pdfalevel_AutocompleteElement_Response::is_b_pdfalevel_isactive_Set() const{
    return m_b_pdfalevel_isactive_isSet;
}

bool Pdfalevel_AutocompleteElement_Response::is_b_pdfalevel_isactive_Valid() const{
    return m_b_pdfalevel_isactive_isValid;
}

bool Pdfalevel_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_pdfalevel_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_pdfalevel_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_pdfalevel_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Pdfalevel_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_pdfalevel_id_isValid && m_s_pdfalevel_name_isValid && m_b_pdfalevel_isactive_isValid && true;
}

} // namespace Ezmaxapi
