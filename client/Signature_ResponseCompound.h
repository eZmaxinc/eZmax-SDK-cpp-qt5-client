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
 * Signature_ResponseCompound.h
 *
 * A Signature Object
 */

#ifndef Signature_ResponseCompound_H
#define Signature_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Signature_ResponseCompound : public Object {
public:
    Signature_ResponseCompound();
    Signature_ResponseCompound(QString json);
    ~Signature_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiSignatureId() const;
    void setPkiSignatureId(const qint32 &pki_signature_id);
    bool is_pki_signature_id_Set() const;
    bool is_pki_signature_id_Valid() const;

    qint32 getFkiFontId() const;
    void setFkiFontId(const qint32 &fki_font_id);
    bool is_fki_font_id_Set() const;
    bool is_fki_font_id_Valid() const;

    QString getSSignatureUrl() const;
    void setSSignatureUrl(const QString &s_signature_url);
    bool is_s_signature_url_Set() const;
    bool is_s_signature_url_Valid() const;

    QString getSSignatureUrlinitials() const;
    void setSSignatureUrlinitials(const QString &s_signature_urlinitials);
    bool is_s_signature_urlinitials_Set() const;
    bool is_s_signature_urlinitials_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_signature_id;
    bool m_pki_signature_id_isSet;
    bool m_pki_signature_id_isValid;

    qint32 m_fki_font_id;
    bool m_fki_font_id_isSet;
    bool m_fki_font_id_isValid;

    QString m_s_signature_url;
    bool m_s_signature_url_isSet;
    bool m_s_signature_url_isValid;

    QString m_s_signature_urlinitials;
    bool m_s_signature_urlinitials_isSet;
    bool m_s_signature_urlinitials_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Signature_ResponseCompound)

#endif // Signature_ResponseCompound_H
