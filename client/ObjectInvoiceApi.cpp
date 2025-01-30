/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "ObjectInvoiceApi.h"
#include "ServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace Ezmaxapi {

ObjectInvoiceApi::ObjectInvoiceApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      _isResponseCompressionEnabled(false),
      _isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

ObjectInvoiceApi::~ObjectInvoiceApi() {
}

void ObjectInvoiceApi::initializeServerConfigs() {
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
    
    _serverConfigs.insert("invoiceGetAttachmentsV1", defaultConf);
    _serverIndices.insert("invoiceGetAttachmentsV1", 0);
    _serverConfigs.insert("invoiceGetCommunicationCountV1", defaultConf);
    _serverIndices.insert("invoiceGetCommunicationCountV1", 0);
    _serverConfigs.insert("invoiceGetCommunicationListV1", defaultConf);
    _serverIndices.insert("invoiceGetCommunicationListV1", 0);
    _serverConfigs.insert("invoiceGetCommunicationrecipientsV1", defaultConf);
    _serverIndices.insert("invoiceGetCommunicationrecipientsV1", 0);
    _serverConfigs.insert("invoiceGetCommunicationsendersV1", defaultConf);
    _serverIndices.insert("invoiceGetCommunicationsendersV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int ObjectInvoiceApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value) {
    auto it = _serverConfigs.find(operation);
    if (it != _serverConfigs.end() && serverIndex < it.value().size()) {
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void ObjectInvoiceApi::setServerIndex(const QString &operation, int serverIndex) {
    if (_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size()) {
        _serverIndices[operation] = serverIndex;
    }
}

void ObjectInvoiceApi::setApiKey(const QString &apiKeyName, const QString &apiKey) {
    _apiKeys.insert(apiKeyName, apiKey);
}

void ObjectInvoiceApi::setBearerToken(const QString &token) {
    _bearerToken = token;
}

void ObjectInvoiceApi::setUsername(const QString &username) {
    _username = username;
}

void ObjectInvoiceApi::setPassword(const QString &password) {
    _password = password;
}


void ObjectInvoiceApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void ObjectInvoiceApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void ObjectInvoiceApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int ObjectInvoiceApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectInvoiceApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
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
void ObjectInvoiceApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, ServerVariable> &variables) {
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void ObjectInvoiceApi::addHeaders(const QString &key, const QString &value) {
    _defaultHeaders.insert(key, value);
}

void ObjectInvoiceApi::enableRequestCompression() {
    _isRequestCompressionEnabled = true;
}

void ObjectInvoiceApi::enableResponseCompression() {
    _isResponseCompressionEnabled = true;
}

void ObjectInvoiceApi::abortRequests() {
    Q_EMIT abortRequestsSignal();
}

QString ObjectInvoiceApi::getParamStylePrefix(const QString &style) {
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

QString ObjectInvoiceApi::getParamStyleSuffix(const QString &style) {
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

QString ObjectInvoiceApi::getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode) {

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

void ObjectInvoiceApi::invoiceGetAttachmentsV1(const qint32 &pki_invoice_id) {
    QString fullPath = QString(_serverConfigs["invoiceGetAttachmentsV1"][_serverIndices.value("invoiceGetAttachmentsV1")].URL()+"/1/object/invoice/{pkiInvoiceID}/getAttachments");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_invoice_idPathParam("{");
        pki_invoice_idPathParam.append("pkiInvoiceID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInvoiceID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInvoiceID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_invoice_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_invoice_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInvoiceApi::invoiceGetAttachmentsV1Callback);
    connect(this, &ObjectInvoiceApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInvoiceApi::invoiceGetAttachmentsV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Invoice_getAttachments_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT invoiceGetAttachmentsV1Signal(output);
        Q_EMIT invoiceGetAttachmentsV1SignalFull(worker, output);
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

        Q_EMIT invoiceGetAttachmentsV1SignalE(output, error_type, error_str);
        Q_EMIT invoiceGetAttachmentsV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT invoiceGetAttachmentsV1SignalError(output, error_type, error_str);
        Q_EMIT invoiceGetAttachmentsV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInvoiceApi::invoiceGetCommunicationCountV1(const qint32 &pki_invoice_id) {
    QString fullPath = QString(_serverConfigs["invoiceGetCommunicationCountV1"][_serverIndices.value("invoiceGetCommunicationCountV1")].URL()+"/1/object/invoice/{pkiInvoiceID}/getCommunicationCount");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_invoice_idPathParam("{");
        pki_invoice_idPathParam.append("pkiInvoiceID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInvoiceID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInvoiceID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_invoice_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_invoice_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInvoiceApi::invoiceGetCommunicationCountV1Callback);
    connect(this, &ObjectInvoiceApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInvoiceApi::invoiceGetCommunicationCountV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Invoice_getCommunicationCount_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT invoiceGetCommunicationCountV1Signal(output);
        Q_EMIT invoiceGetCommunicationCountV1SignalFull(worker, output);
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

        Q_EMIT invoiceGetCommunicationCountV1SignalE(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationCountV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT invoiceGetCommunicationCountV1SignalError(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationCountV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInvoiceApi::invoiceGetCommunicationListV1(const qint32 &pki_invoice_id) {
    QString fullPath = QString(_serverConfigs["invoiceGetCommunicationListV1"][_serverIndices.value("invoiceGetCommunicationListV1")].URL()+"/1/object/invoice/{pkiInvoiceID}/getCommunicationList");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_invoice_idPathParam("{");
        pki_invoice_idPathParam.append("pkiInvoiceID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInvoiceID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInvoiceID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_invoice_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_invoice_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInvoiceApi::invoiceGetCommunicationListV1Callback);
    connect(this, &ObjectInvoiceApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInvoiceApi::invoiceGetCommunicationListV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Invoice_getCommunicationList_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT invoiceGetCommunicationListV1Signal(output);
        Q_EMIT invoiceGetCommunicationListV1SignalFull(worker, output);
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

        Q_EMIT invoiceGetCommunicationListV1SignalE(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationListV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT invoiceGetCommunicationListV1SignalError(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationListV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInvoiceApi::invoiceGetCommunicationrecipientsV1(const qint32 &pki_invoice_id) {
    QString fullPath = QString(_serverConfigs["invoiceGetCommunicationrecipientsV1"][_serverIndices.value("invoiceGetCommunicationrecipientsV1")].URL()+"/1/object/invoice/{pkiInvoiceID}/getCommunicationrecipients");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_invoice_idPathParam("{");
        pki_invoice_idPathParam.append("pkiInvoiceID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInvoiceID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInvoiceID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_invoice_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_invoice_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInvoiceApi::invoiceGetCommunicationrecipientsV1Callback);
    connect(this, &ObjectInvoiceApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInvoiceApi::invoiceGetCommunicationrecipientsV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Invoice_getCommunicationrecipients_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT invoiceGetCommunicationrecipientsV1Signal(output);
        Q_EMIT invoiceGetCommunicationrecipientsV1SignalFull(worker, output);
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

        Q_EMIT invoiceGetCommunicationrecipientsV1SignalE(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationrecipientsV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT invoiceGetCommunicationrecipientsV1SignalError(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationrecipientsV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInvoiceApi::invoiceGetCommunicationsendersV1(const qint32 &pki_invoice_id) {
    QString fullPath = QString(_serverConfigs["invoiceGetCommunicationsendersV1"][_serverIndices.value("invoiceGetCommunicationsendersV1")].URL()+"/1/object/invoice/{pkiInvoiceID}/getCommunicationsenders");
    
    if (_apiKeys.contains("Authorization")) {
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_invoice_idPathParam("{");
        pki_invoice_idPathParam.append("pkiInvoiceID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if (pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiInvoiceID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiInvoiceID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_invoice_idPathParam, paramString+QUrl::toPercentEncoding(::Ezmaxapi::toStringValue(pki_invoice_id)));
    }
    HttpRequestWorker *worker = new HttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    HttpRequestInput input(fullPath, "GET");


    for (auto keyValueIt = _defaultHeaders.keyValueBegin(); keyValueIt != _defaultHeaders.keyValueEnd(); keyValueIt++) {
        input.headers.insert(keyValueIt->first, keyValueIt->second);
    }


    connect(worker, &HttpRequestWorker::on_execution_finished, this, &ObjectInvoiceApi::invoiceGetCommunicationsendersV1Callback);
    connect(this, &ObjectInvoiceApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, this, [this] {
        if (findChildren<HttpRequestWorker*>().count() == 0) {
            Q_EMIT allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void ObjectInvoiceApi::invoiceGetCommunicationsendersV1Callback(HttpRequestWorker *worker) {
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type != QNetworkReply::NoError) {
        error_str = QString("%1, %2").arg(worker->error_str, QString(worker->response));
    }
    Invoice_getCommunicationsenders_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        Q_EMIT invoiceGetCommunicationsendersV1Signal(output);
        Q_EMIT invoiceGetCommunicationsendersV1SignalFull(worker, output);
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

        Q_EMIT invoiceGetCommunicationsendersV1SignalE(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationsendersV1SignalEFull(worker, error_type, error_str);

#if defined(_MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

        Q_EMIT invoiceGetCommunicationsendersV1SignalError(output, error_type, error_str);
        Q_EMIT invoiceGetCommunicationsendersV1SignalErrorFull(worker, error_type, error_str);
    }
}

void ObjectInvoiceApi::tokenAvailable(){

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
