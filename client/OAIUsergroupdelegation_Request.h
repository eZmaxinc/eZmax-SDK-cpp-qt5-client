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
 * OAIUsergroupdelegation_Request.h
 *
 * A Usergroupdelegation Object
 */

#ifndef OAIUsergroupdelegation_Request_H
#define OAIUsergroupdelegation_Request_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUsergroupdelegation_Request : public OAIObject {
public:
    OAIUsergroupdelegation_Request();
    OAIUsergroupdelegation_Request(QString json);
    ~OAIUsergroupdelegation_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUsergroupdelegationId() const;
    void setPkiUsergroupdelegationId(const qint32 &pki_usergroupdelegation_id);
    bool is_pki_usergroupdelegation_id_Set() const;
    bool is_pki_usergroupdelegation_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_usergroupdelegation_id;
    bool m_pki_usergroupdelegation_id_isSet;
    bool m_pki_usergroupdelegation_id_isValid;

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUsergroupdelegation_Request)

#endif // OAIUsergroupdelegation_Request_H
