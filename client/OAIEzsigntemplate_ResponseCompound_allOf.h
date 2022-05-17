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
 * OAIEzsigntemplate_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplate_ResponseCompound_allOf_H
#define OAIEzsigntemplate_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplatedocument_Response.h"
#include "OAIEzsigntemplatesigner_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatedocument_Response;
class OAIEzsigntemplatesigner_ResponseCompound;

class OAIEzsigntemplate_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsigntemplate_ResponseCompound_allOf();
    OAIEzsigntemplate_ResponseCompound_allOf(QString json);
    ~OAIEzsigntemplate_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    OAIEzsigntemplatedocument_Response obj_ezsigntemplatedocument;
    bool m_obj_ezsigntemplatedocument_isSet;
    bool m_obj_ezsigntemplatedocument_isValid;

    QList<OAIEzsigntemplatesigner_ResponseCompound> a_obj_ezsigntemplatesigner;
    bool m_a_obj_ezsigntemplatesigner_isSet;
    bool m_a_obj_ezsigntemplatesigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_ResponseCompound_allOf)

#endif // OAIEzsigntemplate_ResponseCompound_allOf_H
