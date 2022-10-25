/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignbulksendsignermappingApi_H
#define OAI_OAIObjectEzsignbulksendsignermappingApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignbulksendsignermapping_createObject_v1_Request.h"
#include "OAIEzsignbulksendsignermapping_createObject_v1_Response.h"
#include "OAIEzsignbulksendsignermapping_deleteObject_v1_Response.h"
#include "OAIEzsignbulksendsignermapping_getObject_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignbulksendsignermappingApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignbulksendsignermappingApi(const int timeOut = 0);
    ~OAIObjectEzsignbulksendsignermappingApi();

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
    * @param[in]  oai_ezsignbulksendsignermapping_create_object_v1_request OAIEzsignbulksendsignermapping_createObject_v1_Request [required]
    */
    void ezsignbulksendsignermappingCreateObjectV1(const OAIEzsignbulksendsignermapping_createObject_v1_Request &oai_ezsignbulksendsignermapping_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksendsignermapping_id qint32 [required]
    */
    void ezsignbulksendsignermappingDeleteObjectV1(const qint32 &pki_ezsignbulksendsignermapping_id);

    /**
    * @param[in]  pki_ezsignbulksendsignermapping_id qint32 [required]
    */
    void ezsignbulksendsignermappingGetObjectV1(const qint32 &pki_ezsignbulksendsignermapping_id);


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

    void ezsignbulksendsignermappingCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendsignermappingDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendsignermappingGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignbulksendsignermappingCreateObjectV1Signal(OAIEzsignbulksendsignermapping_createObject_v1_Response summary);
    void ezsignbulksendsignermappingDeleteObjectV1Signal(OAIEzsignbulksendsignermapping_deleteObject_v1_Response summary);
    void ezsignbulksendsignermappingGetObjectV1Signal(OAIEzsignbulksendsignermapping_getObject_v1_Response summary);

    void ezsignbulksendsignermappingCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksendsignermapping_createObject_v1_Response summary);
    void ezsignbulksendsignermappingDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksendsignermapping_deleteObject_v1_Response summary);
    void ezsignbulksendsignermappingGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksendsignermapping_getObject_v1_Response summary);

    void ezsignbulksendsignermappingCreateObjectV1SignalE(OAIEzsignbulksendsignermapping_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingDeleteObjectV1SignalE(OAIEzsignbulksendsignermapping_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingGetObjectV1SignalE(OAIEzsignbulksendsignermapping_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignbulksendsignermappingCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendsignermappingGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
