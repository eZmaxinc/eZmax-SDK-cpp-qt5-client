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
 * OAIEzsigntemplatesignature_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplatesignature_ResponseCompound_allOf_H
#define OAIEzsigntemplatesignature_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplatesignaturecustomdate_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesignaturecustomdate_ResponseCompound;

class OAIEzsigntemplatesignature_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsigntemplatesignature_ResponseCompound_allOf();
    OAIEzsigntemplatesignature_ResponseCompound_allOf(QString json);
    ~OAIEzsigntemplatesignature_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

    bool b_ezsigntemplatesignature_customdate;
    bool m_b_ezsigntemplatesignature_customdate_isSet;
    bool m_b_ezsigntemplatesignature_customdate_isValid;

    QList<OAIEzsigntemplatesignaturecustomdate_ResponseCompound> a_obj_ezsigntemplatesignaturecustomdate;
    bool m_a_obj_ezsigntemplatesignaturecustomdate_isSet;
    bool m_a_obj_ezsigntemplatesignaturecustomdate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesignature_ResponseCompound_allOf)

#endif // OAIEzsigntemplatesignature_ResponseCompound_allOf_H
