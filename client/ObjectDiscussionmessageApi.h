/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _ObjectDiscussionmessageApi_H
#define _ObjectDiscussionmessageApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Discussionmessage_createObject_v1_Request.h"
#include "Discussionmessage_createObject_v1_Response.h"
#include "Discussionmessage_deleteObject_v1_Response.h"
#include "Discussionmessage_patchObject_v1_Request.h"
#include "Discussionmessage_patchObject_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectDiscussionmessageApi : public QObject {
    Q_OBJECT

public:
    ObjectDiscussionmessageApi(const int timeOut = 0);
    ~ObjectDiscussionmessageApi();

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
    * @param[in]  discussionmessage_create_object_v1_request Discussionmessage_createObject_v1_Request [required]
    */
    virtual void discussionmessageCreateObjectV1(const Discussionmessage_createObject_v1_Request &discussionmessage_create_object_v1_request);

    /**
    * @param[in]  pki_discussionmessage_id qint32 [required]
    */
    virtual void discussionmessageDeleteObjectV1(const qint32 &pki_discussionmessage_id);

    /**
    * @param[in]  pki_discussionmessage_id qint32 [required]
    * @param[in]  discussionmessage_patch_object_v1_request Discussionmessage_patchObject_v1_Request [required]
    */
    virtual void discussionmessagePatchObjectV1(const qint32 &pki_discussionmessage_id, const Discussionmessage_patchObject_v1_Request &discussionmessage_patch_object_v1_request);


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

    void discussionmessageCreateObjectV1Callback(HttpRequestWorker *worker);
    void discussionmessageDeleteObjectV1Callback(HttpRequestWorker *worker);
    void discussionmessagePatchObjectV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void discussionmessageCreateObjectV1Signal(Discussionmessage_createObject_v1_Response summary);
    void discussionmessageDeleteObjectV1Signal(Discussionmessage_deleteObject_v1_Response summary);
    void discussionmessagePatchObjectV1Signal(Discussionmessage_patchObject_v1_Response summary);


    void discussionmessageCreateObjectV1SignalFull(HttpRequestWorker *worker, Discussionmessage_createObject_v1_Response summary);
    void discussionmessageDeleteObjectV1SignalFull(HttpRequestWorker *worker, Discussionmessage_deleteObject_v1_Response summary);
    void discussionmessagePatchObjectV1SignalFull(HttpRequestWorker *worker, Discussionmessage_patchObject_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use discussionmessageCreateObjectV1SignalError() instead")
    void discussionmessageCreateObjectV1SignalE(Discussionmessage_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmessageCreateObjectV1SignalError(Discussionmessage_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use discussionmessageDeleteObjectV1SignalError() instead")
    void discussionmessageDeleteObjectV1SignalE(Discussionmessage_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmessageDeleteObjectV1SignalError(Discussionmessage_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use discussionmessagePatchObjectV1SignalError() instead")
    void discussionmessagePatchObjectV1SignalE(Discussionmessage_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmessagePatchObjectV1SignalError(Discussionmessage_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use discussionmessageCreateObjectV1SignalErrorFull() instead")
    void discussionmessageCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmessageCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use discussionmessageDeleteObjectV1SignalErrorFull() instead")
    void discussionmessageDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmessageDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use discussionmessagePatchObjectV1SignalErrorFull() instead")
    void discussionmessagePatchObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void discussionmessagePatchObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
