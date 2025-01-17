/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignuser_ResponseCompound.h
 *
 * A Ezsignuser Object
 */

#ifndef Ezsignuser_ResponseCompound_H
#define Ezsignuser_ResponseCompound_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Contact_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Contact_ResponseCompound;
class Common_Audit;

class Ezsignuser_ResponseCompound : public Object {
public:
    Ezsignuser_ResponseCompound();
    Ezsignuser_ResponseCompound(QString json);
    ~Ezsignuser_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignuserId() const;
    void setPkiEzsignuserId(const qint32 &pki_ezsignuser_id);
    bool is_pki_ezsignuser_id_Set() const;
    bool is_pki_ezsignuser_id_Valid() const;

    qint32 getFkiContactId() const;
    void setFkiContactId(const qint32 &fki_contact_id);
    bool is_fki_contact_id_Set() const;
    bool is_fki_contact_id_Valid() const;

    Contact_ResponseCompound getObjContact() const;
    void setObjContact(const Contact_ResponseCompound &obj_contact);
    bool is_obj_contact_Set() const;
    bool is_obj_contact_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignuser_id;
    bool m_pki_ezsignuser_id_isSet;
    bool m_pki_ezsignuser_id_isValid;

    qint32 m_fki_contact_id;
    bool m_fki_contact_id_isSet;
    bool m_fki_contact_id_isValid;

    Contact_ResponseCompound m_obj_contact;
    bool m_obj_contact_isSet;
    bool m_obj_contact_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignuser_ResponseCompound)

#endif // Ezsignuser_ResponseCompound_H
