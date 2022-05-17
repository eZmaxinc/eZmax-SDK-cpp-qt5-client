/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigntemplatesignaturecustomdate_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigntemplatesignaturecustomdate_RequestCompound::OAIEzsigntemplatesignaturecustomdate_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigntemplatesignaturecustomdate_RequestCompound::OAIEzsigntemplatesignaturecustomdate_RequestCompound() {
    this->initializeModel();
}

OAIEzsigntemplatesignaturecustomdate_RequestCompound::~OAIEzsigntemplatesignaturecustomdate_RequestCompound() {}

void OAIEzsigntemplatesignaturecustomdate_RequestCompound::initializeModel() {

    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = false;
    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_x_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_x_isValid = false;

    m_i_ezsigntemplatesignaturecustomdate_y_isSet = false;
    m_i_ezsigntemplatesignaturecustomdate_y_isValid = false;

    m_s_ezsigntemplatesignaturecustomdate_format_isSet = false;
    m_s_ezsigntemplatesignaturecustomdate_format_isValid = false;
}

void OAIEzsigntemplatesignaturecustomdate_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigntemplatesignaturecustomdate_RequestCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsigntemplatesignaturecustomdate_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigntemplatesignaturecustomdate_id, json[QString("pkiEzsigntemplatesignaturecustomdateID")]);
    m_pki_ezsigntemplatesignaturecustomdate_id_isSet = !json[QString("pkiEzsigntemplatesignaturecustomdateID")].isNull() && m_pki_ezsigntemplatesignaturecustomdate_id_isValid;

    m_i_ezsigntemplatesignaturecustomdate_x_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignaturecustomdate_x, json[QString("iEzsigntemplatesignaturecustomdateX")]);
    m_i_ezsigntemplatesignaturecustomdate_x_isSet = !json[QString("iEzsigntemplatesignaturecustomdateX")].isNull() && m_i_ezsigntemplatesignaturecustomdate_x_isValid;

    m_i_ezsigntemplatesignaturecustomdate_y_isValid = ::OpenAPI::fromJsonValue(i_ezsigntemplatesignaturecustomdate_y, json[QString("iEzsigntemplatesignaturecustomdateY")]);
    m_i_ezsigntemplatesignaturecustomdate_y_isSet = !json[QString("iEzsigntemplatesignaturecustomdateY")].isNull() && m_i_ezsigntemplatesignaturecustomdate_y_isValid;

    m_s_ezsigntemplatesignaturecustomdate_format_isValid = ::OpenAPI::fromJsonValue(s_ezsigntemplatesignaturecustomdate_format, json[QString("sEzsigntemplatesignaturecustomdateFormat")]);
    m_s_ezsigntemplatesignaturecustomdate_format_isSet = !json[QString("sEzsigntemplatesignaturecustomdateFormat")].isNull() && m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

QString OAIEzsigntemplatesignaturecustomdate_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigntemplatesignaturecustomdate_RequestCompound::asJsonObject() const {
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

qint32 OAIEzsigntemplatesignaturecustomdate_RequestCompound::getPkiEzsigntemplatesignaturecustomdateId() const {
    return pki_ezsigntemplatesignaturecustomdate_id;
}
void OAIEzsigntemplatesignaturecustomdate_RequestCompound::setPkiEzsigntemplatesignaturecustomdateId(const qint32 &pki_ezsigntemplatesignaturecustomdate_id) {
    this->pki_ezsigntemplatesignaturecustomdate_id = pki_ezsigntemplatesignaturecustomdate_id;
    this->m_pki_ezsigntemplatesignaturecustomdate_id_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_pki_ezsigntemplatesignaturecustomdate_id_Set() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_pki_ezsigntemplatesignaturecustomdate_id_Valid() const{
    return m_pki_ezsigntemplatesignaturecustomdate_id_isValid;
}

qint32 OAIEzsigntemplatesignaturecustomdate_RequestCompound::getIEzsigntemplatesignaturecustomdateX() const {
    return i_ezsigntemplatesignaturecustomdate_x;
}
void OAIEzsigntemplatesignaturecustomdate_RequestCompound::setIEzsigntemplatesignaturecustomdateX(const qint32 &i_ezsigntemplatesignaturecustomdate_x) {
    this->i_ezsigntemplatesignaturecustomdate_x = i_ezsigntemplatesignaturecustomdate_x;
    this->m_i_ezsigntemplatesignaturecustomdate_x_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_i_ezsigntemplatesignaturecustomdate_x_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_x_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_i_ezsigntemplatesignaturecustomdate_x_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_x_isValid;
}

qint32 OAIEzsigntemplatesignaturecustomdate_RequestCompound::getIEzsigntemplatesignaturecustomdateY() const {
    return i_ezsigntemplatesignaturecustomdate_y;
}
void OAIEzsigntemplatesignaturecustomdate_RequestCompound::setIEzsigntemplatesignaturecustomdateY(const qint32 &i_ezsigntemplatesignaturecustomdate_y) {
    this->i_ezsigntemplatesignaturecustomdate_y = i_ezsigntemplatesignaturecustomdate_y;
    this->m_i_ezsigntemplatesignaturecustomdate_y_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_i_ezsigntemplatesignaturecustomdate_y_Set() const{
    return m_i_ezsigntemplatesignaturecustomdate_y_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_i_ezsigntemplatesignaturecustomdate_y_Valid() const{
    return m_i_ezsigntemplatesignaturecustomdate_y_isValid;
}

QString OAIEzsigntemplatesignaturecustomdate_RequestCompound::getSEzsigntemplatesignaturecustomdateFormat() const {
    return s_ezsigntemplatesignaturecustomdate_format;
}
void OAIEzsigntemplatesignaturecustomdate_RequestCompound::setSEzsigntemplatesignaturecustomdateFormat(const QString &s_ezsigntemplatesignaturecustomdate_format) {
    this->s_ezsigntemplatesignaturecustomdate_format = s_ezsigntemplatesignaturecustomdate_format;
    this->m_s_ezsigntemplatesignaturecustomdate_format_isSet = true;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_s_ezsigntemplatesignaturecustomdate_format_Set() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isSet;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::is_s_ezsigntemplatesignaturecustomdate_format_Valid() const{
    return m_s_ezsigntemplatesignaturecustomdate_format_isValid;
}

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::isSet() const {
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

bool OAIEzsigntemplatesignaturecustomdate_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_ezsigntemplatesignaturecustomdate_x_isValid && m_i_ezsigntemplatesignaturecustomdate_y_isValid && m_s_ezsigntemplatesignaturecustomdate_format_isValid && true;
}

} // namespace OpenAPI
