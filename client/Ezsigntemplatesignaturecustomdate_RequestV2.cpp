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

#include "Ezsigntemplatesignaturecustomdate_RequestV2.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigntemplatesignaturecustomdate_RequestV2::Ezsigntemplatesignaturecustomdate_RequestV2(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigntemplatesignaturecustomdate_RequestV2::Ezsigntemplatesignaturecustomdate_RequestV2() {
    this->initializeModel();
}

Ezsigntemplatesignaturecustomdate_RequestV2::~Ezsigntemplatesignaturecustomdate_RequestV2() {}

void Ezsigntemplatesignaturecustomdate_RequestV2::initializeModel() {

    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = false;
    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_offsety_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_offsety_isValid = false;

    m_s_ezsigntemplatesignaturecustomdate_format_isSet = false;
    m_s_ezsigntemplatesignaturecustomdate_format_isValid = false;
}

void Ezsigntemplatesignaturecustomdate_RequestV2::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigntemplatesignaturecustomdate_RequestV2::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsigntemplatesignaturecustomdate_id, json[QString("pkiEzsigntemplatesignaturecustomdateID")]);
    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = !json[QString("pkiEzsigntemplatesignaturecustomdateID")].isNull() && m_pki_ezsigntemplatesignaturecustomdate_id_isValid;

    m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsetx, json[QString("iEzsigntemplatesignaturecustomdateOffsetx")]);
    m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet = !json[QString("iEzsigntemplatesignaturecustomdateOffsetx")].isNull() && m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid;

    m_i_ezsigntemplatesignaturecustomdate_offsety_isValid = ::Ezmaxapi::fromJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsety, json[QString("iEzsigntemplatesignaturecustomdateOffsety")]);
    m_i_ezsigntemplatesignaturecustomdate_offsety_isSet = !json[QString("iEzsigntemplatesignaturecustomdateOffsety")].isNull() && m_i_ezsigntemplatesignaturecustomdate_offsety_isValid;

    m_s_ezsigntemplatesignaturecustomdate_format_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsigntemplatesignaturecustomdate_format, json[QString("sEzsigntemplatesignaturecustomdateFormat")]);
    m_s_ezsigntemplatesignaturecustomdate_format_isSet = !json[QString("sEzsigntemplatesignaturecustomdateFormat")].isNull() && m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

QString Ezsigntemplatesignaturecustomdate_RequestV2::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigntemplatesignaturecustomdate_RequestV2::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesignaturecustomdate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignaturecustomdateID"), ::Ezmaxapi::toJsonValue(m_pki_ezsigntemplatesignaturecustomdate_id));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateOffsetx"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsetx));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_offsety_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateOffsety"), ::Ezmaxapi::toJsonValue(m_i_ezsigntemplatesignaturecustomdate_offsety));
    }
    if (m_s_ezsigntemplatesignaturecustomdate_format_isSet) {
        obj.insert(QString("sEzsigntemplatesignaturecustomdateFormat"), ::Ezmaxapi::toJsonValue(m_s_ezsigntemplatesignaturecustomdate_format));
    }
    return obj;
}

qint32 Ezsigntemplatesignaturecustomdate_RequestV2::getPkiEzsigntemplatesignaturecustomdateId() const {
    return m_pki_ezsigntemplatesignaturecustomdate_id;
}
void Ezsigntemplatesignaturecustomdate_RequestV2::setPkiEzsigntemplatesignaturecustomdateId(const qint32 &pki_ezsigntemplatesignaturecustomdate_id) {
    m_pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_pki_ezsigntemplatesignaturecustomdate_id_Set() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isSet;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_pki_ezsigntemplatesignaturecustomdate_id_Valid() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isValid;
}

qint32 Ezsigntemplatesignaturecustomdate_RequestV2::getIEzsigntemplatesignaturecustomdateOffsetx() const {
    return m_i_ezsigntemplatesignaturecustomdate_offsetx;
}
void Ezsigntemplatesignaturecustomdate_RequestV2::setIEzsigntemplatesignaturecustomdateOffsetx(const qint32 &i_ezsigntemplatesignaturecustomdate_offsetx) {
    m_i_ezsigntemplatesignaturecustomdate_offsetx = i_ezsigntemplatesignaturecustomdate_offsetx;
    m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_i_ezsigntemplatesignaturecustomdate_offsetx_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_i_ezsigntemplatesignaturecustomdate_offsetx_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid;
}

qint32 Ezsigntemplatesignaturecustomdate_RequestV2::getIEzsigntemplatesignaturecustomdateOffsety() const {
    return m_i_ezsigntemplatesignaturecustomdate_offsety;
}
void Ezsigntemplatesignaturecustomdate_RequestV2::setIEzsigntemplatesignaturecustomdateOffsety(const qint32 &i_ezsigntemplatesignaturecustomdate_offsety) {
    m_i_ezsigntemplatesignaturecustomdate_offsety = i_ezsigntemplatesignaturecustomdate_offsety;
    m_i_ezsigntemplatesignaturecustomdate_offsety_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_i_ezsigntemplatesignaturecustomdate_offsety_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsety_isSet;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_i_ezsigntemplatesignaturecustomdate_offsety_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_offsety_isValid;
}

QString Ezsigntemplatesignaturecustomdate_RequestV2::getSEzsigntemplatesignaturecustomdateFormat() const {
    return m_s_ezsigntemplatesignaturecustomdate_format;
}
void Ezsigntemplatesignaturecustomdate_RequestV2::setSEzsigntemplatesignaturecustomdateFormat(const QString &s_ezsigntemplatesignaturecustomdate_format) {
    m_s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;
    m_s_ezsigntemplatesignaturecustomdate_format_isSet = true;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_s_ezsigntemplatesignaturecustomdate_format_Set() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isSet;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::is_s_ezsigntemplatesignaturecustomdate_format_Valid() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatesignaturecustomdate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_offsety_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigntemplatesignaturecustomdate_format_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigntemplatesignaturecustomdate_RequestV2::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid && m_i_ezsigntemplatesignaturecustomdate_offsety_isValid && m_s_ezsigntemplatesignaturecustomdate_format_isValid && true;
}

} // namespace Ezmaxapi
