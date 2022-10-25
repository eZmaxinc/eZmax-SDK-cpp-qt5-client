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
 * OAICustom_FormDataEzsignformfieldgroup_Response.h
 *
 * An FormDataSigner-&gt;Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef OAICustom_FormDataEzsignformfieldgroup_Response_H
#define OAICustom_FormDataEzsignformfieldgroup_Response_H

#include <QJsonObject>

#include "OAICustom_FormDataEzsignformfield_Response.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_FormDataEzsignformfield_Response;

class OAICustom_FormDataEzsignformfieldgroup_Response : public OAIObject {
public:
    OAICustom_FormDataEzsignformfieldgroup_Response();
    OAICustom_FormDataEzsignformfieldgroup_Response(QString json);
    ~OAICustom_FormDataEzsignformfieldgroup_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfieldgroupLabel() const;
    void setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label);
    bool is_s_ezsignformfieldgroup_label_Set() const;
    bool is_s_ezsignformfieldgroup_label_Valid() const;

    QList<OAICustom_FormDataEzsignformfield_Response> getAObjEzsignformfield() const;
    void setAObjEzsignformfield(const QList<OAICustom_FormDataEzsignformfield_Response> &a_obj_ezsignformfield);
    bool is_a_obj_ezsignformfield_Set() const;
    bool is_a_obj_ezsignformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsignformfieldgroup_label;
    bool m_s_ezsignformfieldgroup_label_isSet;
    bool m_s_ezsignformfieldgroup_label_isValid;

    QList<OAICustom_FormDataEzsignformfield_Response> a_obj_ezsignformfield;
    bool m_a_obj_ezsignformfield_isSet;
    bool m_a_obj_ezsignformfield_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_FormDataEzsignformfieldgroup_Response)

#endif // OAICustom_FormDataEzsignformfieldgroup_Response_H
