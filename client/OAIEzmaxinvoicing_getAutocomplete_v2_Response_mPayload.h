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
 * OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezmaxinvoicing/getAutocomplete
 */

#ifndef OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload_H
#define OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzmaxinvoicing_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzmaxinvoicing_AutocompleteElement_Response;

class OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload();
    OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzmaxinvoicing_AutocompleteElement_Response> getAObjEzmaxinvoicing() const;
    void setAObjEzmaxinvoicing(const QList<OAIEzmaxinvoicing_AutocompleteElement_Response> &a_obj_ezmaxinvoicing);
    bool is_a_obj_ezmaxinvoicing_Set() const;
    bool is_a_obj_ezmaxinvoicing_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzmaxinvoicing_AutocompleteElement_Response> a_obj_ezmaxinvoicing;
    bool m_a_obj_ezmaxinvoicing_isSet;
    bool m_a_obj_ezmaxinvoicing_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload)

#endif // OAIEzmaxinvoicing_getAutocomplete_v2_Response_mPayload_H
