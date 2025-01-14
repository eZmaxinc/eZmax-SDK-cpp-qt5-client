/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignsignaturecustomdate_ResponseV2.h
 *
 * An Ezsignsignaturecustomdate Object
 */

#ifndef Ezsignsignaturecustomdate_ResponseV2_H
#define Ezsignsignaturecustomdate_ResponseV2_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignsignaturecustomdate_ResponseV2 : public Object {
public:
    Ezsignsignaturecustomdate_ResponseV2();
    Ezsignsignaturecustomdate_ResponseV2(QString json);
    ~Ezsignsignaturecustomdate_ResponseV2() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignaturecustomdateId() const;
    void setPkiEzsignsignaturecustomdateId(const qint32 &pki_ezsignsignaturecustomdate_id);
    bool is_pki_ezsignsignaturecustomdate_id_Set() const;
    bool is_pki_ezsignsignaturecustomdate_id_Valid() const;

    qint32 getIEzsignsignaturecustomdateOffsetx() const;
    void setIEzsignsignaturecustomdateOffsetx(const qint32 &i_ezsignsignaturecustomdate_offsetx);
    bool is_i_ezsignsignaturecustomdate_offsetx_Set() const;
    bool is_i_ezsignsignaturecustomdate_offsetx_Valid() const;

    qint32 getIEzsignsignaturecustomdateOffsety() const;
    void setIEzsignsignaturecustomdateOffsety(const qint32 &i_ezsignsignaturecustomdate_offsety);
    bool is_i_ezsignsignaturecustomdate_offsety_Set() const;
    bool is_i_ezsignsignaturecustomdate_offsety_Valid() const;

    QString getSEzsignsignaturecustomdateFormat() const;
    void setSEzsignsignaturecustomdateFormat(const QString &s_ezsignsignaturecustomdate_format);
    bool is_s_ezsignsignaturecustomdate_format_Set() const;
    bool is_s_ezsignsignaturecustomdate_format_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignsignaturecustomdate_id;
    bool m_pki_ezsignsignaturecustomdate_id_isSet;
    bool m_pki_ezsignsignaturecustomdate_id_isValid;

    qint32 m_i_ezsignsignaturecustomdate_offsetx;
    bool m_i_ezsignsignaturecustomdate_offsetx_isSet;
    bool m_i_ezsignsignaturecustomdate_offsetx_isValid;

    qint32 m_i_ezsignsignaturecustomdate_offsety;
    bool m_i_ezsignsignaturecustomdate_offsety_isSet;
    bool m_i_ezsignsignaturecustomdate_offsety_isValid;

    QString m_s_ezsignsignaturecustomdate_format;
    bool m_s_ezsignsignaturecustomdate_format_isSet;
    bool m_s_ezsignsignaturecustomdate_format_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignsignaturecustomdate_ResponseV2)

#endif // Ezsignsignaturecustomdate_ResponseV2_H
