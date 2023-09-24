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
 * OAIEmailstatic_Response.h
 *
 * An Emailstatic Object
 */

#ifndef OAIEmailstatic_Response_H
#define OAIEmailstatic_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEmailstatic_Response : public OAIObject {
public:
    OAIEmailstatic_Response();
    OAIEmailstatic_Response(QString json);
    ~OAIEmailstatic_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEmailstaticId() const;
    void setPkiEmailstaticId(const qint32 &pki_emailstatic_id);
    bool is_pki_emailstatic_id_Set() const;
    bool is_pki_emailstatic_id_Valid() const;

    QString getSEmailstaticAddress() const;
    void setSEmailstaticAddress(const QString &s_emailstatic_address);
    bool is_s_emailstatic_address_Set() const;
    bool is_s_emailstatic_address_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_emailstatic_id;
    bool m_pki_emailstatic_id_isSet;
    bool m_pki_emailstatic_id_isValid;

    QString m_s_emailstatic_address;
    bool m_s_emailstatic_address_isSet;
    bool m_s_emailstatic_address_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEmailstatic_Response)

#endif // OAIEmailstatic_Response_H
