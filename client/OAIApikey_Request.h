/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.47
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIApikey_Request.h
 *
 * An Apikey Object
 */

#ifndef OAIApikey_Request_H
#define OAIApikey_Request_H

#include <QJsonObject>

#include "OAIMultilingual_ApikeyDescription.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIApikey_Request : public OAIObject {
public:
    OAIApikey_Request();
    OAIApikey_Request(QString json);
    ~OAIApikey_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserId() const;
    void setFkiUserId(const qint32 &fki_user_id);
    bool is_fki_user_id_Set() const;
    bool is_fki_user_id_Valid() const;

    OAIMultilingual_ApikeyDescription getObjApikeyDescription() const;
    void setObjApikeyDescription(const OAIMultilingual_ApikeyDescription &obj_apikey_description);
    bool is_obj_apikey_description_Set() const;
    bool is_obj_apikey_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_user_id;
    bool m_fki_user_id_isSet;
    bool m_fki_user_id_isValid;

    OAIMultilingual_ApikeyDescription obj_apikey_description;
    bool m_obj_apikey_description_isSet;
    bool m_obj_apikey_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_Request)

#endif // OAIApikey_Request_H
