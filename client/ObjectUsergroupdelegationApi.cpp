/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "ObjectUsergroupdelegationApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectUsergroupdelegationApi::ObjectUsergroupdelegationApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectUsergroupdelegationApi::~ObjectUsergroupdelegationApi() {
}

void ObjectUsergroupdelegationApi::initializeServerConfigs() {
    //Default server
    QList<ServerConfiguration> defaultConf = QList<ServerConfiguration>();
    //varying endpoint server
    defaultConf.append(ServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest"),
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, ServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", ServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"iso"},{"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", ServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    defaultConf.append(ServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, ServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", ServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"dev"} })}, }));
    
    defaultConf.append(ServerConfiguration(
    QUrl("wss://ws.{sInfrastructureregionCode}.ezmax.com/{sInfrastructureenvironmenttypeDescription}"),
    "The server endpoint where to send your websocket requests.",
    QMap<QString, ServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", ServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"iso"},{"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", ServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    _serverConfigs.insert("usergroupdelegationCreateObjectV1", defaultConf);
    _serverIndices.insert("usergroupdelegationCreateObjectV1", 0);
    _serverConfigs.insert("usergroupdelegationDeleteObjectV1", defaultConf);
    _serverIndices.insert("usergroupdelegationDeleteObjectV1", 0);
    _serverConfigs.insert("usergroupdelegationEditObjectV1", defaultConf);
    _serverIndices.insert("usergroupdelegationEditObjectV1", 0);
    _serverConfigs.insert("usergroupdelegationGetObjectV2", defaultConf);
    _serverIndices.insert("usergroupdelegationGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectUsergroupdelegationApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectUsergroupdelegationApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectUsergroupdelegationApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectUsergroupdelegationApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectUsergroupdelegationApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectUsergroupdelegationApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectUsergroupdelegationApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectUsergroupdelegationApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectUsergroupdelegationApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectUsergroupdelegationApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    if (_serverConfigs.contains(operation)) {
        _serverConfigs[operation].append(ServerConfiguration(
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
void ObjectUsergroupdelegationApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectUsergroupdelegationApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectUsergroupdelegationApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectUsergroupdelegationApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectUsergroupdelegationApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectUsergroupdelegationApi::abortRequests() {
    emit abortRequestsSignal();
}

QString ObjectUsergroupdelegationApi::getParamStylePrefix(const QString &style) {
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

QString ObjectUsergroupdelegationApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectUsergroupdelegationApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectUsergroupdelegationApi::usergroupdelegationCreateObjectV1(const Usergroupdelegation_createObject_v1_Request &usergroupdelegation_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["usergroupdelegationCreateObjectV1"][_serverIndices.value("usergroupdelegationCreateObjectV1")].URL()+"/1/object/usergroupdelegation");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = usergroupdelegation_create_object_v1_request.asJson().toUtf8();
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

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectUsergroupdelegationApi::usergroupdelegationCreateObjectV1Callback);
    connect(this, &ObjectUsergroupdelegationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectUsergroupdelegationApi::usergroupdelegationCreateObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Usergroupdelegation_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit usergroupdelegationCreateObjectV1Signal(output);
        emit usergroupdelegationCreateObjectV1SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        emit usergroupdelegationCreateObjectV1SignalE(output, error_type, error_str);
        emit usergroupdelegationCreateObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        emit usergroupdelegationCreateObjectV1SignalError(output, error_type, error_str);
        emit usergroupdelegationCreateObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectUsergroupdelegationApi::usergroupdelegationDeleteObjectV1(const qint32 &pki_usergroupdelegation_id) {
    QString fullPath = QString(_serverConfigs["usergroupdelegationDeleteObjectV1"][_serverIndices.value("usergroupdelegationDeleteObjectV1")].URL()+"/1/object/usergroupdelegation/{pkiUsergroupdelegationID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_usergroupdelegation_idPathParam("{");
        pki_usergroupdelegation_idPathParam.append("pkiUsergroupdelegationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiUsergroupdelegationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiUsergroupdelegationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_usergroupdelegation_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_usergroupdelegation_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "DELETE");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectUsergroupdelegationApi::usergroupdelegationDeleteObjectV1Callback);
    connect(this, &ObjectUsergroupdelegationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectUsergroupdelegationApi::usergroupdelegationDeleteObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Usergroupdelegation_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit usergroupdelegationDeleteObjectV1Signal(output);
        emit usergroupdelegationDeleteObjectV1SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        emit usergroupdelegationDeleteObjectV1SignalE(output, error_type, error_str);
        emit usergroupdelegationDeleteObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        emit usergroupdelegationDeleteObjectV1SignalError(output, error_type, error_str);
        emit usergroupdelegationDeleteObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectUsergroupdelegationApi::usergroupdelegationEditObjectV1(const qint32 &pki_usergroupdelegation_id, const Usergroupdelegation_editObject_v1_Request &usergroupdelegation_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["usergroupdelegationEditObjectV1"][_serverIndices.value("usergroupdelegationEditObjectV1")].URL()+"/1/object/usergroupdelegation/{pkiUsergroupdelegationID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_usergroupdelegation_idPathParam("{");
        pki_usergroupdelegation_idPathParam.append("pkiUsergroupdelegationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiUsergroupdelegationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiUsergroupdelegationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_usergroupdelegation_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_usergroupdelegation_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = usergroupdelegation_edit_object_v1_request.asJson().toUtf8();
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

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectUsergroupdelegationApi::usergroupdelegationEditObjectV1Callback);
    connect(this, &ObjectUsergroupdelegationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectUsergroupdelegationApi::usergroupdelegationEditObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Usergroupdelegation_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit usergroupdelegationEditObjectV1Signal(output);
        emit usergroupdelegationEditObjectV1SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        emit usergroupdelegationEditObjectV1SignalE(output, error_type, error_str);
        emit usergroupdelegationEditObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        emit usergroupdelegationEditObjectV1SignalError(output, error_type, error_str);
        emit usergroupdelegationEditObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectUsergroupdelegationApi::usergroupdelegationGetObjectV2(const qint32 &pki_usergroupdelegation_id) {
    QString fullPath = QString(_serverConfigs["usergroupdelegationGetObjectV2"][_serverIndices.value("usergroupdelegationGetObjectV2")].URL()+"/2/object/usergroupdelegation/{pkiUsergroupdelegationID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_usergroupdelegation_idPathParam("{");
        pki_usergroupdelegation_idPathParam.append("pkiUsergroupdelegationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiUsergroupdelegationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiUsergroupdelegationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_usergroupdelegation_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_usergroupdelegation_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectUsergroupdelegationApi::usergroupdelegationGetObjectV2Callback);
    connect(this, &ObjectUsergroupdelegationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectUsergroupdelegationApi::usergroupdelegationGetObjectV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Usergroupdelegation_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit usergroupdelegationGetObjectV2Signal(output);
        emit usergroupdelegationGetObjectV2SignalFull(worker, output);
    } else {

#if defined(_MSC_VER)
// For MSVC
#pragma warning(push)
#pragma warning(disable : 4996)
#elif defined(__clang__)
// For Clang
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#elif defined(__GNUC__)
// For GCC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

        emit usergroupdelegationGetObjectV2SignalE(output, error_type, error_str);
        emit usergroupdelegationGetObjectV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        emit usergroupdelegationGetObjectV2SignalError(output, error_type, error_str);
        emit usergroupdelegationGetObjectV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectUsergroupdelegationApi::tokenAvailable(){

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
} // namespace Ezmaxapi
