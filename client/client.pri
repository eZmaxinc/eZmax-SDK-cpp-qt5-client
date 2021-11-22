QT += network

HEADERS += \
# Models
    $${PWD}/OAIActivesession_getCurrent_v1_Response.h \
    $${PWD}/OAIActivesession_getCurrent_v1_Response_allOf.h \
    $${PWD}/OAIActivesession_getCurrent_v1_Response_mPayload.h \
    $${PWD}/OAIAddress_Request.h \
    $${PWD}/OAIApikey_Request.h \
    $${PWD}/OAIApikey_RequestCompound.h \
    $${PWD}/OAIApikey_Response.h \
    $${PWD}/OAIApikey_createObject_v1_Request.h \
    $${PWD}/OAIApikey_createObject_v1_Response.h \
    $${PWD}/OAIApikey_createObject_v1_Response_allOf.h \
    $${PWD}/OAIApikey_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIAttempt_Response.h \
    $${PWD}/OAIAuthenticate_authenticate_v2_Request.h \
    $${PWD}/OAIAuthenticate_authenticate_v2_Response.h \
    $${PWD}/OAIAuthenticate_authenticate_v2_Response_allOf.h \
    $${PWD}/OAIAuthenticate_authenticate_v2_Response_mPayload.h \
    $${PWD}/OAICommon_Audit.h \
    $${PWD}/OAICommon_Response.h \
    $${PWD}/OAICommon_Response_Error.h \
    $${PWD}/OAICommon_Response_Error_sTemporaryFileUrl.h \
    $${PWD}/OAICommon_Response_Error_sTemporaryFileUrl_allOf.h \
    $${PWD}/OAICommon_Response_Filter.h \
    $${PWD}/OAICommon_Response_getList.h \
    $${PWD}/OAICommon_Response_objDebug.h \
    $${PWD}/OAICommon_Response_objDebugPayload.h \
    $${PWD}/OAICommon_Response_objDebugPayload_getList.h \
    $${PWD}/OAICommon_Response_objDebugPayload_getList_allOf.h \
    $${PWD}/OAICommon_Response_objSQLQuery.h \
    $${PWD}/OAICommon_Webhook.h \
    $${PWD}/OAICommon_getAutocomplete_v1_Response.h \
    $${PWD}/OAICommon_getAutocomplete_v1_Response_allOf.h \
    $${PWD}/OAICommon_getList_v1_Response_mPayload.h \
    $${PWD}/OAIContact_Request.h \
    $${PWD}/OAIContact_RequestCompound.h \
    $${PWD}/OAIContact_RequestCompound_allOf.h \
    $${PWD}/OAIContactinformations_Request.h \
    $${PWD}/OAIContactinformations_RequestCompound.h \
    $${PWD}/OAIContactinformations_RequestCompound_allOf.h \
    $${PWD}/OAICustom_AutocompleteElement_Response.h \
    $${PWD}/OAICustom_FormDataDocument_Response.h \
    $${PWD}/OAICustom_FormDataSigner_Response.h \
    $${PWD}/OAICustom_FormsDataFolder_Response.h \
    $${PWD}/OAICustom_WordPositionOccurence_Response.h \
    $${PWD}/OAICustom_WordPositionWord_Response.h \
    $${PWD}/OAIEmail_Request.h \
    $${PWD}/OAIEzsignbulksend_ListElement.h \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response.h \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response_allOf.h \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response_mPayload_allOf.h \
    $${PWD}/OAIEzsigndocument_Request.h \
    $${PWD}/OAIEzsigndocument_RequestCompound.h \
    $${PWD}/OAIEzsigndocument_Response.h \
    $${PWD}/OAIEzsigndocument_ResponseCompound.h \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Request.h \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Response.h \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v2_Request.h \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v2_Response.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Request.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response_allOf.h \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_getEzsignpages_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getEzsignpages_v1_Response_allOf.h \
    $${PWD}/OAIEzsigndocument_getEzsignpages_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_getFormData_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getFormData_v1_Response_allOf.h \
    $${PWD}/OAIEzsigndocument_getFormData_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_getWordsPositions_v1_Request.h \
    $${PWD}/OAIEzsigndocument_getWordsPositions_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getWordsPositions_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfolder_ListElement.h \
    $${PWD}/OAIEzsignfolder_Request.h \
    $${PWD}/OAIEzsignfolder_RequestCompound.h \
    $${PWD}/OAIEzsignfolder_RequestCompound_allOf.h \
    $${PWD}/OAIEzsignfolder_Response.h \
    $${PWD}/OAIEzsignfolder_ResponseCompound.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Request.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_getFormsData_v1_Response.h \
    $${PWD}/OAIEzsignfolder_getFormsData_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfolder_getFormsData_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_getList_v1_Response.h \
    $${PWD}/OAIEzsignfolder_getList_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfolder_getList_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_getList_v1_Response_mPayload_allOf.h \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_send_v1_Request.h \
    $${PWD}/OAIEzsignfolder_send_v1_Response.h \
    $${PWD}/OAIEzsignfolder_unsend_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_Request.h \
    $${PWD}/OAIEzsignfoldersignerassociation_RequestCompound.h \
    $${PWD}/OAIEzsignfoldersignerassociation_RequestCompound_allOf.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Request.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfoldersignerassociation_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getObject_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfoldertype_ListElement.h \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response.h \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response_allOf.h \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf.h \
    $${PWD}/OAIEzsignformfield_Response.h \
    $${PWD}/OAIEzsignformfield_ResponseCompound.h \
    $${PWD}/OAIEzsignformfieldgroup_Response.h \
    $${PWD}/OAIEzsignformfieldgroup_ResponseCompound.h \
    $${PWD}/OAIEzsignformfieldgroup_ResponseCompound_allOf.h \
    $${PWD}/OAIEzsignpage_Response.h \
    $${PWD}/OAIEzsignsignature_Request.h \
    $${PWD}/OAIEzsignsignature_RequestCompound.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Request.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignsignature_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_getObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_getObject_v1_Response_allOf.h \
    $${PWD}/OAIEzsignsigner_Request.h \
    $${PWD}/OAIEzsignsigner_RequestCompound.h \
    $${PWD}/OAIEzsignsigner_RequestCompound_Contact.h \
    $${PWD}/OAIEzsignsigner_RequestCompound_allOf.h \
    $${PWD}/OAIField_eEzsigndocumentStep.h \
    $${PWD}/OAIField_eEzsignfolderSendreminderfrequency.h \
    $${PWD}/OAIField_eEzsignfolderStep.h \
    $${PWD}/OAIField_eEzsignfoldertypePrivacylevel.h \
    $${PWD}/OAIField_eEzsignsignatureType.h \
    $${PWD}/OAIField_ePhoneType.h \
    $${PWD}/OAIField_eUserType.h \
    $${PWD}/OAIField_eUserTypeSSPR.h \
    $${PWD}/OAIFranchisereferalincome_Request.h \
    $${PWD}/OAIFranchisereferalincome_RequestCompound.h \
    $${PWD}/OAIFranchisereferalincome_RequestCompound_allOf.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Request.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response_allOf.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIGlobal_customer_getEndpoint_v1_Response.h \
    $${PWD}/OAIHeader_Accept_Language.h \
    $${PWD}/OAIList_getListpresentation_v1_Response.h \
    $${PWD}/OAIList_getListpresentation_v1_Response_allOf.h \
    $${PWD}/OAIList_getListpresentation_v1_Response_mPayload.h \
    $${PWD}/OAIList_saveListpresentation_v1_Request.h \
    $${PWD}/OAIList_saveListpresentation_v1_Response.h \
    $${PWD}/OAIListpresentation_Request.h \
    $${PWD}/OAIMultilingual_ApikeyDescription.h \
    $${PWD}/OAIPhone_Request.h \
    $${PWD}/OAISspr_resetPasswordRequest_v1_Request.h \
    $${PWD}/OAISspr_resetPassword_v1_Request.h \
    $${PWD}/OAISspr_sendUsernames_v1_Request.h \
    $${PWD}/OAISspr_unlockAccountRequest_v1_Request.h \
    $${PWD}/OAISspr_unlockAccount_v1_Request.h \
    $${PWD}/OAISspr_validateToken_v1_Request.h \
    $${PWD}/OAIUNUSED_ezsigndocument_editObject_v1_Request.h \
    $${PWD}/OAIUNUSED_ezsigndocument_editObject_v1_Response.h \
    $${PWD}/OAIUNUSED_ezsignfolder_editObject_v1_Request.h \
    $${PWD}/OAIUNUSED_ezsignfolder_editObject_v1_Response.h \
    $${PWD}/OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request.h \
    $${PWD}/OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Response.h \
    $${PWD}/OAIUNUSED_ezsignsignature_editObject_v1_Request.h \
    $${PWD}/OAIUNUSED_ezsignsignature_editObject_v1_Response.h \
    $${PWD}/OAIUser_Response.h \
    $${PWD}/OAIUser_createEzsignuser_v1_Request.h \
    $${PWD}/OAIUser_createEzsignuser_v1_Response.h \
    $${PWD}/OAIUser_createEzsignuser_v1_Response_allOf.h \
    $${PWD}/OAIUser_createEzsignuser_v1_Response_mPayload.h \
    $${PWD}/OAIWebhook_Ezsign_DocumentCompleted.h \
    $${PWD}/OAIWebhook_Ezsign_DocumentCompleted_allOf.h \
    $${PWD}/OAIWebhook_Ezsign_FolderCompleted.h \
    $${PWD}/OAIWebhook_Ezsign_FolderCompleted_allOf.h \
    $${PWD}/OAIWebhook_Response.h \
    $${PWD}/OAIWebhook_User_UserCreated.h \
    $${PWD}/OAIWebhook_User_UserCreated_allOf.h \
    $${PWD}/OAIWebsite_Request.h \
# APIs
    $${PWD}/OAIGlobalCustomerApi.h \
    $${PWD}/OAIModuleAuthenticateApi.h \
    $${PWD}/OAIModuleListApi.h \
    $${PWD}/OAIModuleSsprApi.h \
    $${PWD}/OAIModuleUserApi.h \
    $${PWD}/OAIObjectActivesessionApi.h \
    $${PWD}/OAIObjectApikeyApi.h \
    $${PWD}/OAIObjectEzsignbulksendApi.h \
    $${PWD}/OAIObjectEzsigndocumentApi.h \
    $${PWD}/OAIObjectEzsignfolderApi.h \
    $${PWD}/OAIObjectEzsignfoldersignerassociationApi.h \
    $${PWD}/OAIObjectEzsignfoldertypeApi.h \
    $${PWD}/OAIObjectEzsignsignatureApi.h \
    $${PWD}/OAIObjectFranchisebrokerApi.h \
    $${PWD}/OAIObjectFranchiseofficeApi.h \
    $${PWD}/OAIObjectFranchisereferalincomeApi.h \
    $${PWD}/OAIObjectPeriodApi.h \
# Others
    $${PWD}/OAIHelpers.h \
    $${PWD}/OAIHttpRequest.h \
    $${PWD}/OAIObject.h \
    $${PWD}/OAIEnum.h \
    $${PWD}/OAIHttpFileElement.h \
    $${PWD}/OAIServerConfiguration.h \
    $${PWD}/OAIServerVariable.h \
    $${PWD}/OAIOauth.h

SOURCES += \
# Models
    $${PWD}/OAIActivesession_getCurrent_v1_Response.cpp \
    $${PWD}/OAIActivesession_getCurrent_v1_Response_allOf.cpp \
    $${PWD}/OAIActivesession_getCurrent_v1_Response_mPayload.cpp \
    $${PWD}/OAIAddress_Request.cpp \
    $${PWD}/OAIApikey_Request.cpp \
    $${PWD}/OAIApikey_RequestCompound.cpp \
    $${PWD}/OAIApikey_Response.cpp \
    $${PWD}/OAIApikey_createObject_v1_Request.cpp \
    $${PWD}/OAIApikey_createObject_v1_Response.cpp \
    $${PWD}/OAIApikey_createObject_v1_Response_allOf.cpp \
    $${PWD}/OAIApikey_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIAttempt_Response.cpp \
    $${PWD}/OAIAuthenticate_authenticate_v2_Request.cpp \
    $${PWD}/OAIAuthenticate_authenticate_v2_Response.cpp \
    $${PWD}/OAIAuthenticate_authenticate_v2_Response_allOf.cpp \
    $${PWD}/OAIAuthenticate_authenticate_v2_Response_mPayload.cpp \
    $${PWD}/OAICommon_Audit.cpp \
    $${PWD}/OAICommon_Response.cpp \
    $${PWD}/OAICommon_Response_Error.cpp \
    $${PWD}/OAICommon_Response_Error_sTemporaryFileUrl.cpp \
    $${PWD}/OAICommon_Response_Error_sTemporaryFileUrl_allOf.cpp \
    $${PWD}/OAICommon_Response_Filter.cpp \
    $${PWD}/OAICommon_Response_getList.cpp \
    $${PWD}/OAICommon_Response_objDebug.cpp \
    $${PWD}/OAICommon_Response_objDebugPayload.cpp \
    $${PWD}/OAICommon_Response_objDebugPayload_getList.cpp \
    $${PWD}/OAICommon_Response_objDebugPayload_getList_allOf.cpp \
    $${PWD}/OAICommon_Response_objSQLQuery.cpp \
    $${PWD}/OAICommon_Webhook.cpp \
    $${PWD}/OAICommon_getAutocomplete_v1_Response.cpp \
    $${PWD}/OAICommon_getAutocomplete_v1_Response_allOf.cpp \
    $${PWD}/OAICommon_getList_v1_Response_mPayload.cpp \
    $${PWD}/OAIContact_Request.cpp \
    $${PWD}/OAIContact_RequestCompound.cpp \
    $${PWD}/OAIContact_RequestCompound_allOf.cpp \
    $${PWD}/OAIContactinformations_Request.cpp \
    $${PWD}/OAIContactinformations_RequestCompound.cpp \
    $${PWD}/OAIContactinformations_RequestCompound_allOf.cpp \
    $${PWD}/OAICustom_AutocompleteElement_Response.cpp \
    $${PWD}/OAICustom_FormDataDocument_Response.cpp \
    $${PWD}/OAICustom_FormDataSigner_Response.cpp \
    $${PWD}/OAICustom_FormsDataFolder_Response.cpp \
    $${PWD}/OAICustom_WordPositionOccurence_Response.cpp \
    $${PWD}/OAICustom_WordPositionWord_Response.cpp \
    $${PWD}/OAIEmail_Request.cpp \
    $${PWD}/OAIEzsignbulksend_ListElement.cpp \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response.cpp \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignbulksend_getList_v1_Response_mPayload_allOf.cpp \
    $${PWD}/OAIEzsigndocument_Request.cpp \
    $${PWD}/OAIEzsigndocument_RequestCompound.cpp \
    $${PWD}/OAIEzsigndocument_Response.cpp \
    $${PWD}/OAIEzsigndocument_ResponseCompound.cpp \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Request.cpp \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v2_Request.cpp \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v2_Response.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_getEzsignpages_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getEzsignpages_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsigndocument_getEzsignpages_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_getFormData_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getFormData_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsigndocument_getFormData_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_getWordsPositions_v1_Request.cpp \
    $${PWD}/OAIEzsigndocument_getWordsPositions_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getWordsPositions_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfolder_ListElement.cpp \
    $${PWD}/OAIEzsignfolder_Request.cpp \
    $${PWD}/OAIEzsignfolder_RequestCompound.cpp \
    $${PWD}/OAIEzsignfolder_RequestCompound_allOf.cpp \
    $${PWD}/OAIEzsignfolder_Response.cpp \
    $${PWD}/OAIEzsignfolder_ResponseCompound.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_getFormsData_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_getFormsData_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfolder_getFormsData_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_getList_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_getList_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfolder_getList_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_getList_v1_Response_mPayload_allOf.cpp \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_send_v1_Request.cpp \
    $${PWD}/OAIEzsignfolder_send_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_unsend_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_Request.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_RequestCompound.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_RequestCompound_allOf.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfoldertype_ListElement.cpp \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf.cpp \
    $${PWD}/OAIEzsignformfield_Response.cpp \
    $${PWD}/OAIEzsignformfield_ResponseCompound.cpp \
    $${PWD}/OAIEzsignformfieldgroup_Response.cpp \
    $${PWD}/OAIEzsignformfieldgroup_ResponseCompound.cpp \
    $${PWD}/OAIEzsignformfieldgroup_ResponseCompound_allOf.cpp \
    $${PWD}/OAIEzsignpage_Response.cpp \
    $${PWD}/OAIEzsignsignature_Request.cpp \
    $${PWD}/OAIEzsignsignature_RequestCompound.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignsignature_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_getObject_v1_Response_allOf.cpp \
    $${PWD}/OAIEzsignsigner_Request.cpp \
    $${PWD}/OAIEzsignsigner_RequestCompound.cpp \
    $${PWD}/OAIEzsignsigner_RequestCompound_Contact.cpp \
    $${PWD}/OAIEzsignsigner_RequestCompound_allOf.cpp \
    $${PWD}/OAIField_eEzsigndocumentStep.cpp \
    $${PWD}/OAIField_eEzsignfolderSendreminderfrequency.cpp \
    $${PWD}/OAIField_eEzsignfolderStep.cpp \
    $${PWD}/OAIField_eEzsignfoldertypePrivacylevel.cpp \
    $${PWD}/OAIField_eEzsignsignatureType.cpp \
    $${PWD}/OAIField_ePhoneType.cpp \
    $${PWD}/OAIField_eUserType.cpp \
    $${PWD}/OAIField_eUserTypeSSPR.cpp \
    $${PWD}/OAIFranchisereferalincome_Request.cpp \
    $${PWD}/OAIFranchisereferalincome_RequestCompound.cpp \
    $${PWD}/OAIFranchisereferalincome_RequestCompound_allOf.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Request.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response_allOf.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIGlobal_customer_getEndpoint_v1_Response.cpp \
    $${PWD}/OAIHeader_Accept_Language.cpp \
    $${PWD}/OAIList_getListpresentation_v1_Response.cpp \
    $${PWD}/OAIList_getListpresentation_v1_Response_allOf.cpp \
    $${PWD}/OAIList_getListpresentation_v1_Response_mPayload.cpp \
    $${PWD}/OAIList_saveListpresentation_v1_Request.cpp \
    $${PWD}/OAIList_saveListpresentation_v1_Response.cpp \
    $${PWD}/OAIListpresentation_Request.cpp \
    $${PWD}/OAIMultilingual_ApikeyDescription.cpp \
    $${PWD}/OAIPhone_Request.cpp \
    $${PWD}/OAISspr_resetPasswordRequest_v1_Request.cpp \
    $${PWD}/OAISspr_resetPassword_v1_Request.cpp \
    $${PWD}/OAISspr_sendUsernames_v1_Request.cpp \
    $${PWD}/OAISspr_unlockAccountRequest_v1_Request.cpp \
    $${PWD}/OAISspr_unlockAccount_v1_Request.cpp \
    $${PWD}/OAISspr_validateToken_v1_Request.cpp \
    $${PWD}/OAIUNUSED_ezsigndocument_editObject_v1_Request.cpp \
    $${PWD}/OAIUNUSED_ezsigndocument_editObject_v1_Response.cpp \
    $${PWD}/OAIUNUSED_ezsignfolder_editObject_v1_Request.cpp \
    $${PWD}/OAIUNUSED_ezsignfolder_editObject_v1_Response.cpp \
    $${PWD}/OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request.cpp \
    $${PWD}/OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Response.cpp \
    $${PWD}/OAIUNUSED_ezsignsignature_editObject_v1_Request.cpp \
    $${PWD}/OAIUNUSED_ezsignsignature_editObject_v1_Response.cpp \
    $${PWD}/OAIUser_Response.cpp \
    $${PWD}/OAIUser_createEzsignuser_v1_Request.cpp \
    $${PWD}/OAIUser_createEzsignuser_v1_Response.cpp \
    $${PWD}/OAIUser_createEzsignuser_v1_Response_allOf.cpp \
    $${PWD}/OAIUser_createEzsignuser_v1_Response_mPayload.cpp \
    $${PWD}/OAIWebhook_Ezsign_DocumentCompleted.cpp \
    $${PWD}/OAIWebhook_Ezsign_DocumentCompleted_allOf.cpp \
    $${PWD}/OAIWebhook_Ezsign_FolderCompleted.cpp \
    $${PWD}/OAIWebhook_Ezsign_FolderCompleted_allOf.cpp \
    $${PWD}/OAIWebhook_Response.cpp \
    $${PWD}/OAIWebhook_User_UserCreated.cpp \
    $${PWD}/OAIWebhook_User_UserCreated_allOf.cpp \
    $${PWD}/OAIWebsite_Request.cpp \
# APIs
    $${PWD}/OAIGlobalCustomerApi.cpp \
    $${PWD}/OAIModuleAuthenticateApi.cpp \
    $${PWD}/OAIModuleListApi.cpp \
    $${PWD}/OAIModuleSsprApi.cpp \
    $${PWD}/OAIModuleUserApi.cpp \
    $${PWD}/OAIObjectActivesessionApi.cpp \
    $${PWD}/OAIObjectApikeyApi.cpp \
    $${PWD}/OAIObjectEzsignbulksendApi.cpp \
    $${PWD}/OAIObjectEzsigndocumentApi.cpp \
    $${PWD}/OAIObjectEzsignfolderApi.cpp \
    $${PWD}/OAIObjectEzsignfoldersignerassociationApi.cpp \
    $${PWD}/OAIObjectEzsignfoldertypeApi.cpp \
    $${PWD}/OAIObjectEzsignsignatureApi.cpp \
    $${PWD}/OAIObjectFranchisebrokerApi.cpp \
    $${PWD}/OAIObjectFranchiseofficeApi.cpp \
    $${PWD}/OAIObjectFranchisereferalincomeApi.cpp \
    $${PWD}/OAIObjectPeriodApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp \
    $${PWD}/OAIOauth.cpp
