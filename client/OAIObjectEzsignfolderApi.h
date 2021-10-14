/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
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

#include "OAICommon_Response_Error.h"
#include "OAIEzsignfolder_createObject_v1_Request.h"
#include "OAIEzsignfolder_createObject_v1_Response.h"
#include "OAIEzsignfolder_deleteObject_v1_Response.h"
#include "OAIEzsignfolder_getFormsData_v1_Response.h"
#include "OAIEzsignfolder_getList_v1_Response.h"
#include "OAIEzsignfolder_getObject_v1_Response.h"
#include "OAIEzsignfolder_send_v1_Request.h"
#include "OAIEzsignfolder_send_v1_Response.h"
#include "OAIHeader_Accept_Language.h"
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
    * @param[in]  oai_ezsignfolder_create_object_v1_request QList<OAIEzsignfolder_createObject_v1_Request> [required]
    */
    void ezsignfolderCreateObjectV1(const QList<OAIEzsignfolder_createObject_v1_Request> &oai_ezsignfolder_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderDeleteObjectV1(const qint32 &pki_ezsignfolder_id);

    /**
    * @param[in]  pki_ezsignfolder_id qint32 [required]
    */
    void ezsignfolderGetChildrenV1(const qint32 &pki_ezsignfolder_id);

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
    * @param[in]  oai_ezsignfolder_send_v1_request OAIEzsignfolder_send_v1_Request [required]
    */
    void ezsignfolderSendV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_send_v1_Request &oai_ezsignfolder_send_v1_request);


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

    void ezsignfolderCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetChildrenV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetFormsDataV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetListV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderSendV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignfolderCreateObjectV1Signal(OAIEzsignfolder_createObject_v1_Response summary);
    void ezsignfolderDeleteObjectV1Signal(OAIEzsignfolder_deleteObject_v1_Response summary);
    void ezsignfolderGetChildrenV1Signal();
    void ezsignfolderGetFormsDataV1Signal(OAIEzsignfolder_getFormsData_v1_Response summary);
    void ezsignfolderGetListV1Signal(OAIEzsignfolder_getList_v1_Response summary);
    void ezsignfolderGetObjectV1Signal(OAIEzsignfolder_getObject_v1_Response summary);
    void ezsignfolderSendV1Signal(OAIEzsignfolder_send_v1_Response summary);

    void ezsignfolderCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_createObject_v1_Response summary);
    void ezsignfolderDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_deleteObject_v1_Response summary);
    void ezsignfolderGetChildrenV1SignalFull(OAIHttpRequestWorker *worker);
    void ezsignfolderGetFormsDataV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getFormsData_v1_Response summary);
    void ezsignfolderGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getList_v1_Response summary);
    void ezsignfolderGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getObject_v1_Response summary);
    void ezsignfolderSendV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_send_v1_Response summary);

    void ezsignfolderCreateObjectV1SignalE(OAIEzsignfolder_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDeleteObjectV1SignalE(OAIEzsignfolder_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetChildrenV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetFormsDataV1SignalE(OAIEzsignfolder_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetListV1SignalE(OAIEzsignfolder_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetObjectV1SignalE(OAIEzsignfolder_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderSendV1SignalE(OAIEzsignfolder_send_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignfolderCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetChildrenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetFormsDataV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderSendV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();
};

} // namespace OpenAPI
#endif
