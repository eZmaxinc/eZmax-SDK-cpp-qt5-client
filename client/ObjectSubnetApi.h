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

#ifndef _ObjectSubnetApi_H
#define _ObjectSubnetApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Subnet_createObject_v1_Request.h"
#include "Subnet_createObject_v1_Response.h"
#include "Subnet_deleteObject_v1_Response.h"
#include "Subnet_editObject_v1_Request.h"
#include "Subnet_editObject_v1_Response.h"
#include "Subnet_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectSubnetApi : public QObject {
    Q_OBJECT

public:
    ObjectSubnetApi(const int timeOut = 0);
    ~ObjectSubnetApi();

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
    * @param[in]  subnet_create_object_v1_request Subnet_createObject_v1_Request [required]
    */
    virtual void subnetCreateObjectV1(const Subnet_createObject_v1_Request &subnet_create_object_v1_request);

    /**
    * @param[in]  pki_subnet_id qint32 [required]
    */
    virtual void subnetDeleteObjectV1(const qint32 &pki_subnet_id);

    /**
    * @param[in]  pki_subnet_id qint32 [required]
    * @param[in]  subnet_edit_object_v1_request Subnet_editObject_v1_Request [required]
    */
    virtual void subnetEditObjectV1(const qint32 &pki_subnet_id, const Subnet_editObject_v1_Request &subnet_edit_object_v1_request);

    /**
    * @param[in]  pki_subnet_id qint32 [required]
    */
    virtual void subnetGetObjectV2(const qint32 &pki_subnet_id);


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

    void subnetCreateObjectV1Callback(HttpRequestWorker *worker);
    void subnetDeleteObjectV1Callback(HttpRequestWorker *worker);
    void subnetEditObjectV1Callback(HttpRequestWorker *worker);
    void subnetGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void subnetCreateObjectV1Signal(Subnet_createObject_v1_Response summary);
    void subnetDeleteObjectV1Signal(Subnet_deleteObject_v1_Response summary);
    void subnetEditObjectV1Signal(Subnet_editObject_v1_Response summary);
    void subnetGetObjectV2Signal(Subnet_getObject_v2_Response summary);


    void subnetCreateObjectV1SignalFull(HttpRequestWorker *worker, Subnet_createObject_v1_Response summary);
    void subnetDeleteObjectV1SignalFull(HttpRequestWorker *worker, Subnet_deleteObject_v1_Response summary);
    void subnetEditObjectV1SignalFull(HttpRequestWorker *worker, Subnet_editObject_v1_Response summary);
    void subnetGetObjectV2SignalFull(HttpRequestWorker *worker, Subnet_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use subnetCreateObjectV1SignalError() instead")
    void subnetCreateObjectV1SignalE(Subnet_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetCreateObjectV1SignalError(Subnet_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use subnetDeleteObjectV1SignalError() instead")
    void subnetDeleteObjectV1SignalE(Subnet_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetDeleteObjectV1SignalError(Subnet_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use subnetEditObjectV1SignalError() instead")
    void subnetEditObjectV1SignalE(Subnet_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetEditObjectV1SignalError(Subnet_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use subnetGetObjectV2SignalError() instead")
    void subnetGetObjectV2SignalE(Subnet_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetGetObjectV2SignalError(Subnet_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use subnetCreateObjectV1SignalErrorFull() instead")
    void subnetCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use subnetDeleteObjectV1SignalErrorFull() instead")
    void subnetDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use subnetEditObjectV1SignalErrorFull() instead")
    void subnetEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use subnetGetObjectV2SignalErrorFull() instead")
    void subnetGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void subnetGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
