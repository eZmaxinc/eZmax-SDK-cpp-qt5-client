/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.7
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIWebsite_RequestCompound.h
 *
 * A Website Object and children to create a complete structure
 */

#ifndef OAIWebsite_RequestCompound_H
#define OAIWebsite_RequestCompound_H

#include <QJsonObject>

#include "OAIWebsite_Request.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIWebsite_RequestCompound : public OAIObject {
public:
    OAIWebsite_RequestCompound();
    OAIWebsite_RequestCompound(QString json);
    ~OAIWebsite_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiWebsitetypeId() const;
    void setFkiWebsitetypeId(const qint32 &fki_websitetype_id);
    bool is_fki_websitetype_id_Set() const;
    bool is_fki_websitetype_id_Valid() const;

    QString getSWebsiteAddress() const;
    void setSWebsiteAddress(const QString &s_website_address);
    bool is_s_website_address_Set() const;
    bool is_s_website_address_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_websitetype_id;
    bool m_fki_websitetype_id_isSet;
    bool m_fki_websitetype_id_isValid;

    QString s_website_address;
    bool m_s_website_address_isSet;
    bool m_s_website_address_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIWebsite_RequestCompound)

#endif // OAIWebsite_RequestCompound_H
