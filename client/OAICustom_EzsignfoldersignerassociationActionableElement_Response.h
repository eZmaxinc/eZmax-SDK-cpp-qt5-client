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

/*
 * OAICustom_EzsignfoldersignerassociationActionableElement_Response.h
 *
 * A Ezsignfoldersignerassociation Object with actionable elements
 */

#ifndef OAICustom_EzsignfoldersignerassociationActionableElement_Response_H
#define OAICustom_EzsignfoldersignerassociationActionableElement_Response_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_ResponseCompound_User.h"
#include "OAIEzsignsigner_ResponseCompound.h"
#include "OAIEzsignsignergroup_ResponseCompound.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignergroup_ResponseCompound;
class OAIEzsignfoldersignerassociation_ResponseCompound_User;
class OAIEzsignsigner_ResponseCompound;

class OAICustom_EzsignfoldersignerassociationActionableElement_Response : public OAIObject {
public:
    OAICustom_EzsignfoldersignerassociationActionableElement_Response();
    OAICustom_EzsignfoldersignerassociationActionableElement_Response(QString json);
    ~OAICustom_EzsignfoldersignerassociationActionableElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfoldersignerassociationId() const;
    void setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id);
    bool is_pki_ezsignfoldersignerassociation_id_Set() const;
    bool is_pki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    bool isBEzsignfoldersignerassociationDelayedsend() const;
    void setBEzsignfoldersignerassociationDelayedsend(const bool &b_ezsignfoldersignerassociation_delayedsend);
    bool is_b_ezsignfoldersignerassociation_delayedsend_Set() const;
    bool is_b_ezsignfoldersignerassociation_delayedsend_Valid() const;

    bool isBEzsignfoldersignerassociationReceivecopy() const;
    void setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy);
    bool is_b_ezsignfoldersignerassociation_receivecopy_Set() const;
    bool is_b_ezsignfoldersignerassociation_receivecopy_Valid() const;

    QString getTEzsignfoldersignerassociationMessage() const;
    void setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message);
    bool is_t_ezsignfoldersignerassociation_message_Set() const;
    bool is_t_ezsignfoldersignerassociation_message_Valid() const;

    OAIEzsignsignergroup_ResponseCompound getObjEzsignsignergroup() const;
    void setObjEzsignsignergroup(const OAIEzsignsignergroup_ResponseCompound &obj_ezsignsignergroup);
    bool is_obj_ezsignsignergroup_Set() const;
    bool is_obj_ezsignsignergroup_Valid() const;

    OAIEzsignfoldersignerassociation_ResponseCompound_User getObjUser() const;
    void setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user);
    bool is_obj_user_Set() const;
    bool is_obj_user_Valid() const;

    OAIEzsignsigner_ResponseCompound getObjEzsignsigner() const;
    void setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner);
    bool is_obj_ezsignsigner_Set() const;
    bool is_obj_ezsignsigner_Valid() const;

    bool isBEzsignfoldersignerassociationHasactionableelementsCurrent() const;
    void setBEzsignfoldersignerassociationHasactionableelementsCurrent(const bool &b_ezsignfoldersignerassociation_hasactionableelements_current);
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_current_Set() const;
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_current_Valid() const;

    bool isBEzsignfoldersignerassociationHasactionableelementsFuture() const;
    void setBEzsignfoldersignerassociationHasactionableelementsFuture(const bool &b_ezsignfoldersignerassociation_hasactionableelements_future);
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_future_Set() const;
    bool is_b_ezsignfoldersignerassociation_hasactionableelements_future_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignfoldersignerassociation_id;
    bool m_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_pki_ezsignfoldersignerassociation_id_isValid;

    qint32 m_fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    bool m_b_ezsignfoldersignerassociation_delayedsend;
    bool m_b_ezsignfoldersignerassociation_delayedsend_isSet;
    bool m_b_ezsignfoldersignerassociation_delayedsend_isValid;

    bool m_b_ezsignfoldersignerassociation_receivecopy;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isSet;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    QString m_t_ezsignfoldersignerassociation_message;
    bool m_t_ezsignfoldersignerassociation_message_isSet;
    bool m_t_ezsignfoldersignerassociation_message_isValid;

    OAIEzsignsignergroup_ResponseCompound m_obj_ezsignsignergroup;
    bool m_obj_ezsignsignergroup_isSet;
    bool m_obj_ezsignsignergroup_isValid;

    OAIEzsignfoldersignerassociation_ResponseCompound_User m_obj_user;
    bool m_obj_user_isSet;
    bool m_obj_user_isValid;

    OAIEzsignsigner_ResponseCompound m_obj_ezsignsigner;
    bool m_obj_ezsignsigner_isSet;
    bool m_obj_ezsignsigner_isValid;

    bool m_b_ezsignfoldersignerassociation_hasactionableelements_current;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_current_isSet;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_current_isValid;

    bool m_b_ezsignfoldersignerassociation_hasactionableelements_future;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_future_isSet;
    bool m_b_ezsignfoldersignerassociation_hasactionableelements_future_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_EzsignfoldersignerassociationActionableElement_Response)

#endif // OAICustom_EzsignfoldersignerassociationActionableElement_Response_H
