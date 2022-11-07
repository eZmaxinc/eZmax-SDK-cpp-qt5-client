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

#include "OAIBranding_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIBranding_ResponseCompound::OAIBranding_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBranding_ResponseCompound::OAIBranding_ResponseCompound() {
    this->initializeModel();
}

OAIBranding_ResponseCompound::~OAIBranding_ResponseCompound() {}

void OAIBranding_ResponseCompound::initializeModel() {

    m_pki_branding_id_isSet = false;
    m_pki_branding_id_isValid = false;

    m_obj_branding_description_isSet = false;
    m_obj_branding_description_isValid = false;

    m_s_branding_description_x_isSet = false;
    m_s_branding_description_x_isValid = false;

    m_e_branding_logo_isSet = false;
    m_e_branding_logo_isValid = false;

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

    m_s_branding_logourl_isSet = false;
    m_s_branding_logourl_isValid = false;
}

void OAIBranding_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBranding_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_branding_id_isValid = ::OpenAPI::fromJsonValue(pki_branding_id, json[QString("pkiBrandingID")]);
    m_pki_branding_id_isSet = !json[QString("pkiBrandingID")].isNull() && m_pki_branding_id_isValid;

    m_obj_branding_description_isValid = ::OpenAPI::fromJsonValue(obj_branding_description, json[QString("objBrandingDescription")]);
    m_obj_branding_description_isSet = !json[QString("objBrandingDescription")].isNull() && m_obj_branding_description_isValid;

    m_s_branding_description_x_isValid = ::OpenAPI::fromJsonValue(s_branding_description_x, json[QString("sBrandingDescriptionX")]);
    m_s_branding_description_x_isSet = !json[QString("sBrandingDescriptionX")].isNull() && m_s_branding_description_x_isValid;

    m_e_branding_logo_isValid = ::OpenAPI::fromJsonValue(e_branding_logo, json[QString("eBrandingLogo")]);
    m_e_branding_logo_isSet = !json[QString("eBrandingLogo")].isNull() && m_e_branding_logo_isValid;

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

    m_s_branding_logourl_isValid = ::OpenAPI::fromJsonValue(s_branding_logourl, json[QString("sBrandingLogourl")]);
    m_s_branding_logourl_isSet = !json[QString("sBrandingLogourl")].isNull() && m_s_branding_logourl_isValid;
}

QString OAIBranding_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBranding_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_branding_id_isSet) {
        obj.insert(QString("pkiBrandingID"), ::OpenAPI::toJsonValue(pki_branding_id));
    }
    if (obj_branding_description.isSet()) {
        obj.insert(QString("objBrandingDescription"), ::OpenAPI::toJsonValue(obj_branding_description));
    }
    if (m_s_branding_description_x_isSet) {
        obj.insert(QString("sBrandingDescriptionX"), ::OpenAPI::toJsonValue(s_branding_description_x));
    }
    if (e_branding_logo.isSet()) {
        obj.insert(QString("eBrandingLogo"), ::OpenAPI::toJsonValue(e_branding_logo));
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
    if (m_s_branding_logourl_isSet) {
        obj.insert(QString("sBrandingLogourl"), ::OpenAPI::toJsonValue(s_branding_logourl));
    }
    return obj;
}

qint32 OAIBranding_ResponseCompound::getPkiBrandingId() const {
    return pki_branding_id;
}
void OAIBranding_ResponseCompound::setPkiBrandingId(const qint32 &pki_branding_id) {
    this->pki_branding_id = pki_branding_id;
    this->m_pki_branding_id_isSet = true;
}

bool OAIBranding_ResponseCompound::is_pki_branding_id_Set() const{
    return m_pki_branding_id_isSet;
}

bool OAIBranding_ResponseCompound::is_pki_branding_id_Valid() const{
    return m_pki_branding_id_isValid;
}

OAIMultilingual_BrandingDescription OAIBranding_ResponseCompound::getObjBrandingDescription() const {
    return obj_branding_description;
}
void OAIBranding_ResponseCompound::setObjBrandingDescription(const OAIMultilingual_BrandingDescription &obj_branding_description) {
    this->obj_branding_description = obj_branding_description;
    this->m_obj_branding_description_isSet = true;
}

bool OAIBranding_ResponseCompound::is_obj_branding_description_Set() const{
    return m_obj_branding_description_isSet;
}

bool OAIBranding_ResponseCompound::is_obj_branding_description_Valid() const{
    return m_obj_branding_description_isValid;
}

QString OAIBranding_ResponseCompound::getSBrandingDescriptionX() const {
    return s_branding_description_x;
}
void OAIBranding_ResponseCompound::setSBrandingDescriptionX(const QString &s_branding_description_x) {
    this->s_branding_description_x = s_branding_description_x;
    this->m_s_branding_description_x_isSet = true;
}

bool OAIBranding_ResponseCompound::is_s_branding_description_x_Set() const{
    return m_s_branding_description_x_isSet;
}

bool OAIBranding_ResponseCompound::is_s_branding_description_x_Valid() const{
    return m_s_branding_description_x_isValid;
}

OAIField_eBrandingLogo OAIBranding_ResponseCompound::getEBrandingLogo() const {
    return e_branding_logo;
}
void OAIBranding_ResponseCompound::setEBrandingLogo(const OAIField_eBrandingLogo &e_branding_logo) {
    this->e_branding_logo = e_branding_logo;
    this->m_e_branding_logo_isSet = true;
}

bool OAIBranding_ResponseCompound::is_e_branding_logo_Set() const{
    return m_e_branding_logo_isSet;
}

bool OAIBranding_ResponseCompound::is_e_branding_logo_Valid() const{
    return m_e_branding_logo_isValid;
}

qint32 OAIBranding_ResponseCompound::getIBrandingColortext() const {
    return i_branding_colortext;
}
void OAIBranding_ResponseCompound::setIBrandingColortext(const qint32 &i_branding_colortext) {
    this->i_branding_colortext = i_branding_colortext;
    this->m_i_branding_colortext_isSet = true;
}

bool OAIBranding_ResponseCompound::is_i_branding_colortext_Set() const{
    return m_i_branding_colortext_isSet;
}

bool OAIBranding_ResponseCompound::is_i_branding_colortext_Valid() const{
    return m_i_branding_colortext_isValid;
}

qint32 OAIBranding_ResponseCompound::getIBrandingColortextlinkbox() const {
    return i_branding_colortextlinkbox;
}
void OAIBranding_ResponseCompound::setIBrandingColortextlinkbox(const qint32 &i_branding_colortextlinkbox) {
    this->i_branding_colortextlinkbox = i_branding_colortextlinkbox;
    this->m_i_branding_colortextlinkbox_isSet = true;
}

bool OAIBranding_ResponseCompound::is_i_branding_colortextlinkbox_Set() const{
    return m_i_branding_colortextlinkbox_isSet;
}

bool OAIBranding_ResponseCompound::is_i_branding_colortextlinkbox_Valid() const{
    return m_i_branding_colortextlinkbox_isValid;
}

qint32 OAIBranding_ResponseCompound::getIBrandingColortextbutton() const {
    return i_branding_colortextbutton;
}
void OAIBranding_ResponseCompound::setIBrandingColortextbutton(const qint32 &i_branding_colortextbutton) {
    this->i_branding_colortextbutton = i_branding_colortextbutton;
    this->m_i_branding_colortextbutton_isSet = true;
}

bool OAIBranding_ResponseCompound::is_i_branding_colortextbutton_Set() const{
    return m_i_branding_colortextbutton_isSet;
}

bool OAIBranding_ResponseCompound::is_i_branding_colortextbutton_Valid() const{
    return m_i_branding_colortextbutton_isValid;
}

qint32 OAIBranding_ResponseCompound::getIBrandingColorbackground() const {
    return i_branding_colorbackground;
}
void OAIBranding_ResponseCompound::setIBrandingColorbackground(const qint32 &i_branding_colorbackground) {
    this->i_branding_colorbackground = i_branding_colorbackground;
    this->m_i_branding_colorbackground_isSet = true;
}

bool OAIBranding_ResponseCompound::is_i_branding_colorbackground_Set() const{
    return m_i_branding_colorbackground_isSet;
}

bool OAIBranding_ResponseCompound::is_i_branding_colorbackground_Valid() const{
    return m_i_branding_colorbackground_isValid;
}

qint32 OAIBranding_ResponseCompound::getIBrandingColorbackgroundbutton() const {
    return i_branding_colorbackgroundbutton;
}
void OAIBranding_ResponseCompound::setIBrandingColorbackgroundbutton(const qint32 &i_branding_colorbackgroundbutton) {
    this->i_branding_colorbackgroundbutton = i_branding_colorbackgroundbutton;
    this->m_i_branding_colorbackgroundbutton_isSet = true;
}

bool OAIBranding_ResponseCompound::is_i_branding_colorbackgroundbutton_Set() const{
    return m_i_branding_colorbackgroundbutton_isSet;
}

bool OAIBranding_ResponseCompound::is_i_branding_colorbackgroundbutton_Valid() const{
    return m_i_branding_colorbackgroundbutton_isValid;
}

qint32 OAIBranding_ResponseCompound::getIBrandingColorbackgroundsmallbox() const {
    return i_branding_colorbackgroundsmallbox;
}
void OAIBranding_ResponseCompound::setIBrandingColorbackgroundsmallbox(const qint32 &i_branding_colorbackgroundsmallbox) {
    this->i_branding_colorbackgroundsmallbox = i_branding_colorbackgroundsmallbox;
    this->m_i_branding_colorbackgroundsmallbox_isSet = true;
}

bool OAIBranding_ResponseCompound::is_i_branding_colorbackgroundsmallbox_Set() const{
    return m_i_branding_colorbackgroundsmallbox_isSet;
}

bool OAIBranding_ResponseCompound::is_i_branding_colorbackgroundsmallbox_Valid() const{
    return m_i_branding_colorbackgroundsmallbox_isValid;
}

bool OAIBranding_ResponseCompound::isBBrandingIsactive() const {
    return b_branding_isactive;
}
void OAIBranding_ResponseCompound::setBBrandingIsactive(const bool &b_branding_isactive) {
    this->b_branding_isactive = b_branding_isactive;
    this->m_b_branding_isactive_isSet = true;
}

bool OAIBranding_ResponseCompound::is_b_branding_isactive_Set() const{
    return m_b_branding_isactive_isSet;
}

bool OAIBranding_ResponseCompound::is_b_branding_isactive_Valid() const{
    return m_b_branding_isactive_isValid;
}

QString OAIBranding_ResponseCompound::getSBrandingLogourl() const {
    return s_branding_logourl;
}
void OAIBranding_ResponseCompound::setSBrandingLogourl(const QString &s_branding_logourl) {
    this->s_branding_logourl = s_branding_logourl;
    this->m_s_branding_logourl_isSet = true;
}

bool OAIBranding_ResponseCompound::is_s_branding_logourl_Set() const{
    return m_s_branding_logourl_isSet;
}

bool OAIBranding_ResponseCompound::is_s_branding_logourl_Valid() const{
    return m_s_branding_logourl_isValid;
}

bool OAIBranding_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_branding_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_branding_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_branding_description_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_branding_logo.isSet()) {
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

        if (m_s_branding_logourl_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBranding_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_branding_id_isValid && m_obj_branding_description_isValid && m_s_branding_description_x_isValid && m_e_branding_logo_isValid && m_i_branding_colortext_isValid && m_i_branding_colortextlinkbox_isValid && m_i_branding_colortextbutton_isValid && m_i_branding_colorbackground_isValid && m_i_branding_colorbackgroundbutton_isValid && m_i_branding_colorbackgroundsmallbox_isValid && m_b_branding_isactive_isValid && true;
}

} // namespace OpenAPI
