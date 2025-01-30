/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsignsignatureattachment_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsignsignatureattachment_Response::Ezsignsignatureattachment_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsignsignatureattachment_Response::Ezsignsignatureattachment_Response() {
    this->initializeModel();
}

Ezsignsignatureattachment_Response::~Ezsignsignatureattachment_Response() {}

void Ezsignsignatureattachment_Response::initializeModel() {

    m_pki_ezsignsignatureattachment_id_isSet = false;
    m_pki_ezsignsignatureattachment_id_isValid = false;

    m_fki_ezsignsignature_id_isSet = false;
    m_fki_ezsignsignature_id_isValid = false;

    m_bin_ezsignsignatureattachment_md5_isSet = false;
    m_bin_ezsignsignatureattachment_md5_isValid = false;

    m_s_ezsignsignatureattachment_name_isSet = false;
    m_s_ezsignsignatureattachment_name_isValid = false;

    m_s_download_url_isSet = false;
    m_s_download_url_isValid = false;
}

void Ezsignsignatureattachment_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsignsignatureattachment_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignsignatureattachment_id_isValid = ::Ezmaxapi::fromJsonValue(m_pki_ezsignsignatureattachment_id, json[QString("pkiEzsignsignatureattachmentID")]);
    m_pki_ezsignsignatureattachment_id_isSet = !json[QString("pkiEzsignsignatureattachmentID")].isNull() && m_pki_ezsignsignatureattachment_id_isValid;

    m_fki_ezsignsignature_id_isValid = ::Ezmaxapi::fromJsonValue(m_fki_ezsignsignature_id, json[QString("fkiEzsignsignatureID")]);
    m_fki_ezsignsignature_id_isSet = !json[QString("fkiEzsignsignatureID")].isNull() && m_fki_ezsignsignature_id_isValid;

    m_bin_ezsignsignatureattachment_md5_isValid = ::Ezmaxapi::fromJsonValue(m_bin_ezsignsignatureattachment_md5, json[QString("binEzsignsignatureattachmentMD5")]);
    m_bin_ezsignsignatureattachment_md5_isSet = !json[QString("binEzsignsignatureattachmentMD5")].isNull() && m_bin_ezsignsignatureattachment_md5_isValid;

    m_s_ezsignsignatureattachment_name_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignsignatureattachment_name, json[QString("sEzsignsignatureattachmentName")]);
    m_s_ezsignsignatureattachment_name_isSet = !json[QString("sEzsignsignatureattachmentName")].isNull() && m_s_ezsignsignatureattachment_name_isValid;

    m_s_download_url_isValid = ::Ezmaxapi::fromJsonValue(m_s_download_url, json[QString("sDownloadUrl")]);
    m_s_download_url_isSet = !json[QString("sDownloadUrl")].isNull() && m_s_download_url_isValid;
}

QString Ezsignsignatureattachment_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsignsignatureattachment_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignsignatureattachment_id_isSet) {
        obj.insert(QString("pkiEzsignsignatureattachmentID"), ::Ezmaxapi::toJsonValue(m_pki_ezsignsignatureattachment_id));
    }
    if (m_fki_ezsignsignature_id_isSet) {
        obj.insert(QString("fkiEzsignsignatureID"), ::Ezmaxapi::toJsonValue(m_fki_ezsignsignature_id));
    }
    if (m_bin_ezsignsignatureattachment_md5_isSet) {
        obj.insert(QString("binEzsignsignatureattachmentMD5"), ::Ezmaxapi::toJsonValue(m_bin_ezsignsignatureattachment_md5));
    }
    if (m_s_ezsignsignatureattachment_name_isSet) {
        obj.insert(QString("sEzsignsignatureattachmentName"), ::Ezmaxapi::toJsonValue(m_s_ezsignsignatureattachment_name));
    }
    if (m_s_download_url_isSet) {
        obj.insert(QString("sDownloadUrl"), ::Ezmaxapi::toJsonValue(m_s_download_url));
    }
    return obj;
}

qint32 Ezsignsignatureattachment_Response::getPkiEzsignsignatureattachmentId() const {
    return m_pki_ezsignsignatureattachment_id;
}
void Ezsignsignatureattachment_Response::setPkiEzsignsignatureattachmentId(const qint32 &pki_ezsignsignatureattachment_id) {
    m_pki_ezsignsignatureattachment_id = pki_ezsignsignatureattachment_id;
    m_pki_ezsignsignatureattachment_id_isSet = true;
}

bool Ezsignsignatureattachment_Response::is_pki_ezsignsignatureattachment_id_Set() const{
    return m_pki_ezsignsignatureattachment_id_isSet;
}

bool Ezsignsignatureattachment_Response::is_pki_ezsignsignatureattachment_id_Valid() const{
    return m_pki_ezsignsignatureattachment_id_isValid;
}

qint32 Ezsignsignatureattachment_Response::getFkiEzsignsignatureId() const {
    return m_fki_ezsignsignature_id;
}
void Ezsignsignatureattachment_Response::setFkiEzsignsignatureId(const qint32 &fki_ezsignsignature_id) {
    m_fki_ezsignsignature_id = fki_ezsignsignature_id;
    m_fki_ezsignsignature_id_isSet = true;
}

bool Ezsignsignatureattachment_Response::is_fki_ezsignsignature_id_Set() const{
    return m_fki_ezsignsignature_id_isSet;
}

bool Ezsignsignatureattachment_Response::is_fki_ezsignsignature_id_Valid() const{
    return m_fki_ezsignsignature_id_isValid;
}

QString Ezsignsignatureattachment_Response::getBinEzsignsignatureattachmentMd5() const {
    return m_bin_ezsignsignatureattachment_md5;
}
void Ezsignsignatureattachment_Response::setBinEzsignsignatureattachmentMd5(const QString &bin_ezsignsignatureattachment_md5) {
    m_bin_ezsignsignatureattachment_md5 = bin_ezsignsignatureattachment_md5;
    m_bin_ezsignsignatureattachment_md5_isSet = true;
}

bool Ezsignsignatureattachment_Response::is_bin_ezsignsignatureattachment_md5_Set() const{
    return m_bin_ezsignsignatureattachment_md5_isSet;
}

bool Ezsignsignatureattachment_Response::is_bin_ezsignsignatureattachment_md5_Valid() const{
    return m_bin_ezsignsignatureattachment_md5_isValid;
}

QString Ezsignsignatureattachment_Response::getSEzsignsignatureattachmentName() const {
    return m_s_ezsignsignatureattachment_name;
}
void Ezsignsignatureattachment_Response::setSEzsignsignatureattachmentName(const QString &s_ezsignsignatureattachment_name) {
    m_s_ezsignsignatureattachment_name = s_ezsignsignatureattachment_name;
    m_s_ezsignsignatureattachment_name_isSet = true;
}

bool Ezsignsignatureattachment_Response::is_s_ezsignsignatureattachment_name_Set() const{
    return m_s_ezsignsignatureattachment_name_isSet;
}

bool Ezsignsignatureattachment_Response::is_s_ezsignsignatureattachment_name_Valid() const{
    return m_s_ezsignsignatureattachment_name_isValid;
}

QString Ezsignsignatureattachment_Response::getSDownloadUrl() const {
    return m_s_download_url;
}
void Ezsignsignatureattachment_Response::setSDownloadUrl(const QString &s_download_url) {
    m_s_download_url = s_download_url;
    m_s_download_url_isSet = true;
}

bool Ezsignsignatureattachment_Response::is_s_download_url_Set() const{
    return m_s_download_url_isSet;
}

bool Ezsignsignatureattachment_Response::is_s_download_url_Valid() const{
    return m_s_download_url_isValid;
}

bool Ezsignsignatureattachment_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignsignatureattachment_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignsignature_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_bin_ezsignsignatureattachment_md5_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignsignatureattachment_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_download_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsignsignatureattachment_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignsignatureattachment_id_isValid && m_fki_ezsignsignature_id_isValid && m_bin_ezsignsignatureattachment_md5_isValid && m_s_ezsignsignatureattachment_name_isValid && m_s_download_url_isValid && true;
}

} // namespace Ezmaxapi
