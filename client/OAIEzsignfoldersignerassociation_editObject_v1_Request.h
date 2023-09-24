/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}
 */

#ifndef OAIEzsignfoldersignerassociation_editObject_v1_Request_H
#define OAIEzsignfoldersignerassociation_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldersignerassociation_RequestCompound;

class OAIEzsignfoldersignerassociation_editObject_v1_Request : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_editObject_v1_Request();
    OAIEzsignfoldersignerassociation_editObject_v1_Request(QString json);
    ~OAIEzsignfoldersignerassociation_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfoldersignerassociation_RequestCompound getObjEzsignfoldersignerassociation() const;
    void setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_RequestCompound &obj_ezsignfoldersignerassociation);
    bool is_obj_ezsignfoldersignerassociation_Set() const;
    bool is_obj_ezsignfoldersignerassociation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfoldersignerassociation_RequestCompound m_obj_ezsignfoldersignerassociation;
    bool m_obj_ezsignfoldersignerassociation_isSet;
    bool m_obj_ezsignfoldersignerassociation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_editObject_v1_Request)

#endif // OAIEzsignfoldersignerassociation_editObject_v1_Request_H
