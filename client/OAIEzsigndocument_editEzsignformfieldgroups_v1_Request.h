/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_editEzsignformfieldgroups_v1_Request.h
 *
 * Request for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignformfieldgroups
 */

#ifndef OAIEzsigndocument_editEzsignformfieldgroups_v1_Request_H
#define OAIEzsigndocument_editEzsignformfieldgroups_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignformfieldgroup_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignformfieldgroup_RequestCompound;

class OAIEzsigndocument_editEzsignformfieldgroups_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_editEzsignformfieldgroups_v1_Request();
    OAIEzsigndocument_editEzsignformfieldgroups_v1_Request(QString json);
    ~OAIEzsigndocument_editEzsignformfieldgroups_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignformfieldgroup_RequestCompound> getAObjEzsignformfieldgroup() const;
    void setAObjEzsignformfieldgroup(const QList<OAIEzsignformfieldgroup_RequestCompound> &a_obj_ezsignformfieldgroup);
    bool is_a_obj_ezsignformfieldgroup_Set() const;
    bool is_a_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignformfieldgroup_RequestCompound> a_obj_ezsignformfieldgroup;
    bool m_a_obj_ezsignformfieldgroup_isSet;
    bool m_a_obj_ezsignformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_editEzsignformfieldgroups_v1_Request)

#endif // OAIEzsigndocument_editEzsignformfieldgroups_v1_Request_H
