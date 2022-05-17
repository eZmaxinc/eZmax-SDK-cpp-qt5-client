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

#ifndef OAI_OAIModuleEzsignApi_H
#define OAI_OAIModuleEzsignApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIEzsign_suggestSigners_v1_Response.h"
#include "OAIEzsign_suggestTemplates_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIModuleEzsignApi : public QObject {
    Q_OBJECT

public:
    OAIModuleEzsignApi(const int timeOut = 0);
    ~OAIModuleEzsignApi();

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
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);


    void ezsignSuggestSignersV1();

    /**
    * @param[in]  fki_ezsignfoldertype_id qint32 [optional]
    */
    void ezsignSuggestTemplatesV1(const ::OpenAPI::OptionalParam<qint32> &fki_ezsignfoldertype_id = ::OpenAPI::OptionalParam<qint32>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
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
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void ezsignSuggestSignersV1Callback(OAIHttpRequestWorker *worker);
    void ezsignSuggestTemplatesV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignSuggestSignersV1Signal(OAIEzsign_suggestSigners_v1_Response summary);
    void ezsignSuggestTemplatesV1Signal(OAIEzsign_suggestTemplates_v1_Response summary);

    void ezsignSuggestSignersV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsign_suggestSigners_v1_Response summary);
    void ezsignSuggestTemplatesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsign_suggestTemplates_v1_Response summary);

    void ezsignSuggestSignersV1SignalE(OAIEzsign_suggestSigners_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignSuggestTemplatesV1SignalE(OAIEzsign_suggestTemplates_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignSuggestSignersV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignSuggestTemplatesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
