/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectEzsignbulksendsignermappingApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsignbulksendsignermappingApi::OAIObjectEzsignbulksendsignermappingApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectEzsignbulksendsignermappingApi::~OAIObjectEzsignbulksendsignermappingApi() {
}

void OAIObjectEzsignbulksendsignermappingApi::initializeServerConfigs() {
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest"),
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })}, }));
    
    _serverConfigs.insert("ezsignbulksendsignermappingCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsignbulksendsignermappingCreateObjectV1", 0);
    _serverConfigs.insert("ezsignbulksendsignermappingDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsignbulksendsignermappingDeleteObjectV1", 0);
    _serverConfigs.insert("ezsignbulksendsignermappingGetObjectV1", defaultConf);
    _serverIndices.insert("ezsignbulksendsignermappingGetObjectV1", 0);
    _serverConfigs.insert("ezsignbulksendsignermappingGetObjectV2", defaultConf);
    _serverIndices.insert("ezsignbulksendsignermappingGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectEzsignbulksendsignermappingApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignbulksendsignermappingApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIObjectEzsignbulksendsignermappingApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void OAIObjectEzsignbulksendsignermappingApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIObjectEzsignbulksendsignermappingApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignbulksendsignermappingApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectEzsignbulksendsignermappingApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignbulksendsignermappingApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignbulksendsignermappingApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIObjectEzsignbulksendsignermappingApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    } else {
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIObjectEzsignbulksendsignermappingApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
#else
    for (auto &e : _serverIndices.keys()) {
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
#endif
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIObjectEzsignbulksendsignermappingApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectEzsignbulksendsignermappingApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIObjectEzsignbulksendsignermappingApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIObjectEzsignbulksendsignermappingApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIObjectEzsignbulksendsignermappingApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIObjectEzsignbulksendsignermappingApi::getParamStylePrefix(const QString &style) {
    if (style == "matrix") {
        return ";";
    } else if (style == "label") {
        return ".";
    } else if (style == "form") {
        return "&";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "&";
    } else if (style == "pipeDelimited") {
        return "&";
    } else {
        return "none";
    }
}

QString OAIObjectEzsignbulksendsignermappingApi::getParamStyleSuffix(const QString &style) {
    if (style == "matrix") {
        return "=";
    } else if (style == "label") {
        return "";
    } else if (style == "form") {
        return "=";
    } else if (style == "simple") {
        return "";
    } else if (style == "spaceDelimited") {
        return "=";
    } else if (style == "pipeDelimited") {
        return "=";
    } else {
        return "none";
    }
}

QString OAIObjectEzsignbulksendsignermappingApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

    if (style == "matrix") {
        return (isExplode) ? ";" + name + "=" : ",";

    } else if (style == "label") {
        return (isExplode) ? "." : ",";

    } else if (style == "form") {
        return (isExplode) ? "&" + name + "=" : ",";

    } else if (style == "simple") {
        return ",";
    } else if (style == "spaceDelimited") {
        return (isExplode) ? "&" + name + "=" : " ";

    } else if (style == "pipeDelimited") {
        return (isExplode) ? "&" + name + "=" : "|";

    } else if (style == "deepObject") {
        return (isExplode) ? "&" : "none";

    } else {
        return "none";
    }
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingCreateObjectV1(const OAIEzsignbulksendsignermapping_createObject_v1_Request &oai_ezsignbulksendsignermapping_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendsignermappingCreateObjectV1"][_serverIndices.value("ezsignbulksendsignermappingCreateObjectV1")].URL()+"/1/object/ezsignbulksendsignermapping");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = oai_ezsignbulksendsignermapping_create_object_v1_request.asJson().toUtf8();
        input.request_body.append(output);
    }
#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingCreateObjectV1Callback);
    connect(this, &OAIObjectEzsignbulksendsignermappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendsignermapping_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendsignermappingCreateObjectV1Signal(output);
        emit ezsignbulksendsignermappingCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsignbulksendsignermappingCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsignbulksendsignermappingCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingDeleteObjectV1(const qint32 &pki_ezsignbulksendsignermapping_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendsignermappingDeleteObjectV1"][_serverIndices.value("ezsignbulksendsignermappingDeleteObjectV1")].URL()+"/1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendsignermapping_idPathParam("{");
        pki_ezsignbulksendsignermapping_idPathParam.append("pkiEzsignbulksendsignermappingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendsignermappingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendsignermappingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendsignermapping_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignbulksendsignermapping_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsignbulksendsignermappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendsignermapping_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendsignermappingDeleteObjectV1Signal(output);
        emit ezsignbulksendsignermappingDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsignbulksendsignermappingDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsignbulksendsignermappingDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingGetObjectV1(const qint32 &pki_ezsignbulksendsignermapping_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendsignermappingGetObjectV1"][_serverIndices.value("ezsignbulksendsignermappingGetObjectV1")].URL()+"/1/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendsignermapping_idPathParam("{");
        pki_ezsignbulksendsignermapping_idPathParam.append("pkiEzsignbulksendsignermappingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendsignermappingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendsignermappingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendsignermapping_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignbulksendsignermapping_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingGetObjectV1Callback);
    connect(this, &OAIObjectEzsignbulksendsignermappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendsignermapping_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendsignermappingGetObjectV1Signal(output);
        emit ezsignbulksendsignermappingGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsignbulksendsignermappingGetObjectV1SignalE(output, error_type, error_str);
        emit ezsignbulksendsignermappingGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingGetObjectV2(const qint32 &pki_ezsignbulksendsignermapping_id) {
    QString fullPath = QString(_serverConfigs["ezsignbulksendsignermappingGetObjectV2"][_serverIndices.value("ezsignbulksendsignermappingGetObjectV2")].URL()+"/2/object/ezsignbulksendsignermapping/{pkiEzsignbulksendsignermappingID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignbulksendsignermapping_idPathParam("{");
        pki_ezsignbulksendsignermapping_idPathParam.append("pkiEzsignbulksendsignermappingID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignbulksendsignermappingID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignbulksendsignermappingID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignbulksendsignermapping_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignbulksendsignermapping_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingGetObjectV2Callback);
    connect(this, &OAIObjectEzsignbulksendsignermappingApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignbulksendsignermappingApi::ezsignbulksendsignermappingGetObjectV2Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignbulksendsignermapping_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignbulksendsignermappingGetObjectV2Signal(output);
        emit ezsignbulksendsignermappingGetObjectV2SignalFull(worker, output);
    } else {
        emit ezsignbulksendsignermappingGetObjectV2SignalE(output, error_type, error_str);
        emit ezsignbulksendsignermappingGetObjectV2SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignbulksendsignermappingApi::tokenAvailable(){

    oauthToken token;
    switch (_OauthMethod) {
    case 1: //implicit flow
        token = _implicitFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _implicitFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 2: //authorization flow
        token = _authFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _authFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 3: //client credentials flow
        token = _credentialFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    case 4: //resource owner password flow
        token = _passwordFlow.getToken(_latestScope.join(" "));
        if(token.isValid()){
            _latestInput.headers.insert("Authorization", "Bearer " + token.getToken());
            _latestWorker->execute(&_latestInput);
        }else{
            _credentialFlow.removeToken(_latestScope.join(" "));
            qDebug() << "Could not retrieve a valid token";
        }
        break;
    default:
        qDebug() << "No Oauth method set!";
        break;
    }
}
} // namespace OpenAPI
