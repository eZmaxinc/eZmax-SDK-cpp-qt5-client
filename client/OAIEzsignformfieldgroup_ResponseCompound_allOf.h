/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfieldgroup_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignformfieldgroup_ResponseCompound_allOf_H
#define OAIEzsignformfieldgroup_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAICustom_DropdownElement_ResponseCompound.h"
#include "OAIEzsignformfield_ResponseCompound.h"
#include "OAIEzsignformfieldgroupsigner_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignformfield_ResponseCompound;
class OAICustom_DropdownElement_ResponseCompound;
class OAIEzsignformfieldgroupsigner_ResponseCompound;

class OAIEzsignformfieldgroup_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsignformfieldgroup_ResponseCompound_allOf();
    OAIEzsignformfieldgroup_ResponseCompound_allOf(QString json);
    ~OAIEzsignformfieldgroup_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignformfield_ResponseCompound> getAObjEzsignformfield() const;
    void setAObjEzsignformfield(const QList<OAIEzsignformfield_ResponseCompound> &a_obj_ezsignformfield);
    bool is_a_obj_ezsignformfield_Set() const;
    bool is_a_obj_ezsignformfield_Valid() const;

    QList<OAICustom_DropdownElement_ResponseCompound> getAObjDropdownElement() const;
    void setAObjDropdownElement(const QList<OAICustom_DropdownElement_ResponseCompound> &a_obj_dropdown_element);
    bool is_a_obj_dropdown_element_Set() const;
    bool is_a_obj_dropdown_element_Valid() const;

    QList<OAIEzsignformfieldgroupsigner_ResponseCompound> getAObjEzsignformfieldgroupsigner() const;
    void setAObjEzsignformfieldgroupsigner(const QList<OAIEzsignformfieldgroupsigner_ResponseCompound> &a_obj_ezsignformfieldgroupsigner);
    bool is_a_obj_ezsignformfieldgroupsigner_Set() const;
    bool is_a_obj_ezsignformfieldgroupsigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignformfield_ResponseCompound> a_obj_ezsignformfield;
    bool m_a_obj_ezsignformfield_isSet;
    bool m_a_obj_ezsignformfield_isValid;

    QList<OAICustom_DropdownElement_ResponseCompound> a_obj_dropdown_element;
    bool m_a_obj_dropdown_element_isSet;
    bool m_a_obj_dropdown_element_isValid;

    QList<OAIEzsignformfieldgroupsigner_ResponseCompound> a_obj_ezsignformfieldgroupsigner;
    bool m_a_obj_ezsignformfieldgroupsigner_isSet;
    bool m_a_obj_ezsignformfieldgroupsigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroup_ResponseCompound_allOf)

#endif // OAIEzsignformfieldgroup_ResponseCompound_allOf_H
