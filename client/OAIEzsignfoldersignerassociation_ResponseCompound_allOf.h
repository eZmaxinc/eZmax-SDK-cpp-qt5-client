/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsignfoldersignerassociation_ResponseCompound_allOf_H
#define OAIEzsignfoldersignerassociation_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_ResponseCompound_User.h"
#include "OAIEzsignsigner_ResponseCompound.h"
#include "OAIEzsignsignergroup_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignergroup_ResponseCompound;
class OAIEzsignfoldersignerassociation_ResponseCompound_User;
class OAIEzsignsigner_ResponseCompound;

class OAIEzsignfoldersignerassociation_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_ResponseCompound_allOf();
    OAIEzsignfoldersignerassociation_ResponseCompound_allOf(QString json);
    ~OAIEzsignfoldersignerassociation_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsignergroup_ResponseCompound getObjEzsignsignergroup() const;
    void setObjEzsignsignergroup(const OAIEzsignsignergroup_ResponseCompound &obj_ezsignsignergroup);
    bool is_obj_ezsignsignergroup_Set() const;
    bool is_obj_ezsignsignergroup_Valid() const;

    OAIEzsignfoldersignerassociation_ResponseCompound_User getObjUser() const;
    void setObjUser(const OAIEzsignfoldersignerassociation_ResponseCompound_User &obj_user);
    bool is_obj_user_Set() const;
    bool is_obj_user_Valid() const;

    OAIEzsignsigner_ResponseCompound getObjEzsignsigner() const;
    void setObjEzsignsigner(const OAIEzsignsigner_ResponseCompound &obj_ezsignsigner);
    bool is_obj_ezsignsigner_Set() const;
    bool is_obj_ezsignsigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsignergroup_ResponseCompound obj_ezsignsignergroup;
    bool m_obj_ezsignsignergroup_isSet;
    bool m_obj_ezsignsignergroup_isValid;

    OAIEzsignfoldersignerassociation_ResponseCompound_User obj_user;
    bool m_obj_user_isSet;
    bool m_obj_user_isValid;

    OAIEzsignsigner_ResponseCompound obj_ezsignsigner;
    bool m_obj_ezsignsigner_isSet;
    bool m_obj_ezsignsigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_ResponseCompound_allOf)

#endif // OAIEzsignfoldersignerassociation_ResponseCompound_allOf_H
