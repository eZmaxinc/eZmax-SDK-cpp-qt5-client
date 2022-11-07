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
 * OAICustom_AutocompleteElementDisabled_Response_allOf.h
 *
 * 
 */

#ifndef OAICustom_AutocompleteElementDisabled_Response_allOf_H
#define OAICustom_AutocompleteElementDisabled_Response_allOf_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_AutocompleteElementDisabled_Response_allOf : public OAIObject {
public:
    OAICustom_AutocompleteElementDisabled_Response_allOf();
    OAICustom_AutocompleteElementDisabled_Response_allOf(QString json);
    ~OAICustom_AutocompleteElementDisabled_Response_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBDisabled() const;
    void setBDisabled(const bool &b_disabled);
    bool is_b_disabled_Set() const;
    bool is_b_disabled_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool b_disabled;
    bool m_b_disabled_isSet;
    bool m_b_disabled_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_AutocompleteElementDisabled_Response_allOf)

#endif // OAICustom_AutocompleteElementDisabled_Response_allOf_H
