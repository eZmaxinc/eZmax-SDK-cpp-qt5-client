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
 * OAIEzsigntemplatedocument_editObject_v1_Response_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplatedocument_editObject_v1_Response_allOf_H
#define OAIEzsigntemplatedocument_editObject_v1_Response_allOf_H

#include <QJsonObject>

#include "OAICommon_Response_Warning.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Response_Warning;

class OAIEzsigntemplatedocument_editObject_v1_Response_allOf : public OAIObject {
public:
    OAIEzsigntemplatedocument_editObject_v1_Response_allOf();
    OAIEzsigntemplatedocument_editObject_v1_Response_allOf(QString json);
    ~OAIEzsigntemplatedocument_editObject_v1_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAICommon_Response_Warning> getAObjWarning() const;
    void setAObjWarning(const QList<OAICommon_Response_Warning> &a_obj_warning);
    bool is_a_obj_warning_Set() const;
    bool is_a_obj_warning_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAICommon_Response_Warning> a_obj_warning;
    bool m_a_obj_warning_isSet;
    bool m_a_obj_warning_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_editObject_v1_Response_allOf)

#endif // OAIEzsigntemplatedocument_editObject_v1_Response_allOf_H
