/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.6
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIAddress_Request.h
 *
 * An Address Object
 */

#ifndef OAIAddress_Request_H
#define OAIAddress_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAddress_Request : public OAIObject {
public:
    OAIAddress_Request();
    OAIAddress_Request(QString json);
    ~OAIAddress_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiAddresstypeId() const;
    void setFkiAddresstypeId(const qint32 &fki_addresstype_id);
    bool is_fki_addresstype_id_Set() const;
    bool is_fki_addresstype_id_Valid() const;

    QString getSAddressCivic() const;
    void setSAddressCivic(const QString &s_address_civic);
    bool is_s_address_civic_Set() const;
    bool is_s_address_civic_Valid() const;

    QString getSAddressStreet() const;
    void setSAddressStreet(const QString &s_address_street);
    bool is_s_address_street_Set() const;
    bool is_s_address_street_Valid() const;

    QString getSAddressSuite() const;
    void setSAddressSuite(const QString &s_address_suite);
    bool is_s_address_suite_Set() const;
    bool is_s_address_suite_Valid() const;

    QString getSAddressCity() const;
    void setSAddressCity(const QString &s_address_city);
    bool is_s_address_city_Set() const;
    bool is_s_address_city_Valid() const;

    qint32 getFkiProvinceId() const;
    void setFkiProvinceId(const qint32 &fki_province_id);
    bool is_fki_province_id_Set() const;
    bool is_fki_province_id_Valid() const;

    qint32 getFkiCountryId() const;
    void setFkiCountryId(const qint32 &fki_country_id);
    bool is_fki_country_id_Set() const;
    bool is_fki_country_id_Valid() const;

    QString getSAddressZip() const;
    void setSAddressZip(const QString &s_address_zip);
    bool is_s_address_zip_Set() const;
    bool is_s_address_zip_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_addresstype_id;
    bool m_fki_addresstype_id_isSet;
    bool m_fki_addresstype_id_isValid;

    QString s_address_civic;
    bool m_s_address_civic_isSet;
    bool m_s_address_civic_isValid;

    QString s_address_street;
    bool m_s_address_street_isSet;
    bool m_s_address_street_isValid;

    QString s_address_suite;
    bool m_s_address_suite_isSet;
    bool m_s_address_suite_isValid;

    QString s_address_city;
    bool m_s_address_city_isSet;
    bool m_s_address_city_isValid;

    qint32 fki_province_id;
    bool m_fki_province_id_isSet;
    bool m_fki_province_id_isValid;

    qint32 fki_country_id;
    bool m_fki_country_id_isSet;
    bool m_fki_country_id_isValid;

    QString s_address_zip;
    bool m_s_address_zip_isSet;
    bool m_s_address_zip_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAddress_Request)

#endif // OAIAddress_Request_H
