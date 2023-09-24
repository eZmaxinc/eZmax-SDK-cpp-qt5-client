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
 * OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsignfoldertype/getAutocomplete
 */

#ifndef OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload_H
#define OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignfoldertype_AutocompleteElement_Response.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldertype_AutocompleteElement_Response;

class OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload();
    OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload(QString json);
    ~OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldertype_AutocompleteElement_Response> getAObjEzsignfoldertype() const;
    void setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_AutocompleteElement_Response> &a_obj_ezsignfoldertype);
    bool is_a_obj_ezsignfoldertype_Set() const;
    bool is_a_obj_ezsignfoldertype_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignfoldertype_AutocompleteElement_Response> m_a_obj_ezsignfoldertype;
    bool m_a_obj_ezsignfoldertype_isSet;
    bool m_a_obj_ezsignfoldertype_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload)

#endif // OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload_H
