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
 * Ezmaxproduct_AutocompleteElement_Response.h
 *
 * A Ezmaxproduct AutocompleteElement Response
 */

#ifndef Ezmaxproduct_AutocompleteElement_Response_H
#define Ezmaxproduct_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezmaxproduct_AutocompleteElement_Response : public Object {
public:
    Ezmaxproduct_AutocompleteElement_Response();
    Ezmaxproduct_AutocompleteElement_Response(QString json);
    ~Ezmaxproduct_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzmaxproductId() const;
    void setPkiEzmaxproductId(const qint32 &pki_ezmaxproduct_id);
    bool is_pki_ezmaxproduct_id_Set() const;
    bool is_pki_ezmaxproduct_id_Valid() const;

    QString getSEzmaxproductDescriptionX() const;
    void setSEzmaxproductDescriptionX(const QString &s_ezmaxproduct_description_x);
    bool is_s_ezmaxproduct_description_x_Set() const;
    bool is_s_ezmaxproduct_description_x_Valid() const;

    bool isBEzmaxproductIsactive() const;
    void setBEzmaxproductIsactive(const bool &b_ezmaxproduct_isactive);
    bool is_b_ezmaxproduct_isactive_Set() const;
    bool is_b_ezmaxproduct_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezmaxproduct_id;
    bool m_pki_ezmaxproduct_id_isSet;
    bool m_pki_ezmaxproduct_id_isValid;

    QString m_s_ezmaxproduct_description_x;
    bool m_s_ezmaxproduct_description_x_isSet;
    bool m_s_ezmaxproduct_description_x_isValid;

    bool m_b_ezmaxproduct_isactive;
    bool m_b_ezmaxproduct_isactive_isSet;
    bool m_b_ezmaxproduct_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezmaxproduct_AutocompleteElement_Response)

#endif // Ezmaxproduct_AutocompleteElement_Response_H
