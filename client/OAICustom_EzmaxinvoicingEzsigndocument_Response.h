/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_EzmaxinvoicingEzsigndocument_Response.h
 *
 * An EzmaxinvoicingEzsigndocument object containing information about the Ezmaxinvoicing for an Ezsigndocument
 */

#ifndef OAICustom_EzmaxinvoicingEzsigndocument_Response_H
#define OAICustom_EzmaxinvoicingEzsigndocument_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_EzmaxinvoicingEzsigndocument_Response : public OAIObject {
public:
    OAICustom_EzmaxinvoicingEzsigndocument_Response();
    OAICustom_EzmaxinvoicingEzsigndocument_Response(QString json);
    ~OAICustom_EzmaxinvoicingEzsigndocument_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    QString getSName() const;
    void setSName(const QString &s_name);
    bool is_s_name_Set() const;
    bool is_s_name_Valid() const;

    QString getSEzsignfolderDescription() const;
    void setSEzsignfolderDescription(const QString &s_ezsignfolder_description);
    bool is_s_ezsignfolder_description_Set() const;
    bool is_s_ezsignfolder_description_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    bool isBEzsignfolderAllowed() const;
    void setBEzsignfolderAllowed(const bool &b_ezsignfolder_allowed);
    bool is_b_ezsignfolder_allowed_Set() const;
    bool is_b_ezsignfolder_allowed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    QString m_s_name;
    bool m_s_name_isSet;
    bool m_s_name_isValid;

    QString m_s_ezsignfolder_description;
    bool m_s_ezsignfolder_description_isSet;
    bool m_s_ezsignfolder_description_isValid;

    QString m_s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;

    bool m_b_ezsignfolder_allowed;
    bool m_b_ezsignfolder_allowed_isSet;
    bool m_b_ezsignfolder_allowed_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_EzmaxinvoicingEzsigndocument_Response)

#endif // OAICustom_EzmaxinvoicingEzsigndocument_Response_H
