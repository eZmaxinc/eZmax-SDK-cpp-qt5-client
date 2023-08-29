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
 * OAIApikey_RequestCompound.h
 *
 * An Apikey Object and children to create a complete structure
 */

#ifndef OAIApikey_RequestCompound_H
#define OAIApikey_RequestCompound_H

#include <QJsonObject>

#include "OAIMultilingual_ApikeyDescription.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_ApikeyDescription;

class OAIApikey_RequestCompound : public OAIObject {
public:
    OAIApikey_RequestCompound();
    OAIApikey_RequestCompound(QString json);
    ~OAIApikey_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiApikeyId() const;
    void setPkiApikeyId(const qint32 &pki_apikey_id);
    bool is_pki_apikey_id_Set() const;
    bool is_pki_apikey_id_Valid() const;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    OAIMultilingual_ApikeyDescription getObjApikeyDescription() const;
    void setObjApikeyDescription(const OAIMultilingual_ApikeyDescription &obj_apikey_description);
    bool is_obj_apikey_description_Set() const;
    bool is_obj_apikey_description_Valid() const;

    bool isBApikeyIsactive() const;
    void setBApikeyIsactive(const bool &b_apikey_isactive);
    bool is_b_apikey_isactive_Set() const;
    bool is_b_apikey_isactive_Valid() const;

    bool isBApikeyIssigned() const;
    void setBApikeyIssigned(const bool &b_apikey_issigned);
    bool is_b_apikey_issigned_Set() const;
    bool is_b_apikey_issigned_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    qint32 m_fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    OAIMultilingual_ApikeyDescription m_obj_apikey_description;
    bool m_obj_apikey_description_isSet;
    bool m_obj_apikey_description_isValid;

    bool m_b_apikey_isactive;
    bool m_b_apikey_isactive_isSet;
    bool m_b_apikey_isactive_isValid;

    bool m_b_apikey_issigned;
    bool m_b_apikey_issigned_isSet;
    bool m_b_apikey_issigned_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_RequestCompound)

#endif // OAIApikey_RequestCompound_H
