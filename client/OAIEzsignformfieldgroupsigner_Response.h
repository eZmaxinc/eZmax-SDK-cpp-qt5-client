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
 * OAIEzsignformfieldgroupsigner_Response.h
 *
 * A Ezsignformfieldgroupsigner Object
 */

#ifndef OAIEzsignformfieldgroupsigner_Response_H
#define OAIEzsignformfieldgroupsigner_Response_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignformfieldgroupsigner_Response : public OAIObject {
public:
    OAIEzsignformfieldgroupsigner_Response();
    OAIEzsignformfieldgroupsigner_Response(QString json);
    ~OAIEzsignformfieldgroupsigner_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignformfieldgroupsignerId() const;
    void setPkiEzsignformfieldgroupsignerId(const qint32 &pki_ezsignformfieldgroupsigner_id);
    bool is_pki_ezsignformfieldgroupsigner_id_Set() const;
    bool is_pki_ezsignformfieldgroupsigner_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignformfieldgroupsigner_id;
    bool m_pki_ezsignformfieldgroupsigner_id_isSet;
    bool m_pki_ezsignformfieldgroupsigner_id_isValid;

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignformfieldgroupsigner_Response)

#endif // OAIEzsignformfieldgroupsigner_Response_H
