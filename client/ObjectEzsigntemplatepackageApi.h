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

#ifndef _ObjectEzsigntemplatepackageApi_H
#define _ObjectEzsigntemplatepackageApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsigntemplatepackage_createObject_v1_Request.h"
#include "Ezsigntemplatepackage_createObject_v1_Response.h"
#include "Ezsigntemplatepackage_deleteObject_v1_Response.h"
#include "Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request.h"
#include "Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response.h"
#include "Ezsigntemplatepackage_editObject_v1_Request.h"
#include "Ezsigntemplatepackage_editObject_v1_Response.h"
#include "Ezsigntemplatepackage_getAutocomplete_v2_Response.h"
#include "Ezsigntemplatepackage_getList_v1_Response.h"
#include "Ezsigntemplatepackage_getObject_v2_Response.h"
#include "Header_Accept_Language.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsigntemplatepackageApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsigntemplatepackageApi(const int timeOut = 0);
    ~ObjectEzsigntemplatepackageApi();

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
    * @param[in]  ezsigntemplatepackage_create_object_v1_request Ezsigntemplatepackage_createObject_v1_Request [required]
    */
    virtual void ezsigntemplatepackageCreateObjectV1(const Ezsigntemplatepackage_createObject_v1_Request &ezsigntemplatepackage_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    */
    virtual void ezsigntemplatepackageDeleteObjectV1(const qint32 &pki_ezsigntemplatepackage_id);

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    * @param[in]  ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request [required]
    */
    virtual void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1(const qint32 &pki_ezsigntemplatepackage_id, const Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Request &ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request);

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    * @param[in]  ezsigntemplatepackage_edit_object_v1_request Ezsigntemplatepackage_editObject_v1_Request [required]
    */
    virtual void ezsigntemplatepackageEditObjectV1(const qint32 &pki_ezsigntemplatepackage_id, const Ezsigntemplatepackage_editObject_v1_Request &ezsigntemplatepackage_edit_object_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  fki_ezsignfoldertype_id qint32 [optional]
    */
    virtual void ezsigntemplatepackageGetAutocompleteV2(const QString &s_selector, const ::Ezmaxapi::OptionalParam<QString> &e_filter_active = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<QString> &s_query = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<qint32> &fki_ezsignfoldertype_id = ::Ezmaxapi::OptionalParam<qint32>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language Header_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    virtual void ezsigntemplatepackageGetListV1(const ::Ezmaxapi::OptionalParam<QString> &e_order_by = ::Ezmaxapi::OptionalParam<QString>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_max = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<qint32> &i_row_offset = ::Ezmaxapi::OptionalParam<qint32>(), const ::Ezmaxapi::OptionalParam<Header_Accept_Language> &accept_language = ::Ezmaxapi::OptionalParam<Header_Accept_Language>(), const ::Ezmaxapi::OptionalParam<QString> &s_filter = ::Ezmaxapi::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsigntemplatepackage_id qint32 [required]
    */
    virtual void ezsigntemplatepackageGetObjectV2(const qint32 &pki_ezsigntemplatepackage_id);


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

    void ezsigntemplatepackageCreateObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackageDeleteObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackageEditObjectV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackageGetAutocompleteV2Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackageGetListV1Callback(HttpRequestWorker *worker);
    void ezsigntemplatepackageGetObjectV2Callback(HttpRequestWorker *worker);

Q_SIGNALS:

    void ezsigntemplatepackageCreateObjectV1Signal(Ezsigntemplatepackage_createObject_v1_Response summary);
    void ezsigntemplatepackageDeleteObjectV1Signal(Ezsigntemplatepackage_deleteObject_v1_Response summary);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1Signal(Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary);
    void ezsigntemplatepackageEditObjectV1Signal(Ezsigntemplatepackage_editObject_v1_Response summary);
    void ezsigntemplatepackageGetAutocompleteV2Signal(Ezsigntemplatepackage_getAutocomplete_v2_Response summary);
    void ezsigntemplatepackageGetListV1Signal(Ezsigntemplatepackage_getList_v1_Response summary);
    void ezsigntemplatepackageGetObjectV2Signal(Ezsigntemplatepackage_getObject_v2_Response summary);


    void ezsigntemplatepackageCreateObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_createObject_v1_Response summary);
    void ezsigntemplatepackageDeleteObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_deleteObject_v1_Response summary);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary);
    void ezsigntemplatepackageEditObjectV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_editObject_v1_Response summary);
    void ezsigntemplatepackageGetAutocompleteV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_getAutocomplete_v2_Response summary);
    void ezsigntemplatepackageGetListV1SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_getList_v1_Response summary);
    void ezsigntemplatepackageGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsigntemplatepackage_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageCreateObjectV1SignalError() instead")
    void ezsigntemplatepackageCreateObjectV1SignalE(Ezsigntemplatepackage_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageCreateObjectV1SignalError(Ezsigntemplatepackage_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageDeleteObjectV1SignalError() instead")
    void ezsigntemplatepackageDeleteObjectV1SignalE(Ezsigntemplatepackage_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageDeleteObjectV1SignalError(Ezsigntemplatepackage_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalError() instead")
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalE(Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalError(Ezsigntemplatepackage_editEzsigntemplatepackagesigners_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageEditObjectV1SignalError() instead")
    void ezsigntemplatepackageEditObjectV1SignalE(Ezsigntemplatepackage_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditObjectV1SignalError(Ezsigntemplatepackage_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageGetAutocompleteV2SignalError() instead")
    void ezsigntemplatepackageGetAutocompleteV2SignalE(Ezsigntemplatepackage_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetAutocompleteV2SignalError(Ezsigntemplatepackage_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageGetListV1SignalError() instead")
    void ezsigntemplatepackageGetListV1SignalE(Ezsigntemplatepackage_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetListV1SignalError(Ezsigntemplatepackage_getList_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageGetObjectV2SignalError() instead")
    void ezsigntemplatepackageGetObjectV2SignalE(Ezsigntemplatepackage_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetObjectV2SignalError(Ezsigntemplatepackage_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageCreateObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackageCreateObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageCreateObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageDeleteObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackageDeleteObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageDeleteObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalErrorFull() instead")
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditEzsigntemplatepackagesignersV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageEditObjectV1SignalErrorFull() instead")
    void ezsigntemplatepackageEditObjectV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageEditObjectV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageGetAutocompleteV2SignalErrorFull() instead")
    void ezsigntemplatepackageGetAutocompleteV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetAutocompleteV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageGetListV1SignalErrorFull() instead")
    void ezsigntemplatepackageGetListV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetListV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsigntemplatepackageGetObjectV2SignalErrorFull() instead")
    void ezsigntemplatepackageGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigntemplatepackageGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
