/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectFranchisereferalincomeApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectFranchisereferalincomeApi::OAIObjectFranchisereferalincomeApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectFranchisereferalincomeApi::~OAIObjectFranchisereferalincomeApi() {
}

void OAIObjectFranchisereferalincomeApi::initializeServerConfigs(){
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    QList<OAIServerConfiguration> serverConf = QList<OAIServerConfiguration>();
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest"),
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"},{"local"} })}, }));
    
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com/"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })}, }));
    
    _serverConfigs.insert("franchisereferalincomeCreateObjectV1", defaultConf);
    _serverIndices.insert("franchisereferalincomeCreateObjectV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectFranchisereferalincomeApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectFranchisereferalincomeApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectFranchisereferalincomeApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectFranchisereferalincomeApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectFranchisereferalincomeApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectFranchisereferalincomeApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectFranchisereferalincomeApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectFranchisereferalincomeApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectFranchisereferalincomeApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIObjectFranchisereferalincomeApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    if(_serverConfigs.contains(operation)){
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    }else{
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIObjectFranchisereferalincomeApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    for(auto e : _serverIndices.keys()){
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIObjectFranchisereferalincomeApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectFranchisereferalincomeApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectFranchisereferalincomeApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectFranchisereferalincomeApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectFranchisereferalincomeApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIObjectFranchisereferalincomeApi::getParamStylePrefix(QString style){
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
    }else{
        return "none";
    }
}

QString OAIObjectFranchisereferalincomeApi::getParamStyleSuffix(QString style){
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
    }else{
        return "none";
    }
}

QString OAIObjectFranchisereferalincomeApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

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

    }else {
        return "none";
    }
}

void OAIObjectFranchisereferalincomeApi::franchisereferalincomeCreateObjectV1(const QList<OAIFranchisereferalincome_createObject_v1_Request> &oai_franchisereferalincome_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["franchisereferalincomeCreateObjectV1"][_serverIndices.value("franchisereferalincomeCreateObjectV1")].URL()+"/1/object/franchisereferalincome");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {
        QJsonDocument doc(::OpenAPI::toJsonValue(oai_franchisereferalincome_create_object_v1_request).toArray());
        QByteArray bytes = doc.toJson();
        input.request_body.append(bytes);
    }
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectFranchisereferalincomeApi::franchisereferalincomeCreateObjectV1Callback);
    connect(this, &OAIObjectFranchisereferalincomeApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectFranchisereferalincomeApi::franchisereferalincomeCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIFranchisereferalincome_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit franchisereferalincomeCreateObjectV1Signal(output);
        emit franchisereferalincomeCreateObjectV1SignalFull(worker, output);
    } else {
        emit franchisereferalincomeCreateObjectV1SignalE(output, error_type, error_str);
        emit franchisereferalincomeCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
