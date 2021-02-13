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

#ifndef OAI_OAIObjectEzsignfolderApi_H
#define OAI_OAIObjectEzsignfolderApi_H

#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignfolder_createObject_v1_Request.h"
#include "OAIEzsignfolder_createObject_v1_Response.h"
#include "OAIEzsignfolder_deleteObject_v1_Response.h"
#include "OAIEzsignfolder_editObject_v1_Request.h"
#include "OAIEzsignfolder_editObject_v1_Response.h"
#include "OAIEzsignfolder_getObject_v1_Response.h"
#include "OAIEzsignfolder_send_v1_Request.h"
#include "OAIEzsignfolder_send_v1_Response.h"
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
    OAIObjectEzsignfolderApi(const QString &scheme = "https", const QString &host = "prod.api.appcluster01.ca-central-1.ezmax.com", int port = 0, const QString &basePath = "/rest", const int timeOut = 0);
    ~OAIObjectEzsignfolderApi();

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

    void ezsignfolderCreateObjectV1(const QList<OAIEzsignfolder_createObject_v1_Request> &oai_ezsignfolder_create_object_v1_request);
    void ezsignfolderDeleteObjectV1(const qint32 &pki_ezsignfolder_id);
    void ezsignfolderEditObjectV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_editObject_v1_Request &oai_ezsignfolder_edit_object_v1_request);
    void ezsignfolderGetChildrenV1(const qint32 &pki_ezsignfolder_id);
    void ezsignfolderGetObjectV1(const qint32 &pki_ezsignfolder_id);
    void ezsignfolderSendV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_send_v1_Request &oai_ezsignfolder_send_v1_request);

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

    void ezsignfolderCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetChildrenV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfolderSendV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignfolderCreateObjectV1Signal(OAIEzsignfolder_createObject_v1_Response summary);
    void ezsignfolderDeleteObjectV1Signal(OAIEzsignfolder_deleteObject_v1_Response summary);
    void ezsignfolderEditObjectV1Signal(OAIEzsignfolder_editObject_v1_Response summary);
    void ezsignfolderGetChildrenV1Signal();
    void ezsignfolderGetObjectV1Signal(OAIEzsignfolder_getObject_v1_Response summary);
    void ezsignfolderSendV1Signal(OAIEzsignfolder_send_v1_Response summary);

    void ezsignfolderCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_createObject_v1_Response summary);
    void ezsignfolderDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_deleteObject_v1_Response summary);
    void ezsignfolderEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_editObject_v1_Response summary);
    void ezsignfolderGetChildrenV1SignalFull(OAIHttpRequestWorker *worker);
    void ezsignfolderGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_getObject_v1_Response summary);
    void ezsignfolderSendV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfolder_send_v1_Response summary);

    void ezsignfolderCreateObjectV1SignalE(OAIEzsignfolder_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDeleteObjectV1SignalE(OAIEzsignfolder_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderEditObjectV1SignalE(OAIEzsignfolder_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetChildrenV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetObjectV1SignalE(OAIEzsignfolder_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderSendV1SignalE(OAIEzsignfolder_send_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignfolderCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetChildrenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfolderSendV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
