/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsigntemplatepublic/getEzsigntemplatepublicDetails
 */

#ifndef Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload_H
#define Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload_H

#include <QJsonObject>

#include "Custom_Branding_Response.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_Branding_Response;

class Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload : public Object {
public:
    Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload();
    Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload(QString json);
    ~Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Custom_Branding_Response getObjBranding() const;
    void setObjBranding(const Custom_Branding_Response &obj_branding);
    bool is_obj_branding_Set() const;
    bool is_obj_branding_Valid() const;

    qint32 getFkiUserlogintypeId() const;
    void setFkiUserlogintypeId(const qint32 &fki_userlogintype_id);
    bool is_fki_userlogintype_id_Set() const;
    bool is_fki_userlogintype_id_Valid() const;

    QList<QString> getASEzsigntemplatesignerDescription() const;
    void setASEzsigntemplatesignerDescription(const QList<QString> &a_s_ezsigntemplatesigner_description);
    bool is_a_s_ezsigntemplatesigner_description_Set() const;
    bool is_a_s_ezsigntemplatesigner_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Custom_Branding_Response m_obj_branding;
    bool m_obj_branding_isSet;
    bool m_obj_branding_isValid;

    qint32 m_fki_userlogintype_id;
    bool m_fki_userlogintype_id_isSet;
    bool m_fki_userlogintype_id_isValid;

    QList<QString> m_a_s_ezsigntemplatesigner_description;
    bool m_a_s_ezsigntemplatesigner_description_isSet;
    bool m_a_s_ezsigntemplatesigner_description_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload)

#endif // Ezsigntemplatepublic_getEzsigntemplatepublicDetails_v1_Response_mPayload_H
