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
 * OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf_H
#define OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplate_ResponseCompound.h"
#include "OAIEzsigntemplatepackage_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_ResponseCompound;
class OAIEzsigntemplatepackage_ResponseCompound;

class OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf();
    OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf(QString json);
    ~OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    OAIEzsigntemplate_ResponseCompound obj_ezsigntemplate;
    bool m_obj_ezsigntemplate_isSet;
    bool m_obj_ezsigntemplate_isValid;

    OAIEzsigntemplatepackage_ResponseCompound obj_ezsigntemplatepackage;
    bool m_obj_ezsigntemplatepackage_isSet;
    bool m_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf)

#endif // OAIEzsignbulksenddocumentmapping_ResponseCompound_allOf_H
