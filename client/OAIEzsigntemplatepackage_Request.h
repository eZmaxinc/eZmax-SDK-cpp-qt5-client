/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackage_Request.h
 *
 * A Ezsigntemplatepackage Object
 */

#ifndef OAIEzsigntemplatepackage_Request_H
#define OAIEzsigntemplatepackage_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatepackage_Request : public OAIObject {
public:
    OAIEzsigntemplatepackage_Request();
    OAIEzsigntemplatepackage_Request(QString json);
    ~OAIEzsigntemplatepackage_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackageId() const;
    void setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id);
    bool is_pki_ezsigntemplatepackage_id_Set() const;
    bool is_pki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEzsigntemplatepackageDescription() const;
    void setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description);
    bool is_s_ezsigntemplatepackage_description_Set() const;
    bool is_s_ezsigntemplatepackage_description_Valid() const;

    bool isBEzsigntemplatepackageAdminonly() const;
    void setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly);
    bool is_b_ezsigntemplatepackage_adminonly_Set() const;
    bool is_b_ezsigntemplatepackage_adminonly_Valid() const;

    bool isBEzsigntemplatepackageIsactive() const;
    void setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive);
    bool is_b_ezsigntemplatepackage_isactive_Set() const;
    bool is_b_ezsigntemplatepackage_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatepackage_id;
    bool m_pki_ezsigntemplatepackage_id_isSet;
    bool m_pki_ezsigntemplatepackage_id_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_ezsigntemplatepackage_description;
    bool m_s_ezsigntemplatepackage_description_isSet;
    bool m_s_ezsigntemplatepackage_description_isValid;

    bool b_ezsigntemplatepackage_adminonly;
    bool m_b_ezsigntemplatepackage_adminonly_isSet;
    bool m_b_ezsigntemplatepackage_adminonly_isValid;

    bool b_ezsigntemplatepackage_isactive;
    bool m_b_ezsigntemplatepackage_isactive_isSet;
    bool m_b_ezsigntemplatepackage_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_Request)

#endif // OAIEzsigntemplatepackage_Request_H
