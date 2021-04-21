/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.41
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfolder_getObject_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignfolder/getObject API Request
 */

#ifndef OAIEzsignfolder_getObject_v1_Response_mPayload_H
#define OAIEzsignfolder_getObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIEzsignfolder_Response.h"
#include "OAIField_eEzsignfolderSendreminderfrequency.h"
#include "OAIField_eEzsignfolderStep.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_getObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getObject_v1_Response_mPayload();
    OAIEzsignfolder_getObject_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiEzsigntsarequirementId() const;
    void setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id);
    bool is_fki_ezsigntsarequirement_id_Set() const;
    bool is_fki_ezsigntsarequirement_id_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QString getTEzsignfolderNote() const;
    void setTEzsignfolderNote(const QString &t_ezsignfolder_note);
    bool is_t_ezsignfolder_note_Set() const;
    bool is_t_ezsignfolder_note_Valid() const;

    OAIField_eEzsignfolderSendreminderfrequency getEEzsignfolderSendreminderfrequency() const;
    void setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency);
    bool is_e_ezsignfolder_sendreminderfrequency_Set() const;
    bool is_e_ezsignfolder_sendreminderfrequency_Valid() const;

    qint32 getPkiEzsignfolderId() const;
    void setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id);
    bool is_pki_ezsignfolder_id_Set() const;
    bool is_pki_ezsignfolder_id_Valid() const;

    QString getDtEzsignfolderSentdate() const;
    void setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate);
    bool is_dt_ezsignfolder_sentdate_Set() const;
    bool is_dt_ezsignfolder_sentdate_Valid() const;

    OAIField_eEzsignfolderStep getEEzsignfolderStep() const;
    void setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step);
    bool is_e_ezsignfolder_step_Set() const;
    bool is_e_ezsignfolder_step_Valid() const;

    QString getDtEzsignfolderClose() const;
    void setDtEzsignfolderClose(const QString &dt_ezsignfolder_close);
    bool is_dt_ezsignfolder_close_Set() const;
    bool is_dt_ezsignfolder_close_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 fki_ezsigntsarequirement_id;
    bool m_fki_ezsigntsarequirement_id_isSet;
    bool m_fki_ezsigntsarequirement_id_isValid;

    QString s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QString t_ezsignfolder_note;
    bool m_t_ezsignfolder_note_isSet;
    bool m_t_ezsignfolder_note_isValid;

    OAIField_eEzsignfolderSendreminderfrequency e_ezsignfolder_sendreminderfrequency;
    bool m_e_ezsignfolder_sendreminderfrequency_isSet;
    bool m_e_ezsignfolder_sendreminderfrequency_isValid;

    qint32 pki_ezsignfolder_id;
    bool m_pki_ezsignfolder_id_isSet;
    bool m_pki_ezsignfolder_id_isValid;

    QString dt_ezsignfolder_sentdate;
    bool m_dt_ezsignfolder_sentdate_isSet;
    bool m_dt_ezsignfolder_sentdate_isValid;

    OAIField_eEzsignfolderStep e_ezsignfolder_step;
    bool m_e_ezsignfolder_step_isSet;
    bool m_e_ezsignfolder_step_isValid;

    QString dt_ezsignfolder_close;
    bool m_dt_ezsignfolder_close_isSet;
    bool m_dt_ezsignfolder_close_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getObject_v1_Response_mPayload)

#endif // OAIEzsignfolder_getObject_v1_Response_mPayload_H
