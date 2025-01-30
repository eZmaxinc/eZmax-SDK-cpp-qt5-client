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

#ifndef _ObjectEzsigntemplatesignatureApi_H
#define _ObjectEzsigntemplatesignatureApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsigntemplatesignature_createObject_v2_Request.h"
#include "Ezsigntemplatesignature_createObject_v2_Response.h"
#include "Ezsigntemplatesignature_deleteObject_v1_Response.h"
#include "Ezsigntemplatesignature_editObject_v2_Request.h"
#include "Ezsigntemplatesignature_editObject_v2_Response.h"
#include "Ezsigntemplatesignature_getObject_v3_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplatesignatureApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplatesignatureApi(const int timeOut = 0);
    ~ObjectEzsigntemplatesignatureApi();

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
    * @param[in]  ezsigntemplatesignature_create_object_v2_request Ezsigntemplatesignature_createObject_v2_Request [required]
    */
    virtual void ezsigntemplatesignatureCreateObjectV2(const Ezsigntemplatesignature_createObject_v2_Request &ezsigntemplatesignature_create_object_v2_request);

    /**
    * @param[in]  pki_ezsigntemplatesignature_id qint32 [required]
    */
    virtual void ezsigntemplatesignatureDeleteObjectV1(const qint32 &pki_ezsigntemplatesignature_id);

    /**
    * @param[in]  pki_ezsigntemplatesignature_id qint32 [required]
    * @param[in]  ezsigntemplatesignature_edit_object_v2_request Ezsigntemplatesignature_editObject_v2_Request [required]
    */
    virtual void ezsigntemplatesignatureEditObjectV2(const qint32 &pki_ezsigntemplatesignature_id, const Ezsigntemplatesignature_editObject_v2_Request &ezsigntemplatesignature_edit_object_v2_request);

    /**
    * @param[in]  pki_ezsigntemplatesignature_id qint32 [required]
    */
    virtual void ezsigntemplatesignatureGetObjectV3(const qint32 &pki_ezsigntemplatesignature_id);


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

    void ezsigntemplatesignatureCreateObjectV2Callback(HttpRequestWorker *worker);
    void ezsigntemplatesignatureDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatesignatureEditObjectV2Callback(HttpRequestWorker *worker);
    void ezsigntemplatesignatureGetObjectV3Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplatesignatureCreateObjectV2Signal(Ezsigntemplatesignature_createObject_v2_Response summary);
    void ezsigntemplatesignatureDeleteObjectV1Signal(Ezsigntemplatesignature_deleteObject_v1_Response summary);
    void ezsigntemplatesignatureEditObjectV2Signal(Ezsigntemplatesignature_editObject_v2_Response summary);
    void ezsigntemplatesignatureGetObjectV3Signal(Ezsigntemplatesignature_getObject_v3_Response summary);


    void ezsigntemplatesignatureCreateObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatesignature_createObject_v2_Response summary);
    void ezsigntemplatesignatureDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatesignature_deleteObject_v1_Response summary);
    void ezsigntemplatesignatureEditObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatesignature_editObject_v2_Response summary);
    void ezsigntemplatesignatureGetObjectV3SignalFull(HttpRequestWorker *worker, Ezsigntemplatesignature_getObject_v3_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureCreateObjectV2SignalError() instead")
    void ezsigntemplatesignatureCreateObjectV2SignalE(Ezsigntemplatesignature_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureCreateObjectV2SignalError(Ezsigntemplatesignature_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureDeleteObjectV1SignalError() instead")
    void ezsigntemplatesignatureDeleteObjectV1SignalE(Ezsigntemplatesignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureDeleteObjectV1SignalError(Ezsigntemplatesignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureEditObjectV2SignalError() instead")
    void ezsigntemplatesignatureEditObjectV2SignalE(Ezsigntemplatesignature_editObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureEditObjectV2SignalError(Ezsigntemplatesignature_editObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureGetObjectV3SignalError() instead")
    void ezsigntemplatesignatureGetObjectV3SignalE(Ezsigntemplatesignature_getObject_v3_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureGetObjectV3SignalError(Ezsigntemplatesignature_getObject_v3_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureCreateObjectV2SignalErrorFull() instead")
    void ezsigntemplatesignatureCreateObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureCreateObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplatesignatureDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureEditObjectV2SignalErrorFull() instead")
    void ezsigntemplatesignatureEditObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureEditObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatesignatureGetObjectV3SignalErrorFull() instead")
    void ezsigntemplatesignatureGetObjectV3SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignatureGetObjectV3SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
