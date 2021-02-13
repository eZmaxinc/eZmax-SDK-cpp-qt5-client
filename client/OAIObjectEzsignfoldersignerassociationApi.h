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

#ifndef OAI_OAIObjectEzsignfoldersignerassociationApi_H
#define OAI_OAIObjectEzsignfoldersignerassociationApi_H

#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignfoldersignerassociation_createObject_v1_Request.h"
#include "OAIEzsignfoldersignerassociation_createObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_deleteObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_editObject_v1_Request.h"
#include "OAIEzsignfoldersignerassociation_editObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getObject_v1_Response.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList> 
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignfoldersignerassociationApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignfoldersignerassociationApi(const QString &scheme = "https", const QString &host = "prod.api.appcluster01.ca-central-1.ezmax.com", int port = 0, const QString &basePath = "/rest", const int timeOut = 0);
    ~OAIObjectEzsignfoldersignerassociationApi();

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

    void ezsignfoldersignerassociationCreateObjectV1(const QList<OAIEzsignfoldersignerassociation_createObject_v1_Request> &oai_ezsignfoldersignerassociation_create_object_v1_request);
    void ezsignfoldersignerassociationDeleteObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);
    void ezsignfoldersignerassociationEditObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id, const OAIEzsignfoldersignerassociation_editObject_v1_Request &oai_ezsignfoldersignerassociation_edit_object_v1_request);
    void ezsignfoldersignerassociationGetChildrenV1(const qint32 &pki_ezsignfoldersignerassociation_id);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1(const qint32 &pki_ezsignfoldersignerassociation_id);
    void ezsignfoldersignerassociationGetObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);

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

    void ezsignfoldersignerassociationCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetChildrenV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignfoldersignerassociationCreateObjectV1Signal(OAIEzsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1Signal(OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationEditObjectV1Signal(OAIEzsignfoldersignerassociation_editObject_v1_Response summary);
    void ezsignfoldersignerassociationGetChildrenV1Signal();
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Signal(OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1Signal(OAIEzsignfoldersignerassociation_getObject_v1_Response summary);

    void ezsignfoldersignerassociationCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_editObject_v1_Response summary);
    void ezsignfoldersignerassociationGetChildrenV1SignalFull(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getObject_v1_Response summary);

    void ezsignfoldersignerassociationCreateObjectV1SignalE(OAIEzsignfoldersignerassociation_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalE(OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationEditObjectV1SignalE(OAIEzsignfoldersignerassociation_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetChildrenV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalE(OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalE(OAIEzsignfoldersignerassociation_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignfoldersignerassociationCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetChildrenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
