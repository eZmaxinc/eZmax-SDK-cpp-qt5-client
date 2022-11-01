/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzmaxinvoicingApi_H
#define OAI_OAIObjectEzmaxinvoicingApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAICommon_getAutocomplete_v1_Response.h"
#include "OAIEzmaxinvoicing_getAutocomplete_v2_Response.h"
#include "OAIEzmaxinvoicing_getObject_v1_Response.h"
#include "OAIEzmaxinvoicing_getObject_v2_Response.h"
#include "OAIEzmaxinvoicing_getProvisional_v1_Response.h"
#include "OAIHeader_Accept_Language.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzmaxinvoicingApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzmaxinvoicingApi(const int timeOut = 0);
    ~OAIObjectEzmaxinvoicingApi();

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
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    Q_DECL_DEPRECATED void ezmaxinvoicingGetAutocompleteV1(const QString &s_selector, const ::OpenAPI::OptionalParam<QString> &e_filter_active = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &s_query = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    void ezmaxinvoicingGetAutocompleteV2(const QString &s_selector, const ::OpenAPI::OptionalParam<QString> &e_filter_active = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &s_query = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  pki_ezmaxinvoicing_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezmaxinvoicingGetObjectV1(const qint32 &pki_ezmaxinvoicing_id);

    /**
    * @param[in]  pki_ezmaxinvoicing_id qint32 [required]
    */
    void ezmaxinvoicingGetObjectV2(const qint32 &pki_ezmaxinvoicing_id);


    void ezmaxinvoicingGetProvisionalV1();


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

    void ezmaxinvoicingGetAutocompleteV1Callback(OAIHttpRequestWorker *worker);
    void ezmaxinvoicingGetAutocompleteV2Callback(OAIHttpRequestWorker *worker);
    void ezmaxinvoicingGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezmaxinvoicingGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezmaxinvoicingGetProvisionalV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezmaxinvoicingGetAutocompleteV1Signal(OAICommon_getAutocomplete_v1_Response summary);
    void ezmaxinvoicingGetAutocompleteV2Signal(OAIEzmaxinvoicing_getAutocomplete_v2_Response summary);
    void ezmaxinvoicingGetObjectV1Signal(OAIEzmaxinvoicing_getObject_v1_Response summary);
    void ezmaxinvoicingGetObjectV2Signal(OAIEzmaxinvoicing_getObject_v2_Response summary);
    void ezmaxinvoicingGetProvisionalV1Signal(OAIEzmaxinvoicing_getProvisional_v1_Response summary);

    void ezmaxinvoicingGetAutocompleteV1SignalFull(OAIHttpRequestWorker *worker, OAICommon_getAutocomplete_v1_Response summary);
    void ezmaxinvoicingGetAutocompleteV2SignalFull(OAIHttpRequestWorker *worker, OAIEzmaxinvoicing_getAutocomplete_v2_Response summary);
    void ezmaxinvoicingGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzmaxinvoicing_getObject_v1_Response summary);
    void ezmaxinvoicingGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzmaxinvoicing_getObject_v2_Response summary);
    void ezmaxinvoicingGetProvisionalV1SignalFull(OAIHttpRequestWorker *worker, OAIEzmaxinvoicing_getProvisional_v1_Response summary);

    void ezmaxinvoicingGetAutocompleteV1SignalE(OAICommon_getAutocomplete_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetAutocompleteV2SignalE(OAIEzmaxinvoicing_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetObjectV1SignalE(OAIEzmaxinvoicing_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetObjectV2SignalE(OAIEzmaxinvoicing_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetProvisionalV1SignalE(OAIEzmaxinvoicing_getProvisional_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezmaxinvoicingGetAutocompleteV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetAutocompleteV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezmaxinvoicingGetProvisionalV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
