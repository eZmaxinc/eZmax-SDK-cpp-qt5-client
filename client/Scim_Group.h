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
 * Scim_Group.h
 *
 * 
 */

#ifndef Scim_Group_H
#define Scim_Group_H

#include <QJsonObject>

#include "Scim_GroupMember.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Scim_GroupMember;

class Scim_Group : public Object {
public:
    Scim_Group();
    Scim_Group(QString json);
    ~Scim_Group() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);
    bool is_display_name_Set() const;
    bool is_display_name_Valid() const;

    QList<Scim_GroupMember> getMembers() const;
    void setMembers(const QList<Scim_GroupMember> &members);
    bool is_members_Set() const;
    bool is_members_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString m_display_name;
    bool m_display_name_isSet;
    bool m_display_name_isValid;

    QList<Scim_GroupMember> m_members;
    bool m_members_isSet;
    bool m_members_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Scim_Group)

#endif // Scim_Group_H
