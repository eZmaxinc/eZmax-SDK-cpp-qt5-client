/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsigntemplatepackagemembershipApi_H
#define OAI_OAIObjectEzsigntemplatepackagemembershipApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplatepackagemembership_createObject_v1_Request.h"
#include "OAIEzsigntemplatepackagemembership_createObject_v1_Response.h"
#include "OAIEzsigntemplatepackagemembership_deleteObject_v1_Response.h"
#include "OAIEzsigntemplatepackagemembership_getObject_v1_Response.h"
#include "OAIEzsigntemplatepackagemembership_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatepackagemembershipApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatepackagemembershipApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatepackagemembershipApi();

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
    * @param[in]  oai_ezsigntemplatepackagemembership_create_object_v1_request OAIEzsigntemplatepackagemembership_createObject_v1_Request [required]
    */
    void ezsigntemplatepackagemembershipCreateObjectV1(const OAIEzsigntemplatepackagemembership_createObject_v1_Request &oai_ezsigntemplatepackagemembership_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagemembership_id qint32 [required]
    */
    void ezsigntemplatepackagemembershipDeleteObjectV1(const qint32 &pki_ezsigntemplatepackagemembership_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagemembership_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezsigntemplatepackagemembershipGetObjectV1(const qint32 &pki_ezsigntemplatepackagemembership_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagemembership_id qint32 [required]
    */
    void ezsigntemplatepackagemembershipGetObjectV2(const qint32 &pki_ezsigntemplatepackagemembership_id);


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

    void ezsigntemplatepackagemembershipCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagemembershipDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagemembershipGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagemembershipGetObjectV2Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatepackagemembershipCreateObjectV1Signal(OAIEzsigntemplatepackagemembership_createObject_v1_Response summary);
    void ezsigntemplatepackagemembershipDeleteObjectV1Signal(OAIEzsigntemplatepackagemembership_deleteObject_v1_Response summary);
    void ezsigntemplatepackagemembershipGetObjectV1Signal(OAIEzsigntemplatepackagemembership_getObject_v1_Response summary);
    void ezsigntemplatepackagemembershipGetObjectV2Signal(OAIEzsigntemplatepackagemembership_getObject_v2_Response summary);

    void ezsigntemplatepackagemembershipCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagemembership_createObject_v1_Response summary);
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagemembership_deleteObject_v1_Response summary);
    void ezsigntemplatepackagemembershipGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagemembership_getObject_v1_Response summary);
    void ezsigntemplatepackagemembershipGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagemembership_getObject_v2_Response summary);

    void ezsigntemplatepackagemembershipCreateObjectV1SignalE(OAIEzsigntemplatepackagemembership_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalE(OAIEzsigntemplatepackagemembership_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipGetObjectV1SignalE(OAIEzsigntemplatepackagemembership_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipGetObjectV2SignalE(OAIEzsigntemplatepackagemembership_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatepackagemembershipCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagemembershipGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
