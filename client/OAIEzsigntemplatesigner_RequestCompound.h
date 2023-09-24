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
 * OAIEzsigntemplatesigner_RequestCompound.h
 *
 * A Ezsigntemplatesigner Object and children
 */

#ifndef OAIEzsigntemplatesigner_RequestCompound_H
#define OAIEzsigntemplatesigner_RequestCompound_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatesigner_RequestCompound : public OAIObject {
public:
    OAIEzsigntemplatesigner_RequestCompound();
    OAIEzsigntemplatesigner_RequestCompound(QString json);
    ~OAIEzsigntemplatesigner_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatesignerId() const;
    void setPkiEzsigntemplatesignerId(const qint32 &pki_ezsigntemplatesigner_id);
    bool is_pki_ezsigntemplatesigner_id_Set() const;
    bool is_pki_ezsigntemplatesigner_id_Valid() const;

    qint32 getFkiEzsigntemplateId() const;
    void setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id);
    bool is_fki_ezsigntemplate_id_Set() const;
    bool is_fki_ezsigntemplate_id_Valid() const;

    QString getSEzsigntemplatesignerDescription() const;
    void setSEzsigntemplatesignerDescription(const QString &s_ezsigntemplatesigner_description);
    bool is_s_ezsigntemplatesigner_description_Set() const;
    bool is_s_ezsigntemplatesigner_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatesigner_id;
    bool m_pki_ezsigntemplatesigner_id_isSet;
    bool m_pki_ezsigntemplatesigner_id_isValid;

    qint32 m_fki_ezsigntemplate_id;
    bool m_fki_ezsigntemplate_id_isSet;
    bool m_fki_ezsigntemplate_id_isValid;

    QString m_s_ezsigntemplatesigner_description;
    bool m_s_ezsigntemplatesigner_description_isSet;
    bool m_s_ezsigntemplatesigner_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesigner_RequestCompound)

#endif // OAIEzsigntemplatesigner_RequestCompound_H
