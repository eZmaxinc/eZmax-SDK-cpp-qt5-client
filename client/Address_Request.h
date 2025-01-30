/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Address_Request.h
 *
 * An Address Object
 */

#ifndef Address_Request_H
#define Address_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Address_Request : public Object {
public:
    Address_Request();
    Address_Request(QString json);
    ~Address_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiAddressId() const;
    void setPkiAddressId(const qint32 &pki_address_id);
    bool is_pki_address_id_Set() const;
    bool is_pki_address_id_Valid() const;

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

    QString getFAddressLongitude() const;
    void setFAddressLongitude(const QString &f_address_longitude);
    bool is_f_address_longitude_Set() const;
    bool is_f_address_longitude_Valid() const;

    QString getFAddressLatitude() const;
    void setFAddressLatitude(const QString &f_address_latitude);
    bool is_f_address_latitude_Set() const;
    bool is_f_address_latitude_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_address_id;
    bool m_pki_address_id_isSet;
    bool m_pki_address_id_isValid;

    qint32 m_fki_addresstype_id;
    bool m_fki_addresstype_id_isSet;
    bool m_fki_addresstype_id_isValid;

    QString m_s_address_civic;
    bool m_s_address_civic_isSet;
    bool m_s_address_civic_isValid;

    QString m_s_address_street;
    bool m_s_address_street_isSet;
    bool m_s_address_street_isValid;

    QString m_s_address_suite;
    bool m_s_address_suite_isSet;
    bool m_s_address_suite_isValid;

    QString m_s_address_city;
    bool m_s_address_city_isSet;
    bool m_s_address_city_isValid;

    qint32 m_fki_province_id;
    bool m_fki_province_id_isSet;
    bool m_fki_province_id_isValid;

    qint32 m_fki_country_id;
    bool m_fki_country_id_isSet;
    bool m_fki_country_id_isValid;

    QString m_s_address_zip;
    bool m_s_address_zip_isSet;
    bool m_s_address_zip_isValid;

    QString m_f_address_longitude;
    bool m_f_address_longitude_isSet;
    bool m_f_address_longitude_isValid;

    QString m_f_address_latitude;
    bool m_f_address_latitude_isSet;
    bool m_f_address_latitude_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Address_Request)

#endif // Address_Request_H
