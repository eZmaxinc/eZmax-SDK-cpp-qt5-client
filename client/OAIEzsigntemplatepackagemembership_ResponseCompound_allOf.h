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
 * OAIEzsigntemplatepackagemembership_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplatepackagemembership_ResponseCompound_allOf_H
#define OAIEzsigntemplatepackagemembership_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplate_ResponseCompound.h"
#include "OAIEzsigntemplatepackagesignermembership_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_ResponseCompound;
class OAIEzsigntemplatepackagesignermembership_ResponseCompound;

class OAIEzsigntemplatepackagemembership_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsigntemplatepackagemembership_ResponseCompound_allOf();
    OAIEzsigntemplatepackagemembership_ResponseCompound_allOf(QString json);
    ~OAIEzsigntemplatepackagemembership_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplate_ResponseCompound getObjEzsigntemplate() const;
    void setObjEzsigntemplate(const OAIEzsigntemplate_ResponseCompound &obj_ezsigntemplate);
    bool is_obj_ezsigntemplate_Set() const;
    bool is_obj_ezsigntemplate_Valid() const;

    QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> getAObjEzsigntemplatepackagesignermembership() const;
    void setAObjEzsigntemplatepackagesignermembership(const QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> &a_obj_ezsigntemplatepackagesignermembership);
    bool is_a_obj_ezsigntemplatepackagesignermembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagesignermembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplate_ResponseCompound obj_ezsigntemplate;
    bool m_obj_ezsigntemplate_isSet;
    bool m_obj_ezsigntemplate_isValid;

    QList<OAIEzsigntemplatepackagesignermembership_ResponseCompound> a_obj_ezsigntemplatepackagesignermembership;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isSet;
    bool m_a_obj_ezsigntemplatepackagesignermembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagemembership_ResponseCompound_allOf)

#endif // OAIEzsigntemplatepackagemembership_ResponseCompound_allOf_H
