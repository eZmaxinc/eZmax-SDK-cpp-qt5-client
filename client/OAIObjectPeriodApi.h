/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectPeriodApi_H
#define OAI_OAIObjectPeriodApi_H

#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAICommon_getAutocomplete_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList> 
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectPeriodApi : public QObject {
    Q_OBJECT

public:
    OAIObjectPeriodApi(const QString &scheme = "https", const QString &host = "prod.api.appcluster01.ca-central-1.ezmax.com", int port = 0, const QString &basePath = "/rest", const int timeOut = 0);
    ~OAIObjectPeriodApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setBasePath(const QString &basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(QString style);
    QString getParamStyleSuffix(QString style);
    QString getParamStyleDelimiter(QString style, QString name, bool isExplode);

    void periodGetAutocompleteV1(const QString &s_selector, const QString &s_query);

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void periodGetAutocompleteV1Callback(OAIHttpRequestWorker *worker);

signals:

    void periodGetAutocompleteV1Signal(OAICommon_getAutocomplete_v1_Response summary);

    void periodGetAutocompleteV1SignalFull(OAIHttpRequestWorker *worker, OAICommon_getAutocomplete_v1_Response summary);

    void periodGetAutocompleteV1SignalE(OAICommon_getAutocomplete_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void periodGetAutocompleteV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
