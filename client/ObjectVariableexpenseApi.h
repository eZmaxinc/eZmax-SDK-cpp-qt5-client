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

#ifndef _ObjectVariableexpenseApi_H
#define _ObjectVariableexpenseApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response.h"
#include "Common_Response_Error.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include "Variableexpense_createObject_v1_Request.h"
#include "Variableexpense_createObject_v1_Response.h"
#include "Variableexpense_editObject_v1_Request.h"
#include "Variableexpense_getAutocomplete_v2_Response.h"
#include "Variableexpense_getList_v1_Response.h"
#include "Variableexpense_getObject_v2_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectVariableexpenseApi : public QObject {
    Q_OBJECT

public:
    ObjectVariableexpenseApi(const int timeOut = 0);
    ~ObjectVariableexpenseApi();

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
    * @param[in]  variableexpense_create_object_v1_request Variableexpense_createObject_v1_Request [required]
    */
    virtual void variableexpenseCreateObjectV1(const Variableexpense_createObject_v1_Request &variableexpense_create_object_v1_request);

    /**
    * @param[in]  pki_variableexpense_id qint32 [required]
    * @param[in]  variableexpense_edit_object_v1_request Variableexpense_editObject_v1_Request [required]
    */
    virtual void variableexpenseEditObjectV1(const qint32 &pki_variableexpense_id, const Variableexpense_editObject_v1_Request &variableexpense_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    */
    virtual void variableexpenseGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void variableexpenseGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_variableexpense_id qint32 [required]
    */
    virtual void variableexpenseGetObjectV2(const qint32 &pki_variableexpense_id);


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

    void variableexpenseCreateObjectV1Callback(HttpRequestWorker *worker);
    void variableexpenseEditObjectV1Callback(HttpRequestWorker *worker);
    void variableexpenseGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void variableexpenseGetListV1Callback(HttpRequestWorker *worker);
    void variableexpenseGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void variableexpenseCreateObjectV1Signal(Variableexpense_createObject_v1_Response summary);
    void variableexpenseEditObjectV1Signal(Common_Response summary);
    void variableexpenseGetAutocompleteV2Signal(Variableexpense_getAutocomplete_v2_Response summary);
    void variableexpenseGetListV1Signal(Variableexpense_getList_v1_Response summary);
    void variableexpenseGetObjectV2Signal(Variableexpense_getObject_v2_Response summary);


    void variableexpenseCreateObjectV1SignalFull(HttpRequestWorker *worker, Variableexpense_createObject_v1_Response summary);
    void variableexpenseEditObjectV1SignalFull(HttpRequestWorker *worker, Common_Response summary);
    void variableexpenseGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Variableexpense_getAutocomplete_v2_Response summary);
    void variableexpenseGetListV1SignalFull(HttpRequestWorker *worker, Variableexpense_getList_v1_Response summary);
    void variableexpenseGetObjectV2SignalFull(HttpRequestWorker *worker, Variableexpense_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use variableexpenseCreateObjectV1SignalError() instead")
    void variableexpenseCreateObjectV1SignalE(Variableexpense_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseCreateObjectV1SignalError(Variableexpense_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseEditObjectV1SignalError() instead")
    void variableexpenseEditObjectV1SignalE(Common_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseEditObjectV1SignalError(Common_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseGetAutocompleteV2SignalError() instead")
    void variableexpenseGetAutocompleteV2SignalE(Variableexpense_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetAutocompleteV2SignalError(Variableexpense_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseGetListV1SignalError() instead")
    void variableexpenseGetListV1SignalE(Variableexpense_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetListV1SignalError(Variableexpense_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseGetObjectV2SignalError() instead")
    void variableexpenseGetObjectV2SignalE(Variableexpense_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetObjectV2SignalError(Variableexpense_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use variableexpenseCreateObjectV1SignalErrorFull() instead")
    void variableexpenseCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseEditObjectV1SignalErrorFull() instead")
    void variableexpenseEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseGetAutocompleteV2SignalErrorFull() instead")
    void variableexpenseGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseGetListV1SignalErrorFull() instead")
    void variableexpenseGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use variableexpenseGetObjectV2SignalErrorFull() instead")
    void variableexpenseGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void variableexpenseGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
