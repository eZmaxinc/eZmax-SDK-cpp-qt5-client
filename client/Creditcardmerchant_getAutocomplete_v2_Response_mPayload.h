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
 * Creditcardmerchant_getAutocomplete_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/creditcardmerchant/getAutocomplete
 */

#ifndef Creditcardmerchant_getAutocomplete_v2_Response_mPayload_H
#define Creditcardmerchant_getAutocomplete_v2_Response_mPayload_H

#include <QJsonObject>

#include "Creditcardmerchant_AutocompleteElement_Response.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Creditcardmerchant_AutocompleteElement_Response;

class Creditcardmerchant_getAutocomplete_v2_Response_mPayload : public Object {
public:
    Creditcardmerchant_getAutocomplete_v2_Response_mPayload();
    Creditcardmerchant_getAutocomplete_v2_Response_mPayload(QString json);
    ~Creditcardmerchant_getAutocomplete_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Creditcardmerchant_AutocompleteElement_Response> getAObjCreditcardmerchant() const;
    void setAObjCreditcardmerchant(const QList<Creditcardmerchant_AutocompleteElement_Response> &a_obj_creditcardmerchant);
    bool is_a_obj_creditcardmerchant_Set() const;
    bool is_a_obj_creditcardmerchant_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Creditcardmerchant_AutocompleteElement_Response> m_a_obj_creditcardmerchant;
    bool m_a_obj_creditcardmerchant_isSet;
    bool m_a_obj_creditcardmerchant_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardmerchant_getAutocomplete_v2_Response_mPayload)

#endif // Creditcardmerchant_getAutocomplete_v2_Response_mPayload_H
