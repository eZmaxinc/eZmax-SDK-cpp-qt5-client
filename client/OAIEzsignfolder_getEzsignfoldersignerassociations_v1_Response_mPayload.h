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
 * OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsignfolder}/getEzsignfoldersignerassociations
 */

#ifndef OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload_H
#define OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldersignerassociation_ResponseCompound;

class OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload();
    OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldersignerassociation_ResponseCompound> getAObjEzsignfoldersignerassociation() const;
    void setAObjEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_ResponseCompound> &a_obj_ezsignfoldersignerassociation);
    bool is_a_obj_ezsignfoldersignerassociation_Set() const;
    bool is_a_obj_ezsignfoldersignerassociation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldersignerassociation_ResponseCompound> a_obj_ezsignfoldersignerassociation;
    bool m_a_obj_ezsignfoldersignerassociation_isSet;
    bool m_a_obj_ezsignfoldersignerassociation_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload)

#endif // OAIEzsignfolder_getEzsignfoldersignerassociations_v1_Response_mPayload_H
