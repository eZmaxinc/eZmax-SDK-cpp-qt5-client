/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAITextstylestatic_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAITextstylestatic_ResponseCompound::OAITextstylestatic_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITextstylestatic_ResponseCompound::OAITextstylestatic_ResponseCompound() {
    this->initializeModel();
}

OAITextstylestatic_ResponseCompound::~OAITextstylestatic_ResponseCompound() {}

void OAITextstylestatic_ResponseCompound::initializeModel() {

    m_pki_textstylestatic_id_isSet = false;
    m_pki_textstylestatic_id_isValid = false;

    m_fki_font_id_isSet = false;
    m_fki_font_id_isValid = false;

    m_b_textstylestatic_bold_isSet = false;
    m_b_textstylestatic_bold_isValid = false;

    m_b_textstylestatic_underline_isSet = false;
    m_b_textstylestatic_underline_isValid = false;

    m_b_textstylestatic_italic_isSet = false;
    m_b_textstylestatic_italic_isValid = false;

    m_b_textstylestatic_strikethrough_isSet = false;
    m_b_textstylestatic_strikethrough_isValid = false;

    m_i_textstylestatic_fontcolor_isSet = false;
    m_i_textstylestatic_fontcolor_isValid = false;

    m_i_textstylestatic_size_isSet = false;
    m_i_textstylestatic_size_isValid = false;
}

void OAITextstylestatic_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITextstylestatic_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_textstylestatic_id_isValid = ::OpenAPI::fromJsonValue(m_pki_textstylestatic_id, json[QString("pkiTextstylestaticID")]);
    m_pki_textstylestatic_id_isSet = !json[QString("pkiTextstylestaticID")].isNull() && m_pki_textstylestatic_id_isValid;

    m_fki_font_id_isValid = ::OpenAPI::fromJsonValue(m_fki_font_id, json[QString("fkiFontID")]);
    m_fki_font_id_isSet = !json[QString("fkiFontID")].isNull() && m_fki_font_id_isValid;

    m_b_textstylestatic_bold_isValid = ::OpenAPI::fromJsonValue(m_b_textstylestatic_bold, json[QString("bTextstylestaticBold")]);
    m_b_textstylestatic_bold_isSet = !json[QString("bTextstylestaticBold")].isNull() && m_b_textstylestatic_bold_isValid;

    m_b_textstylestatic_underline_isValid = ::OpenAPI::fromJsonValue(m_b_textstylestatic_underline, json[QString("bTextstylestaticUnderline")]);
    m_b_textstylestatic_underline_isSet = !json[QString("bTextstylestaticUnderline")].isNull() && m_b_textstylestatic_underline_isValid;

    m_b_textstylestatic_italic_isValid = ::OpenAPI::fromJsonValue(m_b_textstylestatic_italic, json[QString("bTextstylestaticItalic")]);
    m_b_textstylestatic_italic_isSet = !json[QString("bTextstylestaticItalic")].isNull() && m_b_textstylestatic_italic_isValid;

    m_b_textstylestatic_strikethrough_isValid = ::OpenAPI::fromJsonValue(m_b_textstylestatic_strikethrough, json[QString("bTextstylestaticStrikethrough")]);
    m_b_textstylestatic_strikethrough_isSet = !json[QString("bTextstylestaticStrikethrough")].isNull() && m_b_textstylestatic_strikethrough_isValid;

    m_i_textstylestatic_fontcolor_isValid = ::OpenAPI::fromJsonValue(m_i_textstylestatic_fontcolor, json[QString("iTextstylestaticFontcolor")]);
    m_i_textstylestatic_fontcolor_isSet = !json[QString("iTextstylestaticFontcolor")].isNull() && m_i_textstylestatic_fontcolor_isValid;

    m_i_textstylestatic_size_isValid = ::OpenAPI::fromJsonValue(m_i_textstylestatic_size, json[QString("iTextstylestaticSize")]);
    m_i_textstylestatic_size_isSet = !json[QString("iTextstylestaticSize")].isNull() && m_i_textstylestatic_size_isValid;
}

QString OAITextstylestatic_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITextstylestatic_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_textstylestatic_id_isSet) {
        obj.insert(QString("pkiTextstylestaticID"), ::OpenAPI::toJsonValue(m_pki_textstylestatic_id));
    }
    if (m_fki_font_id_isSet) {
        obj.insert(QString("fkiFontID"), ::OpenAPI::toJsonValue(m_fki_font_id));
    }
    if (m_b_textstylestatic_bold_isSet) {
        obj.insert(QString("bTextstylestaticBold"), ::OpenAPI::toJsonValue(m_b_textstylestatic_bold));
    }
    if (m_b_textstylestatic_underline_isSet) {
        obj.insert(QString("bTextstylestaticUnderline"), ::OpenAPI::toJsonValue(m_b_textstylestatic_underline));
    }
    if (m_b_textstylestatic_italic_isSet) {
        obj.insert(QString("bTextstylestaticItalic"), ::OpenAPI::toJsonValue(m_b_textstylestatic_italic));
    }
    if (m_b_textstylestatic_strikethrough_isSet) {
        obj.insert(QString("bTextstylestaticStrikethrough"), ::OpenAPI::toJsonValue(m_b_textstylestatic_strikethrough));
    }
    if (m_i_textstylestatic_fontcolor_isSet) {
        obj.insert(QString("iTextstylestaticFontcolor"), ::OpenAPI::toJsonValue(m_i_textstylestatic_fontcolor));
    }
    if (m_i_textstylestatic_size_isSet) {
        obj.insert(QString("iTextstylestaticSize"), ::OpenAPI::toJsonValue(m_i_textstylestatic_size));
    }
    return obj;
}

qint32 OAITextstylestatic_ResponseCompound::getPkiTextstylestaticId() const {
    return m_pki_textstylestatic_id;
}
void OAITextstylestatic_ResponseCompound::setPkiTextstylestaticId(const qint32 &pki_textstylestatic_id) {
    m_pki_textstylestatic_id = pki_textstylestatic_id;
    m_pki_textstylestatic_id_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_pki_textstylestatic_id_Set() const{
    return m_pki_textstylestatic_id_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_pki_textstylestatic_id_Valid() const{
    return m_pki_textstylestatic_id_isValid;
}

qint32 OAITextstylestatic_ResponseCompound::getFkiFontId() const {
    return m_fki_font_id;
}
void OAITextstylestatic_ResponseCompound::setFkiFontId(const qint32 &fki_font_id) {
    m_fki_font_id = fki_font_id;
    m_fki_font_id_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_fki_font_id_Set() const{
    return m_fki_font_id_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_fki_font_id_Valid() const{
    return m_fki_font_id_isValid;
}

bool OAITextstylestatic_ResponseCompound::isBTextstylestaticBold() const {
    return m_b_textstylestatic_bold;
}
void OAITextstylestatic_ResponseCompound::setBTextstylestaticBold(const bool &b_textstylestatic_bold) {
    m_b_textstylestatic_bold = b_textstylestatic_bold;
    m_b_textstylestatic_bold_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_bold_Set() const{
    return m_b_textstylestatic_bold_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_bold_Valid() const{
    return m_b_textstylestatic_bold_isValid;
}

bool OAITextstylestatic_ResponseCompound::isBTextstylestaticUnderline() const {
    return m_b_textstylestatic_underline;
}
void OAITextstylestatic_ResponseCompound::setBTextstylestaticUnderline(const bool &b_textstylestatic_underline) {
    m_b_textstylestatic_underline = b_textstylestatic_underline;
    m_b_textstylestatic_underline_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_underline_Set() const{
    return m_b_textstylestatic_underline_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_underline_Valid() const{
    return m_b_textstylestatic_underline_isValid;
}

bool OAITextstylestatic_ResponseCompound::isBTextstylestaticItalic() const {
    return m_b_textstylestatic_italic;
}
void OAITextstylestatic_ResponseCompound::setBTextstylestaticItalic(const bool &b_textstylestatic_italic) {
    m_b_textstylestatic_italic = b_textstylestatic_italic;
    m_b_textstylestatic_italic_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_italic_Set() const{
    return m_b_textstylestatic_italic_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_italic_Valid() const{
    return m_b_textstylestatic_italic_isValid;
}

bool OAITextstylestatic_ResponseCompound::isBTextstylestaticStrikethrough() const {
    return m_b_textstylestatic_strikethrough;
}
void OAITextstylestatic_ResponseCompound::setBTextstylestaticStrikethrough(const bool &b_textstylestatic_strikethrough) {
    m_b_textstylestatic_strikethrough = b_textstylestatic_strikethrough;
    m_b_textstylestatic_strikethrough_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_strikethrough_Set() const{
    return m_b_textstylestatic_strikethrough_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_b_textstylestatic_strikethrough_Valid() const{
    return m_b_textstylestatic_strikethrough_isValid;
}

qint32 OAITextstylestatic_ResponseCompound::getITextstylestaticFontcolor() const {
    return m_i_textstylestatic_fontcolor;
}
void OAITextstylestatic_ResponseCompound::setITextstylestaticFontcolor(const qint32 &i_textstylestatic_fontcolor) {
    m_i_textstylestatic_fontcolor = i_textstylestatic_fontcolor;
    m_i_textstylestatic_fontcolor_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_i_textstylestatic_fontcolor_Set() const{
    return m_i_textstylestatic_fontcolor_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_i_textstylestatic_fontcolor_Valid() const{
    return m_i_textstylestatic_fontcolor_isValid;
}

qint32 OAITextstylestatic_ResponseCompound::getITextstylestaticSize() const {
    return m_i_textstylestatic_size;
}
void OAITextstylestatic_ResponseCompound::setITextstylestaticSize(const qint32 &i_textstylestatic_size) {
    m_i_textstylestatic_size = i_textstylestatic_size;
    m_i_textstylestatic_size_isSet = true;
}

bool OAITextstylestatic_ResponseCompound::is_i_textstylestatic_size_Set() const{
    return m_i_textstylestatic_size_isSet;
}

bool OAITextstylestatic_ResponseCompound::is_i_textstylestatic_size_Valid() const{
    return m_i_textstylestatic_size_isValid;
}

bool OAITextstylestatic_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_textstylestatic_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_font_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_textstylestatic_bold_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_textstylestatic_underline_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_textstylestatic_italic_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_textstylestatic_strikethrough_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_textstylestatic_fontcolor_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_textstylestatic_size_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITextstylestatic_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_font_id_isValid && m_b_textstylestatic_bold_isValid && m_b_textstylestatic_underline_isValid && m_b_textstylestatic_italic_isValid && m_b_textstylestatic_strikethrough_isValid && m_i_textstylestatic_fontcolor_isValid && m_i_textstylestatic_size_isValid && true;
}

} // namespace OpenAPI
