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

#include "OAIBranding_ListElement.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_ListElement::OAIBranding_ListElement(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_ListElement::OAIBranding_ListElement() {
    this->initializeModel();
}

OAIBranding_ListElement::~OAIBranding_ListElement() {}

void OAIBranding_ListElement::initializeModel() {

    m_pki_branding_id_isSet = false;
    m_pki_branding_id_isValid = false;

    m_s_branding_description_x_isSet = false;
    m_s_branding_description_x_isValid = false;

    m_i_branding_colortext_isSet = false;
    m_i_branding_colortext_isValid = false;

    m_i_branding_colortextlinkbox_isSet = false;
    m_i_branding_colortextlinkbox_isValid = false;

    m_i_branding_colortextbutton_isSet = false;
    m_i_branding_colortextbutton_isValid = false;

    m_i_branding_colorbackground_isSet = false;
    m_i_branding_colorbackground_isValid = false;

    m_i_branding_colorbackgroundbutton_isSet = false;
    m_i_branding_colorbackgroundbutton_isValid = false;

    m_i_branding_colorbackgroundsmallbox_isSet = false;
    m_i_branding_colorbackgroundsmallbox_isValid = false;

    m_b_branding_isactive_isSet = false;
    m_b_branding_isactive_isValid = false;
}

void OAIBranding_ListElement::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_ListElement::fromJsonObject(QJsonObject json) {

    m_pki_branding_id_isValid = ::OpenAPI::fromJsonValue(pki_branding_id, json[QString("pkiBrandingID")]);
    m_pki_branding_id_isSet = !json[QString("pkiBrandingID")].isNull() && m_pki_branding_id_isValid;

    m_s_branding_description_x_isValid = ::OpenAPI::fromJsonValue(s_branding_description_x, json[QString("sBrandingDescriptionX")]);
    m_s_branding_description_x_isSet = !json[QString("sBrandingDescriptionX")].isNull() && m_s_branding_description_x_isValid;

    m_i_branding_colortext_isValid = ::OpenAPI::fromJsonValue(i_branding_colortext, json[QString("iBrandingColortext")]);
    m_i_branding_colortext_isSet = !json[QString("iBrandingColortext")].isNull() && m_i_branding_colortext_isValid;

    m_i_branding_colortextlinkbox_isValid = ::OpenAPI::fromJsonValue(i_branding_colortextlinkbox, json[QString("iBrandingColortextlinkbox")]);
    m_i_branding_colortextlinkbox_isSet = !json[QString("iBrandingColortextlinkbox")].isNull() && m_i_branding_colortextlinkbox_isValid;

    m_i_branding_colortextbutton_isValid = ::OpenAPI::fromJsonValue(i_branding_colortextbutton, json[QString("iBrandingColortextbutton")]);
    m_i_branding_colortextbutton_isSet = !json[QString("iBrandingColortextbutton")].isNull() && m_i_branding_colortextbutton_isValid;

    m_i_branding_colorbackground_isValid = ::OpenAPI::fromJsonValue(i_branding_colorbackground, json[QString("iBrandingColorbackground")]);
    m_i_branding_colorbackground_isSet = !json[QString("iBrandingColorbackground")].isNull() && m_i_branding_colorbackground_isValid;

    m_i_branding_colorbackgroundbutton_isValid = ::OpenAPI::fromJsonValue(i_branding_colorbackgroundbutton, json[QString("iBrandingColorbackgroundbutton")]);
    m_i_branding_colorbackgroundbutton_isSet = !json[QString("iBrandingColorbackgroundbutton")].isNull() && m_i_branding_colorbackgroundbutton_isValid;

    m_i_branding_colorbackgroundsmallbox_isValid = ::OpenAPI::fromJsonValue(i_branding_colorbackgroundsmallbox, json[QString("iBrandingColorbackgroundsmallbox")]);
    m_i_branding_colorbackgroundsmallbox_isSet = !json[QString("iBrandingColorbackgroundsmallbox")].isNull() && m_i_branding_colorbackgroundsmallbox_isValid;

    m_b_branding_isactive_isValid = ::OpenAPI::fromJsonValue(b_branding_isactive, json[QString("bBrandingIsactive")]);
    m_b_branding_isactive_isSet = !json[QString("bBrandingIsactive")].isNull() && m_b_branding_isactive_isValid;
}

QString OAIBranding_ListElement::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_ListElement::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_branding_id_isSet) {
        obj.insert(QString("pkiBrandingID"), ::OpenAPI::toJsonValue(pki_branding_id));
    }
    if (m_s_branding_description_x_isSet) {
        obj.insert(QString("sBrandingDescriptionX"), ::OpenAPI::toJsonValue(s_branding_description_x));
    }
    if (m_i_branding_colortext_isSet) {
        obj.insert(QString("iBrandingColortext"), ::OpenAPI::toJsonValue(i_branding_colortext));
    }
    if (m_i_branding_colortextlinkbox_isSet) {
        obj.insert(QString("iBrandingColortextlinkbox"), ::OpenAPI::toJsonValue(i_branding_colortextlinkbox));
    }
    if (m_i_branding_colortextbutton_isSet) {
        obj.insert(QString("iBrandingColortextbutton"), ::OpenAPI::toJsonValue(i_branding_colortextbutton));
    }
    if (m_i_branding_colorbackground_isSet) {
        obj.insert(QString("iBrandingColorbackground"), ::OpenAPI::toJsonValue(i_branding_colorbackground));
    }
    if (m_i_branding_colorbackgroundbutton_isSet) {
        obj.insert(QString("iBrandingColorbackgroundbutton"), ::OpenAPI::toJsonValue(i_branding_colorbackgroundbutton));
    }
    if (m_i_branding_colorbackgroundsmallbox_isSet) {
        obj.insert(QString("iBrandingColorbackgroundsmallbox"), ::OpenAPI::toJsonValue(i_branding_colorbackgroundsmallbox));
    }
    if (m_b_branding_isactive_isSet) {
        obj.insert(QString("bBrandingIsactive"), ::OpenAPI::toJsonValue(b_branding_isactive));
    }
    return obj;
}

qint32 OAIBranding_ListElement::getPkiBrandingId() const {
    return pki_branding_id;
}
void OAIBranding_ListElement::setPkiBrandingId(const qint32 &pki_branding_id) {
    this->pki_branding_id = pki_branding_id;
    this->m_pki_branding_id_isSet = true;
}

bool OAIBranding_ListElement::is_pki_branding_id_Set() const{
    return m_pki_branding_id_isSet;
}

bool OAIBranding_ListElement::is_pki_branding_id_Valid() const{
    return m_pki_branding_id_isValid;
}

QString OAIBranding_ListElement::getSBrandingDescriptionX() const {
    return s_branding_description_x;
}
void OAIBranding_ListElement::setSBrandingDescriptionX(const QString &s_branding_description_x) {
    this->s_branding_description_x = s_branding_description_x;
    this->m_s_branding_description_x_isSet = true;
}

bool OAIBranding_ListElement::is_s_branding_description_x_Set() const{
    return m_s_branding_description_x_isSet;
}

bool OAIBranding_ListElement::is_s_branding_description_x_Valid() const{
    return m_s_branding_description_x_isValid;
}

qint32 OAIBranding_ListElement::getIBrandingColortext() const {
    return i_branding_colortext;
}
void OAIBranding_ListElement::setIBrandingColortext(const qint32 &i_branding_colortext) {
    this->i_branding_colortext = i_branding_colortext;
    this->m_i_branding_colortext_isSet = true;
}

bool OAIBranding_ListElement::is_i_branding_colortext_Set() const{
    return m_i_branding_colortext_isSet;
}

bool OAIBranding_ListElement::is_i_branding_colortext_Valid() const{
    return m_i_branding_colortext_isValid;
}

qint32 OAIBranding_ListElement::getIBrandingColortextlinkbox() const {
    return i_branding_colortextlinkbox;
}
void OAIBranding_ListElement::setIBrandingColortextlinkbox(const qint32 &i_branding_colortextlinkbox) {
    this->i_branding_colortextlinkbox = i_branding_colortextlinkbox;
    this->m_i_branding_colortextlinkbox_isSet = true;
}

bool OAIBranding_ListElement::is_i_branding_colortextlinkbox_Set() const{
    return m_i_branding_colortextlinkbox_isSet;
}

bool OAIBranding_ListElement::is_i_branding_colortextlinkbox_Valid() const{
    return m_i_branding_colortextlinkbox_isValid;
}

qint32 OAIBranding_ListElement::getIBrandingColortextbutton() const {
    return i_branding_colortextbutton;
}
void OAIBranding_ListElement::setIBrandingColortextbutton(const qint32 &i_branding_colortextbutton) {
    this->i_branding_colortextbutton = i_branding_colortextbutton;
    this->m_i_branding_colortextbutton_isSet = true;
}

bool OAIBranding_ListElement::is_i_branding_colortextbutton_Set() const{
    return m_i_branding_colortextbutton_isSet;
}

bool OAIBranding_ListElement::is_i_branding_colortextbutton_Valid() const{
    return m_i_branding_colortextbutton_isValid;
}

qint32 OAIBranding_ListElement::getIBrandingColorbackground() const {
    return i_branding_colorbackground;
}
void OAIBranding_ListElement::setIBrandingColorbackground(const qint32 &i_branding_colorbackground) {
    this->i_branding_colorbackground = i_branding_colorbackground;
    this->m_i_branding_colorbackground_isSet = true;
}

bool OAIBranding_ListElement::is_i_branding_colorbackground_Set() const{
    return m_i_branding_colorbackground_isSet;
}

bool OAIBranding_ListElement::is_i_branding_colorbackground_Valid() const{
    return m_i_branding_colorbackground_isValid;
}

qint32 OAIBranding_ListElement::getIBrandingColorbackgroundbutton() const {
    return i_branding_colorbackgroundbutton;
}
void OAIBranding_ListElement::setIBrandingColorbackgroundbutton(const qint32 &i_branding_colorbackgroundbutton) {
    this->i_branding_colorbackgroundbutton = i_branding_colorbackgroundbutton;
    this->m_i_branding_colorbackgroundbutton_isSet = true;
}

bool OAIBranding_ListElement::is_i_branding_colorbackgroundbutton_Set() const{
    return m_i_branding_colorbackgroundbutton_isSet;
}

bool OAIBranding_ListElement::is_i_branding_colorbackgroundbutton_Valid() const{
    return m_i_branding_colorbackgroundbutton_isValid;
}

qint32 OAIBranding_ListElement::getIBrandingColorbackgroundsmallbox() const {
    return i_branding_colorbackgroundsmallbox;
}
void OAIBranding_ListElement::setIBrandingColorbackgroundsmallbox(const qint32 &i_branding_colorbackgroundsmallbox) {
    this->i_branding_colorbackgroundsmallbox = i_branding_colorbackgroundsmallbox;
    this->m_i_branding_colorbackgroundsmallbox_isSet = true;
}

bool OAIBranding_ListElement::is_i_branding_colorbackgroundsmallbox_Set() const{
    return m_i_branding_colorbackgroundsmallbox_isSet;
}

bool OAIBranding_ListElement::is_i_branding_colorbackgroundsmallbox_Valid() const{
    return m_i_branding_colorbackgroundsmallbox_isValid;
}

bool OAIBranding_ListElement::isBBrandingIsactive() const {
    return b_branding_isactive;
}
void OAIBranding_ListElement::setBBrandingIsactive(const bool &b_branding_isactive) {
    this->b_branding_isactive = b_branding_isactive;
    this->m_b_branding_isactive_isSet = true;
}

bool OAIBranding_ListElement::is_b_branding_isactive_Set() const{
    return m_b_branding_isactive_isSet;
}

bool OAIBranding_ListElement::is_b_branding_isactive_Valid() const{
    return m_b_branding_isactive_isValid;
}

bool OAIBranding_ListElement::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_branding_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_branding_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colortext_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colortextlinkbox_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colortextbutton_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colorbackground_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colorbackgroundbutton_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_branding_colorbackgroundsmallbox_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_branding_isactive_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_ListElement::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_branding_id_isValid && m_s_branding_description_x_isValid && m_i_branding_colortext_isValid && m_i_branding_colortextlinkbox_isValid && m_i_branding_colortextbutton_isValid && m_i_branding_colorbackground_isValid && m_i_branding_colorbackgroundbutton_isValid && m_i_branding_colorbackgroundsmallbox_isValid && m_b_branding_isactive_isValid && true;
}

} // namespace OpenAPI
