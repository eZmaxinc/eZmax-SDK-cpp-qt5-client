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

#include "Scim_UserList.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Scim_UserList::Scim_UserList(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Scim_UserList::Scim_UserList() {
    this->initializeModel();
}

Scim_UserList::~Scim_UserList() {}

void Scim_UserList::initializeModel() {

    m_total_results_isSet = false;
    m_total_results_isValid = false;

    m_items_per_page_isSet = false;
    m_items_per_page_isValid = false;

    m_start_index_isSet = false;
    m_start_index_isValid = false;

    m_schemas_isSet = false;
    m_schemas_isValid = false;

    m_resources_isSet = false;
    m_resources_isValid = false;
}

void Scim_UserList::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Scim_UserList::fromJsonObject(QJsonObject json) {

    m_total_results_isValid = ::Ezmaxapi::fromJsonValue(m_total_results, json[QString("totalResults")]);
    m_total_results_isSet = !json[QString("totalResults")].isNull() && m_total_results_isValid;

    m_items_per_page_isValid = ::Ezmaxapi::fromJsonValue(m_items_per_page, json[QString("itemsPerPage")]);
    m_items_per_page_isSet = !json[QString("itemsPerPage")].isNull() && m_items_per_page_isValid;

    m_start_index_isValid = ::Ezmaxapi::fromJsonValue(m_start_index, json[QString("startIndex")]);
    m_start_index_isSet = !json[QString("startIndex")].isNull() && m_start_index_isValid;

    m_schemas_isValid = ::Ezmaxapi::fromJsonValue(m_schemas, json[QString("schemas")]);
    m_schemas_isSet = !json[QString("schemas")].isNull() && m_schemas_isValid;

    m_resources_isValid = ::Ezmaxapi::fromJsonValue(m_resources, json[QString("Resources")]);
    m_resources_isSet = !json[QString("Resources")].isNull() && m_resources_isValid;
}

QString Scim_UserList::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Scim_UserList::asJsonObject() const {
    QJsonObject obj;
    if (m_total_results_isSet) {
        obj.insert(QString("totalResults"), ::Ezmaxapi::toJsonValue(m_total_results));
    }
    if (m_items_per_page_isSet) {
        obj.insert(QString("itemsPerPage"), ::Ezmaxapi::toJsonValue(m_items_per_page));
    }
    if (m_start_index_isSet) {
        obj.insert(QString("startIndex"), ::Ezmaxapi::toJsonValue(m_start_index));
    }
    if (m_schemas.size() > 0) {
        obj.insert(QString("schemas"), ::Ezmaxapi::toJsonValue(m_schemas));
    }
    if (m_resources.size() > 0) {
        obj.insert(QString("Resources"), ::Ezmaxapi::toJsonValue(m_resources));
    }
    return obj;
}

qint32 Scim_UserList::getTotalResults() const {
    return m_total_results;
}
void Scim_UserList::setTotalResults(const qint32 &total_results) {
    m_total_results = total_results;
    m_total_results_isSet = true;
}

bool Scim_UserList::is_total_results_Set() const{
    return m_total_results_isSet;
}

bool Scim_UserList::is_total_results_Valid() const{
    return m_total_results_isValid;
}

qint32 Scim_UserList::getItemsPerPage() const {
    return m_items_per_page;
}
void Scim_UserList::setItemsPerPage(const qint32 &items_per_page) {
    m_items_per_page = items_per_page;
    m_items_per_page_isSet = true;
}

bool Scim_UserList::is_items_per_page_Set() const{
    return m_items_per_page_isSet;
}

bool Scim_UserList::is_items_per_page_Valid() const{
    return m_items_per_page_isValid;
}

qint32 Scim_UserList::getStartIndex() const {
    return m_start_index;
}
void Scim_UserList::setStartIndex(const qint32 &start_index) {
    m_start_index = start_index;
    m_start_index_isSet = true;
}

bool Scim_UserList::is_start_index_Set() const{
    return m_start_index_isSet;
}

bool Scim_UserList::is_start_index_Valid() const{
    return m_start_index_isValid;
}

QList<QString> Scim_UserList::getSchemas() const {
    return m_schemas;
}
void Scim_UserList::setSchemas(const QList<QString> &schemas) {
    m_schemas = schemas;
    m_schemas_isSet = true;
}

bool Scim_UserList::is_schemas_Set() const{
    return m_schemas_isSet;
}

bool Scim_UserList::is_schemas_Valid() const{
    return m_schemas_isValid;
}

QList<Scim_User> Scim_UserList::getResources() const {
    return m_resources;
}
void Scim_UserList::setResources(const QList<Scim_User> &resources) {
    m_resources = resources;
    m_resources_isSet = true;
}

bool Scim_UserList::is_resources_Set() const{
    return m_resources_isSet;
}

bool Scim_UserList::is_resources_Valid() const{
    return m_resources_isValid;
}

bool Scim_UserList::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_results_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_items_per_page_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_index_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_schemas.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_resources.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Scim_UserList::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace Ezmaxapi
