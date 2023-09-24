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
 * OAIVariableexpense_getList_v1_Response.h
 *
 * Response for GET /1/object/variableexpense/getList
 */

#ifndef OAIVariableexpense_getList_v1_Response_H
#define OAIVariableexpense_getList_v1_Response_H

#include <QJsonObject>

#include "OAICommon_Response_objDebug.h"
#include "OAICommon_Response_objDebugPayload_getList.h"
#include "OAIVariableexpense_getList_v1_Response_mPayload.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICommon_Response_objDebugPayload_getList;
class OAICommon_Response_objDebug;
class OAIVariableexpense_getList_v1_Response_mPayload;

class OAIVariableexpense_getList_v1_Response : public OAIObject {
public:
    OAIVariableexpense_getList_v1_Response();
    OAIVariableexpense_getList_v1_Response(QString json);
    ~OAIVariableexpense_getList_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICommon_Response_objDebugPayload_getList getObjDebugPayload() const;
    void setObjDebugPayload(const OAICommon_Response_objDebugPayload_getList &obj_debug_payload);
    bool is_obj_debug_payload_Set() const;
    bool is_obj_debug_payload_Valid() const;

    OAICommon_Response_objDebug getObjDebug() const;
    void setObjDebug(const OAICommon_Response_objDebug &obj_debug);
    bool is_obj_debug_Set() const;
    bool is_obj_debug_Valid() const;

    OAIVariableexpense_getList_v1_Response_mPayload getMPayload() const;
    void setMPayload(const OAIVariableexpense_getList_v1_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICommon_Response_objDebugPayload_getList m_obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    OAICommon_Response_objDebug m_obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;

    OAIVariableexpense_getList_v1_Response_mPayload m_m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIVariableexpense_getList_v1_Response)

#endif // OAIVariableexpense_getList_v1_Response_H
