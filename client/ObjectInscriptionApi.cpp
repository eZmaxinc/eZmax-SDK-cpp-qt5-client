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

#include "ObjectInscriptionApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectInscriptionApi::ObjectInscriptionApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectInscriptionApi::~ObjectInscriptionApi() {
}

void ObjectInscriptionApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("inscriptionGetAttachmentsV1", defaultConf);
    _serverIndices.insert("inscriptionGetAttachmentsV1", 0);
    _serverConfigs.insert("inscriptionGetCommunicationCountV1", defaultConf);
    _serverIndices.insert("inscriptionGetCommunicationCountV1", 0);
    _serverConfigs.insert("inscriptionGetCommunicationListV1", defaultConf);
    _serverIndices.insert("inscriptionGetCommunicationListV1", 0);
    _serverConfigs.insert("inscriptionGetCommunicationrecipientsV1", defaultConf);
    _serverIndices.insert("inscriptionGetCommunicationrecipientsV1", 0);
    _serverConfigs.insert("inscriptionGetCommunicationsendersV1", defaultConf);
    _serverIndices.insert("inscriptionGetCommunicationsendersV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectInscriptionApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectInscriptionApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectInscriptionApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectInscriptionApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectInscriptionApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectInscriptionApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectInscriptionApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectInscriptionApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectInscriptionApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectInscriptionApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectInscriptionApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectInscriptionApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectInscriptionApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectInscriptionApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectInscriptionApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectInscriptionApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectInscriptionApi::getParamStylePrefix(const QString &style) {
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

QString ObjectInscriptionApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectInscriptionApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectInscriptionApi::inscriptionGetAttachmentsV1(const qint32 &pki_inscription_id) {
    QString fullPath = QString(_serverConfigs["inscriptionGetAttachmentsV1"][_serverIndices.value("inscriptionGetAttachmentsV1")].URL()+"/1/object/inscription/{pkiInscriptionID}/getAttachments");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_inscription_idPathParam("{");
        pki_inscription_idPathParam.append("pkiInscriptionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInscriptionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInscriptionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_inscription_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_inscription_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInscriptionApi::inscriptionGetAttachmentsV1Callback);
    connect(this, &ObjectInscriptionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInscriptionApi::inscriptionGetAttachmentsV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Inscription_getAttachments_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT inscriptionGetAttachmentsV1Signal(output);
        Q_EMIT inscriptionGetAttachmentsV1SignalFull(worker, output);
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

        Q_EMIT inscriptionGetAttachmentsV1SignalE(output, error_type, error_str);
        Q_EMIT inscriptionGetAttachmentsV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT inscriptionGetAttachmentsV1SignalError(output, error_type, error_str);
        Q_EMIT inscriptionGetAttachmentsV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInscriptionApi::inscriptionGetCommunicationCountV1(const qint32 &pki_inscription_id) {
    QString fullPath = QString(_serverConfigs["inscriptionGetCommunicationCountV1"][_serverIndices.value("inscriptionGetCommunicationCountV1")].URL()+"/1/object/inscription/{pkiInscriptionID}/getCommunicationCount");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_inscription_idPathParam("{");
        pki_inscription_idPathParam.append("pkiInscriptionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInscriptionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInscriptionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_inscription_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_inscription_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInscriptionApi::inscriptionGetCommunicationCountV1Callback);
    connect(this, &ObjectInscriptionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInscriptionApi::inscriptionGetCommunicationCountV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Inscription_getCommunicationCount_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT inscriptionGetCommunicationCountV1Signal(output);
        Q_EMIT inscriptionGetCommunicationCountV1SignalFull(worker, output);
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

        Q_EMIT inscriptionGetCommunicationCountV1SignalE(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationCountV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT inscriptionGetCommunicationCountV1SignalError(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationCountV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInscriptionApi::inscriptionGetCommunicationListV1(const qint32 &pki_inscription_id) {
    QString fullPath = QString(_serverConfigs["inscriptionGetCommunicationListV1"][_serverIndices.value("inscriptionGetCommunicationListV1")].URL()+"/1/object/inscription/{pkiInscriptionID}/getCommunicationList");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_inscription_idPathParam("{");
        pki_inscription_idPathParam.append("pkiInscriptionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInscriptionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInscriptionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_inscription_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_inscription_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInscriptionApi::inscriptionGetCommunicationListV1Callback);
    connect(this, &ObjectInscriptionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInscriptionApi::inscriptionGetCommunicationListV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Inscription_getCommunicationList_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT inscriptionGetCommunicationListV1Signal(output);
        Q_EMIT inscriptionGetCommunicationListV1SignalFull(worker, output);
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

        Q_EMIT inscriptionGetCommunicationListV1SignalE(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationListV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT inscriptionGetCommunicationListV1SignalError(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationListV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInscriptionApi::inscriptionGetCommunicationrecipientsV1(const qint32 &pki_inscription_id) {
    QString fullPath = QString(_serverConfigs["inscriptionGetCommunicationrecipientsV1"][_serverIndices.value("inscriptionGetCommunicationrecipientsV1")].URL()+"/1/object/inscription/{pkiInscriptionID}/getCommunicationrecipients");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_inscription_idPathParam("{");
        pki_inscription_idPathParam.append("pkiInscriptionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInscriptionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInscriptionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_inscription_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_inscription_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInscriptionApi::inscriptionGetCommunicationrecipientsV1Callback);
    connect(this, &ObjectInscriptionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInscriptionApi::inscriptionGetCommunicationrecipientsV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Inscription_getCommunicationrecipients_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT inscriptionGetCommunicationrecipientsV1Signal(output);
        Q_EMIT inscriptionGetCommunicationrecipientsV1SignalFull(worker, output);
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

        Q_EMIT inscriptionGetCommunicationrecipientsV1SignalE(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationrecipientsV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT inscriptionGetCommunicationrecipientsV1SignalError(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationrecipientsV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInscriptionApi::inscriptionGetCommunicationsendersV1(const qint32 &pki_inscription_id) {
    QString fullPath = QString(_serverConfigs["inscriptionGetCommunicationsendersV1"][_serverIndices.value("inscriptionGetCommunicationsendersV1")].URL()+"/1/object/inscription/{pkiInscriptionID}/getCommunicationsenders");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_inscription_idPathParam("{");
        pki_inscription_idPathParam.append("pkiInscriptionID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInscriptionID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInscriptionID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_inscription_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_inscription_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInscriptionApi::inscriptionGetCommunicationsendersV1Callback);
    connect(this, &ObjectInscriptionApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInscriptionApi::inscriptionGetCommunicationsendersV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Inscription_getCommunicationsenders_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT inscriptionGetCommunicationsendersV1Signal(output);
        Q_EMIT inscriptionGetCommunicationsendersV1SignalFull(worker, output);
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

        Q_EMIT inscriptionGetCommunicationsendersV1SignalE(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationsendersV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT inscriptionGetCommunicationsendersV1SignalError(output, error_type, error_str);
        Q_EMIT inscriptionGetCommunicationsendersV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInscriptionApi::tokenAvailable(){

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
