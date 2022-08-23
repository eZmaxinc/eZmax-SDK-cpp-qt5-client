/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsigntemplatesignerApi_H
#define OAI_OAIObjectEzsigntemplatesignerApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplatesigner_createObject_v1_Request.h"
#include "OAIEzsigntemplatesigner_createObject_v1_Response.h"
#include "OAIEzsigntemplatesigner_deleteObject_v1_Response.h"
#include "OAIEzsigntemplatesigner_editObject_v1_Request.h"
#include "OAIEzsigntemplatesigner_editObject_v1_Response.h"
#include "OAIEzsigntemplatesigner_getObject_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatesignerApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatesignerApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatesignerApi();

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
    * @param[in]  oai_ezsigntemplatesigner_create_object_v1_request OAIEzsigntemplatesigner_createObject_v1_Request [required]
    */
    void ezsigntemplatesignerCreateObjectV1(const OAIEzsigntemplatesigner_createObject_v1_Request &oai_ezsigntemplatesigner_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatesigner_id qint32 [required]
    */
    void ezsigntemplatesignerDeleteObjectV1(const qint32 &pki_ezsigntemplatesigner_id);

    /**
    * @param[in]  pki_ezsigntemplatesigner_id qint32 [required]
    * @param[in]  oai_ezsigntemplatesigner_edit_object_v1_request OAIEzsigntemplatesigner_editObject_v1_Request [required]
    */
    void ezsigntemplatesignerEditObjectV1(const qint32 &pki_ezsigntemplatesigner_id, const OAIEzsigntemplatesigner_editObject_v1_Request &oai_ezsigntemplatesigner_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatesigner_id qint32 [required]
    */
    void ezsigntemplatesignerGetObjectV1(const qint32 &pki_ezsigntemplatesigner_id);


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

    void ezsigntemplatesignerCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatesignerDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatesignerEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatesignerGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatesignerCreateObjectV1Signal(OAIEzsigntemplatesigner_createObject_v1_Response summary);
    void ezsigntemplatesignerDeleteObjectV1Signal(OAIEzsigntemplatesigner_deleteObject_v1_Response summary);
    void ezsigntemplatesignerEditObjectV1Signal(OAIEzsigntemplatesigner_editObject_v1_Response summary);
    void ezsigntemplatesignerGetObjectV1Signal(OAIEzsigntemplatesigner_getObject_v1_Response summary);

    void ezsigntemplatesignerCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesigner_createObject_v1_Response summary);
    void ezsigntemplatesignerDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesigner_deleteObject_v1_Response summary);
    void ezsigntemplatesignerEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesigner_editObject_v1_Response summary);
    void ezsigntemplatesignerGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatesigner_getObject_v1_Response summary);

    void ezsigntemplatesignerCreateObjectV1SignalE(OAIEzsigntemplatesigner_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignerDeleteObjectV1SignalE(OAIEzsigntemplatesigner_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignerEditObjectV1SignalE(OAIEzsigntemplatesigner_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignerGetObjectV1SignalE(OAIEzsigntemplatesigner_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatesignerCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignerDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignerEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatesignerGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
