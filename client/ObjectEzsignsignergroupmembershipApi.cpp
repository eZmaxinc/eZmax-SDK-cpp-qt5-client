/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "ObjectEzsignsignergroupmembershipApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectEzsignsignergroupmembershipApi::ObjectEzsignsignergroupmembershipApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectEzsignsignergroupmembershipApi::~ObjectEzsignsignergroupmembershipApi() {
}

void ObjectEzsignsignergroupmembershipApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("ezsignsignergroupmembershipCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupmembershipCreateObjectV1", 0);
    _serverConfigs.insert("ezsignsignergroupmembershipDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupmembershipDeleteObjectV1", 0);
    _serverConfigs.insert("ezsignsignergroupmembershipGetObjectV2", defaultConf);
    _serverIndices.insert("ezsignsignergroupmembershipGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectEzsignsignergroupmembershipApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectEzsignsignergroupmembershipApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectEzsignsignergroupmembershipApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectEzsignsignergroupmembershipApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectEzsignsignergroupmembershipApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectEzsignsignergroupmembershipApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectEzsignsignergroupmembershipApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectEzsignsignergroupmembershipApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectEzsignsignergroupmembershipApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectEzsignsignergroupmembershipApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectEzsignsignergroupmembershipApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    for (auto keyIt = _serverIndices.keyBegin(); keyIt != _serverIndices.keyEnd(); keyIt++) {
        setServerIndex(*keyIt, addServerConfiguration(*keyIt, url, description, variables));
    }
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void ObjectEzsignsignergroupmembershipApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectEzsignsignergroupmembershipApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectEzsignsignergroupmembershipApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectEzsignsignergroupmembershipApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectEzsignsignergroupmembershipApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectEzsignsignergroupmembershipApi::getParamStylePrefix(const QString &style) {
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

QString ObjectEzsignsignergroupmembershipApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectEzsignsignergroupmembershipApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipCreateObjectV1(const Ezsignsignergroupmembership_createObject_v1_Request &ezsignsignergroupmembership_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupmembershipCreateObjectV1"][_serverIndices.value("ezsignsignergroupmembershipCreateObjectV1")].URL()+"/1/object/ezsignsignergroupmembership");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = ezsignsignergroupmembership_create_object_v1_request.asJson().toUtf8();
        input.request_body.append(output);
    }
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipCreateObjectV1Callback);
    connect(this, &ObjectEzsignsignergroupmembershipApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipCreateObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsignsignergroupmembership_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsignsignergroupmembershipCreateObjectV1Signal(output);
        Q_EMIT ezsignsignergroupmembershipCreateObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsignsignergroupmembershipCreateObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsignsignergroupmembershipCreateObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsignsignergroupmembershipCreateObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsignsignergroupmembershipCreateObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipDeleteObjectV1(const qint32 &pki_ezsignsignergroupmembership_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupmembershipDeleteObjectV1"][_serverIndices.value("ezsignsignergroupmembershipDeleteObjectV1")].URL()+"/1/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroupmembership_idPathParam("{");
        pki_ezsignsignergroupmembership_idPathParam.append("pkiEzsignsignergroupmembershipID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupmembershipID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupmembershipID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroupmembership_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignsignergroupmembership_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "DELETE");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipDeleteObjectV1Callback);
    connect(this, &ObjectEzsignsignergroupmembershipApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipDeleteObjectV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Common_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsignsignergroupmembershipDeleteObjectV1Signal(output);
        Q_EMIT ezsignsignergroupmembershipDeleteObjectV1SignalFull(worker, output);
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

        Q_EMIT ezsignsignergroupmembershipDeleteObjectV1SignalE(output, error_type, error_str);
        Q_EMIT ezsignsignergroupmembershipDeleteObjectV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsignsignergroupmembershipDeleteObjectV1SignalError(output, error_type, error_str);
        Q_EMIT ezsignsignergroupmembershipDeleteObjectV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipGetObjectV2(const qint32 &pki_ezsignsignergroupmembership_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupmembershipGetObjectV2"][_serverIndices.value("ezsignsignergroupmembershipGetObjectV2")].URL()+"/2/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroupmembership_idPathParam("{");
        pki_ezsignsignergroupmembership_idPathParam.append("pkiEzsignsignergroupmembershipID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupmembershipID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupmembershipID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroupmembership_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_ezsignsignergroupmembership_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipGetObjectV2Callback);
    connect(this, &ObjectEzsignsignergroupmembershipApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectEzsignsignergroupmembershipApi::ezsignsignergroupmembershipGetObjectV2Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Ezsignsignergroupmembership_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT ezsignsignergroupmembershipGetObjectV2Signal(output);
        Q_EMIT ezsignsignergroupmembershipGetObjectV2SignalFull(worker, output);
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

        Q_EMIT ezsignsignergroupmembershipGetObjectV2SignalE(output, error_type, error_str);
        Q_EMIT ezsignsignergroupmembershipGetObjectV2SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT ezsignsignergroupmembershipGetObjectV2SignalError(output, error_type, error_str);
        Q_EMIT ezsignsignergroupmembershipGetObjectV2SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectEzsignsignergroupmembershipApi::tokenAvailable(){

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
