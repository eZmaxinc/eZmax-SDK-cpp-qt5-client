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
 * Ezsigndocument_getActionableElements_v1_Response.h
 *
 * Response for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}/getActionableElements
 */

#ifndef Ezsigndocument_getActionableElements_v1_Response_H
#define Ezsigndocument_getActionableElements_v1_Response_H

#include <QJsonObject>

#include "Common_Response_objDebug.h"
#include "Common_Response_objDebugPayload.h"
#include "Ezsigndocument_getActionableElements_v1_Response_mPayload.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Common_Response_objDebugPayload;
class Common_Response_objDebug;
class Ezsigndocument_getActionableElements_v1_Response_mPayload;

class Ezsigndocument_getActionableElements_v1_Response : public Object {
public:
    Ezsigndocument_getActionableElements_v1_Response();
    Ezsigndocument_getActionableElements_v1_Response(QString json);
    ~Ezsigndocument_getActionableElements_v1_Response() override;

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

    Ezsigndocument_getActionableElements_v1_Response_mPayload getMPayload() const;
    void setMPayload(const Ezsigndocument_getActionableElements_v1_Response_mPayload &m_payload);
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

    Ezsigndocument_getActionableElements_v1_Response_mPayload m_m_payload;
    bool m_m_payload_isSet;
    bool m_m_payload_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_getActionableElements_v1_Response)

#endif // Ezsigndocument_getActionableElements_v1_Response_H
