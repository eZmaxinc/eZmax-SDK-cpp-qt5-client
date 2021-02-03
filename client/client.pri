QT += network

HEADERS += \
# Models
    $${PWD}/OAIActivesession_getCurrent_v1_Response.h \
    $${PWD}/OAIActivesession_getCurrent_v1_Response_mPayload.h \
    $${PWD}/OAIAddress_Request.h \
    $${PWD}/OAIApikey_Request.h \
    $${PWD}/OAIApikey_RequestCompound.h \
    $${PWD}/OAIApikey_Response.h \
    $${PWD}/OAIApikey_createObject_v1_Request.h \
    $${PWD}/OAIApikey_createObject_v1_Response.h \
    $${PWD}/OAIApikey_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIAttempt_Response.h \
    $${PWD}/OAICommon_Audit.h \
    $${PWD}/OAICommon_Response.h \
    $${PWD}/OAICommon_Response_Error.h \
    $${PWD}/OAICommon_Response_objDebug.h \
    $${PWD}/OAICommon_Response_objDebugPayload.h \
    $${PWD}/OAICommon_Response_objSQLQuery.h \
    $${PWD}/OAICommon_Webhook.h \
    $${PWD}/OAICommon_getAutocomplete_v1_Response.h \
    $${PWD}/OAICommon_getAutocomplete_v1_Response_mPayload.h \
    $${PWD}/OAIContact_Request.h \
    $${PWD}/OAIContact_RequestCompound.h \
    $${PWD}/OAIContact_RequestCompound_allOf.h \
    $${PWD}/OAIContactinformations_Request.h \
    $${PWD}/OAIContactinformations_RequestCompound.h \
    $${PWD}/OAIEmail_Request.h \
    $${PWD}/OAIEzsigndocument_Request.h \
    $${PWD}/OAIEzsigndocument_RequestCompound.h \
    $${PWD}/OAIEzsigndocument_Response.h \
    $${PWD}/OAIEzsigndocument_ResponseCompound.h \
    $${PWD}/OAIEzsigndocument_Response_allOf.h \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Request.h \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Response.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Request.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_editObject_v1_Request.h \
    $${PWD}/OAIEzsigndocument_editObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.h \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response.h \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_Request.h \
    $${PWD}/OAIEzsignfolder_RequestCompound.h \
    $${PWD}/OAIEzsignfolder_Response.h \
    $${PWD}/OAIEzsignfolder_ResponseCompound.h \
    $${PWD}/OAIEzsignfolder_Response_allOf.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Request.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_editObject_v1_Request.h \
    $${PWD}/OAIEzsignfolder_editObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response.h \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfolder_send_v1_Request.h \
    $${PWD}/OAIEzsignfolder_send_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_Request.h \
    $${PWD}/OAIEzsignfoldersignerassociation_RequestCompound.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Request.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfoldersignerassociation_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_editObject_v1_Request.h \
    $${PWD}/OAIEzsignfoldersignerassociation_editObject_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignfoldersignerassociation_getObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_Request.h \
    $${PWD}/OAIEzsignsignature_RequestCompound.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Request.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIEzsignsignature_deleteObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_editObject_v1_Request.h \
    $${PWD}/OAIEzsignsignature_editObject_v1_Response.h \
    $${PWD}/OAIEzsignsignature_getObject_v1_Response.h \
    $${PWD}/OAIEzsignsigner_Request.h \
    $${PWD}/OAIEzsignsigner_RequestCompound.h \
    $${PWD}/OAIEzsignsigner_RequestCompound_Contact.h \
    $${PWD}/OAIField_eEzsigndocumentStep.h \
    $${PWD}/OAIField_eEzsignfolderSendreminderfrequency.h \
    $${PWD}/OAIField_eEzsignfolderStep.h \
    $${PWD}/OAIField_ePhoneType.h \
    $${PWD}/OAIField_eUserType.h \
    $${PWD}/OAIFranchisereferalincome_Request.h \
    $${PWD}/OAIFranchisereferalincome_RequestCompound.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Request.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response.h \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response_mPayload.h \
    $${PWD}/OAIMultilingual_ApikeyDescription.h \
    $${PWD}/OAIPhone_Request.h \
    $${PWD}/OAIUser_Response.h \
    $${PWD}/OAIUser_Response_allOf.h \
    $${PWD}/OAIUser_createEzsignuser_v1_Request.h \
    $${PWD}/OAIUser_createEzsignuser_v1_Response.h \
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
    $${PWD}/OAIModuleUserApi.h \
    $${PWD}/OAIObjectActivesessionApi.h \
    $${PWD}/OAIObjectApikeyApi.h \
    $${PWD}/OAIObjectEzsigndocumentApi.h \
    $${PWD}/OAIObjectEzsignfolderApi.h \
    $${PWD}/OAIObjectEzsignfoldersignerassociationApi.h \
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
    $${PWD}/OAIServerVariable.h 
    
SOURCES += \
# Models
    $${PWD}/OAIActivesession_getCurrent_v1_Response.cpp \
    $${PWD}/OAIActivesession_getCurrent_v1_Response_mPayload.cpp \
    $${PWD}/OAIAddress_Request.cpp \
    $${PWD}/OAIApikey_Request.cpp \
    $${PWD}/OAIApikey_RequestCompound.cpp \
    $${PWD}/OAIApikey_Response.cpp \
    $${PWD}/OAIApikey_createObject_v1_Request.cpp \
    $${PWD}/OAIApikey_createObject_v1_Response.cpp \
    $${PWD}/OAIApikey_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIAttempt_Response.cpp \
    $${PWD}/OAICommon_Audit.cpp \
    $${PWD}/OAICommon_Response.cpp \
    $${PWD}/OAICommon_Response_Error.cpp \
    $${PWD}/OAICommon_Response_objDebug.cpp \
    $${PWD}/OAICommon_Response_objDebugPayload.cpp \
    $${PWD}/OAICommon_Response_objSQLQuery.cpp \
    $${PWD}/OAICommon_Webhook.cpp \
    $${PWD}/OAICommon_getAutocomplete_v1_Response.cpp \
    $${PWD}/OAICommon_getAutocomplete_v1_Response_mPayload.cpp \
    $${PWD}/OAIContact_Request.cpp \
    $${PWD}/OAIContact_RequestCompound.cpp \
    $${PWD}/OAIContact_RequestCompound_allOf.cpp \
    $${PWD}/OAIContactinformations_Request.cpp \
    $${PWD}/OAIContactinformations_RequestCompound.cpp \
    $${PWD}/OAIEmail_Request.cpp \
    $${PWD}/OAIEzsigndocument_Request.cpp \
    $${PWD}/OAIEzsigndocument_RequestCompound.cpp \
    $${PWD}/OAIEzsigndocument_Response.cpp \
    $${PWD}/OAIEzsigndocument_ResponseCompound.cpp \
    $${PWD}/OAIEzsigndocument_Response_allOf.cpp \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Request.cpp \
    $${PWD}/OAIEzsigndocument_applyEzsigntemplate_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_editObject_v1_Request.cpp \
    $${PWD}/OAIEzsigndocument_editObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsigndocument_getObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_Request.cpp \
    $${PWD}/OAIEzsignfolder_RequestCompound.cpp \
    $${PWD}/OAIEzsignfolder_Response.cpp \
    $${PWD}/OAIEzsignfolder_ResponseCompound.cpp \
    $${PWD}/OAIEzsignfolder_Response_allOf.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_editObject_v1_Request.cpp \
    $${PWD}/OAIEzsignfolder_editObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfolder_getObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfolder_send_v1_Request.cpp \
    $${PWD}/OAIEzsignfolder_send_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_Request.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_RequestCompound.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_editObject_v1_Request.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_editObject_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignfoldersignerassociation_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_Request.cpp \
    $${PWD}/OAIEzsignsignature_RequestCompound.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Request.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIEzsignsignature_deleteObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_editObject_v1_Request.cpp \
    $${PWD}/OAIEzsignsignature_editObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsignature_getObject_v1_Response.cpp \
    $${PWD}/OAIEzsignsigner_Request.cpp \
    $${PWD}/OAIEzsignsigner_RequestCompound.cpp \
    $${PWD}/OAIEzsignsigner_RequestCompound_Contact.cpp \
    $${PWD}/OAIField_eEzsigndocumentStep.cpp \
    $${PWD}/OAIField_eEzsignfolderSendreminderfrequency.cpp \
    $${PWD}/OAIField_eEzsignfolderStep.cpp \
    $${PWD}/OAIField_ePhoneType.cpp \
    $${PWD}/OAIField_eUserType.cpp \
    $${PWD}/OAIFranchisereferalincome_Request.cpp \
    $${PWD}/OAIFranchisereferalincome_RequestCompound.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Request.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response.cpp \
    $${PWD}/OAIFranchisereferalincome_createObject_v1_Response_mPayload.cpp \
    $${PWD}/OAIMultilingual_ApikeyDescription.cpp \
    $${PWD}/OAIPhone_Request.cpp \
    $${PWD}/OAIUser_Response.cpp \
    $${PWD}/OAIUser_Response_allOf.cpp \
    $${PWD}/OAIUser_createEzsignuser_v1_Request.cpp \
    $${PWD}/OAIUser_createEzsignuser_v1_Response.cpp \
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
    $${PWD}/OAIModuleUserApi.cpp \
    $${PWD}/OAIObjectActivesessionApi.cpp \
    $${PWD}/OAIObjectApikeyApi.cpp \
    $${PWD}/OAIObjectEzsigndocumentApi.cpp \
    $${PWD}/OAIObjectEzsignfolderApi.cpp \
    $${PWD}/OAIObjectEzsignfoldersignerassociationApi.cpp \
    $${PWD}/OAIObjectEzsignsignatureApi.cpp \
    $${PWD}/OAIObjectFranchisebrokerApi.cpp \
    $${PWD}/OAIObjectFranchiseofficeApi.cpp \
    $${PWD}/OAIObjectFranchisereferalincomeApi.cpp \
    $${PWD}/OAIObjectPeriodApi.cpp \
# Others
    $${PWD}/OAIHelpers.cpp \
    $${PWD}/OAIHttpRequest.cpp \
    $${PWD}/OAIHttpFileElement.cpp

