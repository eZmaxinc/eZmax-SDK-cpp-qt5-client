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
 * OAIEzsigntemplate_RequestCompound.h
 *
 * A Ezsigntemplate Object and children
 */

#ifndef OAIEzsigntemplate_RequestCompound_H
#define OAIEzsigntemplate_RequestCompound_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplate_RequestCompound : public OAIObject {
public:
    OAIEzsigntemplate_RequestCompound();
    OAIEzsigntemplate_RequestCompound(QString json);
    ~OAIEzsigntemplate_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplateId() const;
    void setPkiEzsigntemplateId(const qint32 &pki_ezsigntemplate_id);
    bool is_pki_ezsigntemplate_id_Set() const;
    bool is_pki_ezsigntemplate_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEzsigntemplateDescription() const;
    void setSEzsigntemplateDescription(const QString &s_ezsigntemplate_description);
    bool is_s_ezsigntemplate_description_Set() const;
    bool is_s_ezsigntemplate_description_Valid() const;

    bool isBEzsigntemplateAdminonly() const;
    void setBEzsigntemplateAdminonly(const bool &b_ezsigntemplate_adminonly);
    bool is_b_ezsigntemplate_adminonly_Set() const;
    bool is_b_ezsigntemplate_adminonly_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplate_id;
    bool m_pki_ezsigntemplate_id_isSet;
    bool m_pki_ezsigntemplate_id_isValid;

    qint32 m_fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 m_fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString m_s_ezsigntemplate_description;
    bool m_s_ezsigntemplate_description_isSet;
    bool m_s_ezsigntemplate_description_isValid;

    bool m_b_ezsigntemplate_adminonly;
    bool m_b_ezsigntemplate_adminonly_isSet;
    bool m_b_ezsigntemplate_adminonly_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_RequestCompound)

#endif // OAIEzsigntemplate_RequestCompound_H
