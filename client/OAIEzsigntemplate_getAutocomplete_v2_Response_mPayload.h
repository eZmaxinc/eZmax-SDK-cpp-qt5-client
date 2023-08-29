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
 * OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsigntemplate/getAutocomplete
 */

#ifndef OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload_H
#define OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplate_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplate_AutocompleteElement_Response;

class OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload();
    OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplate_AutocompleteElement_Response> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<OAIEzsigntemplate_AutocompleteElement_Response> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplate_AutocompleteElement_Response> m_a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload)

#endif // OAIEzsigntemplate_getAutocomplete_v2_Response_mPayload_H
