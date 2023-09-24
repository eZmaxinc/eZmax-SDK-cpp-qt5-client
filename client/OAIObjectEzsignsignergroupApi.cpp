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

#include "OAIObjectEzsignsignergroupApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsignsignergroupApi::OAIObjectEzsignsignergroupApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectEzsignsignergroupApi::~OAIObjectEzsignsignergroupApi() {
}

void OAIObjectEzsignsignergroupApi::initializeServerConfigs() {
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
    
    defaultConf.append(OAIServerConfiguration(
    QUrl("wss://ws.{sInfrastructureregionCode}.ezmax.com/{sInfrastructureenvironmenttypeDescription}"),
    "The server endpoint where to send your websocket requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"} })}, }));
    
    _serverConfigs.insert("ezsignsignergroupCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupCreateObjectV1", 0);
    _serverConfigs.insert("ezsignsignergroupDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupDeleteObjectV1", 0);
    _serverConfigs.insert("ezsignsignergroupEditEzsignsignergroupmembershipsV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupEditEzsignsignergroupmembershipsV1", 0);
    _serverConfigs.insert("ezsignsignergroupEditObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupEditObjectV1", 0);
    _serverConfigs.insert("ezsignsignergroupGetEzsignsignergroupmembershipsV1", defaultConf);
    _serverIndices.insert("ezsignsignergroupGetEzsignsignergroupmembershipsV1", 0);
    _serverConfigs.insert("ezsignsignergroupGetObjectV2", defaultConf);
    _serverIndices.insert("ezsignsignergroupGetObjectV2", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectEzsignsignergroupApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignsignergroupApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIObjectEzsignsignergroupApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void OAIObjectEzsignsignergroupApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIObjectEzsignsignergroupApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignsignergroupApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectEzsignsignergroupApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignsignergroupApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignsignergroupApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIObjectEzsignsignergroupApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsignsignergroupApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectEzsignsignergroupApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectEzsignsignergroupApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIObjectEzsignsignergroupApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIObjectEzsignsignergroupApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIObjectEzsignsignergroupApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIObjectEzsignsignergroupApi::getParamStylePrefix(const QString &style) {
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

QString OAIObjectEzsignsignergroupApi::getParamStyleSuffix(const QString &style) {
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

QString OAIObjectEzsignsignergroupApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void OAIObjectEzsignsignergroupApi::ezsignsignergroupCreateObjectV1(const OAIEzsignsignergroup_createObject_v1_Request &oai_ezsignsignergroup_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupCreateObjectV1"][_serverIndices.value("ezsignsignergroupCreateObjectV1")].URL()+"/1/object/ezsignsignergroup");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = oai_ezsignsignergroup_create_object_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignergroupApi::ezsignsignergroupCreateObjectV1Callback);
    connect(this, &OAIObjectEzsignsignergroupApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignsignergroup_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignergroupCreateObjectV1Signal(output);
        emit ezsignsignergroupCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignergroupCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignergroupCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupDeleteObjectV1(const qint32 &pki_ezsignsignergroup_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupDeleteObjectV1"][_serverIndices.value("ezsignsignergroupDeleteObjectV1")].URL()+"/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroup_idPathParam("{");
        pki_ezsignsignergroup_idPathParam.append("pkiEzsignsignergroupID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroup_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignergroup_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignergroupApi::ezsignsignergroupDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsignsignergroupApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignsignergroup_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignergroupDeleteObjectV1Signal(output);
        emit ezsignsignergroupDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignergroupDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignergroupDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupEditEzsignsignergroupmembershipsV1(const qint32 &pki_ezsignsignergroup_id, const OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Request &oai_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupEditEzsignsignergroupmembershipsV1"][_serverIndices.value("ezsignsignergroupEditEzsignsignergroupmembershipsV1")].URL()+"/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/editEzsignsignergroupmemberships");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroup_idPathParam("{");
        pki_ezsignsignergroup_idPathParam.append("pkiEzsignsignergroupID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroup_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignergroup_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = oai_ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignergroupApi::ezsignsignergroupEditEzsignsignergroupmembershipsV1Callback);
    connect(this, &OAIObjectEzsignsignergroupApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupEditEzsignsignergroupmembershipsV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignsignergroup_editEzsignsignergroupmemberships_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignergroupEditEzsignsignergroupmembershipsV1Signal(output);
        emit ezsignsignergroupEditEzsignsignergroupmembershipsV1SignalFull(worker, output);
    } else {
        emit ezsignsignergroupEditEzsignsignergroupmembershipsV1SignalE(output, error_type, error_str);
        emit ezsignsignergroupEditEzsignsignergroupmembershipsV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupEditObjectV1(const qint32 &pki_ezsignsignergroup_id, const OAIEzsignsignergroup_editObject_v1_Request &oai_ezsignsignergroup_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupEditObjectV1"][_serverIndices.value("ezsignsignergroupEditObjectV1")].URL()+"/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroup_idPathParam("{");
        pki_ezsignsignergroup_idPathParam.append("pkiEzsignsignergroupID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroup_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignergroup_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = oai_ezsignsignergroup_edit_object_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignergroupApi::ezsignsignergroupEditObjectV1Callback);
    connect(this, &OAIObjectEzsignsignergroupApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupEditObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignsignergroup_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignergroupEditObjectV1Signal(output);
        emit ezsignsignergroupEditObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignergroupEditObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignergroupEditObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupGetEzsignsignergroupmembershipsV1(const qint32 &pki_ezsignsignergroup_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupGetEzsignsignergroupmembershipsV1"][_serverIndices.value("ezsignsignergroupGetEzsignsignergroupmembershipsV1")].URL()+"/1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroup_idPathParam("{");
        pki_ezsignsignergroup_idPathParam.append("pkiEzsignsignergroupID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroup_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignergroup_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignergroupApi::ezsignsignergroupGetEzsignsignergroupmembershipsV1Callback);
    connect(this, &OAIObjectEzsignsignergroupApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupGetEzsignsignergroupmembershipsV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignergroupGetEzsignsignergroupmembershipsV1Signal(output);
        emit ezsignsignergroupGetEzsignsignergroupmembershipsV1SignalFull(worker, output);
    } else {
        emit ezsignsignergroupGetEzsignsignergroupmembershipsV1SignalE(output, error_type, error_str);
        emit ezsignsignergroupGetEzsignsignergroupmembershipsV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupGetObjectV2(const qint32 &pki_ezsignsignergroup_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignergroupGetObjectV2"][_serverIndices.value("ezsignsignergroupGetObjectV2")].URL()+"/2/object/ezsignsignergroup/{pkiEzsignsignergroupID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignergroup_idPathParam("{");
        pki_ezsignsignergroup_idPathParam.append("pkiEzsignsignergroupID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignergroupID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignergroupID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignergroup_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignergroup_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignergroupApi::ezsignsignergroupGetObjectV2Callback);
    connect(this, &OAIObjectEzsignsignergroupApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignergroupApi::ezsignsignergroupGetObjectV2Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIEzsignsignergroup_getObject_v2_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignergroupGetObjectV2Signal(output);
        emit ezsignsignergroupGetObjectV2SignalFull(worker, output);
    } else {
        emit ezsignsignergroupGetObjectV2SignalE(output, error_type, error_str);
        emit ezsignsignergroupGetObjectV2SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignergroupApi::tokenAvailable(){

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
