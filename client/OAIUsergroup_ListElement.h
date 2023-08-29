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
 * OAIUsergroup_ListElement.h
 *
 * A Usergroup List Element
 */

#ifndef OAIUsergroup_ListElement_H
#define OAIUsergroup_ListElement_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroup_ListElement : public OAIObject {
public:
    OAIUsergroup_ListElement();
    OAIUsergroup_ListElement(QString json);
    ~OAIUsergroup_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupId() const;
    void setPkiUsergroupId(const qint32 &pki_usergroup_id);
    bool is_pki_usergroup_id_Set() const;
    bool is_pki_usergroup_id_Valid() const;

    QString getSUsergroupNameX() const;
    void setSUsergroupNameX(const QString &s_usergroup_name_x);
    bool is_s_usergroup_name_x_Set() const;
    bool is_s_usergroup_name_x_Valid() const;

    qint32 getICountUser() const;
    void setICountUser(const qint32 &i_count_user);
    bool is_i_count_user_Set() const;
    bool is_i_count_user_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroup_id;
    bool m_pki_usergroup_id_isSet;
    bool m_pki_usergroup_id_isValid;

    QString m_s_usergroup_name_x;
    bool m_s_usergroup_name_x_isSet;
    bool m_s_usergroup_name_x_isValid;

    qint32 m_i_count_user;
    bool m_i_count_user_isSet;
    bool m_i_count_user_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroup_ListElement)

#endif // OAIUsergroup_ListElement_H
