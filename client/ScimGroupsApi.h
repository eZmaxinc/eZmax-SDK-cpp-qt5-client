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

#ifndef _ScimGroupsApi_H
#define _ScimGroupsApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Scim_Group.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ScimGroupsApi : public QObject {
    Q_OBJECT

public:
    ScimGroupsApi(const int timeOut = 0);
    ~ScimGroupsApi();

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
    * @param[in]  scim_group Scim_Group [required]
    */
    virtual void groupsCreateObjectScimV2(const Scim_Group &scim_group);

    /**
    * @param[in]  group_id QString [required]
    */
    virtual void groupsDeleteObjectScimV2(const QString &group_id);

    /**
    * @param[in]  group_id QString [required]
    * @param[in]  scim_group Scim_Group [required]
    */
    virtual void groupsEditObjectScimV2(const QString &group_id, const Scim_Group &scim_group);

    /**
    * @param[in]  filter QString [optional]
    */
    virtual void groupsGetListScimV2(const ::Ezmaxapi::OptionalParam<QString> &filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  group_id QString [required]
    */
    virtual void groupsGetObjectScimV2(const QString &group_id);


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

    void groupsCreateObjectScimV2Callback(HttpRequestWorker *worker);
    void groupsDeleteObjectScimV2Callback(HttpRequestWorker *worker);
    void groupsEditObjectScimV2Callback(HttpRequestWorker *worker);
    void groupsGetListScimV2Callback(HttpRequestWorker *worker);
    void groupsGetObjectScimV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void groupsCreateObjectScimV2Signal(Scim_Group summary);
    void groupsDeleteObjectScimV2Signal();
    void groupsEditObjectScimV2Signal(Scim_Group summary);
    void groupsGetListScimV2Signal(Scim_Group summary);
    void groupsGetObjectScimV2Signal(Scim_Group summary);


    void groupsCreateObjectScimV2SignalFull(HttpRequestWorker *worker, Scim_Group summary);
    void groupsDeleteObjectScimV2SignalFull(HttpRequestWorker *worker);
    void groupsEditObjectScimV2SignalFull(HttpRequestWorker *worker, Scim_Group summary);
    void groupsGetListScimV2SignalFull(HttpRequestWorker *worker, Scim_Group summary);
    void groupsGetObjectScimV2SignalFull(HttpRequestWorker *worker, Scim_Group summary);

    Q_DECL_DEPRECATED_X("Use groupsCreateObjectScimV2SignalError() instead")
    void groupsCreateObjectScimV2SignalE(Scim_Group summary, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsCreateObjectScimV2SignalError(Scim_Group summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsDeleteObjectScimV2SignalError() instead")
    void groupsDeleteObjectScimV2SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void groupsDeleteObjectScimV2SignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsEditObjectScimV2SignalError() instead")
    void groupsEditObjectScimV2SignalE(Scim_Group summary, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsEditObjectScimV2SignalError(Scim_Group summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsGetListScimV2SignalError() instead")
    void groupsGetListScimV2SignalE(Scim_Group summary, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsGetListScimV2SignalError(Scim_Group summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsGetObjectScimV2SignalError() instead")
    void groupsGetObjectScimV2SignalE(Scim_Group summary, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsGetObjectScimV2SignalError(Scim_Group summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use groupsCreateObjectScimV2SignalErrorFull() instead")
    void groupsCreateObjectScimV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsCreateObjectScimV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsDeleteObjectScimV2SignalErrorFull() instead")
    void groupsDeleteObjectScimV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsDeleteObjectScimV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsEditObjectScimV2SignalErrorFull() instead")
    void groupsEditObjectScimV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsEditObjectScimV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsGetListScimV2SignalErrorFull() instead")
    void groupsGetListScimV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsGetListScimV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use groupsGetObjectScimV2SignalErrorFull() instead")
    void groupsGetObjectScimV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void groupsGetObjectScimV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
