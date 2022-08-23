/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.10
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackagesigner_Request.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef OAIEzsigntemplatepackagesigner_Request_H
#define OAIEzsigntemplatepackagesigner_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatepackagesigner_Request : public OAIObject {
public:
    OAIEzsigntemplatepackagesigner_Request();
    OAIEzsigntemplatepackagesigner_Request(QString json);
    ~OAIEzsigntemplatepackagesigner_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackagesignerId() const;
    void setPkiEzsigntemplatepackagesignerId(const qint32 &pki_ezsigntemplatepackagesigner_id);
    bool is_pki_ezsigntemplatepackagesigner_id_Set() const;
    bool is_pki_ezsigntemplatepackagesigner_id_Valid() const;

    qint32 getFkiEzsigntemplatepackageId() const;
    void setFkiEzsigntemplatepackageId(const qint32 &fki_ezsigntemplatepackage_id);
    bool is_fki_ezsigntemplatepackage_id_Set() const;
    bool is_fki_ezsigntemplatepackage_id_Valid() const;

    QString getSEzsigntemplatepackagesignerDescription() const;
    void setSEzsigntemplatepackagesignerDescription(const QString &s_ezsigntemplatepackagesigner_description);
    bool is_s_ezsigntemplatepackagesigner_description_Set() const;
    bool is_s_ezsigntemplatepackagesigner_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatepackagesigner_id;
    bool m_pki_ezsigntemplatepackagesigner_id_isSet;
    bool m_pki_ezsigntemplatepackagesigner_id_isValid;

    qint32 fki_ezsigntemplatepackage_id;
    bool m_fki_ezsigntemplatepackage_id_isSet;
    bool m_fki_ezsigntemplatepackage_id_isValid;

    QString s_ezsigntemplatepackagesigner_description;
    bool m_s_ezsigntemplatepackagesigner_description_isSet;
    bool m_s_ezsigntemplatepackagesigner_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesigner_Request)

#endif // OAIEzsigntemplatepackagesigner_Request_H
