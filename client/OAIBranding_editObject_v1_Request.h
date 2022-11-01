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
 * OAIBranding_editObject_v1_Request.h
 *
 * Request for PUT /1/object/branding/{pkiBrandingID}
 */

#ifndef OAIBranding_editObject_v1_Request_H
#define OAIBranding_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIBranding_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBranding_RequestCompound;

class OAIBranding_editObject_v1_Request : public OAIObject {
public:
    OAIBranding_editObject_v1_Request();
    OAIBranding_editObject_v1_Request(QString json);
    ~OAIBranding_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIBranding_RequestCompound getObjBranding() const;
    void setObjBranding(const OAIBranding_RequestCompound &obj_branding);
    bool is_obj_branding_Set() const;
    bool is_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIBranding_RequestCompound obj_branding;
    bool m_obj_branding_isSet;
    bool m_obj_branding_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_editObject_v1_Request)

#endif // OAIBranding_editObject_v1_Request_H
