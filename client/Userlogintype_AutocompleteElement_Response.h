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
 * Userlogintype_AutocompleteElement_Response.h
 *
 * A Userlogintype AutocompleteElement Response
 */

#ifndef Userlogintype_AutocompleteElement_Response_H
#define Userlogintype_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Userlogintype_AutocompleteElement_Response : public Object {
public:
    Userlogintype_AutocompleteElement_Response();
    Userlogintype_AutocompleteElement_Response(QString json);
    ~Userlogintype_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiUserlogintypeId() const;
    void setPkiUserlogintypeId(const qint32 &pki_userlogintype_id);
    bool is_pki_userlogintype_id_Set() const;
    bool is_pki_userlogintype_id_Valid() const;

    QString getSUserlogintypeDescriptionX() const;
    void setSUserlogintypeDescriptionX(const QString &s_userlogintype_description_x);
    bool is_s_userlogintype_description_x_Set() const;
    bool is_s_userlogintype_description_x_Valid() const;

    bool isBUserlogintypeIsactive() const;
    void setBUserlogintypeIsactive(const bool &b_userlogintype_isactive);
    bool is_b_userlogintype_isactive_Set() const;
    bool is_b_userlogintype_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_userlogintype_id;
    bool m_pki_userlogintype_id_isSet;
    bool m_pki_userlogintype_id_isValid;

    QString m_s_userlogintype_description_x;
    bool m_s_userlogintype_description_x_isSet;
    bool m_s_userlogintype_description_x_isValid;

    bool m_b_userlogintype_isactive;
    bool m_b_userlogintype_isactive_isSet;
    bool m_b_userlogintype_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Userlogintype_AutocompleteElement_Response)

#endif // Userlogintype_AutocompleteElement_Response_H
