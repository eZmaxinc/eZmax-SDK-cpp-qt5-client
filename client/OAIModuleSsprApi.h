/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.3
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIModuleSsprApi_H
#define OAI_OAIModuleSsprApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAISspr_resetPasswordRequest_v1_Request.h"
#include "OAISspr_resetPassword_v1_Request.h"
#include "OAISspr_sendUsernames_v1_Request.h"
#include "OAISspr_unlockAccountRequest_v1_Request.h"
#include "OAISspr_unlockAccount_v1_Request.h"
#include "OAISspr_validateToken_v1_Request.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIModuleSsprApi : public QObject {
    Q_OBJECT

public:
    OAIModuleSsprApi(const int timeOut = 0);
    ~OAIModuleSsprApi();

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
    * @param[in]  oai_sspr_reset_password_request_v1_request OAISspr_resetPasswordRequest_v1_Request [required]
    */
    void ssprResetPasswordRequestV1(const OAISspr_resetPasswordRequest_v1_Request &oai_sspr_reset_password_request_v1_request);

    /**
    * @param[in]  oai_sspr_reset_password_v1_request OAISspr_resetPassword_v1_Request [required]
    */
    void ssprResetPasswordV1(const OAISspr_resetPassword_v1_Request &oai_sspr_reset_password_v1_request);

    /**
    * @param[in]  oai_sspr_send_usernames_v1_request OAISspr_sendUsernames_v1_Request [required]
    */
    void ssprSendUsernamesV1(const OAISspr_sendUsernames_v1_Request &oai_sspr_send_usernames_v1_request);

    /**
    * @param[in]  oai_sspr_unlock_account_request_v1_request OAISspr_unlockAccountRequest_v1_Request [required]
    */
    void ssprUnlockAccountRequestV1(const OAISspr_unlockAccountRequest_v1_Request &oai_sspr_unlock_account_request_v1_request);

    /**
    * @param[in]  oai_sspr_unlock_account_v1_request OAISspr_unlockAccount_v1_Request [required]
    */
    void ssprUnlockAccountV1(const OAISspr_unlockAccount_v1_Request &oai_sspr_unlock_account_v1_request);

    /**
    * @param[in]  oai_sspr_validate_token_v1_request OAISspr_validateToken_v1_Request [required]
    */
    void ssprValidateTokenV1(const OAISspr_validateToken_v1_Request &oai_sspr_validate_token_v1_request);


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

    void ssprResetPasswordRequestV1Callback(OAIHttpRequestWorker *worker);
    void ssprResetPasswordV1Callback(OAIHttpRequestWorker *worker);
    void ssprSendUsernamesV1Callback(OAIHttpRequestWorker *worker);
    void ssprUnlockAccountRequestV1Callback(OAIHttpRequestWorker *worker);
    void ssprUnlockAccountV1Callback(OAIHttpRequestWorker *worker);
    void ssprValidateTokenV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ssprResetPasswordRequestV1Signal();
    void ssprResetPasswordV1Signal();
    void ssprSendUsernamesV1Signal();
    void ssprUnlockAccountRequestV1Signal();
    void ssprUnlockAccountV1Signal();
    void ssprValidateTokenV1Signal();

    void ssprResetPasswordRequestV1SignalFull(OAIHttpRequestWorker *worker);
    void ssprResetPasswordV1SignalFull(OAIHttpRequestWorker *worker);
    void ssprSendUsernamesV1SignalFull(OAIHttpRequestWorker *worker);
    void ssprUnlockAccountRequestV1SignalFull(OAIHttpRequestWorker *worker);
    void ssprUnlockAccountV1SignalFull(OAIHttpRequestWorker *worker);
    void ssprValidateTokenV1SignalFull(OAIHttpRequestWorker *worker);

    void ssprResetPasswordRequestV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ssprResetPasswordV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ssprSendUsernamesV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ssprUnlockAccountRequestV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ssprUnlockAccountV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ssprValidateTokenV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void ssprResetPasswordRequestV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ssprResetPasswordV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ssprSendUsernamesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ssprUnlockAccountRequestV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ssprUnlockAccountV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ssprValidateTokenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
