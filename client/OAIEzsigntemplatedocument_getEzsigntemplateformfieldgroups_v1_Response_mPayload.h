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
 * OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocument}/getEzsigntemplateformfieldgroups
 */

#ifndef OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload_H
#define OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplateformfieldgroup_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplateformfieldgroup_ResponseCompound;

class OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload();
    OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplateformfieldgroup_ResponseCompound> getAObjEzsigntemplateformfieldgroup() const;
    void setAObjEzsigntemplateformfieldgroup(const QList<OAIEzsigntemplateformfieldgroup_ResponseCompound> &a_obj_ezsigntemplateformfieldgroup);
    bool is_a_obj_ezsigntemplateformfieldgroup_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplateformfieldgroup_ResponseCompound> a_obj_ezsigntemplateformfieldgroup;
    bool m_a_obj_ezsigntemplateformfieldgroup_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload)

#endif // OAIEzsigntemplatedocument_getEzsigntemplateformfieldgroups_v1_Response_mPayload_H
