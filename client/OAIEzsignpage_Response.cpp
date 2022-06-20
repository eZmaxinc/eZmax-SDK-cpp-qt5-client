/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignpage_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignpage_Response::OAIEzsignpage_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignpage_Response::OAIEzsignpage_Response() {
    this->initializeModel();
}

OAIEzsignpage_Response::~OAIEzsignpage_Response() {}

void OAIEzsignpage_Response::initializeModel() {

    m_pki_ezsignpage_id_isSet = false;
    m_pki_ezsignpage_id_isValid = false;

    m_i_ezsignpage_widthimage_isSet = false;
    m_i_ezsignpage_widthimage_isValid = false;

    m_i_ezsignpage_heightimage_isSet = false;
    m_i_ezsignpage_heightimage_isValid = false;

    m_i_ezsignpage_widthpdf_isSet = false;
    m_i_ezsignpage_widthpdf_isValid = false;

    m_i_ezsignpage_heightpdf_isSet = false;
    m_i_ezsignpage_heightpdf_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;

    m_s_image_url_isSet = false;
    m_s_image_url_isValid = false;
}

void OAIEzsignpage_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignpage_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsignpage_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignpage_id, json[QString("pkiEzsignpageID")]);
    m_pki_ezsignpage_id_isSet = !json[QString("pkiEzsignpageID")].isNull() && m_pki_ezsignpage_id_isValid;

    m_i_ezsignpage_widthimage_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_widthimage, json[QString("iEzsignpageWidthimage")]);
    m_i_ezsignpage_widthimage_isSet = !json[QString("iEzsignpageWidthimage")].isNull() && m_i_ezsignpage_widthimage_isValid;

    m_i_ezsignpage_heightimage_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_heightimage, json[QString("iEzsignpageHeightimage")]);
    m_i_ezsignpage_heightimage_isSet = !json[QString("iEzsignpageHeightimage")].isNull() && m_i_ezsignpage_heightimage_isValid;

    m_i_ezsignpage_widthpdf_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_widthpdf, json[QString("iEzsignpageWidthpdf")]);
    m_i_ezsignpage_widthpdf_isSet = !json[QString("iEzsignpageWidthpdf")].isNull() && m_i_ezsignpage_widthpdf_isValid;

    m_i_ezsignpage_heightpdf_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_heightpdf, json[QString("iEzsignpageHeightpdf")]);
    m_i_ezsignpage_heightpdf_isSet = !json[QString("iEzsignpageHeightpdf")].isNull() && m_i_ezsignpage_heightpdf_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;

    m_s_image_url_isValid = ::OpenAPI::fromJsonValue(s_image_url, json[QString("sImageUrl")]);
    m_s_image_url_isSet = !json[QString("sImageUrl")].isNull() && m_s_image_url_isValid;
}

QString OAIEzsignpage_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignpage_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignpage_id_isSet) {
        obj.insert(QString("pkiEzsignpageID"), ::OpenAPI::toJsonValue(pki_ezsignpage_id));
    }
    if (m_i_ezsignpage_widthimage_isSet) {
        obj.insert(QString("iEzsignpageWidthimage"), ::OpenAPI::toJsonValue(i_ezsignpage_widthimage));
    }
    if (m_i_ezsignpage_heightimage_isSet) {
        obj.insert(QString("iEzsignpageHeightimage"), ::OpenAPI::toJsonValue(i_ezsignpage_heightimage));
    }
    if (m_i_ezsignpage_widthpdf_isSet) {
        obj.insert(QString("iEzsignpageWidthpdf"), ::OpenAPI::toJsonValue(i_ezsignpage_widthpdf));
    }
    if (m_i_ezsignpage_heightpdf_isSet) {
        obj.insert(QString("iEzsignpageHeightpdf"), ::OpenAPI::toJsonValue(i_ezsignpage_heightpdf));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsignpage_pagenumber));
    }
    if (m_s_image_url_isSet) {
        obj.insert(QString("sImageUrl"), ::OpenAPI::toJsonValue(s_image_url));
    }
    return obj;
}

qint32 OAIEzsignpage_Response::getPkiEzsignpageId() const {
    return pki_ezsignpage_id;
}
void OAIEzsignpage_Response::setPkiEzsignpageId(const qint32 &pki_ezsignpage_id) {
    this->pki_ezsignpage_id = pki_ezsignpage_id;
    this->m_pki_ezsignpage_id_isSet = true;
}

bool OAIEzsignpage_Response::is_pki_ezsignpage_id_Set() const{
    return m_pki_ezsignpage_id_isSet;
}

bool OAIEzsignpage_Response::is_pki_ezsignpage_id_Valid() const{
    return m_pki_ezsignpage_id_isValid;
}

qint32 OAIEzsignpage_Response::getIEzsignpageWidthimage() const {
    return i_ezsignpage_widthimage;
}
void OAIEzsignpage_Response::setIEzsignpageWidthimage(const qint32 &i_ezsignpage_widthimage) {
    this->i_ezsignpage_widthimage = i_ezsignpage_widthimage;
    this->m_i_ezsignpage_widthimage_isSet = true;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_widthimage_Set() const{
    return m_i_ezsignpage_widthimage_isSet;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_widthimage_Valid() const{
    return m_i_ezsignpage_widthimage_isValid;
}

qint32 OAIEzsignpage_Response::getIEzsignpageHeightimage() const {
    return i_ezsignpage_heightimage;
}
void OAIEzsignpage_Response::setIEzsignpageHeightimage(const qint32 &i_ezsignpage_heightimage) {
    this->i_ezsignpage_heightimage = i_ezsignpage_heightimage;
    this->m_i_ezsignpage_heightimage_isSet = true;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_heightimage_Set() const{
    return m_i_ezsignpage_heightimage_isSet;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_heightimage_Valid() const{
    return m_i_ezsignpage_heightimage_isValid;
}

qint32 OAIEzsignpage_Response::getIEzsignpageWidthpdf() const {
    return i_ezsignpage_widthpdf;
}
void OAIEzsignpage_Response::setIEzsignpageWidthpdf(const qint32 &i_ezsignpage_widthpdf) {
    this->i_ezsignpage_widthpdf = i_ezsignpage_widthpdf;
    this->m_i_ezsignpage_widthpdf_isSet = true;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_widthpdf_Set() const{
    return m_i_ezsignpage_widthpdf_isSet;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_widthpdf_Valid() const{
    return m_i_ezsignpage_widthpdf_isValid;
}

qint32 OAIEzsignpage_Response::getIEzsignpageHeightpdf() const {
    return i_ezsignpage_heightpdf;
}
void OAIEzsignpage_Response::setIEzsignpageHeightpdf(const qint32 &i_ezsignpage_heightpdf) {
    this->i_ezsignpage_heightpdf = i_ezsignpage_heightpdf;
    this->m_i_ezsignpage_heightpdf_isSet = true;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_heightpdf_Set() const{
    return m_i_ezsignpage_heightpdf_isSet;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_heightpdf_Valid() const{
    return m_i_ezsignpage_heightpdf_isValid;
}

qint32 OAIEzsignpage_Response::getIEzsignpagePagenumber() const {
    return i_ezsignpage_pagenumber;
}
void OAIEzsignpage_Response::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    this->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    this->m_i_ezsignpage_pagenumber_isSet = true;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool OAIEzsignpage_Response::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

QString OAIEzsignpage_Response::getSImageUrl() const {
    return s_image_url;
}
void OAIEzsignpage_Response::setSImageUrl(const QString &s_image_url) {
    this->s_image_url = s_image_url;
    this->m_s_image_url_isSet = true;
}

bool OAIEzsignpage_Response::is_s_image_url_Set() const{
    return m_s_image_url_isSet;
}

bool OAIEzsignpage_Response::is_s_image_url_Valid() const{
    return m_s_image_url_isValid;
}

bool OAIEzsignpage_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignpage_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_widthimage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_heightimage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_widthpdf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_heightpdf_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_image_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignpage_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignpage_id_isValid && m_i_ezsignpage_widthimage_isValid && m_i_ezsignpage_heightimage_isValid && m_i_ezsignpage_widthpdf_isValid && m_i_ezsignpage_heightpdf_isValid && m_i_ezsignpage_pagenumber_isValid && m_s_image_url_isValid && true;
}

} // namespace OpenAPI
