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

#include "OAIObjectPeriodApi.h"
#include "OAIHelpers.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectPeriodApi::OAIObjectPeriodApi(const QString &scheme, const QString &host, int port, const QString &basePath, const int timeOut)
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

OAIObjectPeriodApi::~OAIObjectPeriodApi() {
}

void OAIObjectPeriodApi::initializeServerConfigs(){

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
    
_serverConfigs.insert("periodGetAutocompleteV1",defaultConf);
_serverIndices.insert("periodGetAutocompleteV1",0);


}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found 
*/
int OAIObjectPeriodApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectPeriodApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectPeriodApi::setScheme(const QString &scheme) {
    _scheme = scheme;
}

void OAIObjectPeriodApi::setHost(const QString &host) {
    _host = host;
}

void OAIObjectPeriodApi::setPort(int port) {
    _port = port;
}

void OAIObjectPeriodApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectPeriodApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectPeriodApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectPeriodApi::setPassword(const QString &password) {
    _password = password;
}

void OAIObjectPeriodApi::setBasePath(const QString &basePath) {
    _basePath = basePath;
}

void OAIObjectPeriodApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectPeriodApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectPeriodApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;  
}

void OAIObjectPeriodApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectPeriodApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectPeriodApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectPeriodApi::abortRequests(){
    emit abortRequestsSignal();
}

void OAIObjectPeriodApi::periodGetAutocompleteV1(const QString &s_selector, const QString &s_query) {
    QString fullPath = QString(_serverConfigs["periodGetAutocompleteV1"][_serverIndices.value("periodGetAutocompleteV1")].URL()+"/1/object/period/getAutocomplete/{sSelector}");
    QString s_selectorPathParam("{");
    s_selectorPathParam.append("sSelector").append("}");
    fullPath.replace(s_selectorPathParam, QUrl::toPercentEncoding(::OpenAPI::toStringValue(s_selector)));
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    if (fullPath.indexOf("?") > 0)
        fullPath.append("&");
    else
        fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("sQuery")).append("=").append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(s_query)));

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");

    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectPeriodApi::periodGetAutocompleteV1Callback);
    connect(this, &OAIObjectPeriodApi::abortRequestsSignal, worker, &QObject::deleteLater); 
    worker->execute(&input);
}

void OAIObjectPeriodApi::periodGetAutocompleteV1Callback(OAIHttpRequestWorker *worker) {
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
        emit periodGetAutocompleteV1Signal(output);
        emit periodGetAutocompleteV1SignalFull(worker, output);
    } else {
        emit periodGetAutocompleteV1SignalE(output, error_type, error_str);
        emit periodGetAutocompleteV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
