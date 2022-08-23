/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplate_ResponseCompound.h
 *
 * A Ezsigntemplate Object
 */

#ifndef OAIEzsigntemplate_ResponseCompound_H
#define OAIEzsigntemplate_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsigntemplate_Response.h"
#include "OAIEzsigntemplate_ResponseCompound_allOf.h"
#include "OAIEzsigntemplatedocument_Response.h"
#include "OAIEzsigntemplatesigner_ResponseCompound.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatedocument_Response;
class OAIEzsigntemplatesigner_ResponseCompound;

class OAIEzsigntemplate_ResponseCompound : public OAIObject {
public:
    OAIEzsigntemplate_ResponseCompound();
    OAIEzsigntemplate_ResponseCompound(QString json);
    ~OAIEzsigntemplate_ResponseCompound() override;

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

    QString getSLanguageNameX() const;
    void setSLanguageNameX(const QString &s_language_name_x);
    bool is_s_language_name_x_Set() const;
    bool is_s_language_name_x_Valid() const;

    QString getSEzsigntemplateDescription() const;
    void setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description);
    bool is_s_ezsigntemplate_description_Set() const;
    bool is_s_ezsigntemplate_description_Valid() const;

    bool isBEzsigntemplateAdminonly() const;
    void setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly);
    bool is_b_ezsigntemplate_adminonly_Set() const;
    bool is_b_ezsigntemplate_adminonly_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    OAIEzsigntemplatedocument_Response getObjEzsigntemplatedocument() const;
    void setObjEzsigntemplatedocument(const OAIEzsigntemplatedocument_Response &obj_ezsigntemplatedocument);
    bool is_obj_ezsigntemplatedocument_Set() const;
    bool is_obj_ezsigntemplatedocument_Valid() const;

    QList<OAIEzsigntemplatesigner_ResponseCompound> getAObjEzsigntemplatesigner() const;
    void setAObjEzsigntemplatesigner(const QList<OAIEzsigntemplatesigner_ResponseCompound> &a_obj_ezsigntemplatesigner);
    bool is_a_obj_ezsigntemplatesigner_Set() const;
    bool is_a_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplate_id;
    bool m_pki_ezsigntemplate_id_isSet;
    bool m_pki_ezsigntemplate_id_isValid;

    qint32 fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_language_name_x;
    bool m_s_language_name_x_isSet;
    bool m_s_language_name_x_isValid;

    QString s_ezsigntemplate_description;
    bool m_s_ezsigntemplate_description_isSet;
    bool m_s_ezsigntemplate_description_isValid;

    bool b_ezsigntemplate_adminonly;
    bool m_b_ezsigntemplate_adminonly_isSet;
    bool m_b_ezsigntemplate_adminonly_isValid;

    QString s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    OAIEzsigntemplatedocument_Response obj_ezsigntemplatedocument;
    bool m_obj_ezsigntemplatedocument_isSet;
    bool m_obj_ezsigntemplatedocument_isValid;

    QList<OAIEzsigntemplatesigner_ResponseCompound> a_obj_ezsigntemplatesigner;
    bool m_a_obj_ezsigntemplatesigner_isSet;
    bool m_a_obj_ezsigntemplatesigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_ResponseCompound)

#endif // OAIEzsigntemplate_ResponseCompound_H
