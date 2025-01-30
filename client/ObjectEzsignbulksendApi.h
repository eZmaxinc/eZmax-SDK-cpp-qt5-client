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

#ifndef _ObjectEzsignbulksendApi_H
#define _ObjectEzsignbulksendApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignbulksend_createEzsignbulksendtransmission_v2_Request.h"
#include "Ezsignbulksend_createEzsignbulksendtransmission_v2_Response.h"
#include "Ezsignbulksend_createObject_v1_Request.h"
#include "Ezsignbulksend_createObject_v1_Response.h"
#include "Ezsignbulksend_deleteObject_v1_Response.h"
#include "Ezsignbulksend_editObject_v1_Request.h"
#include "Ezsignbulksend_editObject_v1_Response.h"
#include "Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response.h"
#include "Ezsignbulksend_getEzsignsignaturesAutomatic_v1_Response.h"
#include "Ezsignbulksend_getFormsData_v1_Response.h"
#include "Ezsignbulksend_getList_v1_Response.h"
#include "Ezsignbulksend_getObject_v2_Response.h"
#include "Ezsignbulksend_reorder_v1_Request.h"
#include "Ezsignbulksend_reorder_v1_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignbulksendApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignbulksendApi(const int timeOut = 0);
    ~ObjectEzsignbulksendApi();

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
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  ezsignbulksend_create_ezsignbulksendtransmission_v2_request Ezsignbulksend_createEzsignbulksendtransmission_v2_Request [required]
    */
    virtual void ezsignbulksendCreateEzsignbulksendtransmissionV2(const qint32 &pki_ezsignbulksend_id, const Ezsignbulksend_createEzsignbulksendtransmission_v2_Request &ezsignbulksend_create_ezsignbulksendtransmission_v2_request);

    /**
    * @param[in]  ezsignbulksend_create_object_v1_request Ezsignbulksend_createObject_v1_Request [required]
    */
    virtual void ezsignbulksendCreateObjectV1(const Ezsignbulksend_createObject_v1_Request &ezsignbulksend_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    virtual void ezsignbulksendDeleteObjectV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  ezsignbulksend_edit_object_v1_request Ezsignbulksend_editObject_v1_Request [required]
    */
    virtual void ezsignbulksendEditObjectV1(const qint32 &pki_ezsignbulksend_id, const Ezsignbulksend_editObject_v1_Request &ezsignbulksend_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  e_csv_separator QString [required]
    */
    virtual void ezsignbulksendGetCsvTemplateV1(const qint32 &pki_ezsignbulksend_id, const QString &e_csv_separator);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    virtual void ezsignbulksendGetEzsignbulksendtransmissionsV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    virtual void ezsignbulksendGetEzsignsignaturesAutomaticV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    virtual void ezsignbulksendGetFormsDataV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void ezsignbulksendGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    virtual void ezsignbulksendGetObjectV2(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    * @param[in]  ezsignbulksend_reorder_v1_request Ezsignbulksend_reorder_v1_Request [required]
    */
    virtual void ezsignbulksendReorderV1(const qint32 &pki_ezsignbulksend_id, const Ezsignbulksend_reorder_v1_Request &ezsignbulksend_reorder_v1_request);


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

    void ezsignbulksendCreateEzsignbulksendtransmissionV2Callback(HttpRequestWorker *worker);
    void ezsignbulksendCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendGetCsvTemplateV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendGetFormsDataV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendGetListV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendGetObjectV2Callback(HttpRequestWorker *worker);
    void ezsignbulksendReorderV1Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsignbulksendCreateEzsignbulksendtransmissionV2Signal(Ezsignbulksend_createEzsignbulksendtransmission_v2_Response summary);
    void ezsignbulksendCreateObjectV1Signal(Ezsignbulksend_createObject_v1_Response summary);
    void ezsignbulksendDeleteObjectV1Signal(Ezsignbulksend_deleteObject_v1_Response summary);
    void ezsignbulksendEditObjectV1Signal(Ezsignbulksend_editObject_v1_Response summary);
    void ezsignbulksendGetCsvTemplateV1Signal(QString summary);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1Signal(Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response summary);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1Signal(Ezsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignbulksendGetFormsDataV1Signal(Ezsignbulksend_getFormsData_v1_Response summary);
    void ezsignbulksendGetListV1Signal(Ezsignbulksend_getList_v1_Response summary);
    void ezsignbulksendGetObjectV2Signal(Ezsignbulksend_getObject_v2_Response summary);
    void ezsignbulksendReorderV1Signal(Ezsignbulksend_reorder_v1_Response summary);


    void ezsignbulksendCreateEzsignbulksendtransmissionV2SignalFull(HttpRequestWorker *worker, Ezsignbulksend_createEzsignbulksendtransmission_v2_Response summary);
    void ezsignbulksendCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_createObject_v1_Response summary);
    void ezsignbulksendDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_deleteObject_v1_Response summary);
    void ezsignbulksendEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_editObject_v1_Response summary);
    void ezsignbulksendGetCsvTemplateV1SignalFull(HttpRequestWorker *worker, QString summary);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response summary);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignbulksendGetFormsDataV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_getFormsData_v1_Response summary);
    void ezsignbulksendGetListV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_getList_v1_Response summary);
    void ezsignbulksendGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignbulksend_getObject_v2_Response summary);
    void ezsignbulksendReorderV1SignalFull(HttpRequestWorker *worker, Ezsignbulksend_reorder_v1_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignbulksendCreateEzsignbulksendtransmissionV2SignalError() instead")
    void ezsignbulksendCreateEzsignbulksendtransmissionV2SignalE(Ezsignbulksend_createEzsignbulksendtransmission_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendCreateEzsignbulksendtransmissionV2SignalError(Ezsignbulksend_createEzsignbulksendtransmission_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendCreateObjectV1SignalError() instead")
    void ezsignbulksendCreateObjectV1SignalE(Ezsignbulksend_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendCreateObjectV1SignalError(Ezsignbulksend_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendDeleteObjectV1SignalError() instead")
    void ezsignbulksendDeleteObjectV1SignalE(Ezsignbulksend_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendDeleteObjectV1SignalError(Ezsignbulksend_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendEditObjectV1SignalError() instead")
    void ezsignbulksendEditObjectV1SignalE(Ezsignbulksend_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendEditObjectV1SignalError(Ezsignbulksend_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetCsvTemplateV1SignalError() instead")
    void ezsignbulksendGetCsvTemplateV1SignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetCsvTemplateV1SignalError(QString summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetEzsignbulksendtransmissionsV1SignalError() instead")
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalE(Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalError(Ezsignbulksend_getEzsignbulksendtransmissions_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetEzsignsignaturesAutomaticV1SignalError() instead")
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalE(Ezsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalError(Ezsignbulksend_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetFormsDataV1SignalError() instead")
    void ezsignbulksendGetFormsDataV1SignalE(Ezsignbulksend_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetFormsDataV1SignalError(Ezsignbulksend_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetListV1SignalError() instead")
    void ezsignbulksendGetListV1SignalE(Ezsignbulksend_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetListV1SignalError(Ezsignbulksend_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetObjectV2SignalError() instead")
    void ezsignbulksendGetObjectV2SignalE(Ezsignbulksend_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetObjectV2SignalError(Ezsignbulksend_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendReorderV1SignalError() instead")
    void ezsignbulksendReorderV1SignalE(Ezsignbulksend_reorder_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendReorderV1SignalError(Ezsignbulksend_reorder_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignbulksendCreateEzsignbulksendtransmissionV2SignalErrorFull() instead")
    void ezsignbulksendCreateEzsignbulksendtransmissionV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendCreateEzsignbulksendtransmissionV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendCreateObjectV1SignalErrorFull() instead")
    void ezsignbulksendCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendDeleteObjectV1SignalErrorFull() instead")
    void ezsignbulksendDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendEditObjectV1SignalErrorFull() instead")
    void ezsignbulksendEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetCsvTemplateV1SignalErrorFull() instead")
    void ezsignbulksendGetCsvTemplateV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetCsvTemplateV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetEzsignbulksendtransmissionsV1SignalErrorFull() instead")
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetEzsignsignaturesAutomaticV1SignalErrorFull() instead")
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetEzsignsignaturesAutomaticV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetFormsDataV1SignalErrorFull() instead")
    void ezsignbulksendGetFormsDataV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetFormsDataV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetListV1SignalErrorFull() instead")
    void ezsignbulksendGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendGetObjectV2SignalErrorFull() instead")
    void ezsignbulksendGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendReorderV1SignalErrorFull() instead")
    void ezsignbulksendReorderV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendReorderV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
