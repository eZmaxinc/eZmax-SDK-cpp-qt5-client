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

#ifndef _ObjectEzsignfoldersignerassociationApi_H
#define _ObjectEzsignfoldersignerassociationApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request.h"
#include "Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Response.h"
#include "Ezsignfoldersignerassociation_createObject_v1_Request.h"
#include "Ezsignfoldersignerassociation_createObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_createObject_v2_Request.h"
#include "Ezsignfoldersignerassociation_createObject_v2_Response.h"
#include "Ezsignfoldersignerassociation_deleteObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_editObject_v1_Request.h"
#include "Ezsignfoldersignerassociation_editObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_forceDisconnect_v1_Response.h"
#include "Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h"
#include "Ezsignfoldersignerassociation_getObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_getObject_v2_Response.h"
#include "Ezsignfoldersignerassociation_patchObject_v1_Request.h"
#include "Ezsignfoldersignerassociation_patchObject_v1_Response.h"
#include "Ezsignfoldersignerassociation_reassign_v1_Request.h"
#include "Ezsignfoldersignerassociation_reassign_v1_Response.h"
#include "Object.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignfoldersignerassociationApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignfoldersignerassociationApi(const int timeOut = 0);
    ~ObjectEzsignfoldersignerassociationApi();

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
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  ezsignfoldersignerassociation_create_embedded_url_v1_request Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request [required]
    */
    virtual void ezsignfoldersignerassociationCreateEmbeddedUrlV1(const qint32 &pki_ezsignfoldersignerassociation_id, const Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Request &ezsignfoldersignerassociation_create_embedded_url_v1_request);

    /**
    * @param[in]  ezsignfoldersignerassociation_create_object_v1_request QList<Ezsignfoldersignerassociation_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED virtual void ezsignfoldersignerassociationCreateObjectV1(const QList<Ezsignfoldersignerassociation_createObject_v1_Request> &ezsignfoldersignerassociation_create_object_v1_request);

    /**
    * @param[in]  ezsignfoldersignerassociation_create_object_v2_request Ezsignfoldersignerassociation_createObject_v2_Request [required]
    */
    virtual void ezsignfoldersignerassociationCreateObjectV2(const Ezsignfoldersignerassociation_createObject_v2_Request &ezsignfoldersignerassociation_create_object_v2_request);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    virtual void ezsignfoldersignerassociationDeleteObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  ezsignfoldersignerassociation_edit_object_v1_request Ezsignfoldersignerassociation_editObject_v1_Request [required]
    */
    virtual void ezsignfoldersignerassociationEditObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const Ezsignfoldersignerassociation_editObject_v1_Request &ezsignfoldersignerassociation_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  body Object [required]
    */
    virtual void ezsignfoldersignerassociationForceDisconnectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const Object &body);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    virtual void ezsignfoldersignerassociationGetInPersonLoginUrlV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    Q_DECL_DEPRECATED virtual void ezsignfoldersignerassociationGetObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    virtual void ezsignfoldersignerassociationGetObjectV2(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  ezsignfoldersignerassociation_patch_object_v1_request Ezsignfoldersignerassociation_patchObject_v1_Request [required]
    */
    virtual void ezsignfoldersignerassociationPatchObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const Ezsignfoldersignerassociation_patchObject_v1_Request &ezsignfoldersignerassociation_patch_object_v1_request);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    * @param[in]  ezsignfoldersignerassociation_reassign_v1_request Ezsignfoldersignerassociation_reassign_v1_Request [required]
    */
    virtual void ezsignfoldersignerassociationReassignV1(const qint32 &pki_ezsignfoldersignerassociation_id, const Ezsignfoldersignerassociation_reassign_v1_Request &ezsignfoldersignerassociation_reassign_v1_request);


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

    void ezsignfoldersignerassociationCreateEmbeddedUrlV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationCreateObjectV2Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationForceDisconnectV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetObjectV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetObjectV2Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationPatchObjectV1Callback(HttpRequestWorker *worker);
    void ezsignfoldersignerassociationReassignV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignfoldersignerassociationCreateEmbeddedUrlV1Signal(Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Response summary);
    void ezsignfoldersignerassociationCreateObjectV1Signal(Ezsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationCreateObjectV2Signal(Ezsignfoldersignerassociation_createObject_v2_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1Signal(Ezsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationEditObjectV1Signal(Ezsignfoldersignerassociation_editObject_v1_Response summary);
    void ezsignfoldersignerassociationForceDisconnectV1Signal(Ezsignfoldersignerassociation_forceDisconnect_v1_Response summary);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Signal(Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1Signal(Ezsignfoldersignerassociation_getObject_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV2Signal(Ezsignfoldersignerassociation_getObject_v2_Response summary);
    void ezsignfoldersignerassociationPatchObjectV1Signal(Ezsignfoldersignerassociation_patchObject_v1_Response summary);
    void ezsignfoldersignerassociationReassignV1Signal(Ezsignfoldersignerassociation_reassign_v1_Response summary);


    void ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Response summary);
    void ezsignfoldersignerassociationCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationCreateObjectV2SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_createObject_v2_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_editObject_v1_Response summary);
    void ezsignfoldersignerassociationForceDisconnectV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_forceDisconnect_v1_Response summary);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_getObject_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_getObject_v2_Response summary);
    void ezsignfoldersignerassociationPatchObjectV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_patchObject_v1_Response summary);
    void ezsignfoldersignerassociationReassignV1SignalFull(HttpRequestWorker *worker, Ezsignfoldersignerassociation_reassign_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalError() instead")
    void ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalE(Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalError(Ezsignfoldersignerassociation_createEmbeddedUrl_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationCreateObjectV1SignalError() instead")
    void ezsignfoldersignerassociationCreateObjectV1SignalE(Ezsignfoldersignerassociation_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateObjectV1SignalError(Ezsignfoldersignerassociation_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationCreateObjectV2SignalError() instead")
    void ezsignfoldersignerassociationCreateObjectV2SignalE(Ezsignfoldersignerassociation_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateObjectV2SignalError(Ezsignfoldersignerassociation_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationDeleteObjectV1SignalError() instead")
    void ezsignfoldersignerassociationDeleteObjectV1SignalE(Ezsignfoldersignerassociation_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalError(Ezsignfoldersignerassociation_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationEditObjectV1SignalError() instead")
    void ezsignfoldersignerassociationEditObjectV1SignalE(Ezsignfoldersignerassociation_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationEditObjectV1SignalError(Ezsignfoldersignerassociation_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationForceDisconnectV1SignalError() instead")
    void ezsignfoldersignerassociationForceDisconnectV1SignalE(Ezsignfoldersignerassociation_forceDisconnect_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationForceDisconnectV1SignalError(Ezsignfoldersignerassociation_forceDisconnect_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalError() instead")
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalE(Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalError(Ezsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationGetObjectV1SignalError() instead")
    void ezsignfoldersignerassociationGetObjectV1SignalE(Ezsignfoldersignerassociation_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalError(Ezsignfoldersignerassociation_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationGetObjectV2SignalError() instead")
    void ezsignfoldersignerassociationGetObjectV2SignalE(Ezsignfoldersignerassociation_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV2SignalError(Ezsignfoldersignerassociation_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationPatchObjectV1SignalError() instead")
    void ezsignfoldersignerassociationPatchObjectV1SignalE(Ezsignfoldersignerassociation_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationPatchObjectV1SignalError(Ezsignfoldersignerassociation_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationReassignV1SignalError() instead")
    void ezsignfoldersignerassociationReassignV1SignalE(Ezsignfoldersignerassociation_reassign_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationReassignV1SignalError(Ezsignfoldersignerassociation_reassign_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateEmbeddedUrlV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationCreateObjectV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationCreateObjectV2SignalErrorFull() instead")
    void ezsignfoldersignerassociationCreateObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationCreateObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationDeleteObjectV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationEditObjectV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationForceDisconnectV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationForceDisconnectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationForceDisconnectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationGetObjectV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationGetObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationGetObjectV2SignalErrorFull() instead")
    void ezsignfoldersignerassociationGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationPatchObjectV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationPatchObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationPatchObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignfoldersignerassociationReassignV1SignalErrorFull() instead")
    void ezsignfoldersignerassociationReassignV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationReassignV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
