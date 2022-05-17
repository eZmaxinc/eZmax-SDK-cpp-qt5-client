/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsigntemplatepackagesignerApi_H
#define OAI_OAIObjectEzsigntemplatepackagesignerApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigntemplatepackagesigner_createObject_v1_Request.h"
#include "OAIEzsigntemplatepackagesigner_createObject_v1_Response.h"
#include "OAIEzsigntemplatepackagesigner_deleteObject_v1_Response.h"
#include "OAIEzsigntemplatepackagesigner_editObject_v1_Request.h"
#include "OAIEzsigntemplatepackagesigner_editObject_v1_Response.h"
#include "OAIEzsigntemplatepackagesigner_getObject_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatepackagesignerApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatepackagesignerApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatepackagesignerApi();

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
    * @param[in]  oai_ezsigntemplatepackagesigner_create_object_v1_request OAIEzsigntemplatepackagesigner_createObject_v1_Request [required]
    */
    void ezsigntemplatepackagesignerCreateObjectV1(const OAIEzsigntemplatepackagesigner_createObject_v1_Request &oai_ezsigntemplatepackagesigner_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagesigner_id qint32 [required]
    */
    void ezsigntemplatepackagesignerDeleteObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id);

    /**
    * @param[in]  pki_ezsigntemplatepackagesigner_id qint32 [required]
    * @param[in]  oai_ezsigntemplatepackagesigner_edit_object_v1_request OAIEzsigntemplatepackagesigner_editObject_v1_Request [required]
    */
    void ezsigntemplatepackagesignerEditObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id, const OAIEzsigntemplatepackagesigner_editObject_v1_Request &oai_ezsigntemplatepackagesigner_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackagesigner_id qint32 [required]
    */
    void ezsigntemplatepackagesignerGetObjectV1(const qint32 &pki_ezsigntemplatepackagesigner_id);


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

    void ezsigntemplatepackagesignerCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagesignerDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagesignerEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackagesignerGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatepackagesignerCreateObjectV1Signal(OAIEzsigntemplatepackagesigner_createObject_v1_Response summary);
    void ezsigntemplatepackagesignerDeleteObjectV1Signal(OAIEzsigntemplatepackagesigner_deleteObject_v1_Response summary);
    void ezsigntemplatepackagesignerEditObjectV1Signal(OAIEzsigntemplatepackagesigner_editObject_v1_Response summary);
    void ezsigntemplatepackagesignerGetObjectV1Signal(OAIEzsigntemplatepackagesigner_getObject_v1_Response summary);

    void ezsigntemplatepackagesignerCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesigner_createObject_v1_Response summary);
    void ezsigntemplatepackagesignerDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesigner_deleteObject_v1_Response summary);
    void ezsigntemplatepackagesignerEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesigner_editObject_v1_Response summary);
    void ezsigntemplatepackagesignerGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackagesigner_getObject_v1_Response summary);

    void ezsigntemplatepackagesignerCreateObjectV1SignalE(OAIEzsigntemplatepackagesigner_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerDeleteObjectV1SignalE(OAIEzsigntemplatepackagesigner_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerEditObjectV1SignalE(OAIEzsigntemplatepackagesigner_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerGetObjectV1SignalE(OAIEzsigntemplatepackagesigner_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatepackagesignerCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackagesignerGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
