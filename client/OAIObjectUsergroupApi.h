/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIObjectUsergroupApi_H
#define OAI_OAIObjectUsergroupApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAIHeader_Accept_Language.h"
#include "OAIHttpFileElement.h"
#include "OAIUsergroup_createObject_v1_Request.h"
#include "OAIUsergroup_createObject_v1_Response.h"
#include "OAIUsergroup_editObject_v1_Request.h"
#include "OAIUsergroup_editObject_v1_Response.h"
#include "OAIUsergroup_editPermissions_v1_Request.h"
#include "OAIUsergroup_editPermissions_v1_Response.h"
#include "OAIUsergroup_editUsergroupdelegations_v1_Request.h"
#include "OAIUsergroup_editUsergroupdelegations_v1_Response.h"
#include "OAIUsergroup_editUsergroupmemberships_v1_Request.h"
#include "OAIUsergroup_editUsergroupmemberships_v1_Response.h"
#include "OAIUsergroup_getAutocomplete_v2_Response.h"
#include "OAIUsergroup_getList_v1_Response.h"
#include "OAIUsergroup_getObject_v2_Response.h"
#include "OAIUsergroup_getPermissions_v1_Response.h"
#include "OAIUsergroup_getUsergroupdelegations_v1_Response.h"
#include "OAIUsergroup_getUsergroupmemberships_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectUsergroupApi : public QObject {
    Q_OBJECT

public:
    OAIObjectUsergroupApi(const int timeOut = 0);
    ~OAIObjectUsergroupApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  oai_usergroup_create_object_v1_request OAIUsergroup_createObject_v1_Request [required]
    */
    void usergroupCreateObjectV1(const OAIUsergroup_createObject_v1_Request &oai_usergroup_create_object_v1_request);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    * @param[in]  oai_usergroup_edit_object_v1_request OAIUsergroup_editObject_v1_Request [required]
    */
    void usergroupEditObjectV1(const qint32 &pki_usergroup_id, const OAIUsergroup_editObject_v1_Request &oai_usergroup_edit_object_v1_request);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    * @param[in]  oai_usergroup_edit_permissions_v1_request OAIUsergroup_editPermissions_v1_Request [required]
    */
    void usergroupEditPermissionsV1(const qint32 &pki_usergroup_id, const OAIUsergroup_editPermissions_v1_Request &oai_usergroup_edit_permissions_v1_request);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    * @param[in]  oai_usergroup_edit_usergroupdelegations_v1_request OAIUsergroup_editUsergroupdelegations_v1_Request [required]
    */
    void usergroupEditUsergroupdelegationsV1(const qint32 &pki_usergroup_id, const OAIUsergroup_editUsergroupdelegations_v1_Request &oai_usergroup_edit_usergroupdelegations_v1_request);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    * @param[in]  oai_usergroup_edit_usergroupmemberships_v1_request OAIUsergroup_editUsergroupmemberships_v1_Request [required]
    */
    void usergroupEditUsergroupmembershipsV1(const qint32 &pki_usergroup_id, const OAIUsergroup_editUsergroupmemberships_v1_Request &oai_usergroup_edit_usergroupmemberships_v1_request);

    /**
    * @param[in]  s_selector QString [required]
    * @param[in]  e_filter_active QString [optional]
    * @param[in]  s_query QString [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    */
    void usergroupGetAutocompleteV2(const QString &s_selector, const ::OpenAPI::OptionalParam<QString> &e_filter_active = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<QString> &s_query = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>());

    /**
    * @param[in]  e_order_by QString [optional]
    * @param[in]  i_row_max qint32 [optional]
    * @param[in]  i_row_offset qint32 [optional]
    * @param[in]  accept_language OAIHeader_Accept_Language [optional]
    * @param[in]  s_filter QString [optional]
    */
    void usergroupGetListV1(const ::OpenAPI::OptionalParam<QString> &e_order_by = ::OpenAPI::OptionalParam<QString>(), const ::OpenAPI::OptionalParam<qint32> &i_row_max = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<qint32> &i_row_offset = ::OpenAPI::OptionalParam<qint32>(), const ::OpenAPI::OptionalParam<OAIHeader_Accept_Language> &accept_language = ::OpenAPI::OptionalParam<OAIHeader_Accept_Language>(), const ::OpenAPI::OptionalParam<QString> &s_filter = ::OpenAPI::OptionalParam<QString>());

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    */
    void usergroupGetObjectV2(const qint32 &pki_usergroup_id);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    */
    void usergroupGetPermissionsV1(const qint32 &pki_usergroup_id);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    */
    void usergroupGetUsergroupdelegationsV1(const qint32 &pki_usergroup_id);

    /**
    * @param[in]  pki_usergroup_id qint32 [required]
    */
    void usergroupGetUsergroupmembershipsV1(const qint32 &pki_usergroup_id);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void usergroupCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void usergroupEditObjectV1Callback(OAIHttpRequestWorker *worker);
    void usergroupEditPermissionsV1Callback(OAIHttpRequestWorker *worker);
    void usergroupEditUsergroupdelegationsV1Callback(OAIHttpRequestWorker *worker);
    void usergroupEditUsergroupmembershipsV1Callback(OAIHttpRequestWorker *worker);
    void usergroupGetAutocompleteV2Callback(OAIHttpRequestWorker *worker);
    void usergroupGetListV1Callback(OAIHttpRequestWorker *worker);
    void usergroupGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void usergroupGetPermissionsV1Callback(OAIHttpRequestWorker *worker);
    void usergroupGetUsergroupdelegationsV1Callback(OAIHttpRequestWorker *worker);
    void usergroupGetUsergroupmembershipsV1Callback(OAIHttpRequestWorker *worker);

signals:

    void usergroupCreateObjectV1Signal(OAIUsergroup_createObject_v1_Response summary);
    void usergroupEditObjectV1Signal(OAIUsergroup_editObject_v1_Response summary);
    void usergroupEditPermissionsV1Signal(OAIUsergroup_editPermissions_v1_Response summary);
    void usergroupEditUsergroupdelegationsV1Signal(OAIUsergroup_editUsergroupdelegations_v1_Response summary);
    void usergroupEditUsergroupmembershipsV1Signal(OAIUsergroup_editUsergroupmemberships_v1_Response summary);
    void usergroupGetAutocompleteV2Signal(OAIUsergroup_getAutocomplete_v2_Response summary);
    void usergroupGetListV1Signal(OAIUsergroup_getList_v1_Response summary);
    void usergroupGetObjectV2Signal(OAIUsergroup_getObject_v2_Response summary);
    void usergroupGetPermissionsV1Signal(OAIUsergroup_getPermissions_v1_Response summary);
    void usergroupGetUsergroupdelegationsV1Signal(OAIUsergroup_getUsergroupdelegations_v1_Response summary);
    void usergroupGetUsergroupmembershipsV1Signal(OAIUsergroup_getUsergroupmemberships_v1_Response summary);

    void usergroupCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_createObject_v1_Response summary);
    void usergroupEditObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_editObject_v1_Response summary);
    void usergroupEditPermissionsV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_editPermissions_v1_Response summary);
    void usergroupEditUsergroupdelegationsV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_editUsergroupdelegations_v1_Response summary);
    void usergroupEditUsergroupmembershipsV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_editUsergroupmemberships_v1_Response summary);
    void usergroupGetAutocompleteV2SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_getAutocomplete_v2_Response summary);
    void usergroupGetListV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_getList_v1_Response summary);
    void usergroupGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_getObject_v2_Response summary);
    void usergroupGetPermissionsV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_getPermissions_v1_Response summary);
    void usergroupGetUsergroupdelegationsV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_getUsergroupdelegations_v1_Response summary);
    void usergroupGetUsergroupmembershipsV1SignalFull(OAIHttpRequestWorker *worker, OAIUsergroup_getUsergroupmemberships_v1_Response summary);

    void usergroupCreateObjectV1SignalE(OAIUsergroup_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditObjectV1SignalE(OAIUsergroup_editObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditPermissionsV1SignalE(OAIUsergroup_editPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditUsergroupdelegationsV1SignalE(OAIUsergroup_editUsergroupdelegations_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditUsergroupmembershipsV1SignalE(OAIUsergroup_editUsergroupmemberships_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetAutocompleteV2SignalE(OAIUsergroup_getAutocomplete_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetListV1SignalE(OAIUsergroup_getList_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetObjectV2SignalE(OAIUsergroup_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetPermissionsV1SignalE(OAIUsergroup_getPermissions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetUsergroupdelegationsV1SignalE(OAIUsergroup_getUsergroupdelegations_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetUsergroupmembershipsV1SignalE(OAIUsergroup_getUsergroupmemberships_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void usergroupCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditPermissionsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditUsergroupdelegationsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupEditUsergroupmembershipsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetAutocompleteV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetListV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetPermissionsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetUsergroupdelegationsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void usergroupGetUsergroupmembershipsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
