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

#ifndef _GlobalEzmaxcustomerApi_H
#define _GlobalEzmaxcustomerApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Global_ezmaxcustomer_getConfiguration_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class GlobalEzmaxcustomerApi : public QObject {
    Q_OBJECT

public:
    GlobalEzmaxcustomerApi(const int timeOut = 0);
    ~GlobalEzmaxcustomerApi();

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
    * @param[in]  pks_ezmaxcustomer_code QString [required]
    */
    void globalEzmaxcustomerGetConfigurationV1(const QString &pks_ezmaxcustomer_code);


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

    void globalEzmaxcustomerGetConfigurationV1Callback(HttpRequestWorker *worker);

signals:

    void globalEzmaxcustomerGetConfigurationV1Signal(Global_ezmaxcustomer_getConfiguration_v1_Response summary);

    void globalEzmaxcustomerGetConfigurationV1SignalFull(HttpRequestWorker *worker, Global_ezmaxcustomer_getConfiguration_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use globalEzmaxcustomerGetConfigurationV1SignalError() instead")
    void globalEzmaxcustomerGetConfigurationV1SignalE(Global_ezmaxcustomer_getConfiguration_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void globalEzmaxcustomerGetConfigurationV1SignalError(Global_ezmaxcustomer_getConfiguration_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use globalEzmaxcustomerGetConfigurationV1SignalErrorFull() instead")
    void globalEzmaxcustomerGetConfigurationV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void globalEzmaxcustomerGetConfigurationV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
