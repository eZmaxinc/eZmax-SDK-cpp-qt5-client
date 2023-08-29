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
 * OAITaxassignment_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/taxassignment/getAutocomplete
 */

#ifndef OAITaxassignment_getAutocomplete_v2_Response_mPayload_H
#define OAITaxassignment_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAITaxassignment_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAITaxassignment_AutocompleteElement_Response;

class OAITaxassignment_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAITaxassignment_getAutocomplete_v2_Response_mPayload();
    OAITaxassignment_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAITaxassignment_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAITaxassignment_AutocompleteElement_Response> getAObjTaxassignment() const;
    void setAObjTaxassignment(const QList<OAITaxassignment_AutocompleteElement_Response> &a_obj_taxassignment);
    bool is_a_obj_taxassignment_Set() const;
    bool is_a_obj_taxassignment_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAITaxassignment_AutocompleteElement_Response> m_a_obj_taxassignment;
    bool m_a_obj_taxassignment_isSet;
    bool m_a_obj_taxassignment_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAITaxassignment_getAutocomplete_v2_Response_mPayload)

#endif // OAITaxassignment_getAutocomplete_v2_Response_mPayload_H
