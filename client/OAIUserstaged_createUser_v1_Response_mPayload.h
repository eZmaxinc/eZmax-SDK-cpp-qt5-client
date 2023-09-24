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
 * OAIUserstaged_createUser_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/userstaged/{pkiUserstagedID}/createUser
 */

#ifndef OAIUserstaged_createUser_v1_Response_mPayload_H
#define OAIUserstaged_createUser_v1_Response_mPayload_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUserstaged_createUser_v1_Response_mPayload : public OAIObject {
public:
    OAIUserstaged_createUser_v1_Response_mPayload();
    OAIUserstaged_createUser_v1_Response_mPayload(QString json);
    ~OAIUserstaged_createUser_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserId() const;
    void setPkiUserId(const qint32 &pki_user_id);
    bool is_pki_user_id_Set() const;
    bool is_pki_user_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_user_id;
    bool m_pki_user_id_isSet;
    bool m_pki_user_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUserstaged_createUser_v1_Response_mPayload)

#endif // OAIUserstaged_createUser_v1_Response_mPayload_H
