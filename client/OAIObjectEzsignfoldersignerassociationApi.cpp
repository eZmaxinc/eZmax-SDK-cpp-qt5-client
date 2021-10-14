/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectEzsignfoldersignerassociationApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsignfoldersignerassociationApi::OAIObjectEzsignfoldersignerassociationApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectEzsignfoldersignerassociationApi::~OAIObjectEzsignfoldersignerassociationApi() {
}

void OAIObjectEzsignfoldersignerassociationApi::initializeServerConfigs() {
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
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com/"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })}, }));
    
    _serverConfigs.insert("ezsignfoldersignerassociationCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsignfoldersignerassociationCreateObjectV1", 0);
    _serverConfigs.insert("ezsignfoldersignerassociationDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsignfoldersignerassociationDeleteObjectV1", 0);
    _serverConfigs.insert("ezsignfoldersignerassociationGetChildrenV1", defaultConf);
    _serverIndices.insert("ezsignfoldersignerassociationGetChildrenV1", 0);
    _serverConfigs.insert("ezsignfoldersignerassociationGetInPersonLoginUrlV1", defaultConf);
    _serverIndices.insert("ezsignfoldersignerassociationGetInPersonLoginUrlV1", 0);
    _serverConfigs.insert("ezsignfoldersignerassociationGetObjectV1", defaultConf);
    _serverIndices.insert("ezsignfoldersignerassociationGetObjectV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectEzsignfoldersignerassociationApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignfoldersignerassociationApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIObjectEzsignfoldersignerassociationApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectEzsignfoldersignerassociationApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIObjectEzsignfoldersignerassociationApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignfoldersignerassociationApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectEzsignfoldersignerassociationApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignfoldersignerassociationApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignfoldersignerassociationApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIObjectEzsignfoldersignerassociationApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsignfoldersignerassociationApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsignfoldersignerassociationApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectEzsignfoldersignerassociationApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIObjectEzsignfoldersignerassociationApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIObjectEzsignfoldersignerassociationApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIObjectEzsignfoldersignerassociationApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIObjectEzsignfoldersignerassociationApi::getParamStylePrefix(const QString &style) {
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

QString OAIObjectEzsignfoldersignerassociationApi::getParamStyleSuffix(const QString &style) {
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

QString OAIObjectEzsignfoldersignerassociationApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationCreateObjectV1(const QList<OAIEzsignfoldersignerassociation_createObject_v1_Request> &oai_ezsignfoldersignerassociation_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignfoldersignerassociationCreateObjectV1"][_serverIndices.value("ezsignfoldersignerassociationCreateObjectV1")].URL()+"/1/object/ezsignfoldersignerassociation");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {
        QJsonDocument doc(::OpenAPI::toJsonValue(oai_ezsignfoldersignerassociation_create_object_v1_request).toArray());
        QByteArray bytes = doc.toJson();
        input.request_body.append(bytes);
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationCreateObjectV1Callback);
    connect(this, &OAIObjectEzsignfoldersignerassociationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignfoldersignerassociation_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfoldersignerassociationCreateObjectV1Signal(output);
        emit ezsignfoldersignerassociationCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsignfoldersignerassociationCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsignfoldersignerassociationCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationDeleteObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id) {
    QString fullPath = QString(_serverConfigs["ezsignfoldersignerassociationDeleteObjectV1"][_serverIndices.value("ezsignfoldersignerassociationDeleteObjectV1")].URL()+"/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignfoldersignerassociation_idPathParam("{");
        pki_ezsignfoldersignerassociation_idPathParam.append("pkiEzsignfoldersignerassociationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfoldersignerassociationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfoldersignerassociationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignfoldersignerassociation_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfoldersignerassociation_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsignfoldersignerassociationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignfoldersignerassociation_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfoldersignerassociationDeleteObjectV1Signal(output);
        emit ezsignfoldersignerassociationDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsignfoldersignerassociationDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsignfoldersignerassociationDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetChildrenV1(const qint32 &pki_ezsignfoldersignerassociation_id) {
    QString fullPath = QString(_serverConfigs["ezsignfoldersignerassociationGetChildrenV1"][_serverIndices.value("ezsignfoldersignerassociationGetChildrenV1")].URL()+"/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getChildren");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignfoldersignerassociation_idPathParam("{");
        pki_ezsignfoldersignerassociation_idPathParam.append("pkiEzsignfoldersignerassociationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfoldersignerassociationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfoldersignerassociationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignfoldersignerassociation_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfoldersignerassociation_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetChildrenV1Callback);
    connect(this, &OAIObjectEzsignfoldersignerassociationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetChildrenV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfoldersignerassociationGetChildrenV1Signal();
        emit ezsignfoldersignerassociationGetChildrenV1SignalFull(worker);
    } else {
        emit ezsignfoldersignerassociationGetChildrenV1SignalE(error_type, error_str);
        emit ezsignfoldersignerassociationGetChildrenV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetInPersonLoginUrlV1(const qint32 &pki_ezsignfoldersignerassociation_id) {
    QString fullPath = QString(_serverConfigs["ezsignfoldersignerassociationGetInPersonLoginUrlV1"][_serverIndices.value("ezsignfoldersignerassociationGetInPersonLoginUrlV1")].URL()+"/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignfoldersignerassociation_idPathParam("{");
        pki_ezsignfoldersignerassociation_idPathParam.append("pkiEzsignfoldersignerassociationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfoldersignerassociationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfoldersignerassociationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignfoldersignerassociation_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfoldersignerassociation_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetInPersonLoginUrlV1Callback);
    connect(this, &OAIObjectEzsignfoldersignerassociationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetInPersonLoginUrlV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfoldersignerassociationGetInPersonLoginUrlV1Signal(output);
        emit ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalFull(worker, output);
    } else {
        emit ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalE(output, error_type, error_str);
        emit ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id) {
    QString fullPath = QString(_serverConfigs["ezsignfoldersignerassociationGetObjectV1"][_serverIndices.value("ezsignfoldersignerassociationGetObjectV1")].URL()+"/1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignfoldersignerassociation_idPathParam("{");
        pki_ezsignfoldersignerassociation_idPathParam.append("pkiEzsignfoldersignerassociationID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignfoldersignerassociationID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignfoldersignerassociationID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignfoldersignerassociation_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignfoldersignerassociation_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetObjectV1Callback);
    connect(this, &OAIObjectEzsignfoldersignerassociationApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignfoldersignerassociationApi::ezsignfoldersignerassociationGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignfoldersignerassociation_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignfoldersignerassociationGetObjectV1Signal(output);
        emit ezsignfoldersignerassociationGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsignfoldersignerassociationGetObjectV1SignalE(output, error_type, error_str);
        emit ezsignfoldersignerassociationGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
