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

#ifndef OAI_OAIObjectEzsigntemplatepackageApi_H
#define OAI_OAIObjectEzsigntemplatepackageApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAICommon_getAutocompleteDisabled_v1_Response.h"
#include "OAIEzsigntemplatepackage_createObject_v1_Request.h"
#include "OAIEzsigntemplatepackage_createObject_v1_Response.h"
#include "OAIEzsigntemplatepackage_deleteObject_v1_Response.h"
#include "OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request.h"
#include "OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response.h"
#include "OAIEzsigntemplatepackage_editObject_v1_Request.h"
#include "OAIEzsigntemplatepackage_editObject_v1_Response.h"
#include "OAIEzsigntemplatepackage_getList_v1_Response.h"
#include "OAIEzsigntemplatepackage_getObject_v1_Response.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigntemplatepackageApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigntemplatepackageApi(const int timeOut = 0);
    ~OAIObjectEzsigntemplatepackageApi();

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
    * @param[in]  oai_ezsigntemplatepackage_create_object_v1_request OAIEzsigntemplatepackage_createObject_v1_Request [required]
    */
    void ezsigntemplatepackageCreateObjectV1(const OAIEzsigntemplatepackage_createObject_v1_Request &oai_ezsigntemplatepackage_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    */
    void ezsigntemplatepackageDeleteObjectV1(const qint32 &pki_ezsigntemplatepackage_id);

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    * @param[in]  oai_ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request [required]
    */
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1(const qint32 &pki_ezsigntemplatepackage_id, const OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request &oai_ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    * @param[in]  oai_ezsigntemplatepackage_edit_object_v1_request OAIEzsigntemplatepackage_editObject_v1_Request [required]
    */
    void ezsigntemplatepackageEditObjectV1(const qint32 &pki_ezsigntemplatepackage_id, const OAIEzsigntemplatepackage_editObject_v1_Request &oai_ezsigntemplatepackage_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    void ezsigntemplatepackageGetAutocompleteV1(const QString &s_selector, const ::OpenAPI::OptionalParam<QString> &s_query = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void ezsigntemplatepackageGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    */
    void ezsigntemplatepackageGetObjectV1(const qint32 &pki_ezsigntemplatepackage_id);


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

    void ezsigntemplatepackageCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackageDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackageEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackageGetAutocompleteV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackageGetListV1Callback(OAIHttpRequestWorker *worker);
    void ezsigntemplatepackageGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigntemplatepackageCreateObjectV1Signal(OAIEzsigntemplatepackage_createObject_v1_Response summary);
    void ezsigntemplatepackageDeleteObjectV1Signal(OAIEzsigntemplatepackage_deleteObject_v1_Response summary);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1Signal(OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary);
    void ezsigntemplatepackageEditObjectV1Signal(OAIEzsigntemplatepackage_editObject_v1_Response summary);
    void ezsigntemplatepackageGetAutocompleteV1Signal(OAICommon_getAutocompleteDisabled_v1_Response summary);
    void ezsigntemplatepackageGetListV1Signal(OAIEzsigntemplatepackage_getList_v1_Response summary);
    void ezsigntemplatepackageGetObjectV1Signal(OAIEzsigntemplatepackage_getObject_v1_Response summary);

    void ezsigntemplatepackageCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackage_createObject_v1_Response summary);
    void ezsigntemplatepackageDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackage_deleteObject_v1_Response summary);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary);
    void ezsigntemplatepackageEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackage_editObject_v1_Response summary);
    void ezsigntemplatepackageGetAutocompleteV1SignalFull(OAIHttpRequestWorker *worker, OAICommon_getAutocompleteDisabled_v1_Response summary);
    void ezsigntemplatepackageGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackage_getList_v1_Response summary);
    void ezsigntemplatepackageGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigntemplatepackage_getObject_v1_Response summary);

    void ezsigntemplatepackageCreateObjectV1SignalE(OAIEzsigntemplatepackage_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageDeleteObjectV1SignalE(OAIEzsigntemplatepackage_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalE(OAIEzsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditObjectV1SignalE(OAIEzsigntemplatepackage_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetAutocompleteV1SignalE(OAICommon_getAutocompleteDisabled_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetListV1SignalE(OAIEzsigntemplatepackage_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetObjectV1SignalE(OAIEzsigntemplatepackage_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigntemplatepackageCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetAutocompleteV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
