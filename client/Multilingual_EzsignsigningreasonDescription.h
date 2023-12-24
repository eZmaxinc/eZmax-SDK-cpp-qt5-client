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
 * Multilingual_EzsignsigningreasonDescription.h
 *
 * The description of the Ezsignsigningreason
 */

#ifndef Multilingual_EzsignsigningreasonDescription_H
#define Multilingual_EzsignsigningreasonDescription_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_EzsignsigningreasonDescription : public Object {
public:
    Multilingual_EzsignsigningreasonDescription();
    Multilingual_EzsignsigningreasonDescription(QString json);
    ~Multilingual_EzsignsigningreasonDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignsigningreasonDescription1() const;
    void setSEzsignsigningreasonDescription1(const QString &s_ezsignsigningreason_description1);
    bool is_s_ezsignsigningreason_description1_Set() const;
    bool is_s_ezsignsigningreason_description1_Valid() const;

    QString getSEzsignsigningreasonDescription2() const;
    void setSEzsignsigningreasonDescription2(const QString &s_ezsignsigningreason_description2);
    bool is_s_ezsignsigningreason_description2_Set() const;
    bool is_s_ezsignsigningreason_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_ezsignsigningreason_description1;
    bool m_s_ezsignsigningreason_description1_isSet;
    bool m_s_ezsignsigningreason_description1_isValid;

    QString m_s_ezsignsigningreason_description2;
    bool m_s_ezsignsigningreason_description2_isSet;
    bool m_s_ezsignsigningreason_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_EzsignsigningreasonDescription)

#endif // Multilingual_EzsignsigningreasonDescription_H
