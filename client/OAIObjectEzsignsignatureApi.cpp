/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.27
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectEzsignsignatureApi.h"
#include "OAIHelpers.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsignsignatureApi::OAIObjectEzsignsignatureApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
    : _scheme(scheme),
      _host(host),
      _port(port),
      _basePath(basePath),
      _timeOut(timeOut),
      _manager(nullptr),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {
      initializeServerConfigs();
      }

OAIObjectEzsignsignatureApi::~OAIObjectEzsignsignatureApi() {
}

void OAIObjectEzsignsignatureApi::initializeServerConfigs(){

//Default server
QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
//varying endpoint server 
QList<OAIServerConfiguration> serverConf = QList<OAIServerConfiguration>();
defaultConf.append(OAIServerConfiguration(
    "https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest",
    "The server endpoint where to send your API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"},{"local"} })}, }));
    
_serverConfigs.insert("ezsignsignatureCreateObjectV1",defaultConf);
_serverIndices.insert("ezsignsignatureCreateObjectV1",0);

_serverConfigs.insert("ezsignsignatureDeleteObjectV1",defaultConf);
_serverIndices.insert("ezsignsignatureDeleteObjectV1",0);

_serverConfigs.insert("ezsignsignatureEditObjectV1",defaultConf);
_serverIndices.insert("ezsignsignatureEditObjectV1",0);

_serverConfigs.insert("ezsignsignatureGetObjectGetChildrenV1",defaultConf);
_serverIndices.insert("ezsignsignatureGetObjectGetChildrenV1",0);

_serverConfigs.insert("ezsignsignatureGetObjectV1",defaultConf);
_serverIndices.insert("ezsignsignatureGetObjectV1",0);


}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found 
*/
int OAIObjectEzsignsignatureApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignsignatureApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectEzsignsignatureApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIObjectEzsignsignatureApi::setHost(const QString &host) {
    _host = host;
}

void OAIObjectEzsignsignatureApi::setPort(int port) {
    _port = port;
}

void OAIObjectEzsignsignatureApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectEzsignsignatureApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectEzsignsignatureApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignsignatureApi::setPassword(const QString &password) {
    _password = password;
}

void OAIObjectEzsignsignatureApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIObjectEzsignsignatureApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignsignatureApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignsignatureApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;  
}

void OAIObjectEzsignsignatureApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectEzsignsignatureApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectEzsignsignatureApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectEzsignsignatureApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAIObjectEzsignsignatureApi::ezsignsignatureCreateObjectV1(const QList<OAIEzsignsignature_createObject_v1_Request> &oai_ezsignsignature_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureCreateObjectV1"][_serverIndices.value("ezsignsignatureCreateObjectV1")].URL()+"/1/object/ezsignsignature");

    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    QJsonDocument doc(::OpenAPI::toJsonValue(oai_ezsignsignature_create_object_v1_request).toArray());
    QByteArray bytes = doc.toJson();
    input.request_body.append(bytes);

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureCreateObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureCreateObjectV1Signal(output);
        emit ezsignsignatureCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureDeleteObjectV1(const qint32 &pki_ezsignsignature_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureDeleteObjectV1"][_serverIndices.value("ezsignsignatureDeleteObjectV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}");
    QString pki_ezsignsignature_idPathParam("{");
    pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
    fullPath.replace(pki_ezsignsignature_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureDeleteObjectV1Signal(output);
        emit ezsignsignatureDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureEditObjectV1(const qint32 &pki_ezsignsignature_id, const OAIEzsignsignature_editObject_v1_Request &oai_ezsignsignature_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureEditObjectV1"][_serverIndices.value("ezsignsignatureEditObjectV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}");
    QString pki_ezsignsignature_idPathParam("{");
    pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
    fullPath.replace(pki_ezsignsignature_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");

    QByteArray output = oai_ezsignsignature_edit_object_v1_request.asJson().toUtf8();
    input.request_body.append(output);

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureEditObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureEditObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureEditObjectV1Signal(output);
        emit ezsignsignatureEditObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureEditObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureEditObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectGetChildrenV1(const qint32 &pki_ezsignsignature_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureGetObjectGetChildrenV1"][_serverIndices.value("ezsignsignatureGetObjectGetChildrenV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}/getChildren");
    QString pki_ezsignsignature_idPathParam("{");
    pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
    fullPath.replace(pki_ezsignsignature_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectGetChildrenV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectGetChildrenV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureGetObjectGetChildrenV1Signal();
        emit ezsignsignatureGetObjectGetChildrenV1SignalFull(worker);
    } else {
        emit ezsignsignatureGetObjectGetChildrenV1SignalE(error_type, error_str);
        emit ezsignsignatureGetObjectGetChildrenV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectV1(const qint32 &pki_ezsignsignature_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureGetObjectV1"][_serverIndices.value("ezsignsignatureGetObjectV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}");
    QString pki_ezsignsignature_idPathParam("{");
    pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
    fullPath.replace(pki_ezsignsignature_idPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureGetObjectV1Signal(output);
        emit ezsignsignatureGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureGetObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
