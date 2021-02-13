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

#include "OAIObjectEzsigndocumentApi.h"
#include "OAIHelpers.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsigndocumentApi::OAIObjectEzsigndocumentApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
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

OAIObjectEzsigndocumentApi::~OAIObjectEzsigndocumentApi() {
}

void OAIObjectEzsigndocumentApi::initializeServerConfigs(){

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
    
_serverConfigs.insert("ezsigndocumentApplyEzsigntemplateV1",defaultConf);
_serverIndices.insert("ezsigndocumentApplyEzsigntemplateV1",0);

_serverConfigs.insert("ezsigndocumentCreateObjectV1",defaultConf);
_serverIndices.insert("ezsigndocumentCreateObjectV1",0);

_serverConfigs.insert("ezsigndocumentDeleteObjectV1",defaultConf);
_serverIndices.insert("ezsigndocumentDeleteObjectV1",0);

_serverConfigs.insert("ezsigndocumentEditObjectV1",defaultConf);
_serverIndices.insert("ezsigndocumentEditObjectV1",0);

_serverConfigs.insert("ezsigndocumentGetChildrenV1",defaultConf);
_serverIndices.insert("ezsigndocumentGetChildrenV1",0);

_serverConfigs.insert("ezsigndocumentGetDownloadUrlV1",defaultConf);
_serverIndices.insert("ezsigndocumentGetDownloadUrlV1",0);

_serverConfigs.insert("ezsigndocumentGetObjectV1",defaultConf);
_serverIndices.insert("ezsigndocumentGetObjectV1",0);


}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found 
*/
int OAIObjectEzsigndocumentApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsigndocumentApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectEzsigndocumentApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIObjectEzsigndocumentApi::setHost(const QString &host) {
    _host = host;
}

void OAIObjectEzsigndocumentApi::setPort(int port) {
    _port = port;
}

void OAIObjectEzsigndocumentApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectEzsigndocumentApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectEzsigndocumentApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsigndocumentApi::setPassword(const QString &password) {
    _password = password;
}

void OAIObjectEzsigndocumentApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIObjectEzsigndocumentApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsigndocumentApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsigndocumentApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;  
}

void OAIObjectEzsigndocumentApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectEzsigndocumentApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectEzsigndocumentApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectEzsigndocumentApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIObjectEzsigndocumentApi::getParamStylePrefix(QString style){

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

QString OAIObjectEzsigndocumentApi::getParamStyleSuffix(QString style){

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

QString OAIObjectEzsigndocumentApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

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

void OAIObjectEzsigndocumentApi::ezsigndocumentApplyEzsigntemplateV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_applyEzsigntemplate_v1_Request &oai_ezsigndocument_apply_ezsigntemplate_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentApplyEzsigntemplateV1"][_serverIndices.value("ezsigndocumentApplyEzsigntemplateV1")].URL()+"/1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsigndocument_idPathParam("{");
    pki_ezsigndocument_idPathParam.append("pkiEzsigndocumentID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigndocumentID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigndocumentID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsigndocument_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigndocument_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_ezsigndocument_apply_ezsigntemplate_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentApplyEzsigntemplateV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentApplyEzsigntemplateV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsigndocument_applyEzsigntemplate_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigndocumentApplyEzsigntemplateV1Signal(output);
        emit ezsigndocumentApplyEzsigntemplateV1SignalFull(worker, output);
    } else {
        emit ezsigndocumentApplyEzsigntemplateV1SignalE(output, error_type, error_str);
        emit ezsigndocumentApplyEzsigntemplateV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigndocumentApi::ezsigndocumentCreateObjectV1(const QList<OAIEzsigndocument_createObject_v1_Request> &oai_ezsigndocument_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentCreateObjectV1"][_serverIndices.value("ezsigndocumentCreateObjectV1")].URL()+"/1/object/ezsigndocument");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QJsonDocument doc(::OpenAPI::toJsonValue(oai_ezsigndocument_create_object_v1_request).toArray());
    QByteArray bytes = doc.toJson();
    input.request_body.append(bytes);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentCreateObjectV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsigndocument_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigndocumentCreateObjectV1Signal(output);
        emit ezsigndocumentCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsigndocumentCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsigndocumentCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigndocumentApi::ezsigndocumentDeleteObjectV1(const qint32 &pki_ezsigndocument_id) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentDeleteObjectV1"][_serverIndices.value("ezsigndocumentDeleteObjectV1")].URL()+"/1/object/ezsigndocument/{pkiEzsigndocumentID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsigndocument_idPathParam("{");
    pki_ezsigndocument_idPathParam.append("pkiEzsigndocumentID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigndocumentID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigndocumentID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsigndocument_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigndocument_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsigndocument_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigndocumentDeleteObjectV1Signal(output);
        emit ezsigndocumentDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsigndocumentDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsigndocumentDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigndocumentApi::ezsigndocumentEditObjectV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_editObject_v1_Request &oai_ezsigndocument_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentEditObjectV1"][_serverIndices.value("ezsigndocumentEditObjectV1")].URL()+"/1/object/ezsigndocument/{pkiEzsigndocumentID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsigndocument_idPathParam("{");
    pki_ezsigndocument_idPathParam.append("pkiEzsigndocumentID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigndocumentID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigndocumentID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsigndocument_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigndocument_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");


    QByteArray output = oai_ezsigndocument_edit_object_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentEditObjectV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentEditObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsigndocument_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigndocumentEditObjectV1Signal(output);
        emit ezsigndocumentEditObjectV1SignalFull(worker, output);
    } else {
        emit ezsigndocumentEditObjectV1SignalE(output, error_type, error_str);
        emit ezsigndocumentEditObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigndocumentApi::ezsigndocumentGetChildrenV1(const qint32 &pki_ezsigndocument_id) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentGetChildrenV1"][_serverIndices.value("ezsigndocumentGetChildrenV1")].URL()+"/1/object/ezsigndocument/{pkiEzsigndocumentID}/getChildren");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsigndocument_idPathParam("{");
    pki_ezsigndocument_idPathParam.append("pkiEzsigndocumentID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigndocumentID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigndocumentID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsigndocument_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigndocument_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentGetChildrenV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentGetChildrenV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ezsigndocumentGetChildrenV1Signal();
        emit ezsigndocumentGetChildrenV1SignalFull(worker);
    } else {
        emit ezsigndocumentGetChildrenV1SignalE(error_type, error_str);
        emit ezsigndocumentGetChildrenV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigndocumentApi::ezsigndocumentGetDownloadUrlV1(const qint32 &pki_ezsigndocument_id, const QString &e_document_type) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentGetDownloadUrlV1"][_serverIndices.value("ezsigndocumentGetDownloadUrlV1")].URL()+"/1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsigndocument_idPathParam("{");
    pki_ezsigndocument_idPathParam.append("pkiEzsigndocumentID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigndocumentID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigndocumentID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsigndocument_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigndocument_id)));
    QString e_document_typePathParam("{");
    e_document_typePathParam.append("eDocumentType").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "eDocumentType", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"eDocumentType"+pathSuffix : pathPrefix;
    fullPath.replace(e_document_typePathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(e_document_type)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentGetDownloadUrlV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentGetDownloadUrlV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsigndocument_getDownloadUrl_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigndocumentGetDownloadUrlV1Signal(output);
        emit ezsigndocumentGetDownloadUrlV1SignalFull(worker, output);
    } else {
        emit ezsigndocumentGetDownloadUrlV1SignalE(output, error_type, error_str);
        emit ezsigndocumentGetDownloadUrlV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsigndocumentApi::ezsigndocumentGetObjectV1(const qint32 &pki_ezsigndocument_id) {
    QString fullPath = QString(_serverConfigs["ezsigndocumentGetObjectV1"][_serverIndices.value("ezsigndocumentGetObjectV1")].URL()+"/1/object/ezsigndocument/{pkiEzsigndocumentID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString pki_ezsigndocument_idPathParam("{");
    pki_ezsigndocument_idPathParam.append("pkiEzsigndocumentID").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsigndocumentID", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsigndocumentID"+pathSuffix : pathPrefix;
    fullPath.replace(pki_ezsigndocument_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsigndocument_id)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsigndocumentApi::ezsigndocumentGetObjectV1Callback);
    connect(this, &OAIObjectEzsigndocumentApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectEzsigndocumentApi::ezsigndocumentGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsigndocument_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsigndocumentGetObjectV1Signal(output);
        emit ezsigndocumentGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsigndocumentGetObjectV1SignalE(output, error_type, error_str);
        emit ezsigndocumentGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
