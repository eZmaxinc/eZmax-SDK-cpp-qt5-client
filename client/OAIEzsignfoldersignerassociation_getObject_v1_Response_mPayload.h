/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}
 */

#ifndef OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload_H
#define OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_ResponseCompound.h"
#include "OAIEzsignfoldersignerassociation_ResponseCompound_User.h"
#include "OAIEzsignsigner_ResponseCompound.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldersignerassociation_ResponseCompound_User;
class OAIEzsignsigner_ResponseCompound;

class OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload();
    OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload(QString json);
    ~OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload() override;

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

    bool isBEzsignfoldersignerassociationReceivecopy() const;
    void setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy);
    bool is_b_ezsignfoldersignerassociation_receivecopy_Set() const;
    bool is_b_ezsignfoldersignerassociation_receivecopy_Valid() const;

    QString getTEzsignfoldersignerassociationMessage() const;
    void setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message);
    bool is_t_ezsignfoldersignerassociation_message_Set() const;
    bool is_t_ezsignfoldersignerassociation_message_Valid() const;

    OAIEzsignfoldersignerassociation_ResponseCompound_User getObjUser() const;
    void setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user);
    bool is_obj_user_Set() const;
    bool is_obj_user_Valid() const;

    OAIEzsignsigner_ResponseCompound getObjEzsignsigner() const;
    void setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner);
    bool is_obj_ezsignsigner_Set() const;
    bool is_obj_ezsignsigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignfoldersignerassociation_id;
    bool m_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_pki_ezsignfoldersignerassociation_id_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    bool b_ezsignfoldersignerassociation_receivecopy;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isSet;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    QString t_ezsignfoldersignerassociation_message;
    bool m_t_ezsignfoldersignerassociation_message_isSet;
    bool m_t_ezsignfoldersignerassociation_message_isValid;

    OAIEzsignfoldersignerassociation_ResponseCompound_User obj_user;
    bool m_obj_user_isSet;
    bool m_obj_user_isValid;

    OAIEzsignsigner_ResponseCompound obj_ezsignsigner;
    bool m_obj_ezsignsigner_isSet;
    bool m_obj_ezsignsigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload)

#endif // OAIEzsignfoldersignerassociation_getObject_v1_Response_mPayload_H
