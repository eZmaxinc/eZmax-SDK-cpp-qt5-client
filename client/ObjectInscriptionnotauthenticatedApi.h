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

#ifndef _ObjectInscriptionnotauthenticatedApi_H
#define _ObjectInscriptionnotauthenticatedApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Inscriptionnotauthenticated_getCommunicationCount_v1_Response.h"
#include "Inscriptionnotauthenticated_getCommunicationList_v1_Response.h"
#include "Inscriptionnotauthenticated_getCommunicationrecipients_v1_Response.h"
#include "Inscriptionnotauthenticated_getCommunicationsenders_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectInscriptionnotauthenticatedApi : public QObject {
    Q_OBJECT

public:
    ObjectInscriptionnotauthenticatedApi(const int timeOut = 0);
    ~ObjectInscriptionnotauthenticatedApi();

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
    * @param[in]  pki_inscriptionnotauthenticated_id qint32 [required]
    */
    virtual void inscriptionnotauthenticatedGetCommunicationCountV1(const qint32 &pki_inscriptionnotauthenticated_id);

    /**
    * @param[in]  pki_inscriptionnotauthenticated_id qint32 [required]
    */
    virtual void inscriptionnotauthenticatedGetCommunicationListV1(const qint32 &pki_inscriptionnotauthenticated_id);

    /**
    * @param[in]  pki_inscriptionnotauthenticated_id qint32 [required]
    */
    virtual void inscriptionnotauthenticatedGetCommunicationrecipientsV1(const qint32 &pki_inscriptionnotauthenticated_id);

    /**
    * @param[in]  pki_inscriptionnotauthenticated_id qint32 [required]
    */
    virtual void inscriptionnotauthenticatedGetCommunicationsendersV1(const qint32 &pki_inscriptionnotauthenticated_id);


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

    void inscriptionnotauthenticatedGetCommunicationCountV1Callback(HttpRequestWorker *worker);
    void inscriptionnotauthenticatedGetCommunicationListV1Callback(HttpRequestWorker *worker);
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1Callback(HttpRequestWorker *worker);
    void inscriptionnotauthenticatedGetCommunicationsendersV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void inscriptionnotauthenticatedGetCommunicationCountV1Signal(Inscriptionnotauthenticated_getCommunicationCount_v1_Response summary);
    void inscriptionnotauthenticatedGetCommunicationListV1Signal(Inscriptionnotauthenticated_getCommunicationList_v1_Response summary);
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1Signal(Inscriptionnotauthenticated_getCommunicationrecipients_v1_Response summary);
    void inscriptionnotauthenticatedGetCommunicationsendersV1Signal(Inscriptionnotauthenticated_getCommunicationsenders_v1_Response summary);


    void inscriptionnotauthenticatedGetCommunicationCountV1SignalFull(HttpRequestWorker *worker, Inscriptionnotauthenticated_getCommunicationCount_v1_Response summary);
    void inscriptionnotauthenticatedGetCommunicationListV1SignalFull(HttpRequestWorker *worker, Inscriptionnotauthenticated_getCommunicationList_v1_Response summary);
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalFull(HttpRequestWorker *worker, Inscriptionnotauthenticated_getCommunicationrecipients_v1_Response summary);
    void inscriptionnotauthenticatedGetCommunicationsendersV1SignalFull(HttpRequestWorker *worker, Inscriptionnotauthenticated_getCommunicationsenders_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationCountV1SignalError() instead")
    void inscriptionnotauthenticatedGetCommunicationCountV1SignalE(Inscriptionnotauthenticated_getCommunicationCount_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationCountV1SignalError(Inscriptionnotauthenticated_getCommunicationCount_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationListV1SignalError() instead")
    void inscriptionnotauthenticatedGetCommunicationListV1SignalE(Inscriptionnotauthenticated_getCommunicationList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationListV1SignalError(Inscriptionnotauthenticated_getCommunicationList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalError() instead")
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalE(Inscriptionnotauthenticated_getCommunicationrecipients_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalError(Inscriptionnotauthenticated_getCommunicationrecipients_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationsendersV1SignalError() instead")
    void inscriptionnotauthenticatedGetCommunicationsendersV1SignalE(Inscriptionnotauthenticated_getCommunicationsenders_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationsendersV1SignalError(Inscriptionnotauthenticated_getCommunicationsenders_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationCountV1SignalErrorFull() instead")
    void inscriptionnotauthenticatedGetCommunicationCountV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationCountV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationListV1SignalErrorFull() instead")
    void inscriptionnotauthenticatedGetCommunicationListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalErrorFull() instead")
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationrecipientsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use inscriptionnotauthenticatedGetCommunicationsendersV1SignalErrorFull() instead")
    void inscriptionnotauthenticatedGetCommunicationsendersV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void inscriptionnotauthenticatedGetCommunicationsendersV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
