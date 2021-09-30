/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignformfieldgroup_ResponseCompound.h
 *
 * An Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef OAIEzsignformfieldgroup_ResponseCompound_H
#define OAIEzsignformfieldgroup_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsignformfield_Response.h"
#include "OAIEzsignformfieldgroup_Response.h"
#include "OAIEzsignformfieldgroup_ResponseCompound_allOf.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignformfieldgroup_ResponseCompound : public OAIObject {
public:
    OAIEzsignformfieldgroup_ResponseCompound();
    OAIEzsignformfieldgroup_ResponseCompound(QString json);
    ~OAIEzsignformfieldgroup_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignformfieldgroupLabel() const;
    void setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label);
    bool is_s_ezsignformfieldgroup_label_Set() const;
    bool is_s_ezsignformfieldgroup_label_Valid() const;

    QList<OAIEzsignformfield_Response> getAObjEzsignformfield() const;
    void setAObjEzsignformfield(const QList<OAIEzsignformfield_Response> &a_obj_ezsignformfield);
    bool is_a_obj_ezsignformfield_Set() const;
    bool is_a_obj_ezsignformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsignformfieldgroup_label;
    bool m_s_ezsignformfieldgroup_label_isSet;
    bool m_s_ezsignformfieldgroup_label_isValid;

    QList<OAIEzsignformfield_Response> a_obj_ezsignformfield;
    bool m_a_obj_ezsignformfield_isSet;
    bool m_a_obj_ezsignformfield_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroup_ResponseCompound)

#endif // OAIEzsignformfieldgroup_ResponseCompound_H
