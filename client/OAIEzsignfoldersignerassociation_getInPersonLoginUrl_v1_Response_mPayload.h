/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfoldersignerassociation/getInPersonLoginUrl
 */

#ifndef OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload_H
#define OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload();
    OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload(QString json);
    ~OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSLoginUrl() const;
    void setSLoginUrl(const QString &s_login_url);
    bool is_s_login_url_Set() const;
    bool is_s_login_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_login_url;
    bool m_s_login_url_isSet;
    bool m_s_login_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload)

#endif // OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload_H
