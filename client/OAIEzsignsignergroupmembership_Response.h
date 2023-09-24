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
 * OAIEzsignsignergroupmembership_Response.h
 *
 * A Ezsignsignergroupmembership Object
 */

#ifndef OAIEzsignsignergroupmembership_Response_H
#define OAIEzsignsignergroupmembership_Response_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsignergroupmembership_Response : public OAIObject {
public:
    OAIEzsignsignergroupmembership_Response();
    OAIEzsignsignergroupmembership_Response(QString json);
    ~OAIEzsignsignergroupmembership_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignergroupmembershipId() const;
    void setPkiEzsignsignergroupmembershipId(const qint32 &pki_ezsignsignergroupmembership_id);
    bool is_pki_ezsignsignergroupmembership_id_Set() const;
    bool is_pki_ezsignsignergroupmembership_id_Valid() const;

    qint32 getFkiEzsignsignergroupId() const;
    void setFkiEzsignsignergroupId(const qint32 &fki_ezsignsignergroup_id);
    bool is_fki_ezsignsignergroup_id_Set() const;
    bool is_fki_ezsignsignergroup_id_Valid() const;

    qint32 getFkiEzsignsignerId() const;
    void setFkiEzsignsignerId(const qint32 &fki_ezsignsigner_id);
    bool is_fki_ezsignsigner_id_Set() const;
    bool is_fki_ezsignsigner_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiUsergroupId() const;
    void setFkiUsergroupId(const qint32 &fki_usergroup_id);
    bool is_fki_usergroup_id_Set() const;
    bool is_fki_usergroup_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsignergroupmembership_id;
    bool m_pki_ezsignsignergroupmembership_id_isSet;
    bool m_pki_ezsignsignergroupmembership_id_isValid;

    qint32 m_fki_ezsignsignergroup_id;
    bool m_fki_ezsignsignergroup_id_isSet;
    bool m_fki_ezsignsignergroup_id_isValid;

    qint32 m_fki_ezsignsigner_id;
    bool m_fki_ezsignsigner_id_isSet;
    bool m_fki_ezsignsigner_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 m_fki_usergroup_id;
    bool m_fki_usergroup_id_isSet;
    bool m_fki_usergroup_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignergroupmembership_Response)

#endif // OAIEzsignsignergroupmembership_Response_H
