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

#ifndef OAI_OAIObjectEzsignsignatureApi_H
#define OAI_OAIObjectEzsignsignatureApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignsignature_createObject_v1_Request.h"
#include "OAIEzsignsignature_createObject_v1_Response.h"
#include "OAIEzsignsignature_createObject_v2_Request.h"
#include "OAIEzsignsignature_createObject_v2_Response.h"
#include "OAIEzsignsignature_deleteObject_v1_Response.h"
#include "OAIEzsignsignature_editObject_v1_Request.h"
#include "OAIEzsignsignature_editObject_v1_Response.h"
#include "OAIEzsignsignature_getEzsignsignatureattachment_v1_Response.h"
#include "OAIEzsignsignature_getEzsignsignaturesAutomatic_v1_Response.h"
#include "OAIEzsignsignature_getObject_v2_Response.h"
#include "OAIEzsignsignature_sign_v1_Request.h"
#include "OAIEzsignsignature_sign_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignsignatureApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignsignatureApi(const int timeOut = 0);
    ~OAIObjectEzsignsignatureApi();

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
    * @param[in]  oai_ezsignsignature_create_object_v1_request QList<OAIEzsignsignature_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED void ezsignsignatureCreateObjectV1(const QList<OAIEzsignsignature_createObject_v1_Request> &oai_ezsignsignature_create_object_v1_request);

    /**
    * @param[in]  oai_ezsignsignature_create_object_v2_request OAIEzsignsignature_createObject_v2_Request [required]
    */
    void ezsignsignatureCreateObjectV2(const OAIEzsignsignature_createObject_v2_Request &oai_ezsignsignature_create_object_v2_request);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    */
    void ezsignsignatureDeleteObjectV1(const qint32 &pki_ezsignsignature_id);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    * @param[in]  oai_ezsignsignature_edit_object_v1_request OAIEzsignsignature_editObject_v1_Request [required]
    */
    void ezsignsignatureEditObjectV1(const qint32 &pki_ezsignsignature_id, const OAIEzsignsignature_editObject_v1_Request &oai_ezsignsignature_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    */
    void ezsignsignatureGetEzsignsignatureattachmentV1(const qint32 &pki_ezsignsignature_id);


    void ezsignsignatureGetEzsignsignaturesAutomaticV1();

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    */
    void ezsignsignatureGetObjectV2(const qint32 &pki_ezsignsignature_id);

    /**
    * @param[in]  pki_ezsignsignature_id qint32 [required]
    * @param[in]  oai_ezsignsignature_sign_v1_request OAIEzsignsignature_sign_v1_Request [required]
    */
    void ezsignsignatureSignV1(const qint32 &pki_ezsignsignature_id, const OAIEzsignsignature_sign_v1_Request &oai_ezsignsignature_sign_v1_request);


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

    void ezsignsignatureCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureCreateObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureGetEzsignsignatureattachmentV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsignsignatureSignV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignsignatureCreateObjectV1Signal(OAIEzsignsignature_createObject_v1_Response summary);
    void ezsignsignatureCreateObjectV2Signal(OAIEzsignsignature_createObject_v2_Response summary);
    void ezsignsignatureDeleteObjectV1Signal(OAIEzsignsignature_deleteObject_v1_Response summary);
    void ezsignsignatureEditObjectV1Signal(OAIEzsignsignature_editObject_v1_Response summary);
    void ezsignsignatureGetEzsignsignatureattachmentV1Signal(OAIEzsignsignature_getEzsignsignatureattachment_v1_Response summary);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1Signal(OAIEzsignsignature_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignsignatureGetObjectV2Signal(OAIEzsignsignature_getObject_v2_Response summary);
    void ezsignsignatureSignV1Signal(OAIEzsignsignature_sign_v1_Response summary);

    void ezsignsignatureCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_createObject_v1_Response summary);
    void ezsignsignatureCreateObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_createObject_v2_Response summary);
    void ezsignsignatureDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_deleteObject_v1_Response summary);
    void ezsignsignatureEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_editObject_v1_Response summary);
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_getEzsignsignatureattachment_v1_Response summary);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignsignatureGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_getObject_v2_Response summary);
    void ezsignsignatureSignV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignsignature_sign_v1_Response summary);

    void ezsignsignatureCreateObjectV1SignalE(OAIEzsignsignature_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureCreateObjectV2SignalE(OAIEzsignsignature_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureDeleteObjectV1SignalE(OAIEzsignsignature_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureEditObjectV1SignalE(OAIEzsignsignature_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalE(OAIEzsignsignature_getEzsignsignatureattachment_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalE(OAIEzsignsignature_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetObjectV2SignalE(OAIEzsignsignature_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureSignV1SignalE(OAIEzsignsignature_sign_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignsignatureCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureCreateObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignatureattachmentV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetEzsignsignaturesAutomaticV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignsignatureSignV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
