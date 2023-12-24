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
 * Custom_Ezsignfoldertype_Response.h
 *
 * A Custom Ezsignfoldertype Object
 */

#ifndef Custom_Ezsignfoldertype_Response_H
#define Custom_Ezsignfoldertype_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Ezsignfoldertype_Response : public Object {
public:
    Custom_Ezsignfoldertype_Response();
    Custom_Ezsignfoldertype_Response(QString json);
    ~Custom_Ezsignfoldertype_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfoldertypeId() const;
    void setPkiEzsignfoldertypeId(const qint32 &pki_ezsignfoldertype_id);
    bool is_pki_ezsignfoldertype_id_Set() const;
    bool is_pki_ezsignfoldertype_id_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    bool isBEzsignfoldertypeSendproofezsignsigner() const;
    void setBEzsignfoldertypeSendproofezsignsigner(const bool &b_ezsignfoldertype_sendproofezsignsigner);
    bool is_b_ezsignfoldertype_sendproofezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_sendproofezsignsigner_Valid() const;

    bool isBEzsignfoldertypeIncludeproofsigner() const;
    void setBEzsignfoldertypeIncludeproofsigner(const bool &b_ezsignfoldertype_includeproofsigner);
    bool is_b_ezsignfoldertype_includeproofsigner_Set() const;
    bool is_b_ezsignfoldertype_includeproofsigner_Valid() const;

    bool isBEzsignfoldertypeIncludeproofuser() const;
    void setBEzsignfoldertypeIncludeproofuser(const bool &b_ezsignfoldertype_includeproofuser);
    bool is_b_ezsignfoldertype_includeproofuser_Set() const;
    bool is_b_ezsignfoldertype_includeproofuser_Valid() const;

    bool isBEzsignfoldertypeAllowdownloadattachmentezsignsigner() const;
    void setBEzsignfoldertypeAllowdownloadattachmentezsignsigner(const bool &b_ezsignfoldertype_allowdownloadattachmentezsignsigner);
    bool is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_Valid() const;

    bool isBEzsignfoldertypeAllowdownloadproofezsignsigner() const;
    void setBEzsignfoldertypeAllowdownloadproofezsignsigner(const bool &b_ezsignfoldertype_allowdownloadproofezsignsigner);
    bool is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Set() const;
    bool is_b_ezsignfoldertype_allowdownloadproofezsignsigner_Valid() const;

    bool isBEzsignfoldertypeDelegate() const;
    void setBEzsignfoldertypeDelegate(const bool &b_ezsignfoldertype_delegate);
    bool is_b_ezsignfoldertype_delegate_Set() const;
    bool is_b_ezsignfoldertype_delegate_Valid() const;

    bool isBEzsignfoldertypeReassign() const;
    void setBEzsignfoldertypeReassign(const bool &b_ezsignfoldertype_reassign);
    bool is_b_ezsignfoldertype_reassign_Set() const;
    bool is_b_ezsignfoldertype_reassign_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignfoldertype_id;
    bool m_pki_ezsignfoldertype_id_isSet;
    bool m_pki_ezsignfoldertype_id_isValid;

    QString m_s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    bool m_b_ezsignfoldertype_sendproofezsignsigner;
    bool m_b_ezsignfoldertype_sendproofezsignsigner_isSet;
    bool m_b_ezsignfoldertype_sendproofezsignsigner_isValid;

    bool m_b_ezsignfoldertype_includeproofsigner;
    bool m_b_ezsignfoldertype_includeproofsigner_isSet;
    bool m_b_ezsignfoldertype_includeproofsigner_isValid;

    bool m_b_ezsignfoldertype_includeproofuser;
    bool m_b_ezsignfoldertype_includeproofuser_isSet;
    bool m_b_ezsignfoldertype_includeproofuser_isValid;

    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner;
    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isSet;
    bool m_b_ezsignfoldertype_allowdownloadattachmentezsignsigner_isValid;

    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner;
    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isSet;
    bool m_b_ezsignfoldertype_allowdownloadproofezsignsigner_isValid;

    bool m_b_ezsignfoldertype_delegate;
    bool m_b_ezsignfoldertype_delegate_isSet;
    bool m_b_ezsignfoldertype_delegate_isValid;

    bool m_b_ezsignfoldertype_reassign;
    bool m_b_ezsignfoldertype_reassign_isSet;
    bool m_b_ezsignfoldertype_reassign_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Ezsignfoldertype_Response)

#endif // Custom_Ezsignfoldertype_Response_H
