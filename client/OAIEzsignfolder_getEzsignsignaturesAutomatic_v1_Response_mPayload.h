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
 * OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignsignaturesAutomatic
 */

#ifndef OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload_H
#define OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response.h"
#include "OAIField_eEzsignsignatureType.h"
#include <QList>
#include <QSet>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response;

class OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload();
    OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload(QString json);
    ~OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QSet<OAIField_eEzsignsignatureType> getAEEzsignsignatureType() const;
    void setAEEzsignsignatureType(const QSet<OAIField_eEzsignsignatureType> &a_e_ezsignsignature_type);
    bool is_a_e_ezsignsignature_type_Set() const;
    bool is_a_e_ezsignsignature_type_Valid() const;

    QList<OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response> getAObjEzsignfolder() const;
    void setAObjEzsignfolder(const QList<OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response> &a_obj_ezsignfolder);
    bool is_a_obj_ezsignfolder_Set() const;
    bool is_a_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QSet<OAIField_eEzsignsignatureType> m_a_e_ezsignsignature_type;
    bool m_a_e_ezsignsignature_type_isSet;
    bool m_a_e_ezsignsignature_type_isValid;

    QList<OAICustom_EzsignfolderEzsignsignaturesAutomatic_Response> m_a_obj_ezsignfolder;
    bool m_a_obj_ezsignfolder_isSet;
    bool m_a_obj_ezsignfolder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload)

#endif // OAIEzsignfolder_getEzsignsignaturesAutomatic_v1_Response_mPayload_H
