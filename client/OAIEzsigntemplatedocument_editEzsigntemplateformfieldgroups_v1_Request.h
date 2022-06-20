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
 * OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplateformfieldgroups
 */

#ifndef OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request_H
#define OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplateformfieldgroup_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplateformfieldgroup_RequestCompound;

class OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request();
    OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request(QString json);
    ~OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplateformfieldgroup_RequestCompound> getAObjEzsigntemplateformfieldgroup() const;
    void setAObjEzsigntemplateformfieldgroup(const QList<OAIEzsigntemplateformfieldgroup_RequestCompound> &a_obj_ezsigntemplateformfieldgroup);
    bool is_a_obj_ezsigntemplateformfieldgroup_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplateformfieldgroup_RequestCompound> a_obj_ezsigntemplateformfieldgroup;
    bool m_a_obj_ezsigntemplateformfieldgroup_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request)

#endif // OAIEzsigntemplatedocument_editEzsigntemplateformfieldgroups_v1_Request_H
