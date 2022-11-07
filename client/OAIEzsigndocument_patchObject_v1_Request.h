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
 * OAIEzsigndocument_patchObject_v1_Request.h
 *
 * Request for PATCH /1/object/ezsigndocument/{pkiEzsigndocumentID}
 */

#ifndef OAIEzsigndocument_patchObject_v1_Request_H
#define OAIEzsigndocument_patchObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigndocument_RequestPatch.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigndocument_RequestPatch;

class OAIEzsigndocument_patchObject_v1_Request : public OAIObject {
public:
    OAIEzsigndocument_patchObject_v1_Request();
    OAIEzsigndocument_patchObject_v1_Request(QString json);
    ~OAIEzsigndocument_patchObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigndocument_RequestPatch getObjEzsigndocument() const;
    void setObjEzsigndocument(const OAIEzsigndocument_RequestPatch &obj_ezsigndocument);
    bool is_obj_ezsigndocument_Set() const;
    bool is_obj_ezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigndocument_RequestPatch obj_ezsigndocument;
    bool m_obj_ezsigndocument_isSet;
    bool m_obj_ezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_patchObject_v1_Request)

#endif // OAIEzsigndocument_patchObject_v1_Request_H
