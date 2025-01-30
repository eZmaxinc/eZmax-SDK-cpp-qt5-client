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
 * Ezsigntemplatesignaturecustomdate_RequestCompoundV2.h
 *
 * An Ezsigntemplatesignaturecustomdate Object and children to create a complete structure
 */

#ifndef Ezsigntemplatesignaturecustomdate_RequestCompoundV2_H
#define Ezsigntemplatesignaturecustomdate_RequestCompoundV2_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatesignaturecustomdate_RequestCompoundV2 : public Object {
public:
    Ezsigntemplatesignaturecustomdate_RequestCompoundV2();
    Ezsigntemplatesignaturecustomdate_RequestCompoundV2(QString json);
    ~Ezsigntemplatesignaturecustomdate_RequestCompoundV2() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatesignaturecustomdateId() const;
    void setPkiEzsigntemplatesignaturecustomdateId(const qint32 &pki_ezsigntemplatesignaturecustomdate_id);
    bool is_pki_ezsigntemplatesignaturecustomdate_id_Set() const;
    bool is_pki_ezsigntemplatesignaturecustomdate_id_Valid() const;

    qint32 getIEzsigntemplatesignaturecustomdateOffsetx() const;
    void setIEzsigntemplatesignaturecustomdateOffsetx(const qint32 &i_ezsigntemplatesignaturecustomdate_offsetx);
    bool is_i_ezsigntemplatesignaturecustomdate_offsetx_Set() const;
    bool is_i_ezsigntemplatesignaturecustomdate_offsetx_Valid() const;

    qint32 getIEzsigntemplatesignaturecustomdateOffsety() const;
    void setIEzsigntemplatesignaturecustomdateOffsety(const qint32 &i_ezsigntemplatesignaturecustomdate_offsety);
    bool is_i_ezsigntemplatesignaturecustomdate_offsety_Set() const;
    bool is_i_ezsigntemplatesignaturecustomdate_offsety_Valid() const;

    QString getSEzsigntemplatesignaturecustomdateFormat() const;
    void setSEzsigntemplatesignaturecustomdateFormat(const QString &s_ezsigntemplatesignaturecustomdate_format);
    bool is_s_ezsigntemplatesignaturecustomdate_format_Set() const;
    bool is_s_ezsigntemplatesignaturecustomdate_format_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatesignaturecustomdate_id;
    bool m_pki_ezsigntemplatesignaturecustomdate_id_isSet;
    bool m_pki_ezsigntemplatesignaturecustomdate_id_isValid;

    qint32 m_i_ezsigntemplatesignaturecustomdate_offsetx;
    bool m_i_ezsigntemplatesignaturecustomdate_offsetx_isSet;
    bool m_i_ezsigntemplatesignaturecustomdate_offsetx_isValid;

    qint32 m_i_ezsigntemplatesignaturecustomdate_offsety;
    bool m_i_ezsigntemplatesignaturecustomdate_offsety_isSet;
    bool m_i_ezsigntemplatesignaturecustomdate_offsety_isValid;

    QString m_s_ezsigntemplatesignaturecustomdate_format;
    bool m_s_ezsigntemplatesignaturecustomdate_format_isSet;
    bool m_s_ezsigntemplatesignaturecustomdate_format_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesignaturecustomdate_RequestCompoundV2)

#endif // Ezsigntemplatesignaturecustomdate_RequestCompoundV2_H
