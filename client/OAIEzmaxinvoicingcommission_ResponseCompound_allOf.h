/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.14
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicingcommission_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzmaxinvoicingcommission_ResponseCompound_allOf_H
#define OAIEzmaxinvoicingcommission_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAICustom_ContactName_Response.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_ContactName_Response;

class OAIEzmaxinvoicingcommission_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzmaxinvoicingcommission_ResponseCompound_allOf();
    OAIEzmaxinvoicingcommission_ResponseCompound_allOf(QString json);
    ~OAIEzmaxinvoicingcommission_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICustom_ContactName_Response getObjContactName() const;
    void setObjContactName(const OAICustom_ContactName_Response &obj_contact_name);
    bool is_obj_contact_name_Set() const;
    bool is_obj_contact_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICustom_ContactName_Response obj_contact_name;
    bool m_obj_contact_name_isSet;
    bool m_obj_contact_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicingcommission_ResponseCompound_allOf)

#endif // OAIEzmaxinvoicingcommission_ResponseCompound_allOf_H
