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
 * OAIEzsignsignergroup_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsignsignergroup/{pkiEzsignsignergroupID}
 */

#ifndef OAIEzsignsignergroup_getObject_v2_Response_mPayload_H
#define OAIEzsignsignergroup_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignsignergroup_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignsignergroup_ResponseCompound;

class OAIEzsignsignergroup_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsignsignergroup_getObject_v2_Response_mPayload();
    OAIEzsignsignergroup_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsignsignergroup_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsignergroup_ResponseCompound getObjEzsignsignergroup() const;
    void setObjEzsignsignergroup(const OAIEzsignsignergroup_ResponseCompound &obj_ezsignsignergroup);
    bool is_obj_ezsignsignergroup_Set() const;
    bool is_obj_ezsignsignergroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsignergroup_ResponseCompound m_obj_ezsignsignergroup;
    bool m_obj_ezsignsignergroup_isSet;
    bool m_obj_ezsignsignergroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignergroup_getObject_v2_Response_mPayload)

#endif // OAIEzsignsignergroup_getObject_v2_Response_mPayload_H
