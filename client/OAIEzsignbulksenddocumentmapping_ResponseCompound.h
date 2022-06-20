/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.9
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksenddocumentmapping_ResponseCompound.h
 *
 * A Ezsignbulksenddocumentmapping Object
 */

#ifndef OAIEzsignbulksenddocumentmapping_ResponseCompound_H
#define OAIEzsignbulksenddocumentmapping_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsignbulksenddocumentmapping_Response.h"
#include "OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf.h"
#include "OAIEzsigntemplate_ResponseCompound.h"
#include "OAIEzsigntemplatepackage_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_ResponseCompound;
class OAIEzsigntemplatepackage_ResponseCompound;

class OAIEzsignbulksenddocumentmapping_ResponseCompound : public OAIObject {
public:
    OAIEzsignbulksenddocumentmapping_ResponseCompound();
    OAIEzsignbulksenddocumentmapping_ResponseCompound(QString json);
    ~OAIEzsignbulksenddocumentmapping_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignbulksenddocumentmappingId() const;
    void setPkiEzsignbulksenddocumentmappingId(const qint32 &pki_ezsignbulksenddocumentmapping_id);
    bool is_pki_ezsignbulksenddocumentmapping_id_Set() const;
    bool is_pki_ezsignbulksenddocumentmapping_id_Valid() const;

    qint32 getFkiEzsignbulksendId() const;
    void setFkiEzsignbulksendId(const qint32 &fki_ezsignbulksend_id);
    bool is_fki_ezsignbulksend_id_Set() const;
    bool is_fki_ezsignbulksend_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    qint32 getIEzsignbulksenddocumentmappingOrder() const;
    void setIEzsignbulksenddocumentmappingOrder(const qint32 &i_ezsignbulksenddocumentmapping_order);
    bool is_i_ezsignbulksenddocumentmapping_order_Set() const;
    bool is_i_ezsignbulksenddocumentmapping_order_Valid() const;

    OAIEzsigntemplate_ResponseCompound getObjEzsigntemplate() const;
    void setObjEzsigntemplate(const OAIEzsigntemplate_ResponseCompound &obj_ezsigntemplate);
    bool is_obj_ezsigntemplate_Set() const;
    bool is_obj_ezsigntemplate_Valid() const;

    OAIEzsigntemplatepackage_ResponseCompound getObjEzsigntemplatepackage() const;
    void setObjEzsigntemplatepackage(const OAIEzsigntemplatepackage_ResponseCompound &obj_ezsigntemplatepackage);
    bool is_obj_ezsigntemplatepackage_Set() const;
    bool is_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignbulksenddocumentmapping_id;
    bool m_pki_ezsignbulksenddocumentmapping_id_isSet;
    bool m_pki_ezsignbulksenddocumentmapping_id_isValid;

    qint32 fki_ezsignbulksend_id;
    bool m_fki_ezsignbulksend_id_isSet;
    bool m_fki_ezsignbulksend_id_isValid;

    qint32 fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    qint32 fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    qint32 i_ezsignbulksenddocumentmapping_order;
    bool m_i_ezsignbulksenddocumentmapping_order_isSet;
    bool m_i_ezsignbulksenddocumentmapping_order_isValid;

    OAIEzsigntemplate_ResponseCompound obj_ezsigntemplate;
    bool m_obj_ezsigntemplate_isSet;
    bool m_obj_ezsigntemplate_isValid;

    OAIEzsigntemplatepackage_ResponseCompound obj_ezsigntemplatepackage;
    bool m_obj_ezsigntemplatepackage_isSet;
    bool m_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksenddocumentmapping_ResponseCompound)

#endif // OAIEzsignbulksenddocumentmapping_ResponseCompound_H
