/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIScim_ServiceProviderConfig.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIScim_ServiceProviderConfig::OAIScim_ServiceProviderConfig(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIScim_ServiceProviderConfig::OAIScim_ServiceProviderConfig() {
    this->initializeModel();
}

OAIScim_ServiceProviderConfig::~OAIScim_ServiceProviderConfig() {}

void OAIScim_ServiceProviderConfig::initializeModel() {

    m_authentication_schemes_isSet = false;
    m_authentication_schemes_isValid = false;

    m_bulk_isSet = false;
    m_bulk_isValid = false;

    m_change_password_isSet = false;
    m_change_password_isValid = false;

    m_documentation_uri_isSet = false;
    m_documentation_uri_isValid = false;

    m_etag_isSet = false;
    m_etag_isValid = false;

    m_filter_isSet = false;
    m_filter_isValid = false;

    m_patch_isSet = false;
    m_patch_isValid = false;

    m_sort_isSet = false;
    m_sort_isValid = false;
}

void OAIScim_ServiceProviderConfig::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIScim_ServiceProviderConfig::fromJsonObject(QJsonObject json) {

    m_authentication_schemes_isValid = ::OpenAPI::fromJsonValue(m_authentication_schemes, json[QString("authenticationSchemes")]);
    m_authentication_schemes_isSet = !json[QString("authenticationSchemes")].isNull() && m_authentication_schemes_isValid;

    m_bulk_isValid = ::OpenAPI::fromJsonValue(m_bulk, json[QString("bulk")]);
    m_bulk_isSet = !json[QString("bulk")].isNull() && m_bulk_isValid;

    m_change_password_isValid = ::OpenAPI::fromJsonValue(m_change_password, json[QString("changePassword")]);
    m_change_password_isSet = !json[QString("changePassword")].isNull() && m_change_password_isValid;

    m_documentation_uri_isValid = ::OpenAPI::fromJsonValue(m_documentation_uri, json[QString("documentationUri")]);
    m_documentation_uri_isSet = !json[QString("documentationUri")].isNull() && m_documentation_uri_isValid;

    m_etag_isValid = ::OpenAPI::fromJsonValue(m_etag, json[QString("etag")]);
    m_etag_isSet = !json[QString("etag")].isNull() && m_etag_isValid;

    m_filter_isValid = ::OpenAPI::fromJsonValue(m_filter, json[QString("filter")]);
    m_filter_isSet = !json[QString("filter")].isNull() && m_filter_isValid;

    m_patch_isValid = ::OpenAPI::fromJsonValue(m_patch, json[QString("patch")]);
    m_patch_isSet = !json[QString("patch")].isNull() && m_patch_isValid;

    m_sort_isValid = ::OpenAPI::fromJsonValue(m_sort, json[QString("sort")]);
    m_sort_isSet = !json[QString("sort")].isNull() && m_sort_isValid;
}

QString OAIScim_ServiceProviderConfig::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIScim_ServiceProviderConfig::asJsonObject() const {
    QJsonObject obj;
    if (m_authentication_schemes.size() > 0) {
        obj.insert(QString("authenticationSchemes"), ::OpenAPI::toJsonValue(m_authentication_schemes));
    }
    if (m_bulk.isSet()) {
        obj.insert(QString("bulk"), ::OpenAPI::toJsonValue(m_bulk));
    }
    if (m_change_password.isSet()) {
        obj.insert(QString("changePassword"), ::OpenAPI::toJsonValue(m_change_password));
    }
    if (m_documentation_uri_isSet) {
        obj.insert(QString("documentationUri"), ::OpenAPI::toJsonValue(m_documentation_uri));
    }
    if (m_etag.isSet()) {
        obj.insert(QString("etag"), ::OpenAPI::toJsonValue(m_etag));
    }
    if (m_filter.isSet()) {
        obj.insert(QString("filter"), ::OpenAPI::toJsonValue(m_filter));
    }
    if (m_patch.isSet()) {
        obj.insert(QString("patch"), ::OpenAPI::toJsonValue(m_patch));
    }
    if (m_sort.isSet()) {
        obj.insert(QString("sort"), ::OpenAPI::toJsonValue(m_sort));
    }
    return obj;
}

QList<OAIScim_AuthenticationScheme> OAIScim_ServiceProviderConfig::getAuthenticationSchemes() const {
    return m_authentication_schemes;
}
void OAIScim_ServiceProviderConfig::setAuthenticationSchemes(const QList<OAIScim_AuthenticationScheme> &authentication_schemes) {
    m_authentication_schemes = authentication_schemes;
    m_authentication_schemes_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_authentication_schemes_Set() const{
    return m_authentication_schemes_isSet;
}

bool OAIScim_ServiceProviderConfig::is_authentication_schemes_Valid() const{
    return m_authentication_schemes_isValid;
}

OAIScim_ServiceProviderConfig_bulk OAIScim_ServiceProviderConfig::getBulk() const {
    return m_bulk;
}
void OAIScim_ServiceProviderConfig::setBulk(const OAIScim_ServiceProviderConfig_bulk &bulk) {
    m_bulk = bulk;
    m_bulk_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_bulk_Set() const{
    return m_bulk_isSet;
}

bool OAIScim_ServiceProviderConfig::is_bulk_Valid() const{
    return m_bulk_isValid;
}

OAIScim_ServiceProviderConfig_changePassword OAIScim_ServiceProviderConfig::getChangePassword() const {
    return m_change_password;
}
void OAIScim_ServiceProviderConfig::setChangePassword(const OAIScim_ServiceProviderConfig_changePassword &change_password) {
    m_change_password = change_password;
    m_change_password_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_change_password_Set() const{
    return m_change_password_isSet;
}

bool OAIScim_ServiceProviderConfig::is_change_password_Valid() const{
    return m_change_password_isValid;
}

QString OAIScim_ServiceProviderConfig::getDocumentationUri() const {
    return m_documentation_uri;
}
void OAIScim_ServiceProviderConfig::setDocumentationUri(const QString &documentation_uri) {
    m_documentation_uri = documentation_uri;
    m_documentation_uri_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_documentation_uri_Set() const{
    return m_documentation_uri_isSet;
}

bool OAIScim_ServiceProviderConfig::is_documentation_uri_Valid() const{
    return m_documentation_uri_isValid;
}

OAIScim_ServiceProviderConfig_etag OAIScim_ServiceProviderConfig::getEtag() const {
    return m_etag;
}
void OAIScim_ServiceProviderConfig::setEtag(const OAIScim_ServiceProviderConfig_etag &etag) {
    m_etag = etag;
    m_etag_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_etag_Set() const{
    return m_etag_isSet;
}

bool OAIScim_ServiceProviderConfig::is_etag_Valid() const{
    return m_etag_isValid;
}

OAIScim_ServiceProviderConfig_filter OAIScim_ServiceProviderConfig::getFilter() const {
    return m_filter;
}
void OAIScim_ServiceProviderConfig::setFilter(const OAIScim_ServiceProviderConfig_filter &filter) {
    m_filter = filter;
    m_filter_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_filter_Set() const{
    return m_filter_isSet;
}

bool OAIScim_ServiceProviderConfig::is_filter_Valid() const{
    return m_filter_isValid;
}

OAIScim_ServiceProviderConfig_patch OAIScim_ServiceProviderConfig::getPatch() const {
    return m_patch;
}
void OAIScim_ServiceProviderConfig::setPatch(const OAIScim_ServiceProviderConfig_patch &patch) {
    m_patch = patch;
    m_patch_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_patch_Set() const{
    return m_patch_isSet;
}

bool OAIScim_ServiceProviderConfig::is_patch_Valid() const{
    return m_patch_isValid;
}

OAIScim_ServiceProviderConfig_sort OAIScim_ServiceProviderConfig::getSort() const {
    return m_sort;
}
void OAIScim_ServiceProviderConfig::setSort(const OAIScim_ServiceProviderConfig_sort &sort) {
    m_sort = sort;
    m_sort_isSet = true;
}

bool OAIScim_ServiceProviderConfig::is_sort_Set() const{
    return m_sort_isSet;
}

bool OAIScim_ServiceProviderConfig::is_sort_Valid() const{
    return m_sort_isValid;
}

bool OAIScim_ServiceProviderConfig::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_authentication_schemes.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_bulk.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_change_password.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_documentation_uri_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_etag.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_filter.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_patch.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_sort.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIScim_ServiceProviderConfig::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_authentication_schemes_isValid && m_bulk_isValid && m_change_password_isValid && m_documentation_uri_isValid && m_etag_isValid && m_filter_isValid && m_patch_isValid && m_sort_isValid && true;
}

} // namespace OpenAPI
