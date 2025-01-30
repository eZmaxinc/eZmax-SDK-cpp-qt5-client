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

#ifndef _ObjectEzsigntemplateformfieldgroupApi_H
#define _ObjectEzsigntemplateformfieldgroupApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsigntemplateformfieldgroup_createObject_v1_Request.h"
#include "Ezsigntemplateformfieldgroup_createObject_v1_Response.h"
#include "Ezsigntemplateformfieldgroup_deleteObject_v1_Response.h"
#include "Ezsigntemplateformfieldgroup_editObject_v1_Request.h"
#include "Ezsigntemplateformfieldgroup_editObject_v1_Response.h"
#include "Ezsigntemplateformfieldgroup_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplateformfieldgroupApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplateformfieldgroupApi(const int timeOut = 0);
    ~ObjectEzsigntemplateformfieldgroupApi();

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
    * @param[in]  ezsigntemplateformfieldgroup_create_object_v1_request Ezsigntemplateformfieldgroup_createObject_v1_Request [required]
    */
    virtual void ezsigntemplateformfieldgroupCreateObjectV1(const Ezsigntemplateformfieldgroup_createObject_v1_Request &ezsigntemplateformfieldgroup_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplateformfieldgroup_id qint32 [required]
    */
    virtual void ezsigntemplateformfieldgroupDeleteObjectV1(const qint32 &pki_ezsigntemplateformfieldgroup_id);

    /**
    * @param[in]  pki_ezsigntemplateformfieldgroup_id qint32 [required]
    * @param[in]  ezsigntemplateformfieldgroup_edit_object_v1_request Ezsigntemplateformfieldgroup_editObject_v1_Request [required]
    */
    virtual void ezsigntemplateformfieldgroupEditObjectV1(const qint32 &pki_ezsigntemplateformfieldgroup_id, const Ezsigntemplateformfieldgroup_editObject_v1_Request &ezsigntemplateformfieldgroup_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplateformfieldgroup_id qint32 [required]
    */
    virtual void ezsigntemplateformfieldgroupGetObjectV2(const qint32 &pki_ezsigntemplateformfieldgroup_id);


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

    void ezsigntemplateformfieldgroupCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplateformfieldgroupDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplateformfieldgroupEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplateformfieldgroupGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplateformfieldgroupCreateObjectV1Signal(Ezsigntemplateformfieldgroup_createObject_v1_Response summary);
    void ezsigntemplateformfieldgroupDeleteObjectV1Signal(Ezsigntemplateformfieldgroup_deleteObject_v1_Response summary);
    void ezsigntemplateformfieldgroupEditObjectV1Signal(Ezsigntemplateformfieldgroup_editObject_v1_Response summary);
    void ezsigntemplateformfieldgroupGetObjectV2Signal(Ezsigntemplateformfieldgroup_getObject_v2_Response summary);


    void ezsigntemplateformfieldgroupCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplateformfieldgroup_createObject_v1_Response summary);
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplateformfieldgroup_deleteObject_v1_Response summary);
    void ezsigntemplateformfieldgroupEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplateformfieldgroup_editObject_v1_Response summary);
    void ezsigntemplateformfieldgroupGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplateformfieldgroup_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupCreateObjectV1SignalError() instead")
    void ezsigntemplateformfieldgroupCreateObjectV1SignalE(Ezsigntemplateformfieldgroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupCreateObjectV1SignalError(Ezsigntemplateformfieldgroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupDeleteObjectV1SignalError() instead")
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalE(Ezsigntemplateformfieldgroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalError(Ezsigntemplateformfieldgroup_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupEditObjectV1SignalError() instead")
    void ezsigntemplateformfieldgroupEditObjectV1SignalE(Ezsigntemplateformfieldgroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupEditObjectV1SignalError(Ezsigntemplateformfieldgroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupGetObjectV2SignalError() instead")
    void ezsigntemplateformfieldgroupGetObjectV2SignalE(Ezsigntemplateformfieldgroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupGetObjectV2SignalError(Ezsigntemplateformfieldgroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupCreateObjectV1SignalErrorFull() instead")
    void ezsigntemplateformfieldgroupCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupEditObjectV1SignalErrorFull() instead")
    void ezsigntemplateformfieldgroupEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplateformfieldgroupGetObjectV2SignalErrorFull() instead")
    void ezsigntemplateformfieldgroupGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplateformfieldgroupGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
