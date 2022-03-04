/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.5
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_getObject_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsignbulksend/{pkiEzsignbulksendID}/getObject API Request
 */

#ifndef OAIEzsignbulksend_getObject_v1_Response_mPayload_H
#define OAIEzsignbulksend_getObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIEzsignbulksend_ResponseCompound.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Audit;

class OAIEzsignbulksend_getObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksend_getObject_v1_Response_mPayload();
    OAIEzsignbulksend_getObject_v1_Response_mPayload(QString json);
    ~OAIEzsignbulksend_getObject_v1_Response_mPayload() override;

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

    QString getSEzsignbulksendDescription() const;
    void setSEzsignbulksendDescription(const QString &s_ezsignbulksend_description);
    bool is_s_ezsignbulksend_description_Set() const;
    bool is_s_ezsignbulksend_description_Valid() const;

    QString getTEzsignbulksendNote() const;
    void setTEzsignbulksendNote(const QString &t_ezsignbulksend_note);
    bool is_t_ezsignbulksend_note_Set() const;
    bool is_t_ezsignbulksend_note_Valid() const;

    bool isBEzsignbulksendIsactive() const;
    void setBEzsignbulksendIsactive(const bool &b_ezsignbulksend_isactive);
    bool is_b_ezsignbulksend_isactive_Set() const;
    bool is_b_ezsignbulksend_isactive_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignbulksend_id;
    bool m_pki_ezsignbulksend_id_isSet;
    bool m_pki_ezsignbulksend_id_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_ezsignbulksend_description;
    bool m_s_ezsignbulksend_description_isSet;
    bool m_s_ezsignbulksend_description_isValid;

    QString t_ezsignbulksend_note;
    bool m_t_ezsignbulksend_note_isSet;
    bool m_t_ezsignbulksend_note_isValid;

    bool b_ezsignbulksend_isactive;
    bool m_b_ezsignbulksend_isactive_isSet;
    bool m_b_ezsignbulksend_isactive_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getObject_v1_Response_mPayload)

#endif // OAIEzsignbulksend_getObject_v1_Response_mPayload_H
