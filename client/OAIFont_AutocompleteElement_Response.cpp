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

#include "OAIFont_AutocompleteElement_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFont_AutocompleteElement_Response::OAIFont_AutocompleteElement_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFont_AutocompleteElement_Response::OAIFont_AutocompleteElement_Response() {
    this->initializeModel();
}

OAIFont_AutocompleteElement_Response::~OAIFont_AutocompleteElement_Response() {}

void OAIFont_AutocompleteElement_Response::initializeModel() {

    m_s_font_name_isSet = false;
    m_s_font_name_isValid = false;

    m_pki_font_id_isSet = false;
    m_pki_font_id_isValid = false;

    m_b_font_isactive_isSet = false;
    m_b_font_isactive_isValid = false;
}

void OAIFont_AutocompleteElement_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFont_AutocompleteElement_Response::fromJsonObject(QJsonObject json) {

    m_s_font_name_isValid = ::OpenAPI::fromJsonValue(m_s_font_name, json[QString("sFontName")]);
    m_s_font_name_isSet = !json[QString("sFontName")].isNull() && m_s_font_name_isValid;

    m_pki_font_id_isValid = ::OpenAPI::fromJsonValue(m_pki_font_id, json[QString("pkiFontID")]);
    m_pki_font_id_isSet = !json[QString("pkiFontID")].isNull() && m_pki_font_id_isValid;

    m_b_font_isactive_isValid = ::OpenAPI::fromJsonValue(m_b_font_isactive, json[QString("bFontIsactive")]);
    m_b_font_isactive_isSet = !json[QString("bFontIsactive")].isNull() && m_b_font_isactive_isValid;
}

QString OAIFont_AutocompleteElement_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFont_AutocompleteElement_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_font_name_isSet) {
        obj.insert(QString("sFontName"), ::OpenAPI::toJsonValue(m_s_font_name));
    }
    if (m_pki_font_id_isSet) {
        obj.insert(QString("pkiFontID"), ::OpenAPI::toJsonValue(m_pki_font_id));
    }
    if (m_b_font_isactive_isSet) {
        obj.insert(QString("bFontIsactive"), ::OpenAPI::toJsonValue(m_b_font_isactive));
    }
    return obj;
}

QString OAIFont_AutocompleteElement_Response::getSFontName() const {
    return m_s_font_name;
}
void OAIFont_AutocompleteElement_Response::setSFontName(const QString &s_font_name) {
    m_s_font_name = s_font_name;
    m_s_font_name_isSet = true;
}

bool OAIFont_AutocompleteElement_Response::is_s_font_name_Set() const{
    return m_s_font_name_isSet;
}

bool OAIFont_AutocompleteElement_Response::is_s_font_name_Valid() const{
    return m_s_font_name_isValid;
}

qint32 OAIFont_AutocompleteElement_Response::getPkiFontId() const {
    return m_pki_font_id;
}
void OAIFont_AutocompleteElement_Response::setPkiFontId(const qint32 &pki_font_id) {
    m_pki_font_id = pki_font_id;
    m_pki_font_id_isSet = true;
}

bool OAIFont_AutocompleteElement_Response::is_pki_font_id_Set() const{
    return m_pki_font_id_isSet;
}

bool OAIFont_AutocompleteElement_Response::is_pki_font_id_Valid() const{
    return m_pki_font_id_isValid;
}

bool OAIFont_AutocompleteElement_Response::isBFontIsactive() const {
    return m_b_font_isactive;
}
void OAIFont_AutocompleteElement_Response::setBFontIsactive(const bool &b_font_isactive) {
    m_b_font_isactive = b_font_isactive;
    m_b_font_isactive_isSet = true;
}

bool OAIFont_AutocompleteElement_Response::is_b_font_isactive_Set() const{
    return m_b_font_isactive_isSet;
}

bool OAIFont_AutocompleteElement_Response::is_b_font_isactive_Valid() const{
    return m_b_font_isactive_isValid;
}

bool OAIFont_AutocompleteElement_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_font_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_font_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_font_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFont_AutocompleteElement_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_font_name_isValid && m_pki_font_id_isValid && m_b_font_isactive_isValid && true;
}

} // namespace OpenAPI
