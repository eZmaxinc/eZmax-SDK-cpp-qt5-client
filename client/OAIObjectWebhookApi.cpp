/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIObjectWebhookApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectWebhookApi::OAIObjectWebhookApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectWebhookApi::~OAIObjectWebhookApi() {
}

void OAIObjectWebhookApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("webhookCreateObjectV1", defaultConf);
    _serverIndices.insert("webhookCreateObjectV1", 0);
    _serverConfigs.insert("webhookDeleteObjectV1", defaultConf);
    _serverIndices.insert("webhookDeleteObjectV1", 0);
    _serverConfigs.insert("webhookEditObjectV1", defaultConf);
    _serverIndices.insert("webhookEditObjectV1", 0);
    _serverConfigs.insert("webhookGetHistoryV1", defaultConf);
    _serverIndices.insert("webhookGetHistoryV1", 0);
    _serverConfigs.insert("webhookGetListV1", defaultConf);
    _serverIndices.insert("webhookGetListV1", 0);
    _serverConfigs.insert("webhookGetObjectV1", defaultConf);
    _serverIndices.insert("webhookGetObjectV1", 0);
    _serverConfigs.insert("webhookTestUrlV1", defaultConf);
    _serverIndices.insert("webhookTestUrlV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectWebhookApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectWebhookApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void OAIObjectWebhookApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectWebhookApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void OAIObjectWebhookApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectWebhookApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectWebhookApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectWebhookApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectWebhookApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIObjectWebhookApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectWebhookApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
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
void OAIObjectWebhookApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectWebhookApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void OAIObjectWebhookApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void OAIObjectWebhookApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void OAIObjectWebhookApi::abortRequests() {
    emit abortRequestsSignal();
}

QString OAIObjectWebhookApi::getParamStylePrefix(const QString &style) {
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

QString OAIObjectWebhookApi::getParamStyleSuffix(const QString &style) {
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

QString OAIObjectWebhookApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void OAIObjectWebhookApi::webhookCreateObjectV1(const OAIWebhook_createObject_v1_Request &oai_webhook_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["webhookCreateObjectV1"][_serverIndices.value("webhookCreateObjectV1")].URL()+"/1/object/webhook");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {

        
        QByteArray output = oai_webhook_create_object_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookCreateObjectV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookCreateObjectV1Signal(output);
        emit webhookCreateObjectV1SignalFull(worker, output);
    } else {
        emit webhookCreateObjectV1SignalE(output, error_type, error_str);
        emit webhookCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::webhookDeleteObjectV1(const qint32 &pki_webhook_id) {
    QString fullPath = QString(_serverConfigs["webhookDeleteObjectV1"][_serverIndices.value("webhookDeleteObjectV1")].URL()+"/1/object/webhook/{pkiWebhookID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_webhook_idPathParam("{");
        pki_webhook_idPathParam.append("pkiWebhookID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiWebhookID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiWebhookID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_webhook_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_webhook_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookDeleteObjectV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookDeleteObjectV1Signal(output);
        emit webhookDeleteObjectV1SignalFull(worker, output);
    } else {
        emit webhookDeleteObjectV1SignalE(output, error_type, error_str);
        emit webhookDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::webhookEditObjectV1(const qint32 &pki_webhook_id, const OAIWebhook_editObject_v1_Request &oai_webhook_edit_object_v1_request) {
    QString fullPath = QString(_serverConfigs["webhookEditObjectV1"][_serverIndices.value("webhookEditObjectV1")].URL()+"/1/object/webhook/{pkiWebhookID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_webhook_idPathParam("{");
        pki_webhook_idPathParam.append("pkiWebhookID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiWebhookID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiWebhookID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_webhook_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_webhook_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "PUT");

    {

        
        QByteArray output = oai_webhook_edit_object_v1_request.asJson().toUtf8();
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookEditObjectV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookEditObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_editObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookEditObjectV1Signal(output);
        emit webhookEditObjectV1SignalFull(worker, output);
    } else {
        emit webhookEditObjectV1SignalE(output, error_type, error_str);
        emit webhookEditObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::webhookGetHistoryV1(const qint32 &pki_webhook_id, const QString &e_webhook_historyinterval) {
    QString fullPath = QString(_serverConfigs["webhookGetHistoryV1"][_serverIndices.value("webhookGetHistoryV1")].URL()+"/1/object/webhook/{pkiWebhookID}/getHistory");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_webhook_idPathParam("{");
        pki_webhook_idPathParam.append("pkiWebhookID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiWebhookID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiWebhookID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_webhook_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_webhook_id)));
    }
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "eWebhookHistoryinterval", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("eWebhookHistoryinterval")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(e_webhook_historyinterval)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookGetHistoryV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookGetHistoryV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_getHistory_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookGetHistoryV1Signal(output);
        emit webhookGetHistoryV1SignalFull(worker, output);
    } else {
        emit webhookGetHistoryV1SignalE(output, error_type, error_str);
        emit webhookGetHistoryV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::webhookGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by, const ::OpenAPI::OptionalParam<qint32> &i_row_max, const ::OpenAPI::OptionalParam<qint32> &i_row_offset, const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language, const ::OpenAPI::OptionalParam<QString> &s_filter) {
    QString fullPath = QString(_serverConfigs["webhookGetListV1"][_serverIndices.value("webhookGetListV1")].URL()+"/1/object/webhook/getList");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    QString queryPrefix, querySuffix, queryDelimiter, queryStyle;
    if (e_order_by.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "eOrderBy", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("eOrderBy")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(e_order_by.value())));
    }
    if (i_row_max.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "iRowMax", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("iRowMax")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(i_row_max.value())));
    }
    if (i_row_offset.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "iRowOffset", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("iRowOffset")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(i_row_offset.value())));
    }
    if (s_filter.hasValue())
    {
        queryStyle = "form";
        if (queryStyle == "")
            queryStyle = "form";
        queryPrefix = getParamStylePrefix(queryStyle);
        querySuffix = getParamStyleSuffix(queryStyle);
        queryDelimiter = getParamStyleDelimiter(queryStyle, "sFilter", true);
        if (fullPath.indexOf("?") > 0)
            fullPath.append(queryPrefix);
        else
            fullPath.append("?");

        fullPath.append(QUrl::toPercentEncoding("sFilter")).append(querySuffix).append(QUrl::toPercentEncoding(::OpenAPI::toStringValue(s_filter.value())));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


    if (accept_language.hasValue())
    {
        QString headerString;
        QJsonObject parameter = accept_language.value().asJsonObject();
        qint32 count = 0;
        foreach(const QString& key, parameter.keys()) {
            if (count > 0) {
                headerString.append(",");
            }
            QString assignOperator = (false) ? "=" : ",";
            switch(parameter.value(key).type()) {
                case QJsonValue::String:
                {
                    headerString.append(key+assignOperator+parameter.value(key).toString());
                    break;
                }
                case QJsonValue::Double:
                {
                    headerString.append(key+assignOperator+QString::number(parameter.value(key).toDouble()));
                    break;
                }
                case QJsonValue::Bool:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toBool()).toString());
                    break;
                }
                case QJsonValue::Array:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toArray()).toString());
                    break;
                }
                case QJsonValue::Object:
                {
                    headerString.append(key+assignOperator+QVariant(parameter.value(key).toObject()).toString());
                    break;
                }
                case QJsonValue::Null:
                case QJsonValue::Undefined:
                    break;
            }
            count++;
        }
        input.headers.insert("Accept-Language", headerString);
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookGetListV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookGetListV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_getList_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookGetListV1Signal(output);
        emit webhookGetListV1SignalFull(worker, output);
    } else {
        emit webhookGetListV1SignalE(output, error_type, error_str);
        emit webhookGetListV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::webhookGetObjectV1(const qint32 &pki_webhook_id) {
    QString fullPath = QString(_serverConfigs["webhookGetObjectV1"][_serverIndices.value("webhookGetObjectV1")].URL()+"/1/object/webhook/{pkiWebhookID}");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_webhook_idPathParam("{");
        pki_webhook_idPathParam.append("pkiWebhookID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiWebhookID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiWebhookID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_webhook_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_webhook_id)));
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

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookGetObjectV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookGetObjectV1Signal(output);
        emit webhookGetObjectV1SignalFull(worker, output);
    } else {
        emit webhookGetObjectV1SignalE(output, error_type, error_str);
        emit webhookGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::webhookTestUrlV1(const qint32 &pki_webhook_id) {
    QString fullPath = QString(_serverConfigs["webhookTestUrlV1"][_serverIndices.value("webhookTestUrlV1")].URL()+"/1/object/webhook/{pkiWebhookID}/test");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_webhook_idPathParam("{");
        pki_webhook_idPathParam.append("pkiWebhookID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiWebhookID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiWebhookID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_webhook_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_webhook_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


#if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }
#else
    for (auto key : _defaultHeaders.keys()) {
        input.headers.insert(key, _defaultHeaders[key]);
    }
#endif

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectWebhookApi::webhookTestUrlV1Callback);
    connect(this, &OAIObjectWebhookApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this]() {
        if (findChildren<OAIHttpRequestWorker*>().count() == 0) {
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectWebhookApi::webhookTestUrlV1Callback(OAIHttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    OAIWebhook_test_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit webhookTestUrlV1Signal(output);
        emit webhookTestUrlV1SignalFull(worker, output);
    } else {
        emit webhookTestUrlV1SignalE(output, error_type, error_str);
        emit webhookTestUrlV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectWebhookApi::tokenAvailable(){
  
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
