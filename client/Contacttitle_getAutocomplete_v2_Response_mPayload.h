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
 * Contacttitle_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/contacttitle/getAutocomplete
 */

#ifndef Contacttitle_getAutocomplete_v2_Response_mPayload_H
#define Contacttitle_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Contacttitle_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Contacttitle_AutocompleteElement_Response;

class Contacttitle_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Contacttitle_getAutocomplete_v2_Response_mPayload();
    Contacttitle_getAutocomplete_v2_Response_mPayload(QString json);
    ~Contacttitle_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Contacttitle_AutocompleteElement_Response> getAObjContacttitle() const;
    void setAObjContacttitle(const QList<Contacttitle_AutocompleteElement_Response> &a_obj_contacttitle);
    bool is_a_obj_contacttitle_Set() const;
    bool is_a_obj_contacttitle_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Contacttitle_AutocompleteElement_Response> m_a_obj_contacttitle;
    bool m_a_obj_contacttitle_isSet;
    bool m_a_obj_contacttitle_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Contacttitle_getAutocomplete_v2_Response_mPayload)

#endif // Contacttitle_getAutocomplete_v2_Response_mPayload_H
