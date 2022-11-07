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
 * OAIBranding_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/branding/getAutocomplete
 */

#ifndef OAIBranding_getAutocomplete_v2_Response_mPayload_H
#define OAIBranding_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIBranding_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBranding_AutocompleteElement_Response;

class OAIBranding_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIBranding_getAutocomplete_v2_Response_mPayload();
    OAIBranding_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIBranding_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIBranding_AutocompleteElement_Response> getAObjBranding() const;
    void setAObjBranding(const QList<OAIBranding_AutocompleteElement_Response> &a_obj_branding);
    bool is_a_obj_branding_Set() const;
    bool is_a_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIBranding_AutocompleteElement_Response> a_obj_branding;
    bool m_a_obj_branding_isSet;
    bool m_a_obj_branding_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_getAutocomplete_v2_Response_mPayload)

#endif // OAIBranding_getAutocomplete_v2_Response_mPayload_H
