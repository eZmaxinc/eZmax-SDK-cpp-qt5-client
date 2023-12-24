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

#ifndef _ObjectEzsignbulksendtransmissionApi_H
#define _ObjectEzsignbulksendtransmissionApi_H

#include "Helpers.h"
#include "HttpRequest.h"
#include "ServerConfiguration.h"
#include "Oauth.h"

#include "Common_Response_Error.h"
#include "Ezsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response.h"
#include "Ezsignbulksendtransmission_getFormsData_v1_Response.h"
#include "Ezsignbulksendtransmission_getObject_v2_Response.h"
#include "HttpFileElement.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace Ezmaxapi {

class ObjectEzsignbulksendtransmissionApi : public QObject {
    Q_OBJECT

public:
    ObjectEzsignbulksendtransmissionApi(const int timeOut = 0);
    ~ObjectEzsignbulksendtransmissionApi();

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
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetCsvErrorsV1(const qint32 &pki_ezsignbulksendtransmission_id);

    /**
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1(const qint32 &pki_ezsignbulksendtransmission_id);

    /**
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetFormsDataV1(const qint32 &pki_ezsignbulksendtransmission_id);

    /**
    * @param[in]  pki_ezsignbulksendtransmission_id qint32 [required]
    */
    void ezsignbulksendtransmissionGetObjectV2(const qint32 &pki_ezsignbulksendtransmission_id);


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

    void ezsignbulksendtransmissionGetCsvErrorsV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendtransmissionGetFormsDataV1Callback(HttpRequestWorker *worker);
    void ezsignbulksendtransmissionGetObjectV2Callback(HttpRequestWorker *worker);

signals:

    void ezsignbulksendtransmissionGetCsvErrorsV1Signal(QString summary);
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1Signal(Ezsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignbulksendtransmissionGetFormsDataV1Signal(Ezsignbulksendtransmission_getFormsData_v1_Response summary);
    void ezsignbulksendtransmissionGetObjectV2Signal(Ezsignbulksendtransmission_getObject_v2_Response summary);

    void ezsignbulksendtransmissionGetCsvErrorsV1SignalFull(HttpRequestWorker *worker, QString summary);
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalFull(HttpRequestWorker *worker, Ezsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response summary);
    void ezsignbulksendtransmissionGetFormsDataV1SignalFull(HttpRequestWorker *worker, Ezsignbulksendtransmission_getFormsData_v1_Response summary);
    void ezsignbulksendtransmissionGetObjectV2SignalFull(HttpRequestWorker *worker, Ezsignbulksendtransmission_getObject_v2_Response summary);

    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetCsvErrorsV1SignalError() instead")
    void ezsignbulksendtransmissionGetCsvErrorsV1SignalE(QString summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetCsvErrorsV1SignalError(QString summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalError() instead")
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalE(Ezsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalError(Ezsignbulksendtransmission_getEzsignsignaturesAutomatic_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetFormsDataV1SignalError() instead")
    void ezsignbulksendtransmissionGetFormsDataV1SignalE(Ezsignbulksendtransmission_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetFormsDataV1SignalError(Ezsignbulksendtransmission_getFormsData_v1_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetObjectV2SignalError() instead")
    void ezsignbulksendtransmissionGetObjectV2SignalE(Ezsignbulksendtransmission_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetObjectV2SignalError(Ezsignbulksendtransmission_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetCsvErrorsV1SignalErrorFull() instead")
    void ezsignbulksendtransmissionGetCsvErrorsV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetCsvErrorsV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalErrorFull() instead")
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetEzsignsignaturesAutomaticV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetFormsDataV1SignalErrorFull() instead")
    void ezsignbulksendtransmissionGetFormsDataV1SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetFormsDataV1SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use ezsignbulksendtransmissionGetObjectV2SignalErrorFull() instead")
    void ezsignbulksendtransmissionGetObjectV2SignalEFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignbulksendtransmissionGetObjectV2SignalErrorFull(HttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
};

} // namespace Ezmaxapi
#endif
