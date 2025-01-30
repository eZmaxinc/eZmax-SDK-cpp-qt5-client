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
 * Ezsignsigningreason_ListElement.h
 *
 * A Ezsignsigningreason List Element
 */

#ifndef Ezsignsigningreason_ListElement_H
#define Ezsignsigningreason_ListElement_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignsigningreason_ListElement : public Object {
public:
    Ezsignsigningreason_ListElement();
    Ezsignsigningreason_ListElement(QString json);
    ~Ezsignsigningreason_ListElement() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsigningreasonId() const;
    void setPkiEzsignsigningreasonId(const qint32 &pki_ezsignsigningreason_id);
    bool is_pki_ezsignsigningreason_id_Set() const;
    bool is_pki_ezsignsigningreason_id_Valid() const;

    QString getSEzsignsigningreasonDescriptionX() const;
    void setSEzsignsigningreasonDescriptionX(const QString &s_ezsignsigningreason_description_x);
    bool is_s_ezsignsigningreason_description_x_Set() const;
    bool is_s_ezsignsigningreason_description_x_Valid() const;

    bool isBEzsignsigningreasonIsactive() const;
    void setBEzsignsigningreasonIsactive(const bool &b_ezsignsigningreason_isactive);
    bool is_b_ezsignsigningreason_isactive_Set() const;
    bool is_b_ezsignsigningreason_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsigningreason_id;
    bool m_pki_ezsignsigningreason_id_isSet;
    bool m_pki_ezsignsigningreason_id_isValid;

    QString m_s_ezsignsigningreason_description_x;
    bool m_s_ezsignsigningreason_description_x_isSet;
    bool m_s_ezsignsigningreason_description_x_isValid;

    bool m_b_ezsignsigningreason_isactive;
    bool m_b_ezsignsigningreason_isactive_isSet;
    bool m_b_ezsignsigningreason_isactive_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsigningreason_ListElement)

#endif // Ezsignsigningreason_ListElement_H
