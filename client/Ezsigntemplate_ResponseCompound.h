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

/*
 * Ezsigntemplate_ResponseCompound.h
 *
 * A Ezsigntemplate Object
 */

#ifndef Ezsigntemplate_ResponseCompound_H
#define Ezsigntemplate_ResponseCompound_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Ezsigntemplatedocument_Response.h"
#include "Ezsigntemplatesigner_ResponseCompound.h"
#include "Field_eEzsigntemplateType.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;
class Ezsigntemplatedocument_Response;
class Ezsigntemplatesigner_ResponseCompound;

class Ezsigntemplate_ResponseCompound : public Object {
public:
    Ezsigntemplate_ResponseCompound();
    Ezsigntemplate_ResponseCompound(QString json);
    ~Ezsigntemplate_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateId() const;
    void setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id);
    bool is_pki_ezsigntemplate_id_Set() const;
    bool is_pki_ezsigntemplate_id_Valid() const;

    qint32 getFkiEzsigntemplatedocumentId() const;
    void setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id);
    bool is_fki_ezsigntemplatedocument_id_Set() const;
    bool is_fki_ezsigntemplatedocument_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    qint32 getFkiEzdoctemplatedocumentId() const;
    void setFkiEzdoctemplatedocumentId(const qint32 &fki_ezdoctemplatedocument_id);
    bool is_fki_ezdoctemplatedocument_id_Set() const;
    bool is_fki_ezdoctemplatedocument_id_Valid() const;

    QString getSLanguageNameX() const;
    void setSLanguageNameX(const QString &s_language_name_x);
    bool is_s_language_name_x_Set() const;
    bool is_s_language_name_x_Valid() const;

    QString getSEzsigntemplateDescription() const;
    void setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description);
    bool is_s_ezsigntemplate_description_Set() const;
    bool is_s_ezsigntemplate_description_Valid() const;

    QString getSEzsigntemplateExternaldescription() const;
    void setSEzsigntemplateExternaldescription(const QString &s_ezsigntemplate_externaldescription);
    bool is_s_ezsigntemplate_externaldescription_Set() const;
    bool is_s_ezsigntemplate_externaldescription_Valid() const;

    QString getTEzsigntemplateComment() const;
    void setTEzsigntemplateComment(const QString &t_ezsigntemplate_comment);
    bool is_t_ezsigntemplate_comment_Set() const;
    bool is_t_ezsigntemplate_comment_Valid() const;

    QString getSEzsigntemplateFilenamepattern() const;
    void setSEzsigntemplateFilenamepattern(const QString &s_ezsigntemplate_filenamepattern);
    bool is_s_ezsigntemplate_filenamepattern_Set() const;
    bool is_s_ezsigntemplate_filenamepattern_Valid() const;

    bool isBEzsigntemplateAdminonly() const;
    void setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly);
    bool is_b_ezsigntemplate_adminonly_Set() const;
    bool is_b_ezsigntemplate_adminonly_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    bool isBEzsigntemplateEditallowed() const;
    void setBEzsigntemplateEditallowed(const bool &b_ezsigntemplate_editallowed);
    bool is_b_ezsigntemplate_editallowed_Set() const;
    bool is_b_ezsigntemplate_editallowed_Valid() const;

    Field_eEzsigntemplateType getEEzsigntemplateType() const;
    void setEEzsigntemplateType(const Field_eEzsigntemplateType &e_ezsigntemplate_type);
    bool is_e_ezsigntemplate_type_Set() const;
    bool is_e_ezsigntemplate_type_Valid() const;

    Ezsigntemplatedocument_Response getObjEzsigntemplatedocument() const;
    void setObjEzsigntemplatedocument(const Ezsigntemplatedocument_Response &obj_ezsigntemplatedocument);
    bool is_obj_ezsigntemplatedocument_Set() const;
    bool is_obj_ezsigntemplatedocument_Valid() const;

    QList<Ezsigntemplatesigner_ResponseCompound> getAObjEzsigntemplatesigner() const;
    void setAObjEzsigntemplatesigner(const QList<Ezsigntemplatesigner_ResponseCompound> &a_obj_ezsigntemplatesigner);
    bool is_a_obj_ezsigntemplatesigner_Set() const;
    bool is_a_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplate_id;
    bool m_pki_ezsigntemplate_id_isSet;
    bool m_pki_ezsigntemplate_id_isValid;

    qint32 m_fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    qint32 m_fki_ezdoctemplatedocument_id;
    bool m_fki_ezdoctemplatedocument_id_isSet;
    bool m_fki_ezdoctemplatedocument_id_isValid;

    QString m_s_language_name_x;
    bool m_s_language_name_x_isSet;
    bool m_s_language_name_x_isValid;

    QString m_s_ezsigntemplate_description;
    bool m_s_ezsigntemplate_description_isSet;
    bool m_s_ezsigntemplate_description_isValid;

    QString m_s_ezsigntemplate_externaldescription;
    bool m_s_ezsigntemplate_externaldescription_isSet;
    bool m_s_ezsigntemplate_externaldescription_isValid;

    QString m_t_ezsigntemplate_comment;
    bool m_t_ezsigntemplate_comment_isSet;
    bool m_t_ezsigntemplate_comment_isValid;

    QString m_s_ezsigntemplate_filenamepattern;
    bool m_s_ezsigntemplate_filenamepattern_isSet;
    bool m_s_ezsigntemplate_filenamepattern_isValid;

    bool m_b_ezsigntemplate_adminonly;
    bool m_b_ezsigntemplate_adminonly_isSet;
    bool m_b_ezsigntemplate_adminonly_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;

    bool m_b_ezsigntemplate_editallowed;
    bool m_b_ezsigntemplate_editallowed_isSet;
    bool m_b_ezsigntemplate_editallowed_isValid;

    Field_eEzsigntemplateType m_e_ezsigntemplate_type;
    bool m_e_ezsigntemplate_type_isSet;
    bool m_e_ezsigntemplate_type_isValid;

    Ezsigntemplatedocument_Response m_obj_ezsigntemplatedocument;
    bool m_obj_ezsigntemplatedocument_isSet;
    bool m_obj_ezsigntemplatedocument_isValid;

    QList<Ezsigntemplatesigner_ResponseCompound> m_a_obj_ezsigntemplatesigner;
    bool m_a_obj_ezsigntemplatesigner_isSet;
    bool m_a_obj_ezsigntemplatesigner_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplate_ResponseCompound)

#endif // Ezsigntemplate_ResponseCompound_H
