/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignfolderApi_H
#define OAI_OAIObjectEzsignfolderApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignfolder_archive_v1_Response.h"
#include "OAIEzsignfolder_batchDownload_v1_Request.h"
#include "OAIEzsignfolder_createObject_v1_Request.h"
#include "OAIEzsignfolder_createObject_v1_Response.h"
#include "OAIEzsignfolder_createObject_v2_Request.h"
#include "OAIEzsignfolder_createObject_v2_Response.h"
#include "OAIEzsignfolder_deleteObject_v1_Response.h"
#include "OAIEzsignfolder_disposeEzsignfolders_v1_Request.h"
#include "OAIEzsignfolder_disposeEzsignfolders_v1_Response.h"
#include "OAIEzsignfolder_dispose_v1_Response.h"
#include "OAIEzsignfolder_editObject_v1_Request.h"
#include "OAIEzsignfolder_editObject_v1_Response.h"
#include "OAIEzsignfolder_getActionableElements_v1_Response.h"
#include "OAIEzsignfolder_getEzsigndocuments_v1_Response.h"
#include "OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response.h"
#include "OAIEzsignfolder_getFormsData_v1_Response.h"
#include "OAIEzsignfolder_getList_v1_Response.h"
#include "OAIEzsignfolder_getObject_v1_Response.h"
#include "OAIEzsignfolder_importEzsigntemplatepackage_v1_Request.h"
#include "OAIEzsignfolder_importEzsigntemplatepackage_v1_Response.h"
#include "OAIEzsignfolder_reorder_v1_Request.h"
#include "OAIEzsignfolder_reorder_v1_Response.h"
#include "OAIEzsignfolder_send_v1_Request.h"
#include "OAIEzsignfolder_send_v1_Response.h"
#include "OAIEzsignfolder_unsend_v1_Response.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include "OAIObject.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignfolderApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignfolderApi(const int timeOut = 0);
    ~OAIObjectEzsignfolderApi();

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
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsignfolderArchiveV1(const qint32 &pki_ezsignfolder_id, const OAIObject &body);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  oai_ezsignfolder_batch_download_v1_request OAIEzsignfolder_batchDownload_v1_Request [required]
    */
    void ezsignfolderBatchDownloadV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_batchDownload_v1_Request &oai_ezsignfolder_batch_download_v1_request);

    /**
    * @param[in]  oai_ezsignfolder_create_object_v1_request QList<OAIEzsignfolder_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED void ezsignfolderCreateObjectV1(const QList<OAIEzsignfolder_createObject_v1_Request> &oai_ezsignfolder_create_object_v1_request);

    /**
    * @param[in]  oai_ezsignfolder_create_object_v2_request OAIEzsignfolder_createObject_v2_Request [required]
    */
    void ezsignfolderCreateObjectV2(const OAIEzsignfolder_createObject_v2_Request &oai_ezsignfolder_create_object_v2_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderDeleteObjectV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  oai_ezsignfolder_dispose_ezsignfolders_v1_request OAIEzsignfolder_disposeEzsignfolders_v1_Request [required]
    */
    void ezsignfolderDisposeEzsignfoldersV1(const OAIEzsignfolder_disposeEzsignfolders_v1_Request &oai_ezsignfolder_dispose_ezsignfolders_v1_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsignfolderDisposeV1(const qint32 &pki_ezsignfolder_id, const OAIObject &body);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  oai_ezsignfolder_edit_object_v1_request OAIEzsignfolder_editObject_v1_Request [required]
    */
    void ezsignfolderEditObjectV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_editObject_v1_Request &oai_ezsignfolder_edit_object_v1_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderGetActionableElementsV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderGetEzsigndocumentsV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderGetEzsignfoldersignerassociationsV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderGetFormsDataV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void ezsignfolderGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderGetObjectV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  oai_ezsignfolder_import_ezsigntemplatepackage_v1_request OAIEzsignfolder_importEzsigntemplatepackage_v1_Request [required]
    */
    void ezsignfolderImportEzsigntemplatepackageV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_importEzsigntemplatepackage_v1_Request &oai_ezsignfolder_import_ezsigntemplatepackage_v1_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  oai_ezsignfolder_reorder_v1_request OAIEzsignfolder_reorder_v1_Request [required]
    */
    void ezsignfolderReorderV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_reorder_v1_Request &oai_ezsignfolder_reorder_v1_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  oai_ezsignfolder_send_v1_request OAIEzsignfolder_send_v1_Request [required]
    */
    void ezsignfolderSendV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_send_v1_Request &oai_ezsignfolder_send_v1_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsignfolderUnsendV1(const qint32 &pki_ezsignfolder_id, const OAIObject &body);


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

    void ezsignfolderArchiveV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderBatchDownloadV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderCreateObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderDisposeEzsignfoldersV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderDisposeV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetActionableElementsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetEzsigndocumentsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetEzsignfoldersignerassociationsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetFormsDataV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetListV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderImportEzsigntemplatepackageV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderReorderV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderSendV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderUnsendV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignfolderArchiveV1Signal(OAIEzsignfolder_archive_v1_Response summary);
    void ezsignfolderBatchDownloadV1Signal(OAIHttpFileElement summary);
    void ezsignfolderCreateObjectV1Signal(OAIEzsignfolder_createObject_v1_Response summary);
    void ezsignfolderCreateObjectV2Signal(OAIEzsignfolder_createObject_v2_Response summary);
    void ezsignfolderDeleteObjectV1Signal(OAIEzsignfolder_deleteObject_v1_Response summary);
    void ezsignfolderDisposeEzsignfoldersV1Signal(OAIEzsignfolder_disposeEzsignfolders_v1_Response summary);
    void ezsignfolderDisposeV1Signal(OAIEzsignfolder_dispose_v1_Response summary);
    void ezsignfolderEditObjectV1Signal(OAIEzsignfolder_editObject_v1_Response summary);
    void ezsignfolderGetActionableElementsV1Signal(OAIEzsignfolder_getActionableElements_v1_Response summary);
    void ezsignfolderGetEzsigndocumentsV1Signal(OAIEzsignfolder_getEzsigndocuments_v1_Response summary);
    void ezsignfolderGetEzsignfoldersignerassociationsV1Signal(OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response summary);
    void ezsignfolderGetFormsDataV1Signal(OAIEzsignfolder_getFormsData_v1_Response summary);
    void ezsignfolderGetListV1Signal(OAIEzsignfolder_getList_v1_Response summary);
    void ezsignfolderGetObjectV1Signal(OAIEzsignfolder_getObject_v1_Response summary);
    void ezsignfolderImportEzsigntemplatepackageV1Signal(OAIEzsignfolder_importEzsigntemplatepackage_v1_Response summary);
    void ezsignfolderReorderV1Signal(OAIEzsignfolder_reorder_v1_Response summary);
    void ezsignfolderSendV1Signal(OAIEzsignfolder_send_v1_Response summary);
    void ezsignfolderUnsendV1Signal(OAIEzsignfolder_unsend_v1_Response summary);

    void ezsignfolderArchiveV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_archive_v1_Response summary);
    void ezsignfolderBatchDownloadV1SignalFull(OAIHttpRequestWorker *worker, OAIHttpFileElement summary);
    void ezsignfolderCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_createObject_v1_Response summary);
    void ezsignfolderCreateObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_createObject_v2_Response summary);
    void ezsignfolderDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_deleteObject_v1_Response summary);
    void ezsignfolderDisposeEzsignfoldersV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_disposeEzsignfolders_v1_Response summary);
    void ezsignfolderDisposeV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_dispose_v1_Response summary);
    void ezsignfolderEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_editObject_v1_Response summary);
    void ezsignfolderGetActionableElementsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getActionableElements_v1_Response summary);
    void ezsignfolderGetEzsigndocumentsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getEzsigndocuments_v1_Response summary);
    void ezsignfolderGetEzsignfoldersignerassociationsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response summary);
    void ezsignfolderGetFormsDataV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getFormsData_v1_Response summary);
    void ezsignfolderGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getList_v1_Response summary);
    void ezsignfolderGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getObject_v1_Response summary);
    void ezsignfolderImportEzsigntemplatepackageV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_importEzsigntemplatepackage_v1_Response summary);
    void ezsignfolderReorderV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_reorder_v1_Response summary);
    void ezsignfolderSendV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_send_v1_Response summary);
    void ezsignfolderUnsendV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_unsend_v1_Response summary);

    void ezsignfolderArchiveV1SignalE(OAIEzsignfolder_archive_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderBatchDownloadV1SignalE(OAIHttpFileElement summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderCreateObjectV1SignalE(OAIEzsignfolder_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderCreateObjectV2SignalE(OAIEzsignfolder_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDeleteObjectV1SignalE(OAIEzsignfolder_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDisposeEzsignfoldersV1SignalE(OAIEzsignfolder_disposeEzsignfolders_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDisposeV1SignalE(OAIEzsignfolder_dispose_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderEditObjectV1SignalE(OAIEzsignfolder_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetActionableElementsV1SignalE(OAIEzsignfolder_getActionableElements_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetEzsigndocumentsV1SignalE(OAIEzsignfolder_getEzsigndocuments_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetEzsignfoldersignerassociationsV1SignalE(OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetFormsDataV1SignalE(OAIEzsignfolder_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetListV1SignalE(OAIEzsignfolder_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetObjectV1SignalE(OAIEzsignfolder_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderImportEzsigntemplatepackageV1SignalE(OAIEzsignfolder_importEzsigntemplatepackage_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderReorderV1SignalE(OAIEzsignfolder_reorder_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderSendV1SignalE(OAIEzsignfolder_send_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderUnsendV1SignalE(OAIEzsignfolder_unsend_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignfolderArchiveV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderBatchDownloadV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderCreateObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDisposeEzsignfoldersV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDisposeV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetActionableElementsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetEzsigndocumentsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetEzsignfoldersignerassociationsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetFormsDataV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderImportEzsigntemplatepackageV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderReorderV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderSendV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderUnsendV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
