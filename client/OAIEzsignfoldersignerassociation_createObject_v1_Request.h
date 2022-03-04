/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef OAIEzsignfoldersignerassociation_createObject_v1_Request_H
#define OAIEzsignfoldersignerassociation_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_Request.h"
#include "OAIEzsignfoldersignerassociation_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldersignerassociation_Request;
class OAIEzsignfoldersignerassociation_RequestCompound;

class OAIEzsignfoldersignerassociation_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_createObject_v1_Request();
    OAIEzsignfoldersignerassociation_createObject_v1_Request(QString json);
    ~OAIEzsignfoldersignerassociation_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfoldersignerassociation_Request getObjEzsignfoldersignerassociation() const;
    void setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_Request &obj_ezsignfoldersignerassociation);
    bool is_obj_ezsignfoldersignerassociation_Set() const;
    bool is_obj_ezsignfoldersignerassociation_Valid() const;

    OAIEzsignfoldersignerassociation_RequestCompound getObjEzsignfoldersignerassociationCompound() const;
    void setObjEzsignfoldersignerassociationCompound(const OAIEzsignfoldersignerassociation_RequestCompound &obj_ezsignfoldersignerassociation_compound);
    bool is_obj_ezsignfoldersignerassociation_compound_Set() const;
    bool is_obj_ezsignfoldersignerassociation_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfoldersignerassociation_Request obj_ezsignfoldersignerassociation;
    bool m_obj_ezsignfoldersignerassociation_isSet;
    bool m_obj_ezsignfoldersignerassociation_isValid;

    OAIEzsignfoldersignerassociation_RequestCompound obj_ezsignfoldersignerassociation_compound;
    bool m_obj_ezsignfoldersignerassociation_compound_isSet;
    bool m_obj_ezsignfoldersignerassociation_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_createObject_v1_Request)

#endif // OAIEzsignfoldersignerassociation_createObject_v1_Request_H
