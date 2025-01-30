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
 * Ezsigndocumentdependency_RequestCompound.h
 *
 * An Ezsigndocumentdependency Object
 */

#ifndef Ezsigndocumentdependency_RequestCompound_H
#define Ezsigndocumentdependency_RequestCompound_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocumentdependency_RequestCompound : public Object {
public:
    Ezsigndocumentdependency_RequestCompound();
    Ezsigndocumentdependency_RequestCompound(QString json);
    ~Ezsigndocumentdependency_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigndocumentdependencyId() const;
    void setPkiEzsigndocumentdependencyId(const qint32 &pki_ezsigndocumentdependency_id);
    bool is_pki_ezsigndocumentdependency_id_Set() const;
    bool is_pki_ezsigndocumentdependency_id_Valid() const;

    qint32 getFkiEzsigndocumentIDdependency() const;
    void setFkiEzsigndocumentIDdependency(const qint32 &fki_ezsigndocument_i_ddependency);
    bool is_fki_ezsigndocument_i_ddependency_Set() const;
    bool is_fki_ezsigndocument_i_ddependency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigndocumentdependency_id;
    bool m_pki_ezsigndocumentdependency_id_isSet;
    bool m_pki_ezsigndocumentdependency_id_isValid;

    qint32 m_fki_ezsigndocument_i_ddependency;
    bool m_fki_ezsigndocument_i_ddependency_isSet;
    bool m_fki_ezsigndocument_i_ddependency_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocumentdependency_RequestCompound)

#endif // Ezsigndocumentdependency_RequestCompound_H
