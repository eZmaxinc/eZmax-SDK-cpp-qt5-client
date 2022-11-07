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

#include "OAIEzsigntemplatesignaturecustomdate_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesignaturecustomdate_Response::OAIEzsigntemplatesignaturecustomdate_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesignaturecustomdate_Response::OAIEzsigntemplatesignaturecustomdate_Response() {
    this->initializeModel();
}

OAIEzsigntemplatesignaturecustomdate_Response::~OAIEzsigntemplatesignaturecustomdate_Response() {}

void OAIEzsigntemplatesignaturecustomdate_Response::initializeModel() {

    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = false;
    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_x_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_x_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_y_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_y_isValid = false;

    m_s_ezsigntemplatesignaturecustomdate_format_isSet = false;
    m_s_ezsigntemplatesignaturecustomdate_format_isValid = false;
}

void OAIEzsigntemplatesignaturecustomdate_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesignaturecustomdate_Response::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatesignaturecustomdate_id, json[QString("pkiEzsigntemplatesignaturecustomdateID")]);
    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = !json[QString("pkiEzsigntemplatesignaturecustomdateID")].isNull() && m_pki_ezsigntemplatesignaturecustomdate_id_isValid;

    m_i_ezsigntemplatesignaturecustomdate_x_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignaturecustomdate_x, json[QString("iEzsigntemplatesignaturecustomdateX")]);
    m_i_ezsigntemplatesignaturecustomdate_x_isSet = !json[QString("iEzsigntemplatesignaturecustomdateX")].isNull() && m_i_ezsigntemplatesignaturecustomdate_x_isValid;

    m_i_ezsigntemplatesignaturecustomdate_y_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignaturecustomdate_y, json[QString("iEzsigntemplatesignaturecustomdateY")]);
    m_i_ezsigntemplatesignaturecustomdate_y_isSet = !json[QString("iEzsigntemplatesignaturecustomdateY")].isNull() && m_i_ezsigntemplatesignaturecustomdate_y_isValid;

    m_s_ezsigntemplatesignaturecustomdate_format_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatesignaturecustomdate_format, json[QString("sEzsigntemplatesignaturecustomdateFormat")]);
    m_s_ezsigntemplatesignaturecustomdate_format_isSet = !json[QString("sEzsigntemplatesignaturecustomdateFormat")].isNull() && m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

QString OAIEzsigntemplatesignaturecustomdate_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesignaturecustomdate_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsigntemplatesignaturecustomdate_id_isSet) {
        obj.insert(QString("pkiEzsigntemplatesignaturecustomdateID"), ::OpenAPI::toJsonValue(pki_ezsigntemplatesignaturecustomdate_id));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_x_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateX"), ::OpenAPI::toJsonValue(i_ezsigntemplatesignaturecustomdate_x));
    }
    if (m_i_ezsigntemplatesignaturecustomdate_y_isSet) {
        obj.insert(QString("iEzsigntemplatesignaturecustomdateY"), ::OpenAPI::toJsonValue(i_ezsigntemplatesignaturecustomdate_y));
    }
    if (m_s_ezsigntemplatesignaturecustomdate_format_isSet) {
        obj.insert(QString("sEzsigntemplatesignaturecustomdateFormat"), ::OpenAPI::toJsonValue(s_ezsigntemplatesignaturecustomdate_format));
    }
    return obj;
}

qint32 OAIEzsigntemplatesignaturecustomdate_Response::getPkiEzsigntemplatesignaturecustomdateId() const {
    return pki_ezsigntemplatesignaturecustomdate_id;
}
void OAIEzsigntemplatesignaturecustomdate_Response::setPkiEzsigntemplatesignaturecustomdateId(const qint32 &pki_ezsigntemplatesignaturecustomdate_id) {
    this->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    this->m_pki_ezsigntemplatesignaturecustomdate_id_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_pki_ezsigntemplatesignaturecustomdate_id_Set() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_pki_ezsigntemplatesignaturecustomdate_id_Valid() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isValid;
}

qint32 OAIEzsigntemplatesignaturecustomdate_Response::getIEzsigntemplatesignaturecustomdateX() const {
    return i_ezsigntemplatesignaturecustomdate_x;
}
void OAIEzsigntemplatesignaturecustomdate_Response::setIEzsigntemplatesignaturecustomdateX(const qint32 &i_ezsigntemplatesignaturecustomdate_x) {
    this->i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    this->m_i_ezsigntemplatesignaturecustomdate_x_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_i_ezsigntemplatesignaturecustomdate_x_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_x_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_i_ezsigntemplatesignaturecustomdate_x_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_x_isValid;
}

qint32 OAIEzsigntemplatesignaturecustomdate_Response::getIEzsigntemplatesignaturecustomdateY() const {
    return i_ezsigntemplatesignaturecustomdate_y;
}
void OAIEzsigntemplatesignaturecustomdate_Response::setIEzsigntemplatesignaturecustomdateY(const qint32 &i_ezsigntemplatesignaturecustomdate_y) {
    this->i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    this->m_i_ezsigntemplatesignaturecustomdate_y_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_i_ezsigntemplatesignaturecustomdate_y_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_y_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_i_ezsigntemplatesignaturecustomdate_y_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_y_isValid;
}

QString OAIEzsigntemplatesignaturecustomdate_Response::getSEzsigntemplatesignaturecustomdateFormat() const {
    return s_ezsigntemplatesignaturecustomdate_format;
}
void OAIEzsigntemplatesignaturecustomdate_Response::setSEzsigntemplatesignaturecustomdateFormat(const QString &s_ezsigntemplatesignaturecustomdate_format) {
    this->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;
    this->m_s_ezsigntemplatesignaturecustomdate_format_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_s_ezsigntemplatesignaturecustomdate_format_Set() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::is_s_ezsigntemplatesignaturecustomdate_format_Valid() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

bool OAIEzsigntemplatesignaturecustomdate_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsigntemplatesignaturecustomdate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigntemplatesignaturecustomdate_y_isSet) {
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

bool OAIEzsigntemplatesignaturecustomdate_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsigntemplatesignaturecustomdate_id_isValid && m_i_ezsigntemplatesignaturecustomdate_x_isValid && m_i_ezsigntemplatesignaturecustomdate_y_isValid && m_s_ezsigntemplatesignaturecustomdate_format_isValid && true;
}

} // namespace OpenAPI
