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
 * OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response.h
 *
 * Response for GET /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships
 */

#ifndef OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_H
#define OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_H

#include <QJsonObject>

#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload.h"
#include "OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Response_objDebugPayload;
class OAICommon_Response_objDebug;
class OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload;

class OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response : public OAIObject {
public:
    OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response();
    OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response(QString json);
    ~OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommon_Response_objDebugPayload getObjDebugPayload() const;
    void setObjDebugPayload(const OAICommon_Response_objDebugPayload &obj_debug_payload);
    bool is_obj_debug_payload_Set() const;
    bool is_obj_debug_payload_Valid() const;

    OAICommon_Response_objDebug getObjDebug() const;
    void setObjDebug(const OAICommon_Response_objDebug &obj_debug);
    bool is_obj_debug_Set() const;
    bool is_obj_debug_Valid() const;

    OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommon_Response_objDebugPayload m_obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    OAICommon_Response_objDebug m_obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;

    OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_mPayload m_m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response)

#endif // OAIEzsignsignergroup_getEzsignsignergroupmemberships_v1_Response_H
