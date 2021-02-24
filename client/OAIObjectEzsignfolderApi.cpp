/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.31
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectEzsignfolderApi.h"
#include "OAIHelpers.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsignfolderApi::OAIObjectEzsignfolderApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
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

OAIObjectEzsignfolderApi::~OAIObjectEzsignfolderApi() {
}

void OAIObjectEzsignfolderApi::initializeServerConfigs(){

//Default server
QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
//varying endpoint server 
QList<OAIServerConfiguration> serverConf = QList<OAIServerConfiguration>();
defaultConf.append(OAIServerConfiguration(
    "https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest",
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"},{"local"} })}, }));
    
defaultConf.append(OAIServerConfiguration(
    "https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com/",
    "The server endpoint where to send your global API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })}, }));
    
_serverConfigs.insert("ezsignfolderCreateObjectV1",defaultConf);
_serverIndices.insert("ezsignfolderCreateObjectV1",0);

_serverConfigs.insert("ezsignfolderDeleteObjectV1",defaultConf);
_serverIndices.insert("ezsignfolderDeleteObjectV1",0);

_serverConfigs.insert("ezsignfolderGetChildrenV1",defaultConf);
_serverIndices.insert("ezsignfolderGetChildrenV1",0);

_serverConfigs.insert("ezsignfolderGetObjectV1",defaultConf);
_serverIndices.insert("ezsignfolderGetObjectV1",0);

_serverConfigs.insert("ezsignfolderSendV1",defaultConf);
_serverIndices.insert("ezsignfolderSendV1",0);


}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found 
*/
int OAIObjectEzsignfolderApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignfolderApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectEzsignfolderApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIObjectEzsignfolderApi::setHost(const QString &host) {
    _host = host;
}

void OAIObjectEzsignfolderApi::setPort(int port) {
    _port = port;
}

void OAIObjectEzsignfolderApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectEzsignfolderApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectEzsignfolderApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignfolderApi::setPassword(const QString &password) {
    _password = password;
}

void OAIObjectEzsignfolderApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIObjectEzsignfolderApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignfolderApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignfolderApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;  
}

void OAIObjectEzsignfolderApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectEzsignfolderApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectEzsignfolderApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectEzsignfolderApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIObjectEzsignfolderApi::getParamStylePrefix(QString style){

        if(style == "matrix"){ 
            return ";";
        }else if(style == "label"){
            return ".";
        }else if(style == "form"){
            return "&"; 
        }else if(style == "simple"){
            return "";
        }else if(style == "spaceDelimited"){
            return "&"; 
        }else if(style == "pipeDelimited"){
            return "&"; 
        }else
            return "none";
}

QString OAIObjectEzsignfolderApi::getParamStyleSuffix(QString style){

        if(style == "matrix"){ 
            return "=";
        }else if(style == "label"){
            return "";
        }else if(style == "form"){
            return "=";
        }else if(style == "simple"){
            return "";
        }else if(style == "spaceDelimited"){
            return "=";
        }else if(style == "pipeDelimited"){
            return "=";
        }else
            return "none";
}

QString OAIObjectEzsignfolderApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

        if(style == "matrix"){ 
            return (isExplode) ? ";" + name + "=" : ",";

        }else if(style == "label"){
            return (isExplode) ? "." : ",";

        }else if(style == "form"){
            return (isExplode) ? "&" + name + "=" : ","; 

        }else if(style == "simple"){
            return ",";
        }else if(style == "spaceDelimited"){
            return (isExplode) ? "&" + name + "=" : " ";

        }else if(style == "pipeDelimited"){
            return (isExplode) ? "&" + name + "=" : "|";

        }else if(style == "deepObject"){
            return (isExplode) ? "&" : "none";

        }else
            return "none";
}

void OAIObjectEzsignfolderApi::ezsignfolderCreateObjectV1(const QList<OAIEzsignfolder_createObject_v1_Request> &oai_ezsignfolder_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignfolderCreateObjectV1"][_serverIndices.value("ezsignfolderCreateObjectV1")].URL()+"/1/object/ezsignfolder");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QJsonDocument doc(::OpenAPI::toJsonValue(oai_ezsignfolder_create_object_v1_request).toArray());
    QByteArray bytes = doc.toJson();
    input.request_body.append(bytes);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfolderApi::ezsignfolderCreateObjectV1Callback);
    connect(this, &OAIObjectEzsignfolderApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignfolderApi::ezsignfolderCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignfolder_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfolderCreateObjectV1Signal(output);
        emit ezsignfolderCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsignfolderCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsignfolderCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfolderApi::ezsignfolderDeleteObjectV1(const qint32 &pki_ezsignfolder_id) {
    QString fullPath = QString(_serverConfigs["ezsignfolderDeleteObjectV1"][_serverIndices.value("ezsignfolderDeleteObjectV1")].URL()+"/1/object/ezsignfolder/{pkiEzsignfolderID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsignfolder_idPathParam("{");
    pki_ezsignfolder_idPathParam.append("pkiEzsignfolderID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfolderID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfolderID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsignfolder_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfolder_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfolderApi::ezsignfolderDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsignfolderApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignfolderApi::ezsignfolderDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignfolder_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfolderDeleteObjectV1Signal(output);
        emit ezsignfolderDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsignfolderDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsignfolderDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfolderApi::ezsignfolderGetChildrenV1(const qint32 &pki_ezsignfolder_id) {
    QString fullPath = QString(_serverConfigs["ezsignfolderGetChildrenV1"][_serverIndices.value("ezsignfolderGetChildrenV1")].URL()+"/1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsignfolder_idPathParam("{");
    pki_ezsignfolder_idPathParam.append("pkiEzsignfolderID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfolderID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfolderID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsignfolder_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfolder_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfolderApi::ezsignfolderGetChildrenV1Callback);
    connect(this, &OAIObjectEzsignfolderApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignfolderApi::ezsignfolderGetChildrenV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ezsignfolderGetChildrenV1Signal();
        emit ezsignfolderGetChildrenV1SignalFull(worker);
    } else {
        emit ezsignfolderGetChildrenV1SignalE(error_type, error_str);
        emit ezsignfolderGetChildrenV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfolderApi::ezsignfolderGetObjectV1(const qint32 &pki_ezsignfolder_id) {
    QString fullPath = QString(_serverConfigs["ezsignfolderGetObjectV1"][_serverIndices.value("ezsignfolderGetObjectV1")].URL()+"/1/object/ezsignfolder/{pkiEzsignfolderID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsignfolder_idPathParam("{");
    pki_ezsignfolder_idPathParam.append("pkiEzsignfolderID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfolderID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfolderID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsignfolder_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfolder_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfolderApi::ezsignfolderGetObjectV1Callback);
    connect(this, &OAIObjectEzsignfolderApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignfolderApi::ezsignfolderGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignfolder_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfolderGetObjectV1Signal(output);
        emit ezsignfolderGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsignfolderGetObjectV1SignalE(output, error_type, error_str);
        emit ezsignfolderGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfolderApi::ezsignfolderSendV1(const qint32 &pki_ezsignfolder_id, const OAIEzsignfolder_send_v1_Request &oai_ezsignfolder_send_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignfolderSendV1"][_serverIndices.value("ezsignfolderSendV1")].URL()+"/1/object/ezsignfolder/{pkiEzsignfolderID}/send");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsignfolder_idPathParam("{");
    pki_ezsignfolder_idPathParam.append("pkiEzsignfolderID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfolderID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfolderID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsignfolder_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfolder_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_ezsignfolder_send_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfolderApi::ezsignfolderSendV1Callback);
    connect(this, &OAIObjectEzsignfolderApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsignfolderApi::ezsignfolderSendV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignfolder_send_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfolderSendV1Signal(output);
        emit ezsignfolderSendV1SignalFull(worker, output);
    } else {
        emit ezsignfolderSendV1SignalE(output, error_type, error_str);
        emit ezsignfolderSendV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
