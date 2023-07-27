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
 * OAIEmailtype_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/emailtype/getAutocomplete
 */

#ifndef OAIEmailtype_getAutocomplete_v2_Response_mPayload_H
#define OAIEmailtype_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEmailtype_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEmailtype_AutocompleteElement_Response;

class OAIEmailtype_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIEmailtype_getAutocomplete_v2_Response_mPayload();
    OAIEmailtype_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIEmailtype_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEmailtype_AutocompleteElement_Response> getAObjEmailtype() const;
    void setAObjEmailtype(const QList<OAIEmailtype_AutocompleteElement_Response> &a_obj_emailtype);
    bool is_a_obj_emailtype_Set() const;
    bool is_a_obj_emailtype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEmailtype_AutocompleteElement_Response> a_obj_emailtype;
    bool m_a_obj_emailtype_isSet;
    bool m_a_obj_emailtype_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEmailtype_getAutocomplete_v2_Response_mPayload)

#endif // OAIEmailtype_getAutocomplete_v2_Response_mPayload_H
