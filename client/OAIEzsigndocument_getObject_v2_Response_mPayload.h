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
 * OAIEzsigndocument_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigndocument/{pkiEzsigndocumentID}
 */

#ifndef OAIEzsigndocument_getObject_v2_Response_mPayload_H
#define OAIEzsigndocument_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigndocument_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigndocument_ResponseCompound;

class OAIEzsigndocument_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getObject_v2_Response_mPayload();
    OAIEzsigndocument_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigndocument_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_ResponseCompound getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_ResponseCompound &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_ResponseCompound m_obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getObject_v2_Response_mPayload)

#endif // OAIEzsigndocument_getObject_v2_Response_mPayload_H
