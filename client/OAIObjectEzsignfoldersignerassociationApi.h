/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignfoldersignerassociationApi_H
#define OAI_OAIObjectEzsignfoldersignerassociationApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignfoldersignerassociation_createObject_v1_Request.h"
#include "OAIEzsignfoldersignerassociation_createObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_createObject_v2_Request.h"
#include "OAIEzsignfoldersignerassociation_createObject_v2_Response.h"
#include "OAIEzsignfoldersignerassociation_deleteObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_editObject_v1_Request.h"
#include "OAIEzsignfoldersignerassociation_editObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_forceDisconnect_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getObject_v2_Response.h"
#include "OAIEzsignfoldersignerassociation_patchObject_v1_Request.h"
#include "OAIEzsignfoldersignerassociation_patchObject_v1_Response.h"
#include "OAIObject.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignfoldersignerassociationApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignfoldersignerassociationApi(const int timeOut = 0);
    ~OAIObjectEzsignfoldersignerassociationApi();

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
    * @param[in]  oai_ezsignfoldersignerassociation_create_object_v1_request QList<OAIEzsignfoldersignerassociation_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED void ezsignfoldersignerassociationCreateObjectV1(const QList<OAIEzsignfoldersignerassociation_createObject_v1_Request> &oai_ezsignfoldersignerassociation_create_object_v1_request);

    /**
    * @param[in]  oai_ezsignfoldersignerassociation_create_object_v2_request OAIEzsignfoldersignerassociation_createObject_v2_Request [required]
    */
    void ezsignfoldersignerassociationCreateObjectV2(const OAIEzsignfoldersignerassociation_createObject_v2_Request &oai_ezsignfoldersignerassociation_create_object_v2_request);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationDeleteObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  oai_ezsignfoldersignerassociation_edit_object_v1_request OAIEzsignfoldersignerassociation_editObject_v1_Request [required]
    */
    void ezsignfoldersignerassociationEditObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const OAIEzsignfoldersignerassociation_editObject_v1_Request &oai_ezsignfoldersignerassociation_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsignfoldersignerassociationForceDisconnectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const OAIObject &body);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezsignfoldersignerassociationGetObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationGetObjectV2(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  oai_ezsignfoldersignerassociation_patch_object_v1_request OAIEzsignfoldersignerassociation_patchObject_v1_Request [required]
    */
    void ezsignfoldersignerassociationPatchObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const OAIEzsignfoldersignerassociation_patchObject_v1_Request &oai_ezsignfoldersignerassociation_patch_object_v1_request);


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

    void ezsignfoldersignerassociationCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationCreateObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationForceDisconnectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationPatchObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignfoldersignerassociationCreateObjectV1Signal(OAIEzsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationCreateObjectV2Signal(OAIEzsignfoldersignerassociation_createObject_v2_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1Signal(OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationEditObjectV1Signal(OAIEzsignfoldersignerassociation_editObject_v1_Response summary);
    void ezsignfoldersignerassociationForceDisconnectV1Signal(OAIEzsignfoldersignerassociation_forceDisconnect_v1_Response summary);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Signal(OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1Signal(OAIEzsignfoldersignerassociation_getObject_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV2Signal(OAIEzsignfoldersignerassociation_getObject_v2_Response summary);
    void ezsignfoldersignerassociationPatchObjectV1Signal(OAIEzsignfoldersignerassociation_patchObject_v1_Response summary);

    void ezsignfoldersignerassociationCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationCreateObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_createObject_v2_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_editObject_v1_Response summary);
    void ezsignfoldersignerassociationForceDisconnectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_forceDisconnect_v1_Response summary);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getObject_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getObject_v2_Response summary);
    void ezsignfoldersignerassociationPatchObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_patchObject_v1_Response summary);

    void ezsignfoldersignerassociationCreateObjectV1SignalE(OAIEzsignfoldersignerassociation_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateObjectV2SignalE(OAIEzsignfoldersignerassociation_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalE(OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationEditObjectV1SignalE(OAIEzsignfoldersignerassociation_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationForceDisconnectV1SignalE(OAIEzsignfoldersignerassociation_forceDisconnect_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalE(OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalE(OAIEzsignfoldersignerassociation_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV2SignalE(OAIEzsignfoldersignerassociation_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationPatchObjectV1SignalE(OAIEzsignfoldersignerassociation_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignfoldersignerassociationCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationForceDisconnectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationPatchObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
