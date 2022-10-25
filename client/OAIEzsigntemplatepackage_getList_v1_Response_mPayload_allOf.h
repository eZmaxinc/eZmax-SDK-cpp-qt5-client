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
 * OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf_H
#define OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackage_ListElement.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackage_ListElement;

class OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf : public OAIObject {
public:
    OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf();
    OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf(QString json);
    ~OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackage_ListElement> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<OAIEzsigntemplatepackage_ListElement> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackage_ListElement> a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf)

#endif // OAIEzsigntemplatepackage_getList_v1_Response_mPayload_allOf_H
