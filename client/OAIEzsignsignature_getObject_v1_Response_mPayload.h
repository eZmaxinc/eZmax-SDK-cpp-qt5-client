/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_getObject_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignsignature/{pkiEzsignsignatureID}
 */

#ifndef OAIEzsignsignature_getObject_v1_Response_mPayload_H
#define OAIEzsignsignature_getObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignsignature_ResponseCompound.h"
#include "OAIEzsignsignaturecustomdate_ResponseCompound.h"
#include "OAIField_eEzsignsignatureAttachmentnamesource.h"
#include "OAIField_eEzsignsignatureFont.h"
#include "OAIField_eEzsignsignatureTooltipposition.h"
#include "OAIField_eEzsignsignatureType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignaturecustomdate_ResponseCompound;

class OAIEzsignsignature_getObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignsignature_getObject_v1_Response_mPayload();
    OAIEzsignsignature_getObject_v1_Response_mPayload(QString json);
    ~OAIEzsignsignature_getObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignatureId() const;
    void setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id);
    bool is_pki_ezsignsignature_id_Set() const;
    bool is_pki_ezsignsignature_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    qint32 getIEzsignsignatureX() const;
    void setIEzsignsignatureX(const qint32 &i_ezsignsignature_x);
    bool is_i_ezsignsignature_x_Set() const;
    bool is_i_ezsignsignature_x_Valid() const;

    qint32 getIEzsignsignatureY() const;
    void setIEzsignsignatureY(const qint32 &i_ezsignsignature_y);
    bool is_i_ezsignsignature_y_Set() const;
    bool is_i_ezsignsignature_y_Valid() const;

    qint32 getIEzsignsignatureStep() const;
    void setIEzsignsignatureStep(const qint32 &i_ezsignsignature_step);
    bool is_i_ezsignsignature_step_Set() const;
    bool is_i_ezsignsignature_step_Valid() const;

    OAIField_eEzsignsignatureType getEEzsignsignatureType() const;
    void setEEzsignsignatureType(const OAIField_eEzsignsignatureType &e_ezsignsignature_type);
    bool is_e_ezsignsignature_type_Set() const;
    bool is_e_ezsignsignature_type_Valid() const;

    QString getTEzsignsignatureTooltip() const;
    void setTEzsignsignatureTooltip(const QString &t_ezsignsignature_tooltip);
    bool is_t_ezsignsignature_tooltip_Set() const;
    bool is_t_ezsignsignature_tooltip_Valid() const;

    OAIField_eEzsignsignatureTooltipposition getEEzsignsignatureTooltipposition() const;
    void setEEzsignsignatureTooltipposition(const OAIField_eEzsignsignatureTooltipposition &e_ezsignsignature_tooltipposition);
    bool is_e_ezsignsignature_tooltipposition_Set() const;
    bool is_e_ezsignsignature_tooltipposition_Valid() const;

    OAIField_eEzsignsignatureFont getEEzsignsignatureFont() const;
    void setEEzsignsignatureFont(const OAIField_eEzsignsignatureFont &e_ezsignsignature_font);
    bool is_e_ezsignsignature_font_Set() const;
    bool is_e_ezsignsignature_font_Valid() const;

    qint32 getIEzsignsignatureValidationstep() const;
    void setIEzsignsignatureValidationstep(const qint32 &i_ezsignsignature_validationstep);
    bool is_i_ezsignsignature_validationstep_Set() const;
    bool is_i_ezsignsignature_validationstep_Valid() const;

    QString getSEzsignsignatureAttachmentdescription() const;
    void setSEzsignsignatureAttachmentdescription(const QString &s_ezsignsignature_attachmentdescription);
    bool is_s_ezsignsignature_attachmentdescription_Set() const;
    bool is_s_ezsignsignature_attachmentdescription_Valid() const;

    OAIField_eEzsignsignatureAttachmentnamesource getEEzsignsignatureAttachmentnamesource() const;
    void setEEzsignsignatureAttachmentnamesource(const OAIField_eEzsignsignatureAttachmentnamesource &e_ezsignsignature_attachmentnamesource);
    bool is_e_ezsignsignature_attachmentnamesource_Set() const;
    bool is_e_ezsignsignature_attachmentnamesource_Valid() const;

    bool isBEzsignsignatureRequired() const;
    void setBEzsignsignatureRequired(const bool &b_ezsignsignature_required);
    bool is_b_ezsignsignature_required_Set() const;
    bool is_b_ezsignsignature_required_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationIdValidation() const;
    void setFkiEzsignfoldersignerassociationIdValidation(const qint32 &fki_ezsignfoldersignerassociation_id_validation);
    bool is_fki_ezsignfoldersignerassociation_id_validation_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_validation_Valid() const;

    bool isBEzsignsignatureCustomdate() const;
    void setBEzsignsignatureCustomdate(const bool &b_ezsignsignature_customdate);
    bool is_b_ezsignsignature_customdate_Set() const;
    bool is_b_ezsignsignature_customdate_Valid() const;

    QList<OAIEzsignsignaturecustomdate_ResponseCompound> getAObjEzsignsignaturecustomdate() const;
    void setAObjEzsignsignaturecustomdate(const QList<OAIEzsignsignaturecustomdate_ResponseCompound> &a_obj_ezsignsignaturecustomdate);
    bool is_a_obj_ezsignsignaturecustomdate_Set() const;
    bool is_a_obj_ezsignsignaturecustomdate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignsignature_id;
    bool m_pki_ezsignsignature_id_isSet;
    bool m_pki_ezsignsignature_id_isValid;

    qint32 fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    qint32 fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    qint32 i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    qint32 i_ezsignsignature_x;
    bool m_i_ezsignsignature_x_isSet;
    bool m_i_ezsignsignature_x_isValid;

    qint32 i_ezsignsignature_y;
    bool m_i_ezsignsignature_y_isSet;
    bool m_i_ezsignsignature_y_isValid;

    qint32 i_ezsignsignature_step;
    bool m_i_ezsignsignature_step_isSet;
    bool m_i_ezsignsignature_step_isValid;

    OAIField_eEzsignsignatureType e_ezsignsignature_type;
    bool m_e_ezsignsignature_type_isSet;
    bool m_e_ezsignsignature_type_isValid;

    QString t_ezsignsignature_tooltip;
    bool m_t_ezsignsignature_tooltip_isSet;
    bool m_t_ezsignsignature_tooltip_isValid;

    OAIField_eEzsignsignatureTooltipposition e_ezsignsignature_tooltipposition;
    bool m_e_ezsignsignature_tooltipposition_isSet;
    bool m_e_ezsignsignature_tooltipposition_isValid;

    OAIField_eEzsignsignatureFont e_ezsignsignature_font;
    bool m_e_ezsignsignature_font_isSet;
    bool m_e_ezsignsignature_font_isValid;

    qint32 i_ezsignsignature_validationstep;
    bool m_i_ezsignsignature_validationstep_isSet;
    bool m_i_ezsignsignature_validationstep_isValid;

    QString s_ezsignsignature_attachmentdescription;
    bool m_s_ezsignsignature_attachmentdescription_isSet;
    bool m_s_ezsignsignature_attachmentdescription_isValid;

    OAIField_eEzsignsignatureAttachmentnamesource e_ezsignsignature_attachmentnamesource;
    bool m_e_ezsignsignature_attachmentnamesource_isSet;
    bool m_e_ezsignsignature_attachmentnamesource_isValid;

    bool b_ezsignsignature_required;
    bool m_b_ezsignsignature_required_isSet;
    bool m_b_ezsignsignature_required_isValid;

    qint32 fki_ezsignfoldersignerassociation_id_validation;
    bool m_fki_ezsignfoldersignerassociation_id_validation_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_validation_isValid;

    bool b_ezsignsignature_customdate;
    bool m_b_ezsignsignature_customdate_isSet;
    bool m_b_ezsignsignature_customdate_isValid;

    QList<OAIEzsignsignaturecustomdate_ResponseCompound> a_obj_ezsignsignaturecustomdate;
    bool m_a_obj_ezsignsignaturecustomdate_isSet;
    bool m_a_obj_ezsignsignaturecustomdate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_getObject_v1_Response_mPayload)

#endif // OAIEzsignsignature_getObject_v1_Response_mPayload_H
