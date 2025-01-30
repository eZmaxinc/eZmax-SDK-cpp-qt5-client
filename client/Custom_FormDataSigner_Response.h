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
 * Custom_FormDataSigner_Response.h
 *
 * A form Data Signer Object
 */

#ifndef Custom_FormDataSigner_Response_H
#define Custom_FormDataSigner_Response_H

#include <QJsonObject>

#include "Custom_FormDataEzsignformfieldgroup_Response.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Custom_FormDataEzsignformfieldgroup_Response;

class Custom_FormDataSigner_Response : public Object {
public:
    Custom_FormDataSigner_Response();
    Custom_FormDataSigner_Response(QString json);
    ~Custom_FormDataSigner_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    QString getSContactFirstname() const;
    void setSContactFirstname(const QString &s_contact_firstname);
    bool is_s_contact_firstname_Set() const;
    bool is_s_contact_firstname_Valid() const;

    QString getSContactLastname() const;
    void setSContactLastname(const QString &s_contact_lastname);
    bool is_s_contact_lastname_Set() const;
    bool is_s_contact_lastname_Valid() const;

    QList<Custom_FormDataEzsignformfieldgroup_Response> getAObjEzsignformfieldgroup() const;
    void setAObjEzsignformfieldgroup(const QList<Custom_FormDataEzsignformfieldgroup_Response> &a_obj_ezsignformfieldgroup);
    bool is_a_obj_ezsignformfieldgroup_Set() const;
    bool is_a_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    QString m_s_contact_firstname;
    bool m_s_contact_firstname_isSet;
    bool m_s_contact_firstname_isValid;

    QString m_s_contact_lastname;
    bool m_s_contact_lastname_isSet;
    bool m_s_contact_lastname_isValid;

    QList<Custom_FormDataEzsignformfieldgroup_Response> m_a_obj_ezsignformfieldgroup;
    bool m_a_obj_ezsignformfieldgroup_isSet;
    bool m_a_obj_ezsignformfieldgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_FormDataSigner_Response)

#endif // Custom_FormDataSigner_Response_H
