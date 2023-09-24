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
 * OAIScim_Group.h
 *
 * 
 */

#ifndef OAIScim_Group_H
#define OAIScim_Group_H

#include <QJsonObject>

#include "OAIScim_GroupMember.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIScim_GroupMember;

class OAIScim_Group : public OAIObject {
public:
    OAIScim_Group();
    OAIScim_Group(QString json);
    ~OAIScim_Group() override;

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

    QList<OAIScim_GroupMember> getMembers() const;
    void setMembers(const QList<OAIScim_GroupMember> &members);
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

    QList<OAIScim_GroupMember> m_members;
    bool m_members_isSet;
    bool m_members_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIScim_Group)

#endif // OAIScim_Group_H
