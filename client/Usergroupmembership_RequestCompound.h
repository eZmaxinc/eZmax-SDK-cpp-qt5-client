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
 * Usergroupmembership_RequestCompound.h
 *
 * A Usergroupmembership Object and children
 */

#ifndef Usergroupmembership_RequestCompound_H
#define Usergroupmembership_RequestCompound_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Usergroupmembership_RequestCompound : public Object {
public:
    Usergroupmembership_RequestCompound();
    Usergroupmembership_RequestCompound(QString json);
    ~Usergroupmembership_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupmembershipId() const;
    void setPkiUsergroupmembershipId(const qint32 &pki_usergroupmembership_id);
    bool is_pki_usergroupmembership_id_Set() const;
    bool is_pki_usergroupmembership_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiUsergroupexternalId() const;
    void setFkiUsergroupexternalId(const qint32 &fki_usergroupexternal_id);
    bool is_fki_usergroupexternal_id_Set() const;
    bool is_fki_usergroupexternal_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroupmembership_id;
    bool m_pki_usergroupmembership_id_isSet;
    bool m_pki_usergroupmembership_id_isValid;

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 m_fki_usergroupexternal_id;
    bool m_fki_usergroupexternal_id_isSet;
    bool m_fki_usergroupexternal_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupmembership_RequestCompound)

#endif // Usergroupmembership_RequestCompound_H
