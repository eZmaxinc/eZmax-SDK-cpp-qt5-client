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

#ifndef _ObjectPaymenttermApi_H
#define _ObjectPaymenttermApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include "Paymentterm_createObject_v1_Request.h"
#include "Paymentterm_createObject_v1_Response.h"
#include "Paymentterm_editObject_v1_Request.h"
#include "Paymentterm_editObject_v1_Response.h"
#include "Paymentterm_getAutocomplete_v2_Response.h"
#include "Paymentterm_getList_v1_Response.h"
#include "Paymentterm_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectPaymenttermApi : public QObject {
    Q_OBJECT

public:
    ObjectPaymenttermApi(const int timeOut = 0);
    ~ObjectPaymenttermApi();

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
    * @param[in]  paymentterm_create_object_v1_request Paymentterm_createObject_v1_Request [required]
    */
    void paymenttermCreateObjectV1(const Paymentterm_createObject_v1_Request &paymentterm_create_object_v1_request);

    /**
    * @param[in]  pki_paymentterm_id qint32 [required]
    * @param[in]  paymentterm_edit_object_v1_request Paymentterm_editObject_v1_Request [required]
    */
    void paymenttermEditObjectV1(const qint32 &pki_paymentterm_id, const Paymentterm_editObject_v1_Request &paymentterm_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    void paymenttermGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void paymenttermGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_paymentterm_id qint32 [required]
    */
    void paymenttermGetObjectV2(const qint32 &pki_paymentterm_id);


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

    void paymenttermCreateObjectV1Callback(HttpRequestWorker *worker);
    void paymenttermEditObjectV1Callback(HttpRequestWorker *worker);
    void paymenttermGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void paymenttermGetListV1Callback(HttpRequestWorker *worker);
    void paymenttermGetObjectV2Callback(HttpRequestWorker *worker);

signals:

    void paymenttermCreateObjectV1Signal(Paymentterm_createObject_v1_Response summary);
    void paymenttermEditObjectV1Signal(Paymentterm_editObject_v1_Response summary);
    void paymenttermGetAutocompleteV2Signal(Paymentterm_getAutocomplete_v2_Response summary);
    void paymenttermGetListV1Signal(Paymentterm_getList_v1_Response summary);
    void paymenttermGetObjectV2Signal(Paymentterm_getObject_v2_Response summary);

    void paymenttermCreateObjectV1SignalFull(HttpRequestWorker *worker, Paymentterm_createObject_v1_Response summary);
    void paymenttermEditObjectV1SignalFull(HttpRequestWorker *worker, Paymentterm_editObject_v1_Response summary);
    void paymenttermGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Paymentterm_getAutocomplete_v2_Response summary);
    void paymenttermGetListV1SignalFull(HttpRequestWorker *worker, Paymentterm_getList_v1_Response summary);
    void paymenttermGetObjectV2SignalFull(HttpRequestWorker *worker, Paymentterm_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use paymenttermCreateObjectV1SignalError() instead")
    void paymenttermCreateObjectV1SignalE(Paymentterm_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermCreateObjectV1SignalError(Paymentterm_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermEditObjectV1SignalError() instead")
    void paymenttermEditObjectV1SignalE(Paymentterm_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermEditObjectV1SignalError(Paymentterm_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermGetAutocompleteV2SignalError() instead")
    void paymenttermGetAutocompleteV2SignalE(Paymentterm_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetAutocompleteV2SignalError(Paymentterm_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermGetListV1SignalError() instead")
    void paymenttermGetListV1SignalE(Paymentterm_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetListV1SignalError(Paymentterm_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermGetObjectV2SignalError() instead")
    void paymenttermGetObjectV2SignalE(Paymentterm_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetObjectV2SignalError(Paymentterm_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use paymenttermCreateObjectV1SignalErrorFull() instead")
    void paymenttermCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermEditObjectV1SignalErrorFull() instead")
    void paymenttermEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermGetAutocompleteV2SignalErrorFull() instead")
    void paymenttermGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermGetListV1SignalErrorFull() instead")
    void paymenttermGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use paymenttermGetObjectV2SignalErrorFull() instead")
    void paymenttermGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void paymenttermGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
