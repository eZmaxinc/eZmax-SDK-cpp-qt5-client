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

/*
 * OAIEzsignbulksend_ResponseCompound.h
 *
 * An Ezsignbulksend Object and children to create a complete structure
 */

#ifndef OAIEzsignbulksend_ResponseCompound_H
#define OAIEzsignbulksend_ResponseCompound_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIEzsignbulksenddocumentmapping_ResponseCompound.h"
#include "OAIEzsignbulksendsignermapping_Response.h"
#include "OAIField_eEzsignfoldertypePrivacylevel.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Audit;
class OAIEzsignbulksenddocumentmapping_ResponseCompound;
class OAIEzsignbulksendsignermapping_Response;

class OAIEzsignbulksend_ResponseCompound : public OAIObject {
public:
    OAIEzsignbulksend_ResponseCompound();
    OAIEzsignbulksend_ResponseCompound(QString json);
    ~OAIEzsignbulksend_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignbulksendId() const;
    void setPkiEzsignbulksendId(const qint32 &pki_ezsignbulksend_id);
    bool is_pki_ezsignbulksend_id_Set() const;
    bool is_pki_ezsignbulksend_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSLanguageNameX() const;
    void setSLanguageNameX(const QString &s_language_name_x);
    bool is_s_language_name_x_Set() const;
    bool is_s_language_name_x_Valid() const;

    OAIField_eEzsignfoldertypePrivacylevel getEEzsignfoldertypePrivacylevel() const;
    void setEEzsignfoldertypePrivacylevel(const OAIField_eEzsignfoldertypePrivacylevel &e_ezsignfoldertype_privacylevel);
    bool is_e_ezsignfoldertype_privacylevel_Set() const;
    bool is_e_ezsignfoldertype_privacylevel_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    QString getSEzsignbulksendDescription() const;
    void setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description);
    bool is_s_ezsignbulksend_description_Set() const;
    bool is_s_ezsignbulksend_description_Valid() const;

    QString getTEzsignbulksendNote() const;
    void setTEzsignbulksendNote(const QString &t_ezsignbulksend_note);
    bool is_t_ezsignbulksend_note_Set() const;
    bool is_t_ezsignbulksend_note_Valid() const;

    bool isBEzsignbulksendNeedvalidation() const;
    void setBEzsignbulksendNeedvalidation(const bool &b_ezsignbulksend_needvalidation);
    bool is_b_ezsignbulksend_needvalidation_Set() const;
    bool is_b_ezsignbulksend_needvalidation_Valid() const;

    bool isBEzsignbulksendIsactive() const;
    void setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive);
    bool is_b_ezsignbulksend_isactive_Set() const;
    bool is_b_ezsignbulksend_isactive_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    QList<OAIEzsignbulksenddocumentmapping_ResponseCompound> getAObjEzsignbulksenddocumentmapping() const;
    void setAObjEzsignbulksenddocumentmapping(const QList<OAIEzsignbulksenddocumentmapping_ResponseCompound> &a_obj_ezsignbulksenddocumentmapping);
    bool is_a_obj_ezsignbulksenddocumentmapping_Set() const;
    bool is_a_obj_ezsignbulksenddocumentmapping_Valid() const;

    QList<OAIEzsignbulksendsignermapping_Response> getAObjEzsignbulksendsignermapping() const;
    void setAObjEzsignbulksendsignermapping(const QList<OAIEzsignbulksendsignermapping_Response> &a_obj_ezsignbulksendsignermapping);
    bool is_a_obj_ezsignbulksendsignermapping_Set() const;
    bool is_a_obj_ezsignbulksendsignermapping_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignbulksend_id;
    bool m_pki_ezsignbulksend_id_isSet;
    bool m_pki_ezsignbulksend_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_language_name_x;
    bool m_s_language_name_x_isSet;
    bool m_s_language_name_x_isValid;

    OAIField_eEzsignfoldertypePrivacylevel m_e_ezsignfoldertype_privacylevel;
    bool m_e_ezsignfoldertype_privacylevel_isSet;
    bool m_e_ezsignfoldertype_privacylevel_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    QString m_s_ezsignbulksend_description;
    bool m_s_ezsignbulksend_description_isSet;
    bool m_s_ezsignbulksend_description_isValid;

    QString m_t_ezsignbulksend_note;
    bool m_t_ezsignbulksend_note_isSet;
    bool m_t_ezsignbulksend_note_isValid;

    bool m_b_ezsignbulksend_needvalidation;
    bool m_b_ezsignbulksend_needvalidation_isSet;
    bool m_b_ezsignbulksend_needvalidation_isValid;

    bool m_b_ezsignbulksend_isactive;
    bool m_b_ezsignbulksend_isactive_isSet;
    bool m_b_ezsignbulksend_isactive_isValid;

    OAICommon_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    QList<OAIEzsignbulksenddocumentmapping_ResponseCompound> m_a_obj_ezsignbulksenddocumentmapping;
    bool m_a_obj_ezsignbulksenddocumentmapping_isSet;
    bool m_a_obj_ezsignbulksenddocumentmapping_isValid;

    QList<OAIEzsignbulksendsignermapping_Response> m_a_obj_ezsignbulksendsignermapping;
    bool m_a_obj_ezsignbulksendsignermapping_isSet;
    bool m_a_obj_ezsignbulksendsignermapping_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_ResponseCompound)

#endif // OAIEzsignbulksend_ResponseCompound_H
