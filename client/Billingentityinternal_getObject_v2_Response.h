/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Billingentityinternal_getObject_v2_Response.h
 *
 * Response for GET /2/object/billingentityinternal/{pkiBillingentityinternalID}
 */

#ifndef Billingentityinternal_getObject_v2_Response_H
#define Billingentityinternal_getObject_v2_Response_H

#include <QJsonObject>

#include "Billingentityinternal_getObject_v2_Response_mPayload.h"
#include "Common_Response_objDebug.h"
#include "Common_Response_objDebugPayload.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Response_objDebugPayload;
class Common_Response_objDebug;
class Billingentityinternal_getObject_v2_Response_mPayload;

class Billingentityinternal_getObject_v2_Response : public Object {
public:
    Billingentityinternal_getObject_v2_Response();
    Billingentityinternal_getObject_v2_Response(QString json);
    ~Billingentityinternal_getObject_v2_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Common_Response_objDebugPayload getObjDebugPayload() const;
    void setObjDebugPayload(const Common_Response_objDebugPayload &obj_debug_payload);
    bool is_obj_debug_payload_Set() const;
    bool is_obj_debug_payload_Valid() const;

    Common_Response_objDebug getObjDebug() const;
    void setObjDebug(const Common_Response_objDebug &obj_debug);
    bool is_obj_debug_Set() const;
    bool is_obj_debug_Valid() const;

    Billingentityinternal_getObject_v2_Response_mPayload getMPayload() const;
    void setMPayload(const Billingentityinternal_getObject_v2_Response_mPayload &m_payload);
    bool is_m_payload_Set() const;
    bool is_m_payload_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Common_Response_objDebugPayload m_obj_debug_payload;
    bool m_obj_debug_payload_isSet;
    bool m_obj_debug_payload_isValid;

    Common_Response_objDebug m_obj_debug;
    bool m_obj_debug_isSet;
    bool m_obj_debug_isValid;

    Billingentityinternal_getObject_v2_Response_mPayload m_m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Billingentityinternal_getObject_v2_Response)

#endif // Billingentityinternal_getObject_v2_Response_H
