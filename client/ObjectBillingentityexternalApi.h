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

#ifndef _ObjectBillingentityexternalApi_H
#define _ObjectBillingentityexternalApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Billingentityexternal_generateFederationToken_v1_Request.h"
#include "Billingentityexternal_generateFederationToken_v1_Response.h"
#include "Billingentityexternal_getAutocomplete_v2_Response.h"
#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectBillingentityexternalApi : public QObject {
    Q_OBJECT

public:
    ObjectBillingentityexternalApi(const int timeOut = 0);
    ~ObjectBillingentityexternalApi();

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
    * @param[in]  pki_billingentityexternal_id qint32 [required]
    * @param[in]  billingentityexternal_generate_federation_token_v1_request Billingentityexternal_generateFederationToken_v1_Request [required]
    */
    virtual void billingentityexternalGenerateFederationTokenV1(const qint32 &pki_billingentityexternal_id, const Billingentityexternal_generateFederationToken_v1_Request &billingentityexternal_generate_federation_token_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void billingentityexternalGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());


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

    void billingentityexternalGenerateFederationTokenV1Callback(HttpRequestWorker *worker);
    void billingentityexternalGetAutocompleteV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void billingentityexternalGenerateFederationTokenV1Signal(Billingentityexternal_generateFederationToken_v1_Response summary);
    void billingentityexternalGetAutocompleteV2Signal(Billingentityexternal_getAutocomplete_v2_Response summary);


    void billingentityexternalGenerateFederationTokenV1SignalFull(HttpRequestWorker *worker, Billingentityexternal_generateFederationToken_v1_Response summary);
    void billingentityexternalGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Billingentityexternal_getAutocomplete_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use billingentityexternalGenerateFederationTokenV1SignalError() instead")
    void billingentityexternalGenerateFederationTokenV1SignalE(Billingentityexternal_generateFederationToken_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityexternalGenerateFederationTokenV1SignalError(Billingentityexternal_generateFederationToken_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityexternalGetAutocompleteV2SignalError() instead")
    void billingentityexternalGetAutocompleteV2SignalE(Billingentityexternal_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityexternalGetAutocompleteV2SignalError(Billingentityexternal_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use billingentityexternalGenerateFederationTokenV1SignalErrorFull() instead")
    void billingentityexternalGenerateFederationTokenV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityexternalGenerateFederationTokenV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use billingentityexternalGetAutocompleteV2SignalErrorFull() instead")
    void billingentityexternalGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void billingentityexternalGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
