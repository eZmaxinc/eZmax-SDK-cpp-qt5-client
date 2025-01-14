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

#include "Signature_ResponseCompoundV3.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Signature_ResponseCompoundV3::Signature_ResponseCompoundV3(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Signature_ResponseCompoundV3::Signature_ResponseCompoundV3() {
    this->initializeModel();
}

Signature_ResponseCompoundV3::~Signature_ResponseCompoundV3() {}

void Signature_ResponseCompoundV3::initializeModel() {

    m_pki_signature_id_isSet = false;
    m_pki_signature_id_isValid = false;

    m_fki_font_id_isSet = false;
    m_fki_font_id_isValid = false;

    m_e_signature_preference_isSet = false;
    m_e_signature_preference_isValid = false;

    m_b_signature_svg_isSet = false;
    m_b_signature_svg_isValid = false;

    m_b_signature_svginitials_isSet = false;
    m_b_signature_svginitials_isValid = false;
}

void Signature_ResponseCompoundV3::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Signature_ResponseCompoundV3::fromJsonObject(QJsonObject json) {

    m_pki_signature_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_signature_id, json[QString("pkiSignatureID")]);
    m_pki_signature_id_isSet = !json[QString("pkiSignatureID")].isNull() && m_pki_signature_id_isValid;

    m_fki_font_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_font_id, json[QString("fkiFontID")]);
    m_fki_font_id_isSet = !json[QString("fkiFontID")].isNull() && m_fki_font_id_isValid;

    m_e_signature_preference_isValid = ::Ezmaxapi::fromJsonValue(m_e_signature_preference, json[QString("eSignaturePreference")]);
    m_e_signature_preference_isSet = !json[QString("eSignaturePreference")].isNull() && m_e_signature_preference_isValid;

    m_b_signature_svg_isValid = ::Ezmaxapi::fromJsonValue(m_b_signature_svg, json[QString("bSignatureSvg")]);
    m_b_signature_svg_isSet = !json[QString("bSignatureSvg")].isNull() && m_b_signature_svg_isValid;

    m_b_signature_svginitials_isValid = ::Ezmaxapi::fromJsonValue(m_b_signature_svginitials, json[QString("bSignatureSvginitials")]);
    m_b_signature_svginitials_isSet = !json[QString("bSignatureSvginitials")].isNull() && m_b_signature_svginitials_isValid;
}

QString Signature_ResponseCompoundV3::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Signature_ResponseCompoundV3::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_signature_id_isSet) {
        obj.insert(QString("pkiSignatureID"), ::Ezmaxapi::toJsonValue(m_pki_signature_id));
    }
    if (m_fki_font_id_isSet) {
        obj.insert(QString("fkiFontID"), ::Ezmaxapi::toJsonValue(m_fki_font_id));
    }
    if (m_e_signature_preference.isSet()) {
        obj.insert(QString("eSignaturePreference"), ::Ezmaxapi::toJsonValue(m_e_signature_preference));
    }
    if (m_b_signature_svg_isSet) {
        obj.insert(QString("bSignatureSvg"), ::Ezmaxapi::toJsonValue(m_b_signature_svg));
    }
    if (m_b_signature_svginitials_isSet) {
        obj.insert(QString("bSignatureSvginitials"), ::Ezmaxapi::toJsonValue(m_b_signature_svginitials));
    }
    return obj;
}

qint32 Signature_ResponseCompoundV3::getPkiSignatureId() const {
    return m_pki_signature_id;
}
void Signature_ResponseCompoundV3::setPkiSignatureId(const qint32 &pki_signature_id) {
    m_pki_signature_id = pki_signature_id;
    m_pki_signature_id_isSet = true;
}

bool Signature_ResponseCompoundV3::is_pki_signature_id_Set() const{
    return m_pki_signature_id_isSet;
}

bool Signature_ResponseCompoundV3::is_pki_signature_id_Valid() const{
    return m_pki_signature_id_isValid;
}

qint32 Signature_ResponseCompoundV3::getFkiFontId() const {
    return m_fki_font_id;
}
void Signature_ResponseCompoundV3::setFkiFontId(const qint32 &fki_font_id) {
    m_fki_font_id = fki_font_id;
    m_fki_font_id_isSet = true;
}

bool Signature_ResponseCompoundV3::is_fki_font_id_Set() const{
    return m_fki_font_id_isSet;
}

bool Signature_ResponseCompoundV3::is_fki_font_id_Valid() const{
    return m_fki_font_id_isValid;
}

Field_eSignaturePreference Signature_ResponseCompoundV3::getESignaturePreference() const {
    return m_e_signature_preference;
}
void Signature_ResponseCompoundV3::setESignaturePreference(const Field_eSignaturePreference &e_signature_preference) {
    m_e_signature_preference = e_signature_preference;
    m_e_signature_preference_isSet = true;
}

bool Signature_ResponseCompoundV3::is_e_signature_preference_Set() const{
    return m_e_signature_preference_isSet;
}

bool Signature_ResponseCompoundV3::is_e_signature_preference_Valid() const{
    return m_e_signature_preference_isValid;
}

bool Signature_ResponseCompoundV3::isBSignatureSvg() const {
    return m_b_signature_svg;
}
void Signature_ResponseCompoundV3::setBSignatureSvg(const bool &b_signature_svg) {
    m_b_signature_svg = b_signature_svg;
    m_b_signature_svg_isSet = true;
}

bool Signature_ResponseCompoundV3::is_b_signature_svg_Set() const{
    return m_b_signature_svg_isSet;
}

bool Signature_ResponseCompoundV3::is_b_signature_svg_Valid() const{
    return m_b_signature_svg_isValid;
}

bool Signature_ResponseCompoundV3::isBSignatureSvginitials() const {
    return m_b_signature_svginitials;
}
void Signature_ResponseCompoundV3::setBSignatureSvginitials(const bool &b_signature_svginitials) {
    m_b_signature_svginitials = b_signature_svginitials;
    m_b_signature_svginitials_isSet = true;
}

bool Signature_ResponseCompoundV3::is_b_signature_svginitials_Set() const{
    return m_b_signature_svginitials_isSet;
}

bool Signature_ResponseCompoundV3::is_b_signature_svginitials_Valid() const{
    return m_b_signature_svginitials_isValid;
}

bool Signature_ResponseCompoundV3::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_signature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_font_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_signature_preference.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_signature_svg_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_signature_svginitials_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Signature_ResponseCompoundV3::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_signature_id_isValid && m_fki_font_id_isValid && m_e_signature_preference_isValid && m_b_signature_svg_isValid && m_b_signature_svginitials_isValid && true;
}

} // namespace Ezmaxapi
