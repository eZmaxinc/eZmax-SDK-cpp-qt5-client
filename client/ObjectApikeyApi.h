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

#ifndef _ObjectApikeyApi_H
#define _ObjectApikeyApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Apikey_createObject_v2_Request.h"
#include "Apikey_createObject_v2_Response.h"
#include "Apikey_editObject_v1_Request.h"
#include "Apikey_editObject_v1_Response.h"
#include "Apikey_editPermissions_v1_Request.h"
#include "Apikey_editPermissions_v1_Response.h"
#include "Apikey_generateDelegatedCredentials_v1_Request.h"
#include "Apikey_generateDelegatedCredentials_v1_Response.h"
#include "Apikey_getCors_v1_Response.h"
#include "Apikey_getList_v1_Response.h"
#include "Apikey_getObject_v2_Response.h"
#include "Apikey_getPermissions_v1_Response.h"
#include "Apikey_getSubnets_v1_Response.h"
#include "Apikey_regenerate_v1_Request.h"
#include "Apikey_regenerate_v1_Response.h"
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

class ObjectApikeyApi : public QObject {
    Q_OBJECT

public:
    ObjectApikeyApi(const int timeOut = 0);
    ~ObjectApikeyApi();

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
    * @param[in]  apikey_create_object_v2_request Apikey_createObject_v2_Request [required]
    */
    virtual void apikeyCreateObjectV2(const Apikey_createObject_v2_Request &apikey_create_object_v2_request);

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    * @param[in]  apikey_edit_object_v1_request Apikey_editObject_v1_Request [required]
    */
    virtual void apikeyEditObjectV1(const qint32 &pki_apikey_id, const Apikey_editObject_v1_Request &apikey_edit_object_v1_request);

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    * @param[in]  apikey_edit_permissions_v1_request Apikey_editPermissions_v1_Request [required]
    */
    virtual void apikeyEditPermissionsV1(const qint32 &pki_apikey_id, const Apikey_editPermissions_v1_Request &apikey_edit_permissions_v1_request);

    /**
    * @param[in]  apikey_generate_delegated_credentials_v1_request Apikey_generateDelegatedCredentials_v1_Request [required]
    */
    virtual void apikeyGenerateDelegatedCredentialsV1(const Apikey_generateDelegatedCredentials_v1_Request &apikey_generate_delegated_credentials_v1_request);

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    */
    virtual void apikeyGetCorsV1(const qint32 &pki_apikey_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void apikeyGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    */
    virtual void apikeyGetObjectV2(const qint32 &pki_apikey_id);

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    */
    virtual void apikeyGetPermissionsV1(const qint32 &pki_apikey_id);

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    */
    virtual void apikeyGetSubnetsV1(const qint32 &pki_apikey_id);

    /**
    * @param[in]  pki_apikey_id qint32 [required]
    * @param[in]  apikey_regenerate_v1_request Apikey_regenerate_v1_Request [required]
    */
    virtual void apikeyRegenerateV1(const qint32 &pki_apikey_id, const Apikey_regenerate_v1_Request &apikey_regenerate_v1_request);


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

    void apikeyCreateObjectV2Callback(HttpRequestWorker *worker);
    void apikeyEditObjectV1Callback(HttpRequestWorker *worker);
    void apikeyEditPermissionsV1Callback(HttpRequestWorker *worker);
    void apikeyGenerateDelegatedCredentialsV1Callback(HttpRequestWorker *worker);
    void apikeyGetCorsV1Callback(HttpRequestWorker *worker);
    void apikeyGetListV1Callback(HttpRequestWorker *worker);
    void apikeyGetObjectV2Callback(HttpRequestWorker *worker);
    void apikeyGetPermissionsV1Callback(HttpRequestWorker *worker);
    void apikeyGetSubnetsV1Callback(HttpRequestWorker *worker);
    void apikeyRegenerateV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void apikeyCreateObjectV2Signal(Apikey_createObject_v2_Response summary);
    void apikeyEditObjectV1Signal(Apikey_editObject_v1_Response summary);
    void apikeyEditPermissionsV1Signal(Apikey_editPermissions_v1_Response summary);
    void apikeyGenerateDelegatedCredentialsV1Signal(Apikey_generateDelegatedCredentials_v1_Response summary);
    void apikeyGetCorsV1Signal(Apikey_getCors_v1_Response summary);
    void apikeyGetListV1Signal(Apikey_getList_v1_Response summary);
    void apikeyGetObjectV2Signal(Apikey_getObject_v2_Response summary);
    void apikeyGetPermissionsV1Signal(Apikey_getPermissions_v1_Response summary);
    void apikeyGetSubnetsV1Signal(Apikey_getSubnets_v1_Response summary);
    void apikeyRegenerateV1Signal(Apikey_regenerate_v1_Response summary);


    void apikeyCreateObjectV2SignalFull(HttpRequestWorker *worker, Apikey_createObject_v2_Response summary);
    void apikeyEditObjectV1SignalFull(HttpRequestWorker *worker, Apikey_editObject_v1_Response summary);
    void apikeyEditPermissionsV1SignalFull(HttpRequestWorker *worker, Apikey_editPermissions_v1_Response summary);
    void apikeyGenerateDelegatedCredentialsV1SignalFull(HttpRequestWorker *worker, Apikey_generateDelegatedCredentials_v1_Response summary);
    void apikeyGetCorsV1SignalFull(HttpRequestWorker *worker, Apikey_getCors_v1_Response summary);
    void apikeyGetListV1SignalFull(HttpRequestWorker *worker, Apikey_getList_v1_Response summary);
    void apikeyGetObjectV2SignalFull(HttpRequestWorker *worker, Apikey_getObject_v2_Response summary);
    void apikeyGetPermissionsV1SignalFull(HttpRequestWorker *worker, Apikey_getPermissions_v1_Response summary);
    void apikeyGetSubnetsV1SignalFull(HttpRequestWorker *worker, Apikey_getSubnets_v1_Response summary);
    void apikeyRegenerateV1SignalFull(HttpRequestWorker *worker, Apikey_regenerate_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use apikeyCreateObjectV2SignalError() instead")
    void apikeyCreateObjectV2SignalE(Apikey_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyCreateObjectV2SignalError(Apikey_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyEditObjectV1SignalError() instead")
    void apikeyEditObjectV1SignalE(Apikey_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyEditObjectV1SignalError(Apikey_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyEditPermissionsV1SignalError() instead")
    void apikeyEditPermissionsV1SignalE(Apikey_editPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyEditPermissionsV1SignalError(Apikey_editPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGenerateDelegatedCredentialsV1SignalError() instead")
    void apikeyGenerateDelegatedCredentialsV1SignalE(Apikey_generateDelegatedCredentials_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGenerateDelegatedCredentialsV1SignalError(Apikey_generateDelegatedCredentials_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetCorsV1SignalError() instead")
    void apikeyGetCorsV1SignalE(Apikey_getCors_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetCorsV1SignalError(Apikey_getCors_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetListV1SignalError() instead")
    void apikeyGetListV1SignalE(Apikey_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetListV1SignalError(Apikey_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetObjectV2SignalError() instead")
    void apikeyGetObjectV2SignalE(Apikey_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetObjectV2SignalError(Apikey_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetPermissionsV1SignalError() instead")
    void apikeyGetPermissionsV1SignalE(Apikey_getPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetPermissionsV1SignalError(Apikey_getPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetSubnetsV1SignalError() instead")
    void apikeyGetSubnetsV1SignalE(Apikey_getSubnets_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetSubnetsV1SignalError(Apikey_getSubnets_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyRegenerateV1SignalError() instead")
    void apikeyRegenerateV1SignalE(Apikey_regenerate_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyRegenerateV1SignalError(Apikey_regenerate_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use apikeyCreateObjectV2SignalErrorFull() instead")
    void apikeyCreateObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyCreateObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyEditObjectV1SignalErrorFull() instead")
    void apikeyEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyEditPermissionsV1SignalErrorFull() instead")
    void apikeyEditPermissionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyEditPermissionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGenerateDelegatedCredentialsV1SignalErrorFull() instead")
    void apikeyGenerateDelegatedCredentialsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGenerateDelegatedCredentialsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetCorsV1SignalErrorFull() instead")
    void apikeyGetCorsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetCorsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetListV1SignalErrorFull() instead")
    void apikeyGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetObjectV2SignalErrorFull() instead")
    void apikeyGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetPermissionsV1SignalErrorFull() instead")
    void apikeyGetPermissionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetPermissionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyGetSubnetsV1SignalErrorFull() instead")
    void apikeyGetSubnetsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyGetSubnetsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use apikeyRegenerateV1SignalErrorFull() instead")
    void apikeyRegenerateV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void apikeyRegenerateV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
