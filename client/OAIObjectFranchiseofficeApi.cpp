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

#include "OAIObjectFranchiseofficeApi.h"
#include "OAIHelpers.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectFranchiseofficeApi::OAIObjectFranchiseofficeApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
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

OAIObjectFranchiseofficeApi::~OAIObjectFranchiseofficeApi() {
}

void OAIObjectFranchiseofficeApi::initializeServerConfigs(){

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
    
_serverConfigs.insert("franchiseofficeGetAutocompleteV1",defaultConf);
_serverIndices.insert("franchiseofficeGetAutocompleteV1",0);


}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found 
*/
int OAIObjectFranchiseofficeApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectFranchiseofficeApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectFranchiseofficeApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIObjectFranchiseofficeApi::setHost(const QString &host) {
    _host = host;
}

void OAIObjectFranchiseofficeApi::setPort(int port) {
    _port = port;
}

void OAIObjectFranchiseofficeApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectFranchiseofficeApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectFranchiseofficeApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectFranchiseofficeApi::setPassword(const QString &password) {
    _password = password;
}

void OAIObjectFranchiseofficeApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIObjectFranchiseofficeApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectFranchiseofficeApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectFranchiseofficeApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;  
}

void OAIObjectFranchiseofficeApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectFranchiseofficeApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectFranchiseofficeApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectFranchiseofficeApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIObjectFranchiseofficeApi::getParamStylePrefix(QString style){

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

QString OAIObjectFranchiseofficeApi::getParamStyleSuffix(QString style){

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

QString OAIObjectFranchiseofficeApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

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

void OAIObjectFranchiseofficeApi::franchiseofficeGetAutocompleteV1(const QString &s_selector, const QString &s_query) {
    QString fullPath = QString(_serverConfigs["franchiseofficeGetAutocompleteV1"][_serverIndices.value("franchiseofficeGetAutocompleteV1")].URL()+"/1/object/franchiseoffice/getAutocomplete/{sSelector}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString s_selectorPathParam("{");
    s_selectorPathParam.append("sSelector").append("}");
    QString pathPrefix, pathSuffix, pathDelimiter;
    QString pathStyle = "simple";    
    if(pathStyle == "") 
        pathStyle = "simple";
    pathPrefix = getParamStylePrefix(pathStyle);
    pathSuffix = getParamStyleSuffix(pathStyle);
    pathDelimiter = getParamStyleDelimiter(pathStyle, "sSelector", false);
    QString paramString = (pathStyle == "matrix") ? pathPrefix+"sSelector"+pathSuffix : pathPrefix;
    fullPath.replace(s_selectorPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(s_selector)));

    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    queryStyle = "form";
    if(queryStyle == "") 
        queryStyle = "form";
    queryPrefix = getParamStylePrefix(queryStyle);
    querySuffix = getParamStyleSuffix(queryStyle);
    queryDelimiter = getParamStyleDelimiter(queryStyle, "sQuery", true); 
    if (fullPath.indexOf("?") > 0)
        fullPath.append(queryPrefix);
    else
        fullPath.append("?");

    fullPath.append(QUrl::toPercentEncoding("sQuery")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(s_query)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectFranchiseofficeApi::franchiseofficeGetAutocompleteV1Callback);
    connect(this, &OAIObjectFranchiseofficeApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectFranchiseofficeApi::franchiseofficeGetAutocompleteV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAICommon_getAutocomplete_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit franchiseofficeGetAutocompleteV1Signal(output);
        emit franchiseofficeGetAutocompleteV1SignalFull(worker, output);
    } else {
        emit franchiseofficeGetAutocompleteV1SignalE(output, error_type, error_str);
        emit franchiseofficeGetAutocompleteV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
