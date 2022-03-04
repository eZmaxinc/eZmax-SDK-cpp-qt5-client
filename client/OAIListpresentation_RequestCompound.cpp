/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIListpresentation_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIListpresentation_RequestCompound::OAIListpresentation_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIListpresentation_RequestCompound::OAIListpresentation_RequestCompound() {
    this->initializeModel();
}

OAIListpresentation_RequestCompound::~OAIListpresentation_RequestCompound() {}

void OAIListpresentation_RequestCompound::initializeModel() {

    m_s_listpresentation_description_isSet = false;
    m_s_listpresentation_description_isValid = false;

    m_s_listpresentation_filter_isSet = false;
    m_s_listpresentation_filter_isValid = false;

    m_s_listpresentation_orderby_isSet = false;
    m_s_listpresentation_orderby_isValid = false;

    m_a_s_column_name_isSet = false;
    m_a_s_column_name_isValid = false;

    m_i_listpresentation_row_max_isSet = false;
    m_i_listpresentation_row_max_isValid = false;

    m_i_listpresentation_row_offset_isSet = false;
    m_i_listpresentation_row_offset_isValid = false;

    m_b_listpresentation_default_isSet = false;
    m_b_listpresentation_default_isValid = false;
}

void OAIListpresentation_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIListpresentation_RequestCompound::fromJsonObject(QJsonObject json) {

    m_s_listpresentation_description_isValid = ::OpenAPI::fromJsonValue(s_listpresentation_description, json[QString("sListpresentationDescription")]);
    m_s_listpresentation_description_isSet = !json[QString("sListpresentationDescription")].isNull() && m_s_listpresentation_description_isValid;

    m_s_listpresentation_filter_isValid = ::OpenAPI::fromJsonValue(s_listpresentation_filter, json[QString("sListpresentationFilter")]);
    m_s_listpresentation_filter_isSet = !json[QString("sListpresentationFilter")].isNull() && m_s_listpresentation_filter_isValid;

    m_s_listpresentation_orderby_isValid = ::OpenAPI::fromJsonValue(s_listpresentation_orderby, json[QString("sListpresentationOrderby")]);
    m_s_listpresentation_orderby_isSet = !json[QString("sListpresentationOrderby")].isNull() && m_s_listpresentation_orderby_isValid;

    m_a_s_column_name_isValid = ::OpenAPI::fromJsonValue(a_s_column_name, json[QString("a_sColumnName")]);
    m_a_s_column_name_isSet = !json[QString("a_sColumnName")].isNull() && m_a_s_column_name_isValid;

    m_i_listpresentation_row_max_isValid = ::OpenAPI::fromJsonValue(i_listpresentation_row_max, json[QString("iListpresentationRowMax")]);
    m_i_listpresentation_row_max_isSet = !json[QString("iListpresentationRowMax")].isNull() && m_i_listpresentation_row_max_isValid;

    m_i_listpresentation_row_offset_isValid = ::OpenAPI::fromJsonValue(i_listpresentation_row_offset, json[QString("iListpresentationRowOffset")]);
    m_i_listpresentation_row_offset_isSet = !json[QString("iListpresentationRowOffset")].isNull() && m_i_listpresentation_row_offset_isValid;

    m_b_listpresentation_default_isValid = ::OpenAPI::fromJsonValue(b_listpresentation_default, json[QString("bListpresentationDefault")]);
    m_b_listpresentation_default_isSet = !json[QString("bListpresentationDefault")].isNull() && m_b_listpresentation_default_isValid;
}

QString OAIListpresentation_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIListpresentation_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_s_listpresentation_description_isSet) {
        obj.insert(QString("sListpresentationDescription"), ::OpenAPI::toJsonValue(s_listpresentation_description));
    }
    if (m_s_listpresentation_filter_isSet) {
        obj.insert(QString("sListpresentationFilter"), ::OpenAPI::toJsonValue(s_listpresentation_filter));
    }
    if (m_s_listpresentation_orderby_isSet) {
        obj.insert(QString("sListpresentationOrderby"), ::OpenAPI::toJsonValue(s_listpresentation_orderby));
    }
    if (a_s_column_name.size() > 0) {
        obj.insert(QString("a_sColumnName"), ::OpenAPI::toJsonValue(a_s_column_name));
    }
    if (m_i_listpresentation_row_max_isSet) {
        obj.insert(QString("iListpresentationRowMax"), ::OpenAPI::toJsonValue(i_listpresentation_row_max));
    }
    if (m_i_listpresentation_row_offset_isSet) {
        obj.insert(QString("iListpresentationRowOffset"), ::OpenAPI::toJsonValue(i_listpresentation_row_offset));
    }
    if (m_b_listpresentation_default_isSet) {
        obj.insert(QString("bListpresentationDefault"), ::OpenAPI::toJsonValue(b_listpresentation_default));
    }
    return obj;
}

QString OAIListpresentation_RequestCompound::getSListpresentationDescription() const {
    return s_listpresentation_description;
}
void OAIListpresentation_RequestCompound::setSListpresentationDescription(const QString &s_listpresentation_description) {
    this->s_listpresentation_description = s_listpresentation_description;
    this->m_s_listpresentation_description_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_s_listpresentation_description_Set() const{
    return m_s_listpresentation_description_isSet;
}

bool OAIListpresentation_RequestCompound::is_s_listpresentation_description_Valid() const{
    return m_s_listpresentation_description_isValid;
}

QString OAIListpresentation_RequestCompound::getSListpresentationFilter() const {
    return s_listpresentation_filter;
}
void OAIListpresentation_RequestCompound::setSListpresentationFilter(const QString &s_listpresentation_filter) {
    this->s_listpresentation_filter = s_listpresentation_filter;
    this->m_s_listpresentation_filter_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_s_listpresentation_filter_Set() const{
    return m_s_listpresentation_filter_isSet;
}

bool OAIListpresentation_RequestCompound::is_s_listpresentation_filter_Valid() const{
    return m_s_listpresentation_filter_isValid;
}

QString OAIListpresentation_RequestCompound::getSListpresentationOrderby() const {
    return s_listpresentation_orderby;
}
void OAIListpresentation_RequestCompound::setSListpresentationOrderby(const QString &s_listpresentation_orderby) {
    this->s_listpresentation_orderby = s_listpresentation_orderby;
    this->m_s_listpresentation_orderby_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_s_listpresentation_orderby_Set() const{
    return m_s_listpresentation_orderby_isSet;
}

bool OAIListpresentation_RequestCompound::is_s_listpresentation_orderby_Valid() const{
    return m_s_listpresentation_orderby_isValid;
}

QList<QString> OAIListpresentation_RequestCompound::getASColumnName() const {
    return a_s_column_name;
}
void OAIListpresentation_RequestCompound::setASColumnName(const QList<QString> &a_s_column_name) {
    this->a_s_column_name = a_s_column_name;
    this->m_a_s_column_name_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_a_s_column_name_Set() const{
    return m_a_s_column_name_isSet;
}

bool OAIListpresentation_RequestCompound::is_a_s_column_name_Valid() const{
    return m_a_s_column_name_isValid;
}

qint32 OAIListpresentation_RequestCompound::getIListpresentationRowMax() const {
    return i_listpresentation_row_max;
}
void OAIListpresentation_RequestCompound::setIListpresentationRowMax(const qint32 &i_listpresentation_row_max) {
    this->i_listpresentation_row_max = i_listpresentation_row_max;
    this->m_i_listpresentation_row_max_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_i_listpresentation_row_max_Set() const{
    return m_i_listpresentation_row_max_isSet;
}

bool OAIListpresentation_RequestCompound::is_i_listpresentation_row_max_Valid() const{
    return m_i_listpresentation_row_max_isValid;
}

qint32 OAIListpresentation_RequestCompound::getIListpresentationRowOffset() const {
    return i_listpresentation_row_offset;
}
void OAIListpresentation_RequestCompound::setIListpresentationRowOffset(const qint32 &i_listpresentation_row_offset) {
    this->i_listpresentation_row_offset = i_listpresentation_row_offset;
    this->m_i_listpresentation_row_offset_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_i_listpresentation_row_offset_Set() const{
    return m_i_listpresentation_row_offset_isSet;
}

bool OAIListpresentation_RequestCompound::is_i_listpresentation_row_offset_Valid() const{
    return m_i_listpresentation_row_offset_isValid;
}

bool OAIListpresentation_RequestCompound::isBListpresentationDefault() const {
    return b_listpresentation_default;
}
void OAIListpresentation_RequestCompound::setBListpresentationDefault(const bool &b_listpresentation_default) {
    this->b_listpresentation_default = b_listpresentation_default;
    this->m_b_listpresentation_default_isSet = true;
}

bool OAIListpresentation_RequestCompound::is_b_listpresentation_default_Set() const{
    return m_b_listpresentation_default_isSet;
}

bool OAIListpresentation_RequestCompound::is_b_listpresentation_default_Valid() const{
    return m_b_listpresentation_default_isValid;
}

bool OAIListpresentation_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_listpresentation_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_listpresentation_filter_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_listpresentation_orderby_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_s_column_name.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_listpresentation_row_max_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_listpresentation_row_offset_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_listpresentation_default_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIListpresentation_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_listpresentation_description_isValid && m_s_listpresentation_filter_isValid && m_s_listpresentation_orderby_isValid && m_a_s_column_name_isValid && m_i_listpresentation_row_max_isValid && m_i_listpresentation_row_offset_isValid && m_b_listpresentation_default_isValid && true;
}

} // namespace OpenAPI
