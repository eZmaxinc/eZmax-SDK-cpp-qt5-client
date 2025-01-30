/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigntemplate_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/ezsigntemplate/getAutocomplete
 */

#ifndef Ezsigntemplate_getAutocomplete_v2_Response_mPayload_H
#define Ezsigntemplate_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplate_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplate_AutocompleteElement_Response;

class Ezsigntemplate_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Ezsigntemplate_getAutocomplete_v2_Response_mPayload();
    Ezsigntemplate_getAutocomplete_v2_Response_mPayload(QString json);
    ~Ezsigntemplate_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplate_AutocompleteElement_Response> getAObjEzsigntemplate() const;
    void setAObjEzsigntemplate(const QList<Ezsigntemplate_AutocompleteElement_Response> &a_obj_ezsigntemplate);
    bool is_a_obj_ezsigntemplate_Set() const;
    bool is_a_obj_ezsigntemplate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplate_AutocompleteElement_Response> m_a_obj_ezsigntemplate;
    bool m_a_obj_ezsigntemplate_isSet;
    bool m_a_obj_ezsigntemplate_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplate_getAutocomplete_v2_Response_mPayload)

#endif // Ezsigntemplate_getAutocomplete_v2_Response_mPayload_H
