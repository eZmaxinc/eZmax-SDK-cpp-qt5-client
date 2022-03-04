/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIModuleListApi_H
#define OAI_OAIModuleListApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIList_getListpresentation_v1_Response.h"
#include "OAIList_saveListpresentation_v1_Request.h"
#include "OAIList_saveListpresentation_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIModuleListApi : public QObject {
    Q_OBJECT

public:
    OAIModuleListApi(const int timeOut = 0);
    ~OAIModuleListApi();

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

    /**
    * @param[in]  s_list_name QString [required]
    */
    void listGetListpresentationV1(const QString &s_list_name);

    /**
    * @param[in]  s_list_name QString [required]
    * @param[in]  oai_list_save_listpresentation_v1_request OAIList_saveListpresentation_v1_Request [required]
    */
    void listSaveListpresentationV1(const QString &s_list_name, const OAIList_saveListpresentation_v1_Request &oai_list_save_listpresentation_v1_request);


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

    void listGetListpresentationV1Callback(OAIHttpRequestWorker *worker);
    void listSaveListpresentationV1Callback(OAIHttpRequestWorker *worker);

signals:

    void listGetListpresentationV1Signal(OAIList_getListpresentation_v1_Response summary);
    void listSaveListpresentationV1Signal(OAIList_saveListpresentation_v1_Response summary);

    void listGetListpresentationV1SignalFull(OAIHttpRequestWorker *worker, OAIList_getListpresentation_v1_Response summary);
    void listSaveListpresentationV1SignalFull(OAIHttpRequestWorker *worker, OAIList_saveListpresentation_v1_Response summary);

    void listGetListpresentationV1SignalE(OAIList_getListpresentation_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void listSaveListpresentationV1SignalE(OAIList_saveListpresentation_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void listGetListpresentationV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void listSaveListpresentationV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
