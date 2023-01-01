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

#ifndef OAI_OAIObjectEzsigndocumentApi_H
#define OAI_OAIObjectEzsigndocumentApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAICommon_Response_Error.h"
#include "OAICommon_Response_Error_sTemporaryFileUrl.h"
#include "OAIEzsigndocument_applyEzsigntemplate_v1_Request.h"
#include "OAIEzsigndocument_applyEzsigntemplate_v1_Response.h"
#include "OAIEzsigndocument_applyEzsigntemplate_v2_Request.h"
#include "OAIEzsigndocument_applyEzsigntemplate_v2_Response.h"
#include "OAIEzsigndocument_createObject_v1_Request.h"
#include "OAIEzsigndocument_createObject_v1_Response.h"
#include "OAIEzsigndocument_createObject_v2_Request.h"
#include "OAIEzsigndocument_createObject_v2_Response.h"
#include "OAIEzsigndocument_deleteObject_v1_Response.h"
#include "OAIEzsigndocument_editEzsignformfieldgroups_v1_Request.h"
#include "OAIEzsigndocument_editEzsignformfieldgroups_v1_Response.h"
#include "OAIEzsigndocument_editEzsignsignatures_v1_Request.h"
#include "OAIEzsigndocument_editEzsignsignatures_v1_Response.h"
#include "OAIEzsigndocument_endPrematurely_v1_Response.h"
#include "OAIEzsigndocument_getActionableElements_v1_Response.h"
#include "OAIEzsigndocument_getDownloadUrl_v1_Response.h"
#include "OAIEzsigndocument_getEzsignformfieldgroups_v1_Response.h"
#include "OAIEzsigndocument_getEzsignpages_v1_Response.h"
#include "OAIEzsigndocument_getEzsignsignatures_v1_Response.h"
#include "OAIEzsigndocument_getFormData_v1_Response.h"
#include "OAIEzsigndocument_getObject_v1_Response.h"
#include "OAIEzsigndocument_getObject_v2_Response.h"
#include "OAIEzsigndocument_getTemporaryProof_v1_Response.h"
#include "OAIEzsigndocument_getWordsPositions_v1_Request.h"
#include "OAIEzsigndocument_getWordsPositions_v1_Response.h"
#include "OAIEzsigndocument_patchObject_v1_Request.h"
#include "OAIEzsigndocument_patchObject_v1_Response.h"
#include "OAIEzsigndocument_unsend_v1_Response.h"
#include "OAIHttpFileElement.h"
#include "OAIObject.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigndocumentApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigndocumentApi(const int timeOut = 0);
    ~OAIObjectEzsigndocumentApi();

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
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_apply_ezsigntemplate_v1_request OAIEzsigndocument_applyEzsigntemplate_v1_Request [required]
    */
    Q_DECL_DEPRECATED void ezsigndocumentApplyEzsigntemplateV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_applyEzsigntemplate_v1_Request &oai_ezsigndocument_apply_ezsigntemplate_v1_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_apply_ezsigntemplate_v2_request OAIEzsigndocument_applyEzsigntemplate_v2_Request [required]
    */
    void ezsigndocumentApplyEzsigntemplateV2(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_applyEzsigntemplate_v2_Request &oai_ezsigndocument_apply_ezsigntemplate_v2_request);

    /**
    * @param[in]  oai_ezsigndocument_create_object_v1_request QList<OAIEzsigndocument_createObject_v1_Request> [required]
    */
    Q_DECL_DEPRECATED void ezsigndocumentCreateObjectV1(const QList<OAIEzsigndocument_createObject_v1_Request> &oai_ezsigndocument_create_object_v1_request);

    /**
    * @param[in]  oai_ezsigndocument_create_object_v2_request OAIEzsigndocument_createObject_v2_Request [required]
    */
    void ezsigndocumentCreateObjectV2(const OAIEzsigndocument_createObject_v2_Request &oai_ezsigndocument_create_object_v2_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentDeleteObjectV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_edit_ezsignformfieldgroups_v1_request OAIEzsigndocument_editEzsignformfieldgroups_v1_Request [required]
    */
    void ezsigndocumentEditEzsignformfieldgroupsV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_editEzsignformfieldgroups_v1_Request &oai_ezsigndocument_edit_ezsignformfieldgroups_v1_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_edit_ezsignsignatures_v1_request OAIEzsigndocument_editEzsignsignatures_v1_Request [required]
    */
    void ezsigndocumentEditEzsignsignaturesV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_editEzsignsignatures_v1_Request &oai_ezsigndocument_edit_ezsignsignatures_v1_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsigndocumentEndPrematurelyV1(const qint32 &pki_ezsigndocument_id, const OAIObject &body);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetActionableElementsV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  e_document_type QString [required]
    */
    void ezsigndocumentGetDownloadUrlV1(const qint32 &pki_ezsigndocument_id, const QString &e_document_type);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetEzsignformfieldgroupsV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetEzsignpagesV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetEzsignsignaturesV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetFormDataV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    Q_DECL_DEPRECATED void ezsigndocumentGetObjectV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetObjectV2(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetTemporaryProofV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_get_words_positions_v1_request OAIEzsigndocument_getWordsPositions_v1_Request [required]
    */
    void ezsigndocumentGetWordsPositionsV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_getWordsPositions_v1_Request &oai_ezsigndocument_get_words_positions_v1_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_patch_object_v1_request OAIEzsigndocument_patchObject_v1_Request [required]
    */
    void ezsigndocumentPatchObjectV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_patchObject_v1_Request &oai_ezsigndocument_patch_object_v1_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  body OAIObject [required]
    */
    void ezsigndocumentUnsendV1(const qint32 &pki_ezsigndocument_id, const OAIObject &body);


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

    void ezsigndocumentApplyEzsigntemplateV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentApplyEzsigntemplateV2Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentCreateObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentEditEzsignformfieldgroupsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentEditEzsignsignaturesV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentEndPrematurelyV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetActionableElementsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetDownloadUrlV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetEzsignformfieldgroupsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetEzsignpagesV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetEzsignsignaturesV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetFormDataV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetObjectV2Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetTemporaryProofV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetWordsPositionsV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentPatchObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentUnsendV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigndocumentApplyEzsigntemplateV1Signal(OAIEzsigndocument_applyEzsigntemplate_v1_Response summary);
    void ezsigndocumentApplyEzsigntemplateV2Signal(OAIEzsigndocument_applyEzsigntemplate_v2_Response summary);
    void ezsigndocumentCreateObjectV1Signal(OAIEzsigndocument_createObject_v1_Response summary);
    void ezsigndocumentCreateObjectV2Signal(OAIEzsigndocument_createObject_v2_Response summary);
    void ezsigndocumentDeleteObjectV1Signal(OAIEzsigndocument_deleteObject_v1_Response summary);
    void ezsigndocumentEditEzsignformfieldgroupsV1Signal(OAIEzsigndocument_editEzsignformfieldgroups_v1_Response summary);
    void ezsigndocumentEditEzsignsignaturesV1Signal(OAIEzsigndocument_editEzsignsignatures_v1_Response summary);
    void ezsigndocumentEndPrematurelyV1Signal(OAIEzsigndocument_endPrematurely_v1_Response summary);
    void ezsigndocumentGetActionableElementsV1Signal(OAIEzsigndocument_getActionableElements_v1_Response summary);
    void ezsigndocumentGetDownloadUrlV1Signal(OAIEzsigndocument_getDownloadUrl_v1_Response summary);
    void ezsigndocumentGetEzsignformfieldgroupsV1Signal(OAIEzsigndocument_getEzsignformfieldgroups_v1_Response summary);
    void ezsigndocumentGetEzsignpagesV1Signal(OAIEzsigndocument_getEzsignpages_v1_Response summary);
    void ezsigndocumentGetEzsignsignaturesV1Signal(OAIEzsigndocument_getEzsignsignatures_v1_Response summary);
    void ezsigndocumentGetFormDataV1Signal(OAIEzsigndocument_getFormData_v1_Response summary);
    void ezsigndocumentGetObjectV1Signal(OAIEzsigndocument_getObject_v1_Response summary);
    void ezsigndocumentGetObjectV2Signal(OAIEzsigndocument_getObject_v2_Response summary);
    void ezsigndocumentGetTemporaryProofV1Signal(OAIEzsigndocument_getTemporaryProof_v1_Response summary);
    void ezsigndocumentGetWordsPositionsV1Signal(OAIEzsigndocument_getWordsPositions_v1_Response summary);
    void ezsigndocumentPatchObjectV1Signal(OAIEzsigndocument_patchObject_v1_Response summary);
    void ezsigndocumentUnsendV1Signal(OAIEzsigndocument_unsend_v1_Response summary);

    void ezsigndocumentApplyEzsigntemplateV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_applyEzsigntemplate_v1_Response summary);
    void ezsigndocumentApplyEzsigntemplateV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_applyEzsigntemplate_v2_Response summary);
    void ezsigndocumentCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_createObject_v1_Response summary);
    void ezsigndocumentCreateObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_createObject_v2_Response summary);
    void ezsigndocumentDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_deleteObject_v1_Response summary);
    void ezsigndocumentEditEzsignformfieldgroupsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_editEzsignformfieldgroups_v1_Response summary);
    void ezsigndocumentEditEzsignsignaturesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_editEzsignsignatures_v1_Response summary);
    void ezsigndocumentEndPrematurelyV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_endPrematurely_v1_Response summary);
    void ezsigndocumentGetActionableElementsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getActionableElements_v1_Response summary);
    void ezsigndocumentGetDownloadUrlV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getDownloadUrl_v1_Response summary);
    void ezsigndocumentGetEzsignformfieldgroupsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getEzsignformfieldgroups_v1_Response summary);
    void ezsigndocumentGetEzsignpagesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getEzsignpages_v1_Response summary);
    void ezsigndocumentGetEzsignsignaturesV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getEzsignsignatures_v1_Response summary);
    void ezsigndocumentGetFormDataV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getFormData_v1_Response summary);
    void ezsigndocumentGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getObject_v1_Response summary);
    void ezsigndocumentGetObjectV2SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getObject_v2_Response summary);
    void ezsigndocumentGetTemporaryProofV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getTemporaryProof_v1_Response summary);
    void ezsigndocumentGetWordsPositionsV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getWordsPositions_v1_Response summary);
    void ezsigndocumentPatchObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_patchObject_v1_Response summary);
    void ezsigndocumentUnsendV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_unsend_v1_Response summary);

    void ezsigndocumentApplyEzsigntemplateV1SignalE(OAIEzsigndocument_applyEzsigntemplate_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentApplyEzsigntemplateV2SignalE(OAIEzsigndocument_applyEzsigntemplate_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentCreateObjectV1SignalE(OAIEzsigndocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentCreateObjectV2SignalE(OAIEzsigndocument_createObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentDeleteObjectV1SignalE(OAIEzsigndocument_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentEditEzsignformfieldgroupsV1SignalE(OAIEzsigndocument_editEzsignformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentEditEzsignsignaturesV1SignalE(OAIEzsigndocument_editEzsignsignatures_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentEndPrematurelyV1SignalE(OAIEzsigndocument_endPrematurely_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetActionableElementsV1SignalE(OAIEzsigndocument_getActionableElements_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetDownloadUrlV1SignalE(OAIEzsigndocument_getDownloadUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetEzsignformfieldgroupsV1SignalE(OAIEzsigndocument_getEzsignformfieldgroups_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetEzsignpagesV1SignalE(OAIEzsigndocument_getEzsignpages_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetEzsignsignaturesV1SignalE(OAIEzsigndocument_getEzsignsignatures_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetFormDataV1SignalE(OAIEzsigndocument_getFormData_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetObjectV1SignalE(OAIEzsigndocument_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetObjectV2SignalE(OAIEzsigndocument_getObject_v2_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetTemporaryProofV1SignalE(OAIEzsigndocument_getTemporaryProof_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetWordsPositionsV1SignalE(OAIEzsigndocument_getWordsPositions_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentPatchObjectV1SignalE(OAIEzsigndocument_patchObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentUnsendV1SignalE(OAIEzsigndocument_unsend_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigndocumentApplyEzsigntemplateV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentApplyEzsigntemplateV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentCreateObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentEditEzsignformfieldgroupsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentEditEzsignsignaturesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentEndPrematurelyV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetActionableElementsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetDownloadUrlV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetEzsignformfieldgroupsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetEzsignpagesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetEzsignsignaturesV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetFormDataV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetObjectV2SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetTemporaryProofV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetWordsPositionsV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentPatchObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentUnsendV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public slots:
    void tokenAvailable();
    
};

} // namespace OpenAPI
#endif
