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
 * Authenticationexternal_ResponseCompound.h
 *
 * A Authenticationexternal Object
 */

#ifndef Authenticationexternal_ResponseCompound_H
#define Authenticationexternal_ResponseCompound_H

#include <QJsonObject>

#include "Common_Audit.h"
#include "Field_eAuthenticationexternalType.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Audit;

class Authenticationexternal_ResponseCompound : public Object {
public:
    Authenticationexternal_ResponseCompound();
    Authenticationexternal_ResponseCompound(QString json);
    ~Authenticationexternal_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiAuthenticationexternalId() const;
    void setPkiAuthenticationexternalId(const qint32 &pki_authenticationexternal_id);
    bool is_pki_authenticationexternal_id_Set() const;
    bool is_pki_authenticationexternal_id_Valid() const;

    QString getSAuthenticationexternalDescription() const;
    void setSAuthenticationexternalDescription(const QString &s_authenticationexternal_description);
    bool is_s_authenticationexternal_description_Set() const;
    bool is_s_authenticationexternal_description_Valid() const;

    Field_eAuthenticationexternalType getEAuthenticationexternalType() const;
    void setEAuthenticationexternalType(const Field_eAuthenticationexternalType &e_authenticationexternal_type);
    bool is_e_authenticationexternal_type_Set() const;
    bool is_e_authenticationexternal_type_Valid() const;

    bool isBAuthenticationexternalConnected() const;
    void setBAuthenticationexternalConnected(const bool &b_authenticationexternal_connected);
    bool is_b_authenticationexternal_connected_Set() const;
    bool is_b_authenticationexternal_connected_Valid() const;

    QString getSAuthenticationexternalAuthorizationurl() const;
    void setSAuthenticationexternalAuthorizationurl(const QString &s_authenticationexternal_authorizationurl);
    bool is_s_authenticationexternal_authorizationurl_Set() const;
    bool is_s_authenticationexternal_authorizationurl_Valid() const;

    Common_Audit getObjAudit() const;
    void setObjAudit(const Common_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_authenticationexternal_id;
    bool m_pki_authenticationexternal_id_isSet;
    bool m_pki_authenticationexternal_id_isValid;

    QString m_s_authenticationexternal_description;
    bool m_s_authenticationexternal_description_isSet;
    bool m_s_authenticationexternal_description_isValid;

    Field_eAuthenticationexternalType m_e_authenticationexternal_type;
    bool m_e_authenticationexternal_type_isSet;
    bool m_e_authenticationexternal_type_isValid;

    bool m_b_authenticationexternal_connected;
    bool m_b_authenticationexternal_connected_isSet;
    bool m_b_authenticationexternal_connected_isValid;

    QString m_s_authenticationexternal_authorizationurl;
    bool m_s_authenticationexternal_authorizationurl_isSet;
    bool m_s_authenticationexternal_authorizationurl_isValid;

    Common_Audit m_obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Authenticationexternal_ResponseCompound)

#endif // Authenticationexternal_ResponseCompound_H
