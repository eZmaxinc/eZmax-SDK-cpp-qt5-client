/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.15
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAITaxassignment_AutocompleteElement_Response.h
 *
 * A Taxassignment AutocompleteElement Response
 */

#ifndef OAITaxassignment_AutocompleteElement_Response_H
#define OAITaxassignment_AutocompleteElement_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAITaxassignment_AutocompleteElement_Response : public OAIObject {
public:
    OAITaxassignment_AutocompleteElement_Response();
    OAITaxassignment_AutocompleteElement_Response(QString json);
    ~OAITaxassignment_AutocompleteElement_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSTaxassignmentDescriptionX() const;
    void setSTaxassignmentDescriptionX(const QString &s_taxassignment_description_x);
    bool is_s_taxassignment_description_x_Set() const;
    bool is_s_taxassignment_description_x_Valid() const;

    qint32 getPkiTaxassignmentId() const;
    void setPkiTaxassignmentId(const qint32 &pki_taxassignment_id);
    bool is_pki_taxassignment_id_Set() const;
    bool is_pki_taxassignment_id_Valid() const;

    bool isBTaxassignmentIsactive() const;
    void setBTaxassignmentIsactive(const bool &b_taxassignment_isactive);
    bool is_b_taxassignment_isactive_Set() const;
    bool is_b_taxassignment_isactive_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_taxassignment_description_x;
    bool m_s_taxassignment_description_x_isSet;
    bool m_s_taxassignment_description_x_isValid;

    qint32 pki_taxassignment_id;
    bool m_pki_taxassignment_id_isSet;
    bool m_pki_taxassignment_id_isValid;

    bool b_taxassignment_isactive;
    bool m_b_taxassignment_isactive_isSet;
    bool m_b_taxassignment_isactive_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITaxassignment_AutocompleteElement_Response)

#endif // OAITaxassignment_AutocompleteElement_Response_H
