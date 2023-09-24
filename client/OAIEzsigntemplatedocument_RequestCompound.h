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
 * OAIEzsigntemplatedocument_RequestCompound.h
 *
 * A Ezsigntemplatedocument Object and children
 */

#ifndef OAIEzsigntemplatedocument_RequestCompound_H
#define OAIEzsigntemplatedocument_RequestCompound_H

#include <QJsonObject>

#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatedocument_RequestCompound : public OAIObject {
public:
    OAIEzsigntemplatedocument_RequestCompound();
    OAIEzsigntemplatedocument_RequestCompound(QString json);
    ~OAIEzsigntemplatedocument_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatedocumentId() const;
    void setPkiEzsigntemplatedocumentId(const qint32 &pki_ezsigntemplatedocument_id);
    bool is_pki_ezsigntemplatedocument_id_Set() const;
    bool is_pki_ezsigntemplatedocument_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    QString getSEzsigntemplatedocumentName() const;
    void setSEzsigntemplatedocumentName(const QString &s_ezsigntemplatedocument_name);
    bool is_s_ezsigntemplatedocument_name_Set() const;
    bool is_s_ezsigntemplatedocument_name_Valid() const;

    QString getEEzsigntemplatedocumentSource() const;
    void setEEzsigntemplatedocumentSource(const QString &e_ezsigntemplatedocument_source);
    bool is_e_ezsigntemplatedocument_source_Set() const;
    bool is_e_ezsigntemplatedocument_source_Valid() const;

    QString getEEzsigntemplatedocumentFormat() const;
    void setEEzsigntemplatedocumentFormat(const QString &e_ezsigntemplatedocument_format);
    bool is_e_ezsigntemplatedocument_format_Set() const;
    bool is_e_ezsigntemplatedocument_format_Valid() const;

    QByteArray getSEzsigntemplatedocumentBase64() const;
    void setSEzsigntemplatedocumentBase64(const QByteArray &s_ezsigntemplatedocument_base64);
    bool is_s_ezsigntemplatedocument_base64_Set() const;
    bool is_s_ezsigntemplatedocument_base64_Valid() const;

    QString getSEzsigntemplatedocumentUrl() const;
    void setSEzsigntemplatedocumentUrl(const QString &s_ezsigntemplatedocument_url);
    bool is_s_ezsigntemplatedocument_url_Set() const;
    bool is_s_ezsigntemplatedocument_url_Valid() const;

    bool isBEzsigntemplatedocumentForcerepair() const;
    void setBEzsigntemplatedocumentForcerepair(const bool &b_ezsigntemplatedocument_forcerepair);
    bool is_b_ezsigntemplatedocument_forcerepair_Set() const;
    bool is_b_ezsigntemplatedocument_forcerepair_Valid() const;

    QString getEEzsigntemplatedocumentForm() const;
    void setEEzsigntemplatedocumentForm(const QString &e_ezsigntemplatedocument_form);
    bool is_e_ezsigntemplatedocument_form_Set() const;
    bool is_e_ezsigntemplatedocument_form_Valid() const;

    QString getSEzsigntemplatedocumentPassword() const;
    void setSEzsigntemplatedocumentPassword(const QString &s_ezsigntemplatedocument_password);
    bool is_s_ezsigntemplatedocument_password_Set() const;
    bool is_s_ezsigntemplatedocument_password_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatedocument_id;
    bool m_pki_ezsigntemplatedocument_id_isSet;
    bool m_pki_ezsigntemplatedocument_id_isValid;

    qint32 m_fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    qint32 m_fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    qint32 m_fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;

    QString m_s_ezsigntemplatedocument_name;
    bool m_s_ezsigntemplatedocument_name_isSet;
    bool m_s_ezsigntemplatedocument_name_isValid;

    QString m_e_ezsigntemplatedocument_source;
    bool m_e_ezsigntemplatedocument_source_isSet;
    bool m_e_ezsigntemplatedocument_source_isValid;

    QString m_e_ezsigntemplatedocument_format;
    bool m_e_ezsigntemplatedocument_format_isSet;
    bool m_e_ezsigntemplatedocument_format_isValid;

    QByteArray m_s_ezsigntemplatedocument_base64;
    bool m_s_ezsigntemplatedocument_base64_isSet;
    bool m_s_ezsigntemplatedocument_base64_isValid;

    QString m_s_ezsigntemplatedocument_url;
    bool m_s_ezsigntemplatedocument_url_isSet;
    bool m_s_ezsigntemplatedocument_url_isValid;

    bool m_b_ezsigntemplatedocument_forcerepair;
    bool m_b_ezsigntemplatedocument_forcerepair_isSet;
    bool m_b_ezsigntemplatedocument_forcerepair_isValid;

    QString m_e_ezsigntemplatedocument_form;
    bool m_e_ezsigntemplatedocument_form_isSet;
    bool m_e_ezsigntemplatedocument_form_isValid;

    QString m_s_ezsigntemplatedocument_password;
    bool m_s_ezsigntemplatedocument_password_isSet;
    bool m_s_ezsigntemplatedocument_password_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_RequestCompound)

#endif // OAIEzsigntemplatedocument_RequestCompound_H
