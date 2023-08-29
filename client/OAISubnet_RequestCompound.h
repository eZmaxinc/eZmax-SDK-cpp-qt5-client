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
 * OAISubnet_RequestCompound.h
 *
 * A Subnet Object and children
 */

#ifndef OAISubnet_RequestCompound_H
#define OAISubnet_RequestCompound_H

#include <QJsonObject>

#include "OAIMultilingual_SubnetDescription.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_SubnetDescription;

class OAISubnet_RequestCompound : public OAIObject {
public:
    OAISubnet_RequestCompound();
    OAISubnet_RequestCompound(QString json);
    ~OAISubnet_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiSubnetId() const;
    void setPkiSubnetId(const qint32 &pki_subnet_id);
    bool is_pki_subnet_id_Set() const;
    bool is_pki_subnet_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    qint32 getFkiApikeyId() const;
    void setFkiApikeyId(const qint32 &fki_apikey_id);
    bool is_fki_apikey_id_Set() const;
    bool is_fki_apikey_id_Valid() const;

    OAIMultilingual_SubnetDescription getObjSubnetDescription() const;
    void setObjSubnetDescription(const OAIMultilingual_SubnetDescription &obj_subnet_description);
    bool is_obj_subnet_description_Set() const;
    bool is_obj_subnet_description_Valid() const;

    qint64 getISubnetNetwork() const;
    void setISubnetNetwork(const qint64 &i_subnet_network);
    bool is_i_subnet_network_Set() const;
    bool is_i_subnet_network_Valid() const;

    qint64 getISubnetMask() const;
    void setISubnetMask(const qint64 &i_subnet_mask);
    bool is_i_subnet_mask_Set() const;
    bool is_i_subnet_mask_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_subnet_id;
    bool m_pki_subnet_id_isSet;
    bool m_pki_subnet_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    qint32 m_fki_apikey_id;
    bool m_fki_apikey_id_isSet;
    bool m_fki_apikey_id_isValid;

    OAIMultilingual_SubnetDescription m_obj_subnet_description;
    bool m_obj_subnet_description_isSet;
    bool m_obj_subnet_description_isValid;

    qint64 m_i_subnet_network;
    bool m_i_subnet_network_isSet;
    bool m_i_subnet_network_isValid;

    qint64 m_i_subnet_mask;
    bool m_i_subnet_mask_isSet;
    bool m_i_subnet_mask_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAISubnet_RequestCompound)

#endif // OAISubnet_RequestCompound_H
