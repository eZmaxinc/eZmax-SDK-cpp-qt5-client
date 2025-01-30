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
 * Ezsigntemplateglobal_AutocompleteElement_Response.h
 *
 * A Ezsigntemplate AutocompleteElement Response
 */

#ifndef Ezsigntemplateglobal_AutocompleteElement_Response_H
#define Ezsigntemplateglobal_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplateglobal_AutocompleteElement_Response : public Object {
public:
    Ezsigntemplateglobal_AutocompleteElement_Response();
    Ezsigntemplateglobal_AutocompleteElement_Response(QString json);
    ~Ezsigntemplateglobal_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateglobalId() const;
    void setPkiEzsigntemplateglobalId(const qint32 &pki_ezsigntemplateglobal_id);
    bool is_pki_ezsigntemplateglobal_id_Set() const;
    bool is_pki_ezsigntemplateglobal_id_Valid() const;

    QString getSEzsigntemplateglobalDescription() const;
    void setSEzsigntemplateglobalDescription(const QString &s_ezsigntemplateglobal_description);
    bool is_s_ezsigntemplateglobal_description_Set() const;
    bool is_s_ezsigntemplateglobal_description_Valid() const;

    bool isBEzsigntemplateglobalIsactive() const;
    void setBEzsigntemplateglobalIsactive(const bool &b_ezsigntemplateglobal_isactive);
    bool is_b_ezsigntemplateglobal_isactive_Set() const;
    bool is_b_ezsigntemplateglobal_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplateglobal_id;
    bool m_pki_ezsigntemplateglobal_id_isSet;
    bool m_pki_ezsigntemplateglobal_id_isValid;

    QString m_s_ezsigntemplateglobal_description;
    bool m_s_ezsigntemplateglobal_description_isSet;
    bool m_s_ezsigntemplateglobal_description_isValid;

    bool m_b_ezsigntemplateglobal_isactive;
    bool m_b_ezsigntemplateglobal_isactive_isSet;
    bool m_b_ezsigntemplateglobal_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplateglobal_AutocompleteElement_Response)

#endif // Ezsigntemplateglobal_AutocompleteElement_Response_H
