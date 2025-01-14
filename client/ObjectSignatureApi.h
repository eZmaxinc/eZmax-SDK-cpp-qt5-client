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

#ifndef _ObjectSignatureApi_H
#define _ObjectSignatureApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Signature_createObject_v1_Request.h"
#include "Signature_createObject_v1_Response.h"
#include "Signature_deleteObject_v1_Response.h"
#include "Signature_editObject_v1_Request.h"
#include "Signature_editObject_v1_Response.h"
#include "Signature_getObject_v2_Response.h"
#include "Signature_getObject_v3_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectSignatureApi : public QObject {
    Q_OBJECT

public:
    ObjectSignatureApi(const int timeOut = 0);
    ~ObjectSignatureApi();

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
    * @param[in]  signature_create_object_v1_request Signature_createObject_v1_Request [required]
    */
    virtual void signatureCreateObjectV1(const Signature_createObject_v1_Request &signature_create_object_v1_request);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    virtual void signatureDeleteObjectV1(const qint32 &pki_signature_id);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    * @param[in]  signature_edit_object_v1_request Signature_editObject_v1_Request [required]
    */
    virtual void signatureEditObjectV1(const qint32 &pki_signature_id, const Signature_editObject_v1_Request &signature_edit_object_v1_request);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    Q_DECL_DEPRECATED virtual void signatureGetObjectV2(const qint32 &pki_signature_id);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    virtual void signatureGetObjectV3(const qint32 &pki_signature_id);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    virtual void signatureGetSVGInitialsV1(const qint32 &pki_signature_id);

    /**
    * @param[in]  pki_signature_id qint32 [required]
    */
    virtual void signatureGetSVGSignatureV1(const qint32 &pki_signature_id);


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

    void signatureCreateObjectV1Callback(HttpRequestWorker *worker);
    void signatureDeleteObjectV1Callback(HttpRequestWorker *worker);
    void signatureEditObjectV1Callback(HttpRequestWorker *worker);
    void signatureGetObjectV2Callback(HttpRequestWorker *worker);
    void signatureGetObjectV3Callback(HttpRequestWorker *worker);
    void signatureGetSVGInitialsV1Callback(HttpRequestWorker *worker);
    void signatureGetSVGSignatureV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void signatureCreateObjectV1Signal(Signature_createObject_v1_Response summary);
    void signatureDeleteObjectV1Signal(Signature_deleteObject_v1_Response summary);
    void signatureEditObjectV1Signal(Signature_editObject_v1_Response summary);
    void signatureGetObjectV2Signal(Signature_getObject_v2_Response summary);
    void signatureGetObjectV3Signal(Signature_getObject_v3_Response summary);
    void signatureGetSVGInitialsV1Signal();
    void signatureGetSVGSignatureV1Signal();


    void signatureCreateObjectV1SignalFull(HttpRequestWorker *worker, Signature_createObject_v1_Response summary);
    void signatureDeleteObjectV1SignalFull(HttpRequestWorker *worker, Signature_deleteObject_v1_Response summary);
    void signatureEditObjectV1SignalFull(HttpRequestWorker *worker, Signature_editObject_v1_Response summary);
    void signatureGetObjectV2SignalFull(HttpRequestWorker *worker, Signature_getObject_v2_Response summary);
    void signatureGetObjectV3SignalFull(HttpRequestWorker *worker, Signature_getObject_v3_Response summary);
    void signatureGetSVGInitialsV1SignalFull(HttpRequestWorker *worker);
    void signatureGetSVGSignatureV1SignalFull(HttpRequestWorker *worker);

    Q_DECL_DEPRECATED_X("Use signatureCreateObjectV1SignalError() instead")
    void signatureCreateObjectV1SignalE(Signature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureCreateObjectV1SignalError(Signature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureDeleteObjectV1SignalError() instead")
    void signatureDeleteObjectV1SignalE(Signature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureDeleteObjectV1SignalError(Signature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureEditObjectV1SignalError() instead")
    void signatureEditObjectV1SignalE(Signature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureEditObjectV1SignalError(Signature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetObjectV2SignalError() instead")
    void signatureGetObjectV2SignalE(Signature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetObjectV2SignalError(Signature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetObjectV3SignalError() instead")
    void signatureGetObjectV3SignalE(Signature_getObject_v3_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetObjectV3SignalError(Signature_getObject_v3_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetSVGInitialsV1SignalError() instead")
    void signatureGetSVGInitialsV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetSVGInitialsV1SignalError(QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetSVGSignatureV1SignalError() instead")
    void signatureGetSVGSignatureV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetSVGSignatureV1SignalError(QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use signatureCreateObjectV1SignalErrorFull() instead")
    void signatureCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureDeleteObjectV1SignalErrorFull() instead")
    void signatureDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureEditObjectV1SignalErrorFull() instead")
    void signatureEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetObjectV2SignalErrorFull() instead")
    void signatureGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetObjectV3SignalErrorFull() instead")
    void signatureGetObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetSVGInitialsV1SignalErrorFull() instead")
    void signatureGetSVGInitialsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetSVGInitialsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use signatureGetSVGSignatureV1SignalErrorFull() instead")
    void signatureGetSVGSignatureV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void signatureGetSVGSignatureV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
