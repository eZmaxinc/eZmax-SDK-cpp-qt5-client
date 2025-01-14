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

#ifndef _ObjectActivesessionApi_H
#define _ObjectActivesessionApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Activesession_generateFederationToken_v1_Request.h"
#include "Activesession_generateFederationToken_v1_Response.h"
#include "Activesession_getCurrent_v1_Response.h"
#include "Activesession_getList_v1_Response.h"
#include "Common_Response_Error.h"
#include "Common_Response_Redirect_sSecretquestionTextX.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectActivesessionApi : public QObject {
    Q_OBJECT

public:
    ObjectActivesessionApi(const int timeOut = 0);
    ~ObjectActivesessionApi();

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
    * @param[in]  activesession_generate_federation_token_v1_request Activesession_generateFederationToken_v1_Request [required]
    */
    virtual void activesessionGenerateFederationTokenV1(const Activesession_generateFederationToken_v1_Request &activesession_generate_federation_token_v1_request);


    virtual void activesessionGetCurrentV1();

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void activesessionGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());


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

    void activesessionGenerateFederationTokenV1Callback(HttpRequestWorker *worker);
    void activesessionGetCurrentV1Callback(HttpRequestWorker *worker);
    void activesessionGetListV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void activesessionGenerateFederationTokenV1Signal(Activesession_generateFederationToken_v1_Response summary);
    void activesessionGetCurrentV1Signal(Activesession_getCurrent_v1_Response summary);
    void activesessionGetListV1Signal(Activesession_getList_v1_Response summary);


    void activesessionGenerateFederationTokenV1SignalFull(HttpRequestWorker *worker, Activesession_generateFederationToken_v1_Response summary);
    void activesessionGetCurrentV1SignalFull(HttpRequestWorker *worker, Activesession_getCurrent_v1_Response summary);
    void activesessionGetListV1SignalFull(HttpRequestWorker *worker, Activesession_getList_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use activesessionGenerateFederationTokenV1SignalError() instead")
    void activesessionGenerateFederationTokenV1SignalE(Activesession_generateFederationToken_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void activesessionGenerateFederationTokenV1SignalError(Activesession_generateFederationToken_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use activesessionGetCurrentV1SignalError() instead")
    void activesessionGetCurrentV1SignalE(Activesession_getCurrent_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void activesessionGetCurrentV1SignalError(Activesession_getCurrent_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use activesessionGetListV1SignalError() instead")
    void activesessionGetListV1SignalE(Activesession_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void activesessionGetListV1SignalError(Activesession_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use activesessionGenerateFederationTokenV1SignalErrorFull() instead")
    void activesessionGenerateFederationTokenV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void activesessionGenerateFederationTokenV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use activesessionGetCurrentV1SignalErrorFull() instead")
    void activesessionGetCurrentV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void activesessionGetCurrentV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use activesessionGetListV1SignalErrorFull() instead")
    void activesessionGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void activesessionGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
