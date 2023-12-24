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

#ifndef _ObjectEzsignbulksendsignermappingApi_H
#define _ObjectEzsignbulksendsignermappingApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignbulksendsignermapping_createObject_v1_Request.h"
#include "Ezsignbulksendsignermapping_createObject_v1_Response.h"
#include "Ezsignbulksendsignermapping_deleteObject_v1_Response.h"
#include "Ezsignbulksendsignermapping_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignbulksendsignermappingApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignbulksendsignermappingApi(const int timeOut = 0);
    ~ObjectEzsignbulksendsignermappingApi();

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
    * @param[in]  ezsignbulksendsignermapping_create_object_v1_request Ezsignbulksendsignermapping_createObject_v1_Request [required]
    */
    void ezsignbulksendsignermappingCreateObjectV1(const Ezsignbulksendsignermapping_createObject_v1_Request &ezsignbulksendsignermapping_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksendsignermapping_id qint32 [required]
    */
    void ezsignbulksendsignermappingDeleteObjectV1(const qint32 &pki_ezsignbulksendsignermapping_id);

    /**
    * @param[in]  pki_ezsignbulksendsignermapping_id qint32 [required]
    */
    void ezsignbulksendsignermappingGetObjectV2(const qint32 &pki_ezsignbulksendsignermapping_id);


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

    void ezsignbulksendsignermappingCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendsignermappingDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendsignermappingGetObjectV2Callback(HttpRequestWorker *worker);

signals:

    void ezsignbulksendsignermappingCreateObjectV1Signal(Ezsignbulksendsignermapping_createObject_v1_Response summary);
    void ezsignbulksendsignermappingDeleteObjectV1Signal(Ezsignbulksendsignermapping_deleteObject_v1_Response summary);
    void ezsignbulksendsignermappingGetObjectV2Signal(Ezsignbulksendsignermapping_getObject_v2_Response summary);

    void ezsignbulksendsignermappingCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsignbulksendsignermapping_createObject_v1_Response summary);
    void ezsignbulksendsignermappingDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsignbulksendsignermapping_deleteObject_v1_Response summary);
    void ezsignbulksendsignermappingGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignbulksendsignermapping_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignbulksendsignermappingCreateObjectV1SignalError() instead")
    void ezsignbulksendsignermappingCreateObjectV1SignalE(Ezsignbulksendsignermapping_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingCreateObjectV1SignalError(Ezsignbulksendsignermapping_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendsignermappingDeleteObjectV1SignalError() instead")
    void ezsignbulksendsignermappingDeleteObjectV1SignalE(Ezsignbulksendsignermapping_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingDeleteObjectV1SignalError(Ezsignbulksendsignermapping_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendsignermappingGetObjectV2SignalError() instead")
    void ezsignbulksendsignermappingGetObjectV2SignalE(Ezsignbulksendsignermapping_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingGetObjectV2SignalError(Ezsignbulksendsignermapping_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignbulksendsignermappingCreateObjectV1SignalErrorFull() instead")
    void ezsignbulksendsignermappingCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendsignermappingDeleteObjectV1SignalErrorFull() instead")
    void ezsignbulksendsignermappingDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendsignermappingGetObjectV2SignalErrorFull() instead")
    void ezsignbulksendsignermappingGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
