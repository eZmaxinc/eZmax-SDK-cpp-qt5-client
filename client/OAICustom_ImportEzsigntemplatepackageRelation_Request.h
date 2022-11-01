/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_ImportEzsigntemplatepackageRelation_Request.h
 *
 * The object used in /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsigntemplatepackage Request
 */

#ifndef OAICustom_ImportEzsigntemplatepackageRelation_Request_H
#define OAICustom_ImportEzsigntemplatepackageRelation_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_ImportEzsigntemplatepackageRelation_Request : public OAIObject {
public:
    OAICustom_ImportEzsigntemplatepackageRelation_Request();
    OAICustom_ImportEzsigntemplatepackageRelation_Request(QString json);
    ~OAICustom_ImportEzsigntemplatepackageRelation_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsigntemplatepackagesignerId() const;
    void setFkiEzsigntemplatepackagesignerId(const qint32 &fki_ezsigntemplatepackagesigner_id);
    bool is_fki_ezsigntemplatepackagesigner_id_Set() const;
    bool is_fki_ezsigntemplatepackagesigner_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    QString getSEzsigntemplatepackagesignerDescription() const;
    void setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description);
    bool is_s_ezsigntemplatepackagesigner_description_Set() const;
    bool is_s_ezsigntemplatepackagesigner_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_ezsigntemplatepackagesigner_id;
    bool m_fki_ezsigntemplatepackagesigner_id_isSet;
    bool m_fki_ezsigntemplatepackagesigner_id_isValid;

    qint32 fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    QString s_ezsigntemplatepackagesigner_description;
    bool m_s_ezsigntemplatepackagesigner_description_isSet;
    bool m_s_ezsigntemplatepackagesigner_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_ImportEzsigntemplatepackageRelation_Request)

#endif // OAICustom_ImportEzsigntemplatepackageRelation_Request_H
