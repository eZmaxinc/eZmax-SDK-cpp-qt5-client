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
 * OAIEzsigntemplatesignature_getObject_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigntemplatesignature/{pkiEzsigntemplatesignatureID}
 */

#ifndef OAIEzsigntemplatesignature_getObject_v1_Response_mPayload_H
#define OAIEzsigntemplatesignature_getObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatesignature_ResponseCompound.h"
#include "OAIEzsigntemplatesignaturecustomdate_ResponseCompound.h"
#include "OAIField_eEzsigntemplatesignatureFont.h"
#include "OAIField_eEzsigntemplatesignatureTooltipposition.h"
#include "OAIField_eEzsigntemplatesignatureType.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesignaturecustomdate_ResponseCompound;

class OAIEzsigntemplatesignature_getObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatesignature_getObject_v1_Response_mPayload();
    OAIEzsigntemplatesignature_getObject_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatesignature_getObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatesignatureId() const;
    void setPkiEzsigntemplatesignatureId(const qint32 &pki_ezsigntemplatesignature_id);
    bool is_pki_ezsigntemplatesignature_id_Set() const;
    bool is_pki_ezsigntemplatesignature_id_Valid() const;

    qint32 getFkiEzsigntemplatedocumentId() const;
    void setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id);
    bool is_fki_ezsigntemplatedocument_id_Set() const;
    bool is_fki_ezsigntemplatedocument_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    qint32 getIEzsigntemplatedocumentpagePagenumber() const;
    void setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber);
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Set() const;
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const;

    qint32 getIEzsigntemplatesignatureX() const;
    void setIEzsigntemplatesignatureX(const qint32 &i_ezsigntemplatesignature_x);
    bool is_i_ezsigntemplatesignature_x_Set() const;
    bool is_i_ezsigntemplatesignature_x_Valid() const;

    qint32 getIEzsigntemplatesignatureY() const;
    void setIEzsigntemplatesignatureY(const qint32 &i_ezsigntemplatesignature_y);
    bool is_i_ezsigntemplatesignature_y_Set() const;
    bool is_i_ezsigntemplatesignature_y_Valid() const;

    qint32 getIEzsigntemplatesignatureStep() const;
    void setIEzsigntemplatesignatureStep(const qint32 &i_ezsigntemplatesignature_step);
    bool is_i_ezsigntemplatesignature_step_Set() const;
    bool is_i_ezsigntemplatesignature_step_Valid() const;

    OAIField_eEzsigntemplatesignatureType getEEzsigntemplatesignatureType() const;
    void setEEzsigntemplatesignatureType(const OAIField_eEzsigntemplatesignatureType &e_ezsigntemplatesignature_type);
    bool is_e_ezsigntemplatesignature_type_Set() const;
    bool is_e_ezsigntemplatesignature_type_Valid() const;

    QString getTEzsigntemplatesignatureTooltip() const;
    void setTEzsigntemplatesignatureTooltip(const QString &t_ezsigntemplatesignature_tooltip);
    bool is_t_ezsigntemplatesignature_tooltip_Set() const;
    bool is_t_ezsigntemplatesignature_tooltip_Valid() const;

    OAIField_eEzsigntemplatesignatureTooltipposition getEEzsigntemplatesignatureTooltipposition() const;
    void setEEzsigntemplatesignatureTooltipposition(const OAIField_eEzsigntemplatesignatureTooltipposition &e_ezsigntemplatesignature_tooltipposition);
    bool is_e_ezsigntemplatesignature_tooltipposition_Set() const;
    bool is_e_ezsigntemplatesignature_tooltipposition_Valid() const;

    OAIField_eEzsigntemplatesignatureFont getEEzsigntemplatesignatureFont() const;
    void setEEzsigntemplatesignatureFont(const OAIField_eEzsigntemplatesignatureFont &e_ezsigntemplatesignature_font);
    bool is_e_ezsigntemplatesignature_font_Set() const;
    bool is_e_ezsigntemplatesignature_font_Valid() const;

    bool isBEzsigntemplatesignatureCustomdate() const;
    void setBEzsigntemplatesignatureCustomdate(const bool &b_ezsigntemplatesignature_customdate);
    bool is_b_ezsigntemplatesignature_customdate_Set() const;
    bool is_b_ezsigntemplatesignature_customdate_Valid() const;

    QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> getAObjEzsigntemplatesignaturecustomdate() const;
    void setAObjEzsigntemplatesignaturecustomdate(const QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> &a_obj_ezsigntemplatesignaturecustomdate);
    bool is_a_obj_ezsigntemplatesignaturecustomdate_Set() const;
    bool is_a_obj_ezsigntemplatesignaturecustomdate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatesignature_id;
    bool m_pki_ezsigntemplatesignature_id_isSet;
    bool m_pki_ezsigntemplatesignature_id_isValid;

    qint32 fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    qint32 fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;

    qint32 i_ezsigntemplatedocumentpage_pagenumber;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    qint32 i_ezsigntemplatesignature_x;
    bool m_i_ezsigntemplatesignature_x_isSet;
    bool m_i_ezsigntemplatesignature_x_isValid;

    qint32 i_ezsigntemplatesignature_y;
    bool m_i_ezsigntemplatesignature_y_isSet;
    bool m_i_ezsigntemplatesignature_y_isValid;

    qint32 i_ezsigntemplatesignature_step;
    bool m_i_ezsigntemplatesignature_step_isSet;
    bool m_i_ezsigntemplatesignature_step_isValid;

    OAIField_eEzsigntemplatesignatureType e_ezsigntemplatesignature_type;
    bool m_e_ezsigntemplatesignature_type_isSet;
    bool m_e_ezsigntemplatesignature_type_isValid;

    QString t_ezsigntemplatesignature_tooltip;
    bool m_t_ezsigntemplatesignature_tooltip_isSet;
    bool m_t_ezsigntemplatesignature_tooltip_isValid;

    OAIField_eEzsigntemplatesignatureTooltipposition e_ezsigntemplatesignature_tooltipposition;
    bool m_e_ezsigntemplatesignature_tooltipposition_isSet;
    bool m_e_ezsigntemplatesignature_tooltipposition_isValid;

    OAIField_eEzsigntemplatesignatureFont e_ezsigntemplatesignature_font;
    bool m_e_ezsigntemplatesignature_font_isSet;
    bool m_e_ezsigntemplatesignature_font_isValid;

    bool b_ezsigntemplatesignature_customdate;
    bool m_b_ezsigntemplatesignature_customdate_isSet;
    bool m_b_ezsigntemplatesignature_customdate_isValid;

    QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> a_obj_ezsigntemplatesignaturecustomdate;
    bool m_a_obj_ezsigntemplatesignaturecustomdate_isSet;
    bool m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesignature_getObject_v1_Response_mPayload)

#endif // OAIEzsigntemplatesignature_getObject_v1_Response_mPayload_H
