/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectEzsignbulksendApi_H
#define OAI_OAIObjectEzsignbulksendApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response.h"
#include "OAIEzsignbulksend_getList_v1_Response.h"
#include "OAIEzsignbulksend_getObject_v1_Response.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignbulksendApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignbulksendApi(const int timeOut = 0);
    ~OAIObjectEzsignbulksendApi();

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
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendGetEzsignbulksendtransmissionsV1(const qint32 &pki_ezsignbulksend_id);

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void ezsignbulksendGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_ezsignbulksend_id qint32 [required]
    */
    void ezsignbulksendGetObjectV1(const qint32 &pki_ezsignbulksend_id);


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

    void ezsignbulksendGetEzsignbulksendtransmissionsV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetListV1Callback(OAIHttpRequestWorker *worker);
    void ezsignbulksendGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignbulksendGetEzsignbulksendtransmissionsV1Signal(OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response summary);
    void ezsignbulksendGetListV1Signal(OAIEzsignbulksend_getList_v1_Response summary);
    void ezsignbulksendGetObjectV1Signal(OAIEzsignbulksend_getObject_v1_Response summary);

    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response summary);
    void ezsignbulksendGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getList_v1_Response summary);
    void ezsignbulksendGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignbulksend_getObject_v1_Response summary);

    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalE(OAIEzsignbulksend_getEzsignbulksendtransmissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetListV1SignalE(OAIEzsignbulksend_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetObjectV1SignalE(OAIEzsignbulksend_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignbulksendGetEzsignbulksendtransmissionsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
