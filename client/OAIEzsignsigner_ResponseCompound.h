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
 * OAIEzsignsigner_ResponseCompound.h
 *
 * An Ezsignsigner Object and children to create a complete structure
 */

#ifndef OAIEzsignsigner_ResponseCompound_H
#define OAIEzsignsigner_ResponseCompound_H

#include <QJsonObject>

#include "OAIEzsignsigner_Response.h"
#include "OAIEzsignsigner_ResponseCompound_Contact.h"
#include "OAIEzsignsigner_ResponseCompound_allOf.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsigner_ResponseCompound_Contact;

class OAIEzsignsigner_ResponseCompound : public OAIObject {
public:
    OAIEzsignsigner_ResponseCompound();
    OAIEzsignsigner_ResponseCompound(QString json);
    ~OAIEzsignsigner_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignerId() const;
    void setPkiEzsignsignerId(const qint32 &pki_ezsignsigner_id);
    bool is_pki_ezsignsigner_id_Set() const;
    bool is_pki_ezsignsigner_id_Valid() const;

    qint32 getFkiTaxassignmentId() const;
    void setFkiTaxassignmentId(const qint32 &fki_taxassignment_id);
    bool is_fki_taxassignment_id_Set() const;
    bool is_fki_taxassignment_id_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    qint32 getFkiUserlogintypeId() const;
    void setFkiUserlogintypeId(const qint32 &fki_userlogintype_id);
    bool is_fki_userlogintype_id_Set() const;
    bool is_fki_userlogintype_id_Valid() const;

    QString getSUserlogintypeDescriptionX() const;
    void setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x);
    bool is_s_userlogintype_description_x_Set() const;
    bool is_s_userlogintype_description_x_Valid() const;

    OAIEzsignsigner_ResponseCompound_Contact getObjContact() const;
    void setObjContact(const OAIEzsignsigner_ResponseCompound_Contact &obj_contact);
    bool is_obj_contact_Set() const;
    bool is_obj_contact_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignsigner_id;
    bool m_pki_ezsignsigner_id_isSet;
    bool m_pki_ezsignsigner_id_isValid;

    qint32 fki_taxassignment_id;
    bool m_fki_taxassignment_id_isSet;
    bool m_fki_taxassignment_id_isValid;

    qint32 fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    qint32 fki_userlogintype_id;
    bool m_fki_userlogintype_id_isSet;
    bool m_fki_userlogintype_id_isValid;

    QString s_userlogintype_description_x;
    bool m_s_userlogintype_description_x_isSet;
    bool m_s_userlogintype_description_x_isValid;

    OAIEzsignsigner_ResponseCompound_Contact obj_contact;
    bool m_obj_contact_isSet;
    bool m_obj_contact_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsigner_ResponseCompound)

#endif // OAIEzsignsigner_ResponseCompound_H
