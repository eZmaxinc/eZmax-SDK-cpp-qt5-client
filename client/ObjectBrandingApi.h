/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _ObjectBrandingApi_H
#define _ObjectBrandingApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Branding_createObject_v1_Request.h"
#include "Branding_createObject_v1_Response.h"
#include "Branding_editObject_v1_Request.h"
#include "Branding_editObject_v1_Response.h"
#include "Branding_getAutocomplete_v2_Response.h"
#include "Branding_getList_v1_Response.h"
#include "Branding_getObject_v2_Response.h"
#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectBrandingApi : public QObject {
    Q_OBJECT

public:
    ObjectBrandingApi(const int timeOut = 0);
    ~ObjectBrandingApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, ServerVariable> &variables = QMap<QString, ServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, ServerVariable> &variables =  QMap<QString, ServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, ServerVariable> &variables =  QMap<QString, ServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  branding_create_object_v1_request Branding_createObject_v1_Request [required]
    */
    void brandingCreateObjectV1(const Branding_createObject_v1_Request &branding_create_object_v1_request);

    /**
    * @param[in]  pki_branding_id qint32 [required]
    * @param[in]  branding_edit_object_v1_request Branding_editObject_v1_Request [required]
    */
    void brandingEditObjectV1(const qint32 &pki_branding_id, const Branding_editObject_v1_Request &branding_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    void brandingGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void brandingGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_branding_id qint32 [required]
    */
    void brandingGetObjectV2(const qint32 &pki_branding_id);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<ServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    HttpRequestInput _latestInput;
    HttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void brandingCreateObjectV1Callback(HttpRequestWorker *worker);
    void brandingEditObjectV1Callback(HttpRequestWorker *worker);
    void brandingGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void brandingGetListV1Callback(HttpRequestWorker *worker);
    void brandingGetObjectV2Callback(HttpRequestWorker *worker);

signals:

    void brandingCreateObjectV1Signal(Branding_createObject_v1_Response summary);
    void brandingEditObjectV1Signal(Branding_editObject_v1_Response summary);
    void brandingGetAutocompleteV2Signal(Branding_getAutocomplete_v2_Response summary);
    void brandingGetListV1Signal(Branding_getList_v1_Response summary);
    void brandingGetObjectV2Signal(Branding_getObject_v2_Response summary);

    void brandingCreateObjectV1SignalFull(HttpRequestWorker *worker, Branding_createObject_v1_Response summary);
    void brandingEditObjectV1SignalFull(HttpRequestWorker *worker, Branding_editObject_v1_Response summary);
    void brandingGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Branding_getAutocomplete_v2_Response summary);
    void brandingGetListV1SignalFull(HttpRequestWorker *worker, Branding_getList_v1_Response summary);
    void brandingGetObjectV2SignalFull(HttpRequestWorker *worker, Branding_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use brandingCreateObjectV1SignalError() instead")
    void brandingCreateObjectV1SignalE(Branding_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingCreateObjectV1SignalError(Branding_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingEditObjectV1SignalError() instead")
    void brandingEditObjectV1SignalE(Branding_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingEditObjectV1SignalError(Branding_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingGetAutocompleteV2SignalError() instead")
    void brandingGetAutocompleteV2SignalE(Branding_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingGetAutocompleteV2SignalError(Branding_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingGetListV1SignalError() instead")
    void brandingGetListV1SignalE(Branding_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingGetListV1SignalError(Branding_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingGetObjectV2SignalError() instead")
    void brandingGetObjectV2SignalE(Branding_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingGetObjectV2SignalError(Branding_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use brandingCreateObjectV1SignalErrorFull() instead")
    void brandingCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingEditObjectV1SignalErrorFull() instead")
    void brandingEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingGetAutocompleteV2SignalErrorFull() instead")
    void brandingGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingGetListV1SignalErrorFull() instead")
    void brandingGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use brandingGetObjectV2SignalErrorFull() instead")
    void brandingGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void brandingGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
