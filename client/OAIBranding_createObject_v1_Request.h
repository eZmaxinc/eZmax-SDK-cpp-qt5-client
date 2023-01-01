/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBranding_createObject_v1_Request.h
 *
 * Request for POST /1/object/branding
 */

#ifndef OAIBranding_createObject_v1_Request_H
#define OAIBranding_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIBranding_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIBranding_RequestCompound;

class OAIBranding_createObject_v1_Request : public OAIObject {
public:
    OAIBranding_createObject_v1_Request();
    OAIBranding_createObject_v1_Request(QString json);
    ~OAIBranding_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIBranding_RequestCompound> getAObjBranding() const;
    void setAObjBranding(const QList<OAIBranding_RequestCompound> &a_obj_branding);
    bool is_a_obj_branding_Set() const;
    bool is_a_obj_branding_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIBranding_RequestCompound> a_obj_branding;
    bool m_a_obj_branding_isSet;
    bool m_a_obj_branding_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIBranding_createObject_v1_Request)

#endif // OAIBranding_createObject_v1_Request_H
